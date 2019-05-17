/********************************************************************************************
 * ******************************************************************************************
 * ****************       Proyecto Final Principios Mecatronica       ***********************
 * ****************                    Equipo QX7                     ***********************
 * ******************************************************************************************
 * *****************************************************************************************/
/**
   NOTAS:
   - El LED emisor del sensor óptico admite sólo 1.25-1.6V de entrada, como el voltaje del
   Ard Mega es 5V, entonces se usa un output PWM con un filtro pasa bajas para obtener el
   voltaje correcto.
   - Se suscribe al topic /nav_target para recibir v,w en pose.x y pose.theta, respect.
   - Publica a /mobile_robot_ack sólo para redundacia y verificar que se ha recibido la info
   de /nav_target
   -

     CHANGELOG:
       -
   VERSION 1.0 (11/may/19)
*/
/********************************************************************************************
 *******************************************************************************************/
#include <ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Pose2D.h>

#define MOTOR_L1 4
#define MOTOR_L2 5
#define MOTOR_R1 3
#define MOTOR_R2 2
#define LED_PHOTO_L 9
#define LED_PHOTO_R 8
#define PHOTO_DET_L 21
#define PHOTO_DET_R 20
#define PULLUP1 22
#define PULLUP2 23
#define H_ENA 24
#define H_VCC 25

#define DEBUG 2
#define ENC_DEBOUNCE 1 //ms
#define LOOP_DELTA 100 //ms loop time
#define LOOP_NAV 2000 //ms vel loop tiene que ser de 500ms
#define Kp 3.5    // Ganancia Proporcional
#define Ki 2  //Ganancia control Integral
#define Kd 0.6  //Ganancia parte Derivativa

volatile int counter_left=0, counter_right=0;
unsigned long last_lcounter_compare=0,last_rcounter_compare=0, lastLoop=0, lastNav=0;
int16_t pwmLeft, pwmRight;
double vel_L, vel_R, error_L, error_R, setpoint_L, setpoint_R, changeError_L, changeError_R;
double lastError_L=0, lastError_R=0, pidTerm_L, pidTerm_R, totalError_L, totalError_R;
double v,w;

String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete

ros::NodeHandle  nh;
std_msgs::String str_msg;
geometry_msgs::Pose2D pose;

ros::Publisher chatter("/mobile_robot_ack", &str_msg);
ros::Subscriber<geometry_msgs::Pose2D> sub("/nav_target", &messageCb );

char hello[26] = "Saludos desde la chancla!";

void setup() {
  if (DEBUG>1){
    Serial.begin(57600);
  }
  pinMode(PHOTO_DET_L,INPUT);
  pinMode(PHOTO_DET_R,INPUT);

  pinMode(13, OUTPUT);
  pinMode(MOTOR_L1, OUTPUT);
  pinMode(MOTOR_L2, OUTPUT);
  pinMode(MOTOR_R1, OUTPUT);
  pinMode(MOTOR_R2, OUTPUT);
  pinMode(LED_PHOTO_L, OUTPUT);
  pinMode(LED_PHOTO_R, OUTPUT);
  pinMode(PULLUP1,OUTPUT);
  pinMode(PULLUP2,OUTPUT);
  pinMode(H_ENA,OUTPUT);
  pinMode(H_VCC,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(PHOTO_DET_L),left_encoderISR,RISING);
  attachInterrupt(digitalPinToInterrupt(PHOTO_DET_R),right_encoderISR,RISING);

  digitalWrite(PULLUP1,HIGH);
  digitalWrite(PULLUP2,HIGH);
  digitalWrite(H_ENA,HIGH);
  digitalWrite(H_VCC,HIGH);
  analogWrite(LED_PHOTO_L, 250); //esto deja el voltaje filtrado en 1.35V
  analogWrite(LED_PHOTO_R, 250);

  nh.initNode();
  nh.advertise(chatter);
  nh.subscribe(sub);

  v=w=0;
  pwmLeft=pwmRight=0 ;
}

