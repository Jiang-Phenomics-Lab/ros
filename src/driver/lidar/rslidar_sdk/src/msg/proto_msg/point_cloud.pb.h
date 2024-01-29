// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: point_cloud.proto

#ifndef PROTOBUF_point_5fcloud_2eproto__INCLUDED
#define PROTOBUF_point_5fcloud_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace protobuf_point_5fcloud_2eproto {
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
void InitDefaultsLidarPointCloudImpl();
void InitDefaultsLidarPointCloud();
inline void InitDefaults() {
  InitDefaultsLidarPointCloud();
}
}  // namespace protobuf_point_5fcloud_2eproto
namespace proto_msg {
class LidarPointCloud;
class LidarPointCloudDefaultTypeInternal;
extern LidarPointCloudDefaultTypeInternal _LidarPointCloud_default_instance_;
}  // namespace proto_msg
namespace proto_msg {

// ===================================================================

class LidarPointCloud : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto_msg.LidarPointCloud) */ {
 public:
  LidarPointCloud();
  virtual ~LidarPointCloud();

  LidarPointCloud(const LidarPointCloud& from);

  inline LidarPointCloud& operator=(const LidarPointCloud& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LidarPointCloud(LidarPointCloud&& from) noexcept
    : LidarPointCloud() {
    *this = ::std::move(from);
  }

  inline LidarPointCloud& operator=(LidarPointCloud&& from) noexcept {
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
  static const LidarPointCloud& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LidarPointCloud* internal_default_instance() {
    return reinterpret_cast<const LidarPointCloud*>(
               &_LidarPointCloud_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LidarPointCloud* other);
  friend void swap(LidarPointCloud& a, LidarPointCloud& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LidarPointCloud* New() const PROTOBUF_FINAL { return New(NULL); }

  LidarPointCloud* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LidarPointCloud& from);
  void MergeFrom(const LidarPointCloud& from);
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
  void InternalSwap(LidarPointCloud* other);
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

  // repeated float data = 7;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 7;
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::google::protobuf::RepeatedField< float >&
      data() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_data();

  // optional string frame_id = 3;
  bool has_frame_id() const;
  void clear_frame_id();
  static const int kFrameIdFieldNumber = 3;
  const ::std::string& frame_id() const;
  void set_frame_id(const ::std::string& value);
  #if LANG_CXX11
  void set_frame_id(::std::string&& value);
  #endif
  void set_frame_id(const char* value);
  void set_frame_id(const char* value, size_t size);
  ::std::string* mutable_frame_id();
  ::std::string* release_frame_id();
  void set_allocated_frame_id(::std::string* frame_id);

  // optional double timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  double timestamp() const;
  void set_timestamp(double value);

  // optional uint32 seq = 2;
  bool has_seq() const;
  void clear_seq();
  static const int kSeqFieldNumber = 2;
  ::google::protobuf::uint32 seq() const;
  void set_seq(::google::protobuf::uint32 value);

  // optional uint32 height = 4;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 4;
  ::google::protobuf::uint32 height() const;
  void set_height(::google::protobuf::uint32 value);

  // optional uint32 width = 5;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 5;
  ::google::protobuf::uint32 width() const;
  void set_width(::google::protobuf::uint32 value);

  // optional bool is_dense = 6;
  bool has_is_dense() const;
  void clear_is_dense();
  static const int kIsDenseFieldNumber = 6;
  bool is_dense() const;
  void set_is_dense(bool value);

  // @@protoc_insertion_point(class_scope:proto_msg.LidarPointCloud)
 private:
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_seq();
  void clear_has_seq();
  void set_has_frame_id();
  void clear_has_frame_id();
  void set_has_height();
  void clear_has_height();
  void set_has_width();
  void clear_has_width();
  void set_has_is_dense();
  void clear_has_is_dense();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > data_;
  ::google::protobuf::internal::ArenaStringPtr frame_id_;
  double timestamp_;
  ::google::protobuf::uint32 seq_;
  ::google::protobuf::uint32 height_;
  ::google::protobuf::uint32 width_;
  bool is_dense_;
  friend struct ::protobuf_point_5fcloud_2eproto::TableStruct;
  friend void ::protobuf_point_5fcloud_2eproto::InitDefaultsLidarPointCloudImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LidarPointCloud

// optional double timestamp = 1;
inline bool LidarPointCloud::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LidarPointCloud::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LidarPointCloud::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LidarPointCloud::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
inline double LidarPointCloud::timestamp() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.timestamp)
  return timestamp_;
}
inline void LidarPointCloud::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.timestamp)
}

