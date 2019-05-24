// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_geometry_legacy.proto

#ifndef PROTOBUF_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto__INCLUDED
#define PROTOBUF_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "messages_robocup_ssl_geometry.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSSL_GeometryFieldSizeImpl();
void InitDefaultsSSL_GeometryFieldSize();
void InitDefaultsSSL_GeometryDataImpl();
void InitDefaultsSSL_GeometryData();
inline void InitDefaults() {
  InitDefaultsSSL_GeometryFieldSize();
  InitDefaultsSSL_GeometryData();
}
}  // namespace protobuf_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto
namespace RoboCup2014Legacy {
namespace Geometry {
class SSL_GeometryData;
class SSL_GeometryDataDefaultTypeInternal;
extern SSL_GeometryDataDefaultTypeInternal _SSL_GeometryData_default_instance_;
class SSL_GeometryFieldSize;
class SSL_GeometryFieldSizeDefaultTypeInternal;
extern SSL_GeometryFieldSizeDefaultTypeInternal _SSL_GeometryFieldSize_default_instance_;
}  // namespace Geometry
}  // namespace RoboCup2014Legacy
namespace RoboCup2014Legacy {
namespace Geometry {

// ===================================================================

class SSL_GeometryFieldSize : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize) */ {
 public:
  SSL_GeometryFieldSize();
  virtual ~SSL_GeometryFieldSize();

  SSL_GeometryFieldSize(const SSL_GeometryFieldSize& from);

