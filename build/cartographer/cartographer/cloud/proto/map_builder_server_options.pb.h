// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/cloud/proto/map_builder_server_options.proto

#ifndef PROTOBUF_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto__INCLUDED

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
#include "cartographer/mapping/proto/map_builder_options.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto {
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
void InitDefaultsMapBuilderServerOptionsImpl();
void InitDefaultsMapBuilderServerOptions();
inline void InitDefaults() {
  InitDefaultsMapBuilderServerOptions();
}
}  // namespace protobuf_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto
namespace cartographer {
namespace cloud {
namespace proto {
class MapBuilderServerOptions;
class MapBuilderServerOptionsDefaultTypeInternal;
extern MapBuilderServerOptionsDefaultTypeInternal _MapBuilderServerOptions_default_instance_;
}  // namespace proto
}  // namespace cloud
}  // namespace cartographer
namespace cartographer {
namespace cloud {
namespace proto {

// ===================================================================

class MapBuilderServerOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.cloud.proto.MapBuilderServerOptions) */ {
 public:
  MapBuilderServerOptions();
  virtual ~MapBuilderServerOptions();

  MapBuilderServerOptions(const MapBuilderServerOptions& from);

  inline MapBuilderServerOptions& operator=(const MapBuilderServerOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MapBuilderServerOptions(MapBuilderServerOptions&& from) noexcept
    : MapBuilderServerOptions() {
    *this = ::std::move(from);
  }

  inline MapBuilderServerOptions& operator=(MapBuilderServerOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MapBuilderServerOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MapBuilderServerOptions* internal_default_instance() {
    return reinterpret_cast<const MapBuilderServerOptions*>(
               &_MapBuilderServerOptions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MapBuilderServerOptions* other);
  friend void swap(MapBuilderServerOptions& a, MapBuilderServerOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MapBuilderServerOptions* New() const PROTOBUF_FINAL { return New(NULL); }

  MapBuilderServerOptions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MapBuilderServerOptions& from);
  void MergeFrom(const MapBuilderServerOptions& from);
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
  void InternalSwap(MapBuilderServerOptions* other);
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

  // string server_address = 1;
  void clear_server_address();
  static const int kServerAddressFieldNumber = 1;
  const ::std::string& server_address() const;
  void set_server_address(const ::std::string& value);
  #if LANG_CXX11
  void set_server_address(::std::string&& value);
  #endif
  void set_server_address(const char* value);
  void set_server_address(const char* value, size_t size);
  ::std::string* mutable_server_address();
  ::std::string* release_server_address();
  void set_allocated_server_address(::std::string* server_address);

  // string uplink_server_address = 5;
  void clear_uplink_server_address();
  static const int kUplinkServerAddressFieldNumber = 5;
  const ::std::string& uplink_server_address() const;
  void set_uplink_server_address(const ::std::string& value);
  #if LANG_CXX11
  void set_uplink_server_address(::std::string&& value);
  #endif
  void set_uplink_server_address(const char* value);
  void set_uplink_server_address(const char* value, size_t size);
  ::std::string* mutable_uplink_server_address();
  ::std::string* release_uplink_server_address();
  void set_allocated_uplink_server_address(::std::string* uplink_server_address);

  // .cartographer.mapping.proto.MapBuilderOptions map_builder_options = 4;
  bool has_map_builder_options() const;
  void clear_map_builder_options();
  static const int kMapBuilderOptionsFieldNumber = 4;
  const ::cartographer::mapping::proto::MapBuilderOptions& map_builder_options() const;
  ::cartographer::mapping::proto::MapBuilderOptions* release_map_builder_options();
  ::cartographer::mapping::proto::MapBuilderOptions* mutable_map_builder_options();
  void set_allocated_map_builder_options(::cartographer::mapping::proto::MapBuilderOptions* map_builder_options);

  // int32 num_grpc_threads = 2;
  void clear_num_grpc_threads();
  static const int kNumGrpcThreadsFieldNumber = 2;
  ::google::protobuf::int32 num_grpc_threads() const;
  void set_num_grpc_threads(::google::protobuf::int32 value);

  // int32 num_event_threads = 3;
  void clear_num_event_threads();
  static const int kNumEventThreadsFieldNumber = 3;
  ::google::protobuf::int32 num_event_threads() const;
  void set_num_event_threads(::google::protobuf::int32 value);

  // int32 upload_batch_size = 6;
  void clear_upload_batch_size();
  static const int kUploadBatchSizeFieldNumber = 6;
  ::google::protobuf::int32 upload_batch_size() const;
  void set_upload_batch_size(::google::protobuf::int32 value);

  // bool enable_ssl_encryption = 7;
  void clear_enable_ssl_encryption();
  static const int kEnableSslEncryptionFieldNumber = 7;
  bool enable_ssl_encryption() const;
  void set_enable_ssl_encryption(bool value);

  // bool enable_google_auth = 9;
  void clear_enable_google_auth();
  static const int kEnableGoogleAuthFieldNumber = 9;
  bool enable_google_auth() const;
  void set_enable_google_auth(bool value);

  // @@protoc_insertion_point(class_scope:cartographer.cloud.proto.MapBuilderServerOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr server_address_;
  ::google::protobuf::internal::ArenaStringPtr uplink_server_address_;
  ::cartographer::mapping::proto::MapBuilderOptions* map_builder_options_;
  ::google::protobuf::int32 num_grpc_threads_;
  ::google::protobuf::int32 num_event_threads_;
  ::google::protobuf::int32 upload_batch_size_;
  bool enable_ssl_encryption_;
  bool enable_google_auth_;
  mutable int _cached_size_;
  friend struct ::protobuf_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto::TableStruct;
  friend void ::protobuf_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto::InitDefaultsMapBuilderServerOptionsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MapBuilderServerOptions

// string server_address = 1;
inline void MapBuilderServerOptions::clear_server_address() {
  server_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MapBuilderServerOptions::server_address() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
  return server_address_.GetNoArena();
}
inline void MapBuilderServerOptions::set_server_address(const ::std::string& value) {
  
  server_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
}
#if LANG_CXX11
inline void MapBuilderServerOptions::set_server_address(::std::string&& value) {
  
  server_address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
}
#endif
inline void MapBuilderServerOptions::set_server_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  server_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
}
inline void MapBuilderServerOptions::set_server_address(const char* value, size_t size) {
  
  server_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
}
inline ::std::string* MapBuilderServerOptions::mutable_server_address() {
  
  // @@protoc_insertion_point(field_mutable:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
  return server_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MapBuilderServerOptions::release_server_address() {
  // @@protoc_insertion_point(field_release:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
  
  return server_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapBuilderServerOptions::set_allocated_server_address(::std::string* server_address) {
  if (server_address != NULL) {
    
  } else {
    
  }
  server_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), server_address);
  // @@protoc_insertion_point(field_set_allocated:cartographer.cloud.proto.MapBuilderServerOptions.server_address)
}

// int32 num_grpc_threads = 2;
inline void MapBuilderServerOptions::clear_num_grpc_threads() {
  num_grpc_threads_ = 0;
}
inline ::google::protobuf::int32 MapBuilderServerOptions::num_grpc_threads() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.num_grpc_threads)
  return num_grpc_threads_;
}
inline void MapBuilderServerOptions::set_num_grpc_threads(::google::protobuf::int32 value) {
  
  num_grpc_threads_ = value;
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.num_grpc_threads)
}

// int32 num_event_threads = 3;
inline void MapBuilderServerOptions::clear_num_event_threads() {
  num_event_threads_ = 0;
}
inline ::google::protobuf::int32 MapBuilderServerOptions::num_event_threads() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.num_event_threads)
  return num_event_threads_;
}
inline void MapBuilderServerOptions::set_num_event_threads(::google::protobuf::int32 value) {
  
  num_event_threads_ = value;
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.num_event_threads)
}

