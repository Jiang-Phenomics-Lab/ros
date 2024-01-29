// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/probability_grid.proto

#include "cartographer/mapping/proto/probability_grid.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class ProbabilityGridDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProbabilityGrid>
      _instance;
} _ProbabilityGrid_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto {
void InitDefaultsProbabilityGridImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::cartographer::mapping::proto::_ProbabilityGrid_default_instance_;
    new (ptr) ::cartographer::mapping::proto::ProbabilityGrid();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::proto::ProbabilityGrid::InitAsDefaultInstance();
}

void InitDefaultsProbabilityGrid() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsProbabilityGridImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::ProbabilityGrid, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::proto::ProbabilityGrid)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::cartographer::mapping::proto::_ProbabilityGrid_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping/proto/probability_grid.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n1cartographer/mapping/proto/probability"
      "_grid.proto\022\032cartographer.mapping.proto\""
      "\021\n\017ProbabilityGridb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 106);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/probability_grid.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

void ProbabilityGrid::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProbabilityGrid::ProbabilityGrid()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto::InitDefaultsProbabilityGrid();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.ProbabilityGrid)
}
ProbabilityGrid::ProbabilityGrid(const ProbabilityGrid& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.ProbabilityGrid)
}

void ProbabilityGrid::SharedCtor() {
  _cached_size_ = 0;
}

ProbabilityGrid::~ProbabilityGrid() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.ProbabilityGrid)
  SharedDtor();
}

void ProbabilityGrid::SharedDtor() {
}

void ProbabilityGrid::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProbabilityGrid::descriptor() {
  ::protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProbabilityGrid& ProbabilityGrid::default_instance() {
  ::protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto::InitDefaultsProbabilityGrid();
  return *internal_default_instance();
}

ProbabilityGrid* ProbabilityGrid::New(::google::protobuf::Arena* arena) const {
  ProbabilityGrid* n = new ProbabilityGrid;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProbabilityGrid::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.ProbabilityGrid)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool ProbabilityGrid::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.ProbabilityGrid)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.ProbabilityGrid)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.ProbabilityGrid)
  return false;
#undef DO_
}

void ProbabilityGrid::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.ProbabilityGrid)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.ProbabilityGrid)
}

::google::protobuf::uint8* ProbabilityGrid::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.ProbabilityGrid)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.ProbabilityGrid)
  return target;
}

size_t ProbabilityGrid::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.ProbabilityGrid)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProbabilityGrid::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.ProbabilityGrid)
  GOOGLE_DCHECK_NE(&from, this);
  const ProbabilityGrid* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProbabilityGrid>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.ProbabilityGrid)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.ProbabilityGrid)
    MergeFrom(*source);
  }
}

void ProbabilityGrid::MergeFrom(const ProbabilityGrid& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.ProbabilityGrid)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void ProbabilityGrid::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.ProbabilityGrid)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProbabilityGrid::CopyFrom(const ProbabilityGrid& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.ProbabilityGrid)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProbabilityGrid::IsInitialized() const {
  return true;
}

void ProbabilityGrid::Swap(ProbabilityGrid* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProbabilityGrid::InternalSwap(ProbabilityGrid* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProbabilityGrid::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2fprobability_5fgrid_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