  inline SSL_GeometryFieldSize& operator=(const SSL_GeometryFieldSize& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SSL_GeometryFieldSize(SSL_GeometryFieldSize&& from) noexcept
    : SSL_GeometryFieldSize() {
    *this = ::std::move(from);
  }

  inline SSL_GeometryFieldSize& operator=(SSL_GeometryFieldSize&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SSL_GeometryFieldSize& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSL_GeometryFieldSize* internal_default_instance() {
    return reinterpret_cast<const SSL_GeometryFieldSize*>(
               &_SSL_GeometryFieldSize_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SSL_GeometryFieldSize* other);
  friend void swap(SSL_GeometryFieldSize& a, SSL_GeometryFieldSize& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SSL_GeometryFieldSize* New() const PROTOBUF_FINAL { return New(NULL); }

  SSL_GeometryFieldSize* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SSL_GeometryFieldSize& from);
  void MergeFrom(const SSL_GeometryFieldSize& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SSL_GeometryFieldSize* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 line_width = 1;
  bool has_line_width() const;
  void clear_line_width();
  static const int kLineWidthFieldNumber = 1;
  ::google::protobuf::int32 line_width() const;
  void set_line_width(::google::protobuf::int32 value);

  // required int32 field_length = 2;
  bool has_field_length() const;
  void clear_field_length();
  static const int kFieldLengthFieldNumber = 2;
  ::google::protobuf::int32 field_length() const;
  void set_field_length(::google::protobuf::int32 value);

  // required int32 field_width = 3;
  bool has_field_width() const;
  void clear_field_width();
  static const int kFieldWidthFieldNumber = 3;
  ::google::protobuf::int32 field_width() const;
  void set_field_width(::google::protobuf::int32 value);

  // required int32 boundary_width = 4;
  bool has_boundary_width() const;
  void clear_boundary_width();
  static const int kBoundaryWidthFieldNumber = 4;
  ::google::protobuf::int32 boundary_width() const;
  void set_boundary_width(::google::protobuf::int32 value);

  // required int32 referee_width = 5;
  bool has_referee_width() const;
  void clear_referee_width();
  static const int kRefereeWidthFieldNumber = 5;
  ::google::protobuf::int32 referee_width() const;
  void set_referee_width(::google::protobuf::int32 value);

  // required int32 goal_width = 6;
  bool has_goal_width() const;
  void clear_goal_width();
  static const int kGoalWidthFieldNumber = 6;
  ::google::protobuf::int32 goal_width() const;
  void set_goal_width(::google::protobuf::int32 value);

  // required int32 goal_depth = 7;
  bool has_goal_depth() const;
  void clear_goal_depth();
  static const int kGoalDepthFieldNumber = 7;
  ::google::protobuf::int32 goal_depth() const;
  void set_goal_depth(::google::protobuf::int32 value);

  // required int32 goal_wall_width = 8;
  bool has_goal_wall_width() const;
  void clear_goal_wall_width();
  static const int kGoalWallWidthFieldNumber = 8;
  ::google::protobuf::int32 goal_wall_width() const;
  void set_goal_wall_width(::google::protobuf::int32 value);

  // required int32 center_circle_radius = 9;
  bool has_center_circle_radius() const;
  void clear_center_circle_radius();
  static const int kCenterCircleRadiusFieldNumber = 9;
  ::google::protobuf::int32 center_circle_radius() const;
  void set_center_circle_radius(::google::protobuf::int32 value);

  // required int32 defense_radius = 10;
  bool has_defense_radius() const;
  void clear_defense_radius();
  static const int kDefenseRadiusFieldNumber = 10;
  ::google::protobuf::int32 defense_radius() const;
  void set_defense_radius(::google::protobuf::int32 value);

  // required int32 defense_stretch = 11;
  bool has_defense_stretch() const;
  void clear_defense_stretch();
  static const int kDefenseStretchFieldNumber = 11;
  ::google::protobuf::int32 defense_stretch() const;
  void set_defense_stretch(::google::protobuf::int32 value);

  // required int32 free_kick_from_defense_dist = 12;
  bool has_free_kick_from_defense_dist() const;
  void clear_free_kick_from_defense_dist();
  static const int kFreeKickFromDefenseDistFieldNumber = 12;
  ::google::protobuf::int32 free_kick_from_defense_dist() const;
  void set_free_kick_from_defense_dist(::google::protobuf::int32 value);

  // required int32 penalty_spot_from_field_line_dist = 13;
  bool has_penalty_spot_from_field_line_dist() const;
  void clear_penalty_spot_from_field_line_dist();
  static const int kPenaltySpotFromFieldLineDistFieldNumber = 13;
  ::google::protobuf::int32 penalty_spot_from_field_line_dist() const;
  void set_penalty_spot_from_field_line_dist(::google::protobuf::int32 value);

  // required int32 penalty_line_from_spot_dist = 14;
  bool has_penalty_line_from_spot_dist() const;
  void clear_penalty_line_from_spot_dist();
  static const int kPenaltyLineFromSpotDistFieldNumber = 14;
  ::google::protobuf::int32 penalty_line_from_spot_dist() const;
  void set_penalty_line_from_spot_dist(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize)
 private:
  void set_has_line_width();
  void clear_has_line_width();
  void set_has_field_length();
  void clear_has_field_length();
  void set_has_field_width();
  void clear_has_field_width();
  void set_has_boundary_width();
  void clear_has_boundary_width();
  void set_has_referee_width();
  void clear_has_referee_width();
  void set_has_goal_width();
  void clear_has_goal_width();
  void set_has_goal_depth();
  void clear_has_goal_depth();
  void set_has_goal_wall_width();
  void clear_has_goal_wall_width();
  void set_has_center_circle_radius();
  void clear_has_center_circle_radius();
  void set_has_defense_radius();
  void clear_has_defense_radius();
  void set_has_defense_stretch();
  void clear_has_defense_stretch();
  void set_has_free_kick_from_defense_dist();
  void clear_has_free_kick_from_defense_dist();
  void set_has_penalty_spot_from_field_line_dist();
  void clear_has_penalty_spot_from_field_line_dist();
  void set_has_penalty_line_from_spot_dist();
  void clear_has_penalty_line_from_spot_dist();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 line_width_;
  ::google::protobuf::int32 field_length_;
  ::google::protobuf::int32 field_width_;
  ::google::protobuf::int32 boundary_width_;
  ::google::protobuf::int32 referee_width_;
  ::google::protobuf::int32 goal_width_;
  ::google::protobuf::int32 goal_depth_;
  ::google::protobuf::int32 goal_wall_width_;
  ::google::protobuf::int32 center_circle_radius_;
  ::google::protobuf::int32 defense_radius_;
  ::google::protobuf::int32 defense_stretch_;
  ::google::protobuf::int32 free_kick_from_defense_dist_;
  ::google::protobuf::int32 penalty_spot_from_field_line_dist_;
  ::google::protobuf::int32 penalty_line_from_spot_dist_;
  friend struct ::protobuf_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto::TableStruct;
  friend void ::protobuf_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto::InitDefaultsSSL_GeometryFieldSizeImpl();
};
// -------------------------------------------------------------------

class SSL_GeometryData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RoboCup2014Legacy.Geometry.SSL_GeometryData) */ {
 public:
  SSL_GeometryData();
  virtual ~SSL_GeometryData();

  SSL_GeometryData(const SSL_GeometryData& from);

  inline SSL_GeometryData& operator=(const SSL_GeometryData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SSL_GeometryData(SSL_GeometryData&& from) noexcept
    : SSL_GeometryData() {
    *this = ::std::move(from);
  }

  inline SSL_GeometryData& operator=(SSL_GeometryData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SSL_GeometryData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SSL_GeometryData* internal_default_instance() {
    return reinterpret_cast<const SSL_GeometryData*>(
               &_SSL_GeometryData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SSL_GeometryData* other);
  friend void swap(SSL_GeometryData& a, SSL_GeometryData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SSL_GeometryData* New() const PROTOBUF_FINAL { return New(NULL); }

  SSL_GeometryData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SSL_GeometryData& from);
  void MergeFrom(const SSL_GeometryData& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SSL_GeometryData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .SSL_GeometryCameraCalibration calib = 2;
  int calib_size() const;
  void clear_calib();
  static const int kCalibFieldNumber = 2;
  const ::SSL_GeometryCameraCalibration& calib(int index) const;
  ::SSL_GeometryCameraCalibration* mutable_calib(int index);
  ::SSL_GeometryCameraCalibration* add_calib();
  ::google::protobuf::RepeatedPtrField< ::SSL_GeometryCameraCalibration >*
      mutable_calib();
  const ::google::protobuf::RepeatedPtrField< ::SSL_GeometryCameraCalibration >&
      calib() const;

  // required .RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize field = 1;
  bool has_field() const;
  void clear_field();
  static const int kFieldFieldNumber = 1;
  const ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize& field() const;
  ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* release_field();
  ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* mutable_field();
  void set_allocated_field(::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* field);

  // @@protoc_insertion_point(class_scope:RoboCup2014Legacy.Geometry.SSL_GeometryData)
 private:
  void set_has_field();
  void clear_has_field();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::SSL_GeometryCameraCalibration > calib_;
  ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* field_;
  friend struct ::protobuf_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto::TableStruct;
  friend void ::protobuf_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto::InitDefaultsSSL_GeometryDataImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SSL_GeometryFieldSize

// required int32 line_width = 1;
inline bool SSL_GeometryFieldSize::has_line_width() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_line_width() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SSL_GeometryFieldSize::clear_has_line_width() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SSL_GeometryFieldSize::clear_line_width() {
  line_width_ = 0;
  clear_has_line_width();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::line_width() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.line_width)
  return line_width_;
}
inline void SSL_GeometryFieldSize::set_line_width(::google::protobuf::int32 value) {
  set_has_line_width();
  line_width_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.line_width)
}

// required int32 field_length = 2;
inline bool SSL_GeometryFieldSize::has_field_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_field_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SSL_GeometryFieldSize::clear_has_field_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SSL_GeometryFieldSize::clear_field_length() {
  field_length_ = 0;
  clear_has_field_length();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::field_length() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.field_length)
  return field_length_;
}
inline void SSL_GeometryFieldSize::set_field_length(::google::protobuf::int32 value) {
  set_has_field_length();
  field_length_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.field_length)
}

// required int32 field_width = 3;
inline bool SSL_GeometryFieldSize::has_field_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_field_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SSL_GeometryFieldSize::clear_has_field_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SSL_GeometryFieldSize::clear_field_width() {
  field_width_ = 0;
  clear_has_field_width();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::field_width() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.field_width)
  return field_width_;
}
inline void SSL_GeometryFieldSize::set_field_width(::google::protobuf::int32 value) {
  set_has_field_width();
  field_width_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.field_width)
}

// required int32 boundary_width = 4;
inline bool SSL_GeometryFieldSize::has_boundary_width() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_boundary_width() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SSL_GeometryFieldSize::clear_has_boundary_width() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SSL_GeometryFieldSize::clear_boundary_width() {
  boundary_width_ = 0;
  clear_has_boundary_width();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::boundary_width() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.boundary_width)
  return boundary_width_;
}
inline void SSL_GeometryFieldSize::set_boundary_width(::google::protobuf::int32 value) {
  set_has_boundary_width();
  boundary_width_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.boundary_width)
}

// required int32 referee_width = 5;
inline bool SSL_GeometryFieldSize::has_referee_width() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_referee_width() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SSL_GeometryFieldSize::clear_has_referee_width() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SSL_GeometryFieldSize::clear_referee_width() {
  referee_width_ = 0;
  clear_has_referee_width();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::referee_width() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.referee_width)
  return referee_width_;
}
inline void SSL_GeometryFieldSize::set_referee_width(::google::protobuf::int32 value) {
  set_has_referee_width();
  referee_width_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.referee_width)
}