// .cartographer.mapping.proto.MapBuilderOptions map_builder_options = 4;
inline bool MapBuilderServerOptions::has_map_builder_options() const {
  return this != internal_default_instance() && map_builder_options_ != NULL;
}
inline const ::cartographer::mapping::proto::MapBuilderOptions& MapBuilderServerOptions::map_builder_options() const {
  const ::cartographer::mapping::proto::MapBuilderOptions* p = map_builder_options_;
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.map_builder_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::MapBuilderOptions*>(
      &::cartographer::mapping::proto::_MapBuilderOptions_default_instance_);
}
inline ::cartographer::mapping::proto::MapBuilderOptions* MapBuilderServerOptions::release_map_builder_options() {
  // @@protoc_insertion_point(field_release:cartographer.cloud.proto.MapBuilderServerOptions.map_builder_options)
  
  ::cartographer::mapping::proto::MapBuilderOptions* temp = map_builder_options_;
  map_builder_options_ = NULL;
  return temp;
}
inline ::cartographer::mapping::proto::MapBuilderOptions* MapBuilderServerOptions::mutable_map_builder_options() {
  
  if (map_builder_options_ == NULL) {
    map_builder_options_ = new ::cartographer::mapping::proto::MapBuilderOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.cloud.proto.MapBuilderServerOptions.map_builder_options)
  return map_builder_options_;
}
inline void MapBuilderServerOptions::set_allocated_map_builder_options(::cartographer::mapping::proto::MapBuilderOptions* map_builder_options) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(map_builder_options_);
  }
  if (map_builder_options) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      map_builder_options = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, map_builder_options, submessage_arena);
    }
    
  } else {
    
  }
  map_builder_options_ = map_builder_options;
  // @@protoc_insertion_point(field_set_allocated:cartographer.cloud.proto.MapBuilderServerOptions.map_builder_options)
}

