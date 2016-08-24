// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: permuted_entropy_cache.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "permuted_entropy_cache.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace metrics {

void protobuf_ShutdownFile_permuted_5fentropy_5fcache_2eproto() {
  delete PermutedEntropyCache::default_instance_;
  delete PermutedEntropyCache_Entry::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  PermutedEntropyCache::default_instance_ = new PermutedEntropyCache();
  PermutedEntropyCache_Entry::default_instance_ = new PermutedEntropyCache_Entry();
  PermutedEntropyCache::default_instance_->InitAsDefaultInstance();
  PermutedEntropyCache_Entry::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_permuted_5fentropy_5fcache_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto_once_);
void protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto_once_,
                 &protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_permuted_5fentropy_5fcache_2eproto {
  StaticDescriptorInitializer_permuted_5fentropy_5fcache_2eproto() {
    protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto();
  }
} static_descriptor_initializer_permuted_5fentropy_5fcache_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForPermutedEntropyCache(
    PermutedEntropyCache* ptr) {
  return ptr->mutable_unknown_fields();
}

static ::std::string* MutableUnknownFieldsForPermutedEntropyCache_Entry(
    PermutedEntropyCache_Entry* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PermutedEntropyCache_Entry::kRandomizationSeedFieldNumber;
const int PermutedEntropyCache_Entry::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PermutedEntropyCache_Entry::PermutedEntropyCache_Entry()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PermutedEntropyCache.Entry)
}

void PermutedEntropyCache_Entry::InitAsDefaultInstance() {
}

PermutedEntropyCache_Entry::PermutedEntropyCache_Entry(const PermutedEntropyCache_Entry& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:metrics.PermutedEntropyCache.Entry)
}

void PermutedEntropyCache_Entry::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  randomization_seed_ = 0u;
  value_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PermutedEntropyCache_Entry::~PermutedEntropyCache_Entry() {
  // @@protoc_insertion_point(destructor:metrics.PermutedEntropyCache.Entry)
  SharedDtor();
}

void PermutedEntropyCache_Entry::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PermutedEntropyCache_Entry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PermutedEntropyCache_Entry& PermutedEntropyCache_Entry::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto();
#endif
  return *default_instance_;
}

PermutedEntropyCache_Entry* PermutedEntropyCache_Entry::default_instance_ = NULL;

PermutedEntropyCache_Entry* PermutedEntropyCache_Entry::New(::google::protobuf::Arena* arena) const {
  PermutedEntropyCache_Entry* n = new PermutedEntropyCache_Entry;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PermutedEntropyCache_Entry::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PermutedEntropyCache.Entry)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PermutedEntropyCache_Entry, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PermutedEntropyCache_Entry*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(randomization_seed_, value_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PermutedEntropyCache_Entry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForPermutedEntropyCache_Entry, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:metrics.PermutedEntropyCache.Entry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 randomization_seed = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &randomization_seed_)));
          set_has_randomization_seed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_value;
        break;
      }

      // required uint32 value = 2;
      case 2: {
        if (tag == 16) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:metrics.PermutedEntropyCache.Entry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PermutedEntropyCache.Entry)
  return false;
#undef DO_
}

void PermutedEntropyCache_Entry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PermutedEntropyCache.Entry)
  // required uint32 randomization_seed = 1;
  if (has_randomization_seed()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->randomization_seed(), output);
  }

  // required uint32 value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->value(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PermutedEntropyCache.Entry)
}

int PermutedEntropyCache_Entry::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:metrics.PermutedEntropyCache.Entry)
  int total_size = 0;

  if (has_randomization_seed()) {
    // required uint32 randomization_seed = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->randomization_seed());
  }

  if (has_value()) {
    // required uint32 value = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->value());
  }

  return total_size;
}
int PermutedEntropyCache_Entry::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PermutedEntropyCache.Entry)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 randomization_seed = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->randomization_seed());

    // required uint32 value = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->value());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PermutedEntropyCache_Entry::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PermutedEntropyCache_Entry*>(&from));
}

void PermutedEntropyCache_Entry::MergeFrom(const PermutedEntropyCache_Entry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PermutedEntropyCache.Entry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_randomization_seed()) {
      set_randomization_seed(from.randomization_seed());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void PermutedEntropyCache_Entry::CopyFrom(const PermutedEntropyCache_Entry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PermutedEntropyCache.Entry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PermutedEntropyCache_Entry::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PermutedEntropyCache_Entry::Swap(PermutedEntropyCache_Entry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PermutedEntropyCache_Entry::InternalSwap(PermutedEntropyCache_Entry* other) {
  std::swap(randomization_seed_, other->randomization_seed_);
  std::swap(value_, other->value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PermutedEntropyCache_Entry::GetTypeName() const {
  return "metrics.PermutedEntropyCache.Entry";
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PermutedEntropyCache::kEntryFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PermutedEntropyCache::PermutedEntropyCache()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PermutedEntropyCache)
}

void PermutedEntropyCache::InitAsDefaultInstance() {
}

PermutedEntropyCache::PermutedEntropyCache(const PermutedEntropyCache& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:metrics.PermutedEntropyCache)
}

void PermutedEntropyCache::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PermutedEntropyCache::~PermutedEntropyCache() {
  // @@protoc_insertion_point(destructor:metrics.PermutedEntropyCache)
  SharedDtor();
}

void PermutedEntropyCache::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PermutedEntropyCache::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PermutedEntropyCache& PermutedEntropyCache::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_permuted_5fentropy_5fcache_2eproto();
#endif
  return *default_instance_;
}

PermutedEntropyCache* PermutedEntropyCache::default_instance_ = NULL;

PermutedEntropyCache* PermutedEntropyCache::New(::google::protobuf::Arena* arena) const {
  PermutedEntropyCache* n = new PermutedEntropyCache;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PermutedEntropyCache::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PermutedEntropyCache)
  entry_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PermutedEntropyCache::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForPermutedEntropyCache, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:metrics.PermutedEntropyCache)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .metrics.PermutedEntropyCache.Entry entry = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_entry:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_entry()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_entry;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:metrics.PermutedEntropyCache)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PermutedEntropyCache)
  return false;