// required int32 goal_width = 6;
inline bool SSL_GeometryFieldSize::has_goal_width() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_goal_width() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SSL_GeometryFieldSize::clear_has_goal_width() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SSL_GeometryFieldSize::clear_goal_width() {
  goal_width_ = 0;
  clear_has_goal_width();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::goal_width() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.goal_width)
  return goal_width_;
}
inline void SSL_GeometryFieldSize::set_goal_width(::google::protobuf::int32 value) {
  set_has_goal_width();
  goal_width_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.goal_width)
}

// required int32 goal_depth = 7;
inline bool SSL_GeometryFieldSize::has_goal_depth() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_goal_depth() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SSL_GeometryFieldSize::clear_has_goal_depth() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SSL_GeometryFieldSize::clear_goal_depth() {
  goal_depth_ = 0;
  clear_has_goal_depth();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::goal_depth() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.goal_depth)
  return goal_depth_;
}
inline void SSL_GeometryFieldSize::set_goal_depth(::google::protobuf::int32 value) {
  set_has_goal_depth();
  goal_depth_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.goal_depth)
}

// required int32 goal_wall_width = 8;
inline bool SSL_GeometryFieldSize::has_goal_wall_width() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_goal_wall_width() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SSL_GeometryFieldSize::clear_has_goal_wall_width() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SSL_GeometryFieldSize::clear_goal_wall_width() {
  goal_wall_width_ = 0;
  clear_has_goal_wall_width();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::goal_wall_width() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.goal_wall_width)
  return goal_wall_width_;
}
inline void SSL_GeometryFieldSize::set_goal_wall_width(::google::protobuf::int32 value) {
  set_has_goal_wall_width();
  goal_wall_width_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.goal_wall_width)
}

// required int32 center_circle_radius = 9;
inline bool SSL_GeometryFieldSize::has_center_circle_radius() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_center_circle_radius() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SSL_GeometryFieldSize::clear_has_center_circle_radius() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SSL_GeometryFieldSize::clear_center_circle_radius() {
  center_circle_radius_ = 0;
  clear_has_center_circle_radius();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::center_circle_radius() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.center_circle_radius)
  return center_circle_radius_;
}
inline void SSL_GeometryFieldSize::set_center_circle_radius(::google::protobuf::int32 value) {
  set_has_center_circle_radius();
  center_circle_radius_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.center_circle_radius)
}

// required int32 defense_radius = 10;
inline bool SSL_GeometryFieldSize::has_defense_radius() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_defense_radius() {
  _has_bits_[0] |= 0x00000200u;
}
inline void SSL_GeometryFieldSize::clear_has_defense_radius() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void SSL_GeometryFieldSize::clear_defense_radius() {
  defense_radius_ = 0;
  clear_has_defense_radius();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::defense_radius() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.defense_radius)
  return defense_radius_;
}
inline void SSL_GeometryFieldSize::set_defense_radius(::google::protobuf::int32 value) {
  set_has_defense_radius();
  defense_radius_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.defense_radius)
}

// required int32 defense_stretch = 11;
inline bool SSL_GeometryFieldSize::has_defense_stretch() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_defense_stretch() {
  _has_bits_[0] |= 0x00000400u;
}
inline void SSL_GeometryFieldSize::clear_has_defense_stretch() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void SSL_GeometryFieldSize::clear_defense_stretch() {
  defense_stretch_ = 0;
  clear_has_defense_stretch();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::defense_stretch() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.defense_stretch)
  return defense_stretch_;
}
inline void SSL_GeometryFieldSize::set_defense_stretch(::google::protobuf::int32 value) {
  set_has_defense_stretch();
  defense_stretch_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.defense_stretch)
}

// required int32 free_kick_from_defense_dist = 12;
inline bool SSL_GeometryFieldSize::has_free_kick_from_defense_dist() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_free_kick_from_defense_dist() {
  _has_bits_[0] |= 0x00000800u;
}
inline void SSL_GeometryFieldSize::clear_has_free_kick_from_defense_dist() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void SSL_GeometryFieldSize::clear_free_kick_from_defense_dist() {
  free_kick_from_defense_dist_ = 0;
  clear_has_free_kick_from_defense_dist();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::free_kick_from_defense_dist() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.free_kick_from_defense_dist)
  return free_kick_from_defense_dist_;
}
inline void SSL_GeometryFieldSize::set_free_kick_from_defense_dist(::google::protobuf::int32 value) {
  set_has_free_kick_from_defense_dist();
  free_kick_from_defense_dist_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.free_kick_from_defense_dist)
}

// required int32 penalty_spot_from_field_line_dist = 13;
inline bool SSL_GeometryFieldSize::has_penalty_spot_from_field_line_dist() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_penalty_spot_from_field_line_dist() {
  _has_bits_[0] |= 0x00001000u;
}
inline void SSL_GeometryFieldSize::clear_has_penalty_spot_from_field_line_dist() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void SSL_GeometryFieldSize::clear_penalty_spot_from_field_line_dist() {
  penalty_spot_from_field_line_dist_ = 0;
  clear_has_penalty_spot_from_field_line_dist();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::penalty_spot_from_field_line_dist() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.penalty_spot_from_field_line_dist)
  return penalty_spot_from_field_line_dist_;
}
inline void SSL_GeometryFieldSize::set_penalty_spot_from_field_line_dist(::google::protobuf::int32 value) {
  set_has_penalty_spot_from_field_line_dist();
  penalty_spot_from_field_line_dist_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.penalty_spot_from_field_line_dist)
}

// required int32 penalty_line_from_spot_dist = 14;
inline bool SSL_GeometryFieldSize::has_penalty_line_from_spot_dist() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void SSL_GeometryFieldSize::set_has_penalty_line_from_spot_dist() {
  _has_bits_[0] |= 0x00002000u;
}
inline void SSL_GeometryFieldSize::clear_has_penalty_line_from_spot_dist() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void SSL_GeometryFieldSize::clear_penalty_line_from_spot_dist() {
  penalty_line_from_spot_dist_ = 0;
  clear_has_penalty_line_from_spot_dist();
}
inline ::google::protobuf::int32 SSL_GeometryFieldSize::penalty_line_from_spot_dist() const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.penalty_line_from_spot_dist)
  return penalty_line_from_spot_dist_;
}
inline void SSL_GeometryFieldSize::set_penalty_line_from_spot_dist(::google::protobuf::int32 value) {
  set_has_penalty_line_from_spot_dist();
  penalty_line_from_spot_dist_ = value;
  // @@protoc_insertion_point(field_set:RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize.penalty_line_from_spot_dist)
}

// -------------------------------------------------------------------

// SSL_GeometryData

// required .RoboCup2014Legacy.Geometry.SSL_GeometryFieldSize field = 1;
inline bool SSL_GeometryData::has_field() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SSL_GeometryData::set_has_field() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SSL_GeometryData::clear_has_field() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SSL_GeometryData::clear_field() {
  if (field_ != NULL) field_->Clear();
  clear_has_field();
}
inline const ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize& SSL_GeometryData::field() const {
  const ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* p = field_;
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryData.field)
  return p != NULL ? *p : *reinterpret_cast<const ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize*>(
      &::RoboCup2014Legacy::Geometry::_SSL_GeometryFieldSize_default_instance_);
}
inline ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* SSL_GeometryData::release_field() {
  // @@protoc_insertion_point(field_release:RoboCup2014Legacy.Geometry.SSL_GeometryData.field)
  clear_has_field();
  ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* temp = field_;
  field_ = NULL;
  return temp;
}
inline ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* SSL_GeometryData::mutable_field() {
  set_has_field();
  if (field_ == NULL) {
    field_ = new ::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize;
  }
  // @@protoc_insertion_point(field_mutable:RoboCup2014Legacy.Geometry.SSL_GeometryData.field)
  return field_;
}
inline void SSL_GeometryData::set_allocated_field(::RoboCup2014Legacy::Geometry::SSL_GeometryFieldSize* field) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete field_;
  }
  if (field) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      field = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, field, submessage_arena);
    }
    set_has_field();
  } else {
    clear_has_field();
  }
  field_ = field;
  // @@protoc_insertion_point(field_set_allocated:RoboCup2014Legacy.Geometry.SSL_GeometryData.field)
}

// repeated .SSL_GeometryCameraCalibration calib = 2;
inline int SSL_GeometryData::calib_size() const {
  return calib_.size();
}
inline const ::SSL_GeometryCameraCalibration& SSL_GeometryData::calib(int index) const {
  // @@protoc_insertion_point(field_get:RoboCup2014Legacy.Geometry.SSL_GeometryData.calib)
  return calib_.Get(index);
}
inline ::SSL_GeometryCameraCalibration* SSL_GeometryData::mutable_calib(int index) {
  // @@protoc_insertion_point(field_mutable:RoboCup2014Legacy.Geometry.SSL_GeometryData.calib)
  return calib_.Mutable(index);
}
inline ::SSL_GeometryCameraCalibration* SSL_GeometryData::add_calib() {
  // @@protoc_insertion_point(field_add:RoboCup2014Legacy.Geometry.SSL_GeometryData.calib)
  return calib_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::SSL_GeometryCameraCalibration >*
SSL_GeometryData::mutable_calib() {
  // @@protoc_insertion_point(field_mutable_list:RoboCup2014Legacy.Geometry.SSL_GeometryData.calib)
  return &calib_;
}
inline const ::google::protobuf::RepeatedPtrField< ::SSL_GeometryCameraCalibration >&
SSL_GeometryData::calib() const {
  // @@protoc_insertion_point(field_list:RoboCup2014Legacy.Geometry.SSL_GeometryData.calib)
  return calib_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Geometry
}  // namespace RoboCup2014Legacy

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_messages_5frobocup_5fssl_5fgeometry_5flegacy_2eproto__INCLUDED