// string uplink_server_address = 5;
inline void MapBuilderServerOptions::clear_uplink_server_address() {
  uplink_server_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MapBuilderServerOptions::uplink_server_address() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
  return uplink_server_address_.GetNoArena();
}
inline void MapBuilderServerOptions::set_uplink_server_address(const ::std::string& value) {
  
  uplink_server_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
}
#if LANG_CXX11
inline void MapBuilderServerOptions::set_uplink_server_address(::std::string&& value) {
  
  uplink_server_address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
}
#endif
inline void MapBuilderServerOptions::set_uplink_server_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uplink_server_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
}
inline void MapBuilderServerOptions::set_uplink_server_address(const char* value, size_t size) {
  
  uplink_server_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
}
inline ::std::string* MapBuilderServerOptions::mutable_uplink_server_address() {
  
  // @@protoc_insertion_point(field_mutable:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
  return uplink_server_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MapBuilderServerOptions::release_uplink_server_address() {
  // @@protoc_insertion_point(field_release:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
  
  return uplink_server_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapBuilderServerOptions::set_allocated_uplink_server_address(::std::string* uplink_server_address) {
  if (uplink_server_address != NULL) {
    
  } else {
    
  }
  uplink_server_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uplink_server_address);
  // @@protoc_insertion_point(field_set_allocated:cartographer.cloud.proto.MapBuilderServerOptions.uplink_server_address)
}

// int32 upload_batch_size = 6;
inline void MapBuilderServerOptions::clear_upload_batch_size() {
  upload_batch_size_ = 0;
}
inline ::google::protobuf::int32 MapBuilderServerOptions::upload_batch_size() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.upload_batch_size)
  return upload_batch_size_;
}
inline void MapBuilderServerOptions::set_upload_batch_size(::google::protobuf::int32 value) {
  
  upload_batch_size_ = value;
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.upload_batch_size)
}

// bool enable_ssl_encryption = 7;
inline void MapBuilderServerOptions::clear_enable_ssl_encryption() {
  enable_ssl_encryption_ = false;
}
inline bool MapBuilderServerOptions::enable_ssl_encryption() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.enable_ssl_encryption)
  return enable_ssl_encryption_;
}
inline void MapBuilderServerOptions::set_enable_ssl_encryption(bool value) {
  
  enable_ssl_encryption_ = value;
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.enable_ssl_encryption)
}

// bool enable_google_auth = 9;
inline void MapBuilderServerOptions::clear_enable_google_auth() {
  enable_google_auth_ = false;
}
inline bool MapBuilderServerOptions::enable_google_auth() const {
  // @@protoc_insertion_point(field_get:cartographer.cloud.proto.MapBuilderServerOptions.enable_google_auth)
  return enable_google_auth_;
}
inline void MapBuilderServerOptions::set_enable_google_auth(bool value) {
  
  enable_google_auth_ = value;
  // @@protoc_insertion_point(field_set:cartographer.cloud.proto.MapBuilderServerOptions.enable_google_auth)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cloud
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fcloud_2fproto_2fmap_5fbuilder_5fserver_5foptions_2eproto__INCLUDED