// optional uint32 seq = 2;
inline bool LidarPointCloud::has_seq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LidarPointCloud::set_has_seq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LidarPointCloud::clear_has_seq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LidarPointCloud::clear_seq() {
  seq_ = 0u;
  clear_has_seq();
}
inline ::google::protobuf::uint32 LidarPointCloud::seq() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.seq)
  return seq_;
}
inline void LidarPointCloud::set_seq(::google::protobuf::uint32 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.seq)
}

// optional string frame_id = 3;
inline bool LidarPointCloud::has_frame_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LidarPointCloud::set_has_frame_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LidarPointCloud::clear_has_frame_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LidarPointCloud::clear_frame_id() {
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_frame_id();
}
inline const ::std::string& LidarPointCloud::frame_id() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.frame_id)
  return frame_id_.GetNoArena();
}
inline void LidarPointCloud::set_frame_id(const ::std::string& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.frame_id)
}
#if LANG_CXX11
inline void LidarPointCloud::set_frame_id(::std::string&& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto_msg.LidarPointCloud.frame_id)
}
#endif
inline void LidarPointCloud::set_frame_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto_msg.LidarPointCloud.frame_id)
}
inline void LidarPointCloud::set_frame_id(const char* value, size_t size) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto_msg.LidarPointCloud.frame_id)
}
inline ::std::string* LidarPointCloud::mutable_frame_id() {
  set_has_frame_id();
  // @@protoc_insertion_point(field_mutable:proto_msg.LidarPointCloud.frame_id)
  return frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LidarPointCloud::release_frame_id() {
  // @@protoc_insertion_point(field_release:proto_msg.LidarPointCloud.frame_id)
  clear_has_frame_id();
  return frame_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LidarPointCloud::set_allocated_frame_id(::std::string* frame_id) {
  if (frame_id != NULL) {
    set_has_frame_id();
  } else {
    clear_has_frame_id();
  }
  frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), frame_id);
  // @@protoc_insertion_point(field_set_allocated:proto_msg.LidarPointCloud.frame_id)
}

// optional uint32 height = 4;
inline bool LidarPointCloud::has_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LidarPointCloud::set_has_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LidarPointCloud::clear_has_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LidarPointCloud::clear_height() {
  height_ = 0u;
  clear_has_height();
}
inline ::google::protobuf::uint32 LidarPointCloud::height() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.height)
  return height_;
}
inline void LidarPointCloud::set_height(::google::protobuf::uint32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.height)
}

// optional uint32 width = 5;
inline bool LidarPointCloud::has_width() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LidarPointCloud::set_has_width() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LidarPointCloud::clear_has_width() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LidarPointCloud::clear_width() {
  width_ = 0u;
  clear_has_width();
}
inline ::google::protobuf::uint32 LidarPointCloud::width() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.width)
  return width_;
}
inline void LidarPointCloud::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.width)
}

// optional bool is_dense = 6;
inline bool LidarPointCloud::has_is_dense() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LidarPointCloud::set_has_is_dense() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LidarPointCloud::clear_has_is_dense() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LidarPointCloud::clear_is_dense() {
  is_dense_ = false;
  clear_has_is_dense();
}
inline bool LidarPointCloud::is_dense() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.is_dense)
  return is_dense_;
}
inline void LidarPointCloud::set_is_dense(bool value) {
  set_has_is_dense();
  is_dense_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.is_dense)
}

// repeated float data = 7;
inline int LidarPointCloud::data_size() const {
  return data_.size();
}
inline void LidarPointCloud::clear_data() {
  data_.Clear();
}
inline float LidarPointCloud::data(int index) const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.data)
  return data_.Get(index);
}
inline void LidarPointCloud::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.data)
}
inline void LidarPointCloud::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:proto_msg.LidarPointCloud.data)
}
inline const ::google::protobuf::RepeatedField< float >&
LidarPointCloud::data() const {
  // @@protoc_insertion_point(field_list:proto_msg.LidarPointCloud.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< float >*
LidarPointCloud::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:proto_msg.LidarPointCloud.data)
  return &data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_msg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_point_5fcloud_2eproto__INCLUDED