#undef DO_
}

void PermutedEntropyCache::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PermutedEntropyCache)
  // repeated .metrics.PermutedEntropyCache.Entry entry = 1;
  for (unsigned int i = 0, n = this->entry_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->entry(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PermutedEntropyCache)
}

int PermutedEntropyCache::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PermutedEntropyCache)
  int total_size = 0;

  // repeated .metrics.PermutedEntropyCache.Entry entry = 1;
  total_size += 1 * this->entry_size();
  for (int i = 0; i < this->entry_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->entry(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PermutedEntropyCache::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PermutedEntropyCache*>(&from));
}

void PermutedEntropyCache::MergeFrom(const PermutedEntropyCache& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PermutedEntropyCache)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  entry_.MergeFrom(from.entry_);
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void PermutedEntropyCache::CopyFrom(const PermutedEntropyCache& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PermutedEntropyCache)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PermutedEntropyCache::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->entry())) return false;
  return true;
}

void PermutedEntropyCache::Swap(PermutedEntropyCache* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PermutedEntropyCache::InternalSwap(PermutedEntropyCache* other) {
  entry_.UnsafeArenaSwap(&other->entry_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PermutedEntropyCache::GetTypeName() const {
  return "metrics.PermutedEntropyCache";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PermutedEntropyCache_Entry

// required uint32 randomization_seed = 1;
bool PermutedEntropyCache_Entry::has_randomization_seed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PermutedEntropyCache_Entry::set_has_randomization_seed() {
  _has_bits_[0] |= 0x00000001u;
}
void PermutedEntropyCache_Entry::clear_has_randomization_seed() {
  _has_bits_[0] &= ~0x00000001u;
}
void PermutedEntropyCache_Entry::clear_randomization_seed() {
  randomization_seed_ = 0u;
  clear_has_randomization_seed();
}
 ::google::protobuf::uint32 PermutedEntropyCache_Entry::randomization_seed() const {
  // @@protoc_insertion_point(field_get:metrics.PermutedEntropyCache.Entry.randomization_seed)
  return randomization_seed_;
}
 void PermutedEntropyCache_Entry::set_randomization_seed(::google::protobuf::uint32 value) {
  set_has_randomization_seed();
  randomization_seed_ = value;
  // @@protoc_insertion_point(field_set:metrics.PermutedEntropyCache.Entry.randomization_seed)
}

// required uint32 value = 2;
bool PermutedEntropyCache_Entry::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PermutedEntropyCache_Entry::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
void PermutedEntropyCache_Entry::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void PermutedEntropyCache_Entry::clear_value() {
  value_ = 0u;
  clear_has_value();
}
 ::google::protobuf::uint32 PermutedEntropyCache_Entry::value() const {
  // @@protoc_insertion_point(field_get:metrics.PermutedEntropyCache.Entry.value)
  return value_;
}
 void PermutedEntropyCache_Entry::set_value(::google::protobuf::uint32 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:metrics.PermutedEntropyCache.Entry.value)
}

// -------------------------------------------------------------------

// PermutedEntropyCache

// repeated .metrics.PermutedEntropyCache.Entry entry = 1;
int PermutedEntropyCache::entry_size() const {
  return entry_.size();
}
void PermutedEntropyCache::clear_entry() {
  entry_.Clear();
}
const ::metrics::PermutedEntropyCache_Entry& PermutedEntropyCache::entry(int index) const {
  // @@protoc_insertion_point(field_get:metrics.PermutedEntropyCache.entry)
  return entry_.Get(index);
}
::metrics::PermutedEntropyCache_Entry* PermutedEntropyCache::mutable_entry(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.PermutedEntropyCache.entry)
  return entry_.Mutable(index);
}
::metrics::PermutedEntropyCache_Entry* PermutedEntropyCache::add_entry() {
  // @@protoc_insertion_point(field_add:metrics.PermutedEntropyCache.entry)
  return entry_.Add();
}
::google::protobuf::RepeatedPtrField< ::metrics::PermutedEntropyCache_Entry >*
PermutedEntropyCache::mutable_entry() {
  // @@protoc_insertion_point(field_mutable_list:metrics.PermutedEntropyCache.entry)
  return &entry_;
}
const ::google::protobuf::RepeatedPtrField< ::metrics::PermutedEntropyCache_Entry >&
PermutedEntropyCache::entry() const {
  // @@protoc_insertion_point(field_list:metrics.PermutedEntropyCache.entry)
  return entry_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)