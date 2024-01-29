// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/submaps_options_3d.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto__INCLUDED

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
#include "cartographer/mapping/proto/range_data_inserter_options_3d.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSubmapsOptions3DImpl();
void InitDefaultsSubmapsOptions3D();
inline void InitDefaults() {
  InitDefaultsSubmapsOptions3D();
}
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto
namespace cartographer {
namespace mapping {
namespace proto {
class SubmapsOptions3D;
class SubmapsOptions3DDefaultTypeInternal;
extern SubmapsOptions3DDefaultTypeInternal _SubmapsOptions3D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

class SubmapsOptions3D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.SubmapsOptions3D) */ {
 public:
  SubmapsOptions3D();
  virtual ~SubmapsOptions3D();

  SubmapsOptions3D(const SubmapsOptions3D& from);

  inline SubmapsOptions3D& operator=(const SubmapsOptions3D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SubmapsOptions3D(SubmapsOptions3D&& from) noexcept
    : SubmapsOptions3D() {
    *this = ::std::move(from);
  }

  inline SubmapsOptions3D& operator=(SubmapsOptions3D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SubmapsOptions3D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SubmapsOptions3D* internal_default_instance() {
    return reinterpret_cast<const SubmapsOptions3D*>(
               &_SubmapsOptions3D_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SubmapsOptions3D* other);
  friend void swap(SubmapsOptions3D& a, SubmapsOptions3D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SubmapsOptions3D* New() const PROTOBUF_FINAL { return New(NULL); }

  SubmapsOptions3D* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SubmapsOptions3D& from);
  void MergeFrom(const SubmapsOptions3D& from);
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
  void InternalSwap(SubmapsOptions3D* other);
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

  // .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
  bool has_range_data_inserter_options() const;
  void clear_range_data_inserter_options();
  static const int kRangeDataInserterOptionsFieldNumber = 3;
  const ::cartographer::mapping::proto::RangeDataInserterOptions3D& range_data_inserter_options() const;
  ::cartographer::mapping::proto::RangeDataInserterOptions3D* release_range_data_inserter_options();
  ::cartographer::mapping::proto::RangeDataInserterOptions3D* mutable_range_data_inserter_options();
  void set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions3D* range_data_inserter_options);

  // double high_resolution = 1;
  void clear_high_resolution();
  static const int kHighResolutionFieldNumber = 1;
  double high_resolution() const;
  void set_high_resolution(double value);

  // double high_resolution_max_range = 4;
  void clear_high_resolution_max_range();
  static const int kHighResolutionMaxRangeFieldNumber = 4;
  double high_resolution_max_range() const;
  void set_high_resolution_max_range(double value);

  // double low_resolution = 5;
  void clear_low_resolution();
  static const int kLowResolutionFieldNumber = 5;
  double low_resolution() const;
  void set_low_resolution(double value);

  // int32 num_range_data = 2;
  void clear_num_range_data();
  static const int kNumRangeDataFieldNumber = 2;
  ::google::protobuf::int32 num_range_data() const;
  void set_num_range_data(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SubmapsOptions3D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::mapping::proto::RangeDataInserterOptions3D* range_data_inserter_options_;
  double high_resolution_;
  double high_resolution_max_range_;
  double low_resolution_;
  ::google::protobuf::int32 num_range_data_;
  mutable int _cached_size_;
  friend struct ::protobuf_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto::TableStruct;
  friend void ::protobuf_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto::InitDefaultsSubmapsOptions3DImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubmapsOptions3D

// double high_resolution = 1;
inline void SubmapsOptions3D::clear_high_resolution() {
  high_resolution_ = 0;
}
inline double SubmapsOptions3D::high_resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.high_resolution)
  return high_resolution_;
}
inline void SubmapsOptions3D::set_high_resolution(double value) {
  
  high_resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.high_resolution)
}

// double high_resolution_max_range = 4;
inline void SubmapsOptions3D::clear_high_resolution_max_range() {
  high_resolution_max_range_ = 0;
}
inline double SubmapsOptions3D::high_resolution_max_range() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.high_resolution_max_range)
  return high_resolution_max_range_;
}
inline void SubmapsOptions3D::set_high_resolution_max_range(double value) {
  
  high_resolution_max_range_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.high_resolution_max_range)
}

// double low_resolution = 5;
inline void SubmapsOptions3D::clear_low_resolution() {
  low_resolution_ = 0;
}
inline double SubmapsOptions3D::low_resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.low_resolution)
  return low_resolution_;
}
inline void SubmapsOptions3D::set_low_resolution(double value) {
  
  low_resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.low_resolution)
}

// int32 num_range_data = 2;
inline void SubmapsOptions3D::clear_num_range_data() {
  num_range_data_ = 0;
}
inline ::google::protobuf::int32 SubmapsOptions3D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.num_range_data)
  return num_range_data_;
}
inline void SubmapsOptions3D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.SubmapsOptions3D.num_range_data)
}

// .cartographer.mapping.proto.RangeDataInserterOptions3D range_data_inserter_options = 3;
inline bool SubmapsOptions3D::has_range_data_inserter_options() const {
  return this != internal_default_instance() && range_data_inserter_options_ != NULL;
}
inline const ::cartographer::mapping::proto::RangeDataInserterOptions3D& SubmapsOptions3D::range_data_inserter_options() const {
  const ::cartographer::mapping::proto::RangeDataInserterOptions3D* p = range_data_inserter_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::RangeDataInserterOptions3D*>(
      &::cartographer::mapping::proto::_RangeDataInserterOptions3D_default_instance_);
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions3D* SubmapsOptions3D::release_range_data_inserter_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
  
  ::cartographer::mapping::proto::RangeDataInserterOptions3D* temp = range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
  return temp;
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions3D* SubmapsOptions3D::mutable_range_data_inserter_options() {
  
  if (range_data_inserter_options_ == NULL) {
    range_data_inserter_options_ = new ::cartographer::mapping::proto::RangeDataInserterOptions3D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
  return range_data_inserter_options_;
}
inline void SubmapsOptions3D::set_allocated_range_data_inserter_options(::cartographer::mapping::proto::RangeDataInserterOptions3D* range_data_inserter_options) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(range_data_inserter_options_);
  }
  if (range_data_inserter_options) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      range_data_inserter_options = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, range_data_inserter_options, submessage_arena);
    }
    
  } else {
    
  }
  range_data_inserter_options_ = range_data_inserter_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.SubmapsOptions3D.range_data_inserter_options)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fsubmaps_5foptions_5f3d_2eproto__INCLUDED