void loop() {
  if(millis()-lastNav> LOOP_NAV){
    /*
    if (DEBUG>1) {
      if(stringComplete){
        Serial.println(inputString);
        v=inputString.toDouble();
        inputString = "";
        stringComplete = false;
        calcSetpoint();
      }
    }
    else{
      calcSetpoint();
      str_msg.data= hello;
      nh.spinOnce();
      
      digitalWrite(13,LOW);
    }*/
    lastNav=millis();
  }
  if(millis()-lastLoop> LOOP_DELTA){
    calcVel();
    //calcPID();
    
    
    setMotor(pwmLeft,pwmRight);

    if(DEBUG>1){
      Serial.print("Vel izq:\t");
      Serial.print(vel_L);
      Serial.print("\t\tVel der:\t");
      Serial.print(vel_R);
      Serial.println("");
      Serial.print("Salida izq:\t");
      Serial.print(pwmLeft);
      Serial.print("\t\tSalida der:\t");
      Serial.print(pwmRight);
      Serial.println("\n");
    }
    lastLoop=millis();
  }
}
void messageCb(const geometry_msgs::Pose2D& data){
  analogWrite(13,180);
  v= data.x;
  w= data.theta;
  str_msg.data= hello;
   chatter.publish(&str_msg);
}
void calcSetpoint(){
  setpoint_L= 0.047*v-2.71*w;
  setpoint_R= 0.047*v+2.71*w;
}
void calcPID(){
  error_L= setpoint_L- vel_L;
  error_R= setpoint_R- vel_R;

  changeError_L= error_L- lastError_L; // derivative term
  changeError_R= error_R- lastError_R;
  totalError_L+= error_L; //accumalate errors to find integral term
  totalError_R+= error_R;
  pidTerm_L= (Kp*error_L)+(Ki*totalError_L)+(Kd*changeError_L); //total gain
  pidTerm_R= (Kp*error_R)+(Ki*totalError_R)+(Kd*changeError_R);

  pwmLeft= floor(constrain(pidTerm_L,-255,255));//constraining to appropriate value
  pwmRight= floor(constrain(pidTerm_R,-255,255));

  lastError_L= error_L;
  lastError_R= error_R;
}
void calcVel(){
  vel_L= counter_left*150.0/LOOP_DELTA; //ticks per loop
  vel_R= counter_right*128.0/LOOP_DELTA;
  if(pwmLeft<0)
    vel_L= -1.0*vel_L;
  if (pwmRight<0)
    vel_R= -1.0*vel_R;
  counter_left=0;
  counter_right=0;
}
void setMotor(int16_t izq, int16_t der){
  if(izq>0){
    analogWrite(MOTOR_L1,izq);
    analogWrite(MOTOR_L2,0);
  }else{
    analogWrite(MOTOR_L1,0);
    analogWrite(MOTOR_L2,abs(izq));
  }
  if(der>0){
    analogWrite(MOTOR_R1,der);
    analogWrite(MOTOR_R2,0);
  }else{
    analogWrite(MOTOR_R1,0);
    analogWrite(MOTOR_R2,abs(der));
  }
}
void left_encoderISR(){
  if(millis()-last_lcounter_compare> ENC_DEBOUNCE){
    counter_left++;
    last_lcounter_compare= millis();

  }
}
void right_encoderISR(){
  if(millis()-last_rcounter_compare> ENC_DEBOUNCE){
    counter_right++;
    last_rcounter_compare= millis();
  }
}
void serialEvent() {
  if (DEBUG>1){
    while (Serial.available()) {
      // get the new byte:
      char inChar = (char)Serial.read();
      // add it to the inputString:
      inputString += inChar;
      // if the incoming character is a newline, set a flag so the main loop can
      // do something about it:
      if (inChar == '\n') {
        stringComplete = true;
      }
    }
  }
}
