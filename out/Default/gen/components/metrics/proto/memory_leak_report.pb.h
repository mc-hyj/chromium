// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: memory_leak_report.proto

#ifndef PROTOBUF_memory_5fleak_5freport_2eproto__INCLUDED
#define PROTOBUF_memory_5fleak_5freport_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace metrics {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_memory_5fleak_5freport_2eproto();
void protobuf_AssignDesc_memory_5fleak_5freport_2eproto();
void protobuf_ShutdownFile_memory_5fleak_5freport_2eproto();

class MemoryLeakReportProto;
class MemoryLeakReportProto_AllocationBreakdown;
class MemoryLeakReportProto_Params;

enum MemoryLeakReportProto_ProcessType {
  MemoryLeakReportProto_ProcessType_UNKNOWN_PROCESS = 0,
  MemoryLeakReportProto_ProcessType_BROWSER_PROCESS = 1,
  MemoryLeakReportProto_ProcessType_RENDERER_PROCESS = 2
};
bool MemoryLeakReportProto_ProcessType_IsValid(int value);
const MemoryLeakReportProto_ProcessType MemoryLeakReportProto_ProcessType_ProcessType_MIN = MemoryLeakReportProto_ProcessType_UNKNOWN_PROCESS;
const MemoryLeakReportProto_ProcessType MemoryLeakReportProto_ProcessType_ProcessType_MAX = MemoryLeakReportProto_ProcessType_RENDERER_PROCESS;
const int MemoryLeakReportProto_ProcessType_ProcessType_ARRAYSIZE = MemoryLeakReportProto_ProcessType_ProcessType_MAX + 1;

// ===================================================================

class MemoryLeakReportProto_Params : public ::google::protobuf::MessageLite {
 public:
  MemoryLeakReportProto_Params();
  virtual ~MemoryLeakReportProto_Params();

  MemoryLeakReportProto_Params(const MemoryLeakReportProto_Params& from);

  inline MemoryLeakReportProto_Params& operator=(const MemoryLeakReportProto_Params& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const MemoryLeakReportProto_Params& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MemoryLeakReportProto_Params* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(MemoryLeakReportProto_Params* other);

  // implements Message ----------------------------------------------

  inline MemoryLeakReportProto_Params* New() const { return New(NULL); }

  MemoryLeakReportProto_Params* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MemoryLeakReportProto_Params& from);
  void MergeFrom(const MemoryLeakReportProto_Params& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MemoryLeakReportProto_Params* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional float sampling_rate = 1;
  bool has_sampling_rate() const;
  void clear_sampling_rate();
  static const int kSamplingRateFieldNumber = 1;
  float sampling_rate() const;
  void set_sampling_rate(float value);

  // optional uint32 max_stack_depth = 2;
  bool has_max_stack_depth() const;
  void clear_max_stack_depth();
  static const int kMaxStackDepthFieldNumber = 2;
  ::google::protobuf::uint32 max_stack_depth() const;
  void set_max_stack_depth(::google::protobuf::uint32 value);

  // optional uint64 analysis_interval_bytes = 3;
  bool has_analysis_interval_bytes() const;
  void clear_analysis_interval_bytes();
  static const int kAnalysisIntervalBytesFieldNumber = 3;
  ::google::protobuf::uint64 analysis_interval_bytes() const;
  void set_analysis_interval_bytes(::google::protobuf::uint64 value);

  // optional uint32 size_suspicion_threshold = 4;
  bool has_size_suspicion_threshold() const;
  void clear_size_suspicion_threshold();
  static const int kSizeSuspicionThresholdFieldNumber = 4;
  ::google::protobuf::uint32 size_suspicion_threshold() const;
  void set_size_suspicion_threshold(::google::protobuf::uint32 value);

  // optional uint32 call_stack_suspicion_threshold = 5;
  bool has_call_stack_suspicion_threshold() const;
  void clear_call_stack_suspicion_threshold();
  static const int kCallStackSuspicionThresholdFieldNumber = 5;
  ::google::protobuf::uint32 call_stack_suspicion_threshold() const;
  void set_call_stack_suspicion_threshold(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:metrics.MemoryLeakReportProto.Params)
 private:
  inline void set_has_sampling_rate();
  inline void clear_has_sampling_rate();
  inline void set_has_max_stack_depth();
  inline void clear_has_max_stack_depth();
  inline void set_has_analysis_interval_bytes();
  inline void clear_has_analysis_interval_bytes();
  inline void set_has_size_suspicion_threshold();
  inline void clear_has_size_suspicion_threshold();
  inline void set_has_call_stack_suspicion_threshold();
  inline void clear_has_call_stack_suspicion_threshold();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float sampling_rate_;
  ::google::protobuf::uint32 max_stack_depth_;
  ::google::protobuf::uint64 analysis_interval_bytes_;
  ::google::protobuf::uint32 size_suspicion_threshold_;
  ::google::protobuf::uint32 call_stack_suspicion_threshold_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_memory_5fleak_5freport_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_memory_5fleak_5freport_2eproto();
  #endif
  friend void protobuf_AssignDesc_memory_5fleak_5freport_2eproto();
  friend void protobuf_ShutdownFile_memory_5fleak_5freport_2eproto();

  void InitAsDefaultInstance();
  static MemoryLeakReportProto_Params* default_instance_;
};
// -------------------------------------------------------------------

class MemoryLeakReportProto_AllocationBreakdown : public ::google::protobuf::MessageLite {
 public:
  MemoryLeakReportProto_AllocationBreakdown();
  virtual ~MemoryLeakReportProto_AllocationBreakdown();

  MemoryLeakReportProto_AllocationBreakdown(const MemoryLeakReportProto_AllocationBreakdown& from);

  inline MemoryLeakReportProto_AllocationBreakdown& operator=(const MemoryLeakReportProto_AllocationBreakdown& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const MemoryLeakReportProto_AllocationBreakdown& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MemoryLeakReportProto_AllocationBreakdown* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(MemoryLeakReportProto_AllocationBreakdown* other);

  // implements Message ----------------------------------------------

  inline MemoryLeakReportProto_AllocationBreakdown* New() const { return New(NULL); }

  MemoryLeakReportProto_AllocationBreakdown* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MemoryLeakReportProto_AllocationBreakdown& from);
  void MergeFrom(const MemoryLeakReportProto_AllocationBreakdown& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MemoryLeakReportProto_AllocationBreakdown* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint32 counts_by_size = 1;
  int counts_by_size_size() const;
  void clear_counts_by_size();
  static const int kCountsBySizeFieldNumber = 1;
  ::google::protobuf::uint32 counts_by_size(int index) const;
  void set_counts_by_size(int index, ::google::protobuf::uint32 value);
  void add_counts_by_size(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      counts_by_size() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_counts_by_size();

  // optional uint32 count_for_call_stack = 2;
  bool has_count_for_call_stack() const;
  void clear_count_for_call_stack();
  static const int kCountForCallStackFieldNumber = 2;
  ::google::protobuf::uint32 count_for_call_stack() const;
  void set_count_for_call_stack(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:metrics.MemoryLeakReportProto.AllocationBreakdown)
 private:
  inline void set_has_count_for_call_stack();
  inline void clear_has_count_for_call_stack();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > counts_by_size_;
  ::google::protobuf::uint32 count_for_call_stack_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_memory_5fleak_5freport_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_memory_5fleak_5freport_2eproto();
  #endif
  friend void protobuf_AssignDesc_memory_5fleak_5freport_2eproto();
  friend void protobuf_ShutdownFile_memory_5fleak_5freport_2eproto();

  void InitAsDefaultInstance();
  static MemoryLeakReportProto_AllocationBreakdown* default_instance_;
};
// -------------------------------------------------------------------

class MemoryLeakReportProto : public ::google::protobuf::MessageLite {
 public:
  MemoryLeakReportProto();
  virtual ~MemoryLeakReportProto();

  MemoryLeakReportProto(const MemoryLeakReportProto& from);

  inline MemoryLeakReportProto& operator=(const MemoryLeakReportProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const MemoryLeakReportProto& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MemoryLeakReportProto* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(MemoryLeakReportProto* other);

  // implements Message ----------------------------------------------

  inline MemoryLeakReportProto* New() const { return New(NULL); }

  MemoryLeakReportProto* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MemoryLeakReportProto& from);
  void MergeFrom(const MemoryLeakReportProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MemoryLeakReportProto* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef MemoryLeakReportProto_Params Params;
  typedef MemoryLeakReportProto_AllocationBreakdown AllocationBreakdown;

  typedef MemoryLeakReportProto_ProcessType ProcessType;
  static const ProcessType UNKNOWN_PROCESS =
    MemoryLeakReportProto_ProcessType_UNKNOWN_PROCESS;
  static const ProcessType BROWSER_PROCESS =
    MemoryLeakReportProto_ProcessType_BROWSER_PROCESS;
  static const ProcessType RENDERER_PROCESS =
    MemoryLeakReportProto_ProcessType_RENDERER_PROCESS;
  static inline bool ProcessType_IsValid(int value) {
    return MemoryLeakReportProto_ProcessType_IsValid(value);
  }
  static const ProcessType ProcessType_MIN =
    MemoryLeakReportProto_ProcessType_ProcessType_MIN;
  static const ProcessType ProcessType_MAX =
    MemoryLeakReportProto_ProcessType_ProcessType_MAX;
  static const int ProcessType_ARRAYSIZE =
    MemoryLeakReportProto_ProcessType_ProcessType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated uint64 call_stack = 1;
  int call_stack_size() const;
  void clear_call_stack();
  static const int kCallStackFieldNumber = 1;
  ::google::protobuf::uint64 call_stack(int index) const;
  void set_call_stack(int index, ::google::protobuf::uint64 value);
  void add_call_stack(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      call_stack() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_call_stack();

  // optional uint32 size_bytes = 2;
  bool has_size_bytes() const;
  void clear_size_bytes();
  static const int kSizeBytesFieldNumber = 2;
  ::google::protobuf::uint32 size_bytes() const;
  void set_size_bytes(::google::protobuf::uint32 value);

  // optional .metrics.MemoryLeakReportProto.Params params = 3;
  bool has_params() const;
  void clear_params();
  static const int kParamsFieldNumber = 3;
  const ::metrics::MemoryLeakReportProto_Params& params() const;
  ::metrics::MemoryLeakReportProto_Params* mutable_params();
  ::metrics::MemoryLeakReportProto_Params* release_params();
  void set_allocated_params(::metrics::MemoryLeakReportProto_Params* params);

  // optional .metrics.MemoryLeakReportProto.ProcessType source_process = 5;
  bool has_source_process() const;
  void clear_source_process();
  static const int kSourceProcessFieldNumber = 5;
  ::metrics::MemoryLeakReportProto_ProcessType source_process() const;
  void set_source_process(::metrics::MemoryLeakReportProto_ProcessType value);

  // optional bytes build_id = 6;
  bool has_build_id() const;
  void clear_build_id();
  static const int kBuildIdFieldNumber = 6;
  const ::std::string& build_id() const;
  void set_build_id(const ::std::string& value);
  void set_build_id(const char* value);
  void set_build_id(const void* value, size_t size);
  ::std::string* mutable_build_id();
  ::std::string* release_build_id();
  void set_allocated_build_id(::std::string* build_id);

  // repeated .metrics.MemoryLeakReportProto.AllocationBreakdown alloc_breakdown_history = 4;
  int alloc_breakdown_history_size() const;
  void clear_alloc_breakdown_history();
  static const int kAllocBreakdownHistoryFieldNumber = 4;
  const ::metrics::MemoryLeakReportProto_AllocationBreakdown& alloc_breakdown_history(int index) const;
  ::metrics::MemoryLeakReportProto_AllocationBreakdown* mutable_alloc_breakdown_history(int index);
  ::metrics::MemoryLeakReportProto_AllocationBreakdown* add_alloc_breakdown_history();
  ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto_AllocationBreakdown >*
      mutable_alloc_breakdown_history();
  const ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto_AllocationBreakdown >&
      alloc_breakdown_history() const;

  // @@protoc_insertion_point(class_scope:metrics.MemoryLeakReportProto)
 private:
  inline void set_has_size_bytes();
  inline void clear_has_size_bytes();
  inline void set_has_params();
  inline void clear_has_params();
  inline void set_has_source_process();
  inline void clear_has_source_process();
  inline void set_has_build_id();
  inline void clear_has_build_id();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > call_stack_;
  ::metrics::MemoryLeakReportProto_Params* params_;
  ::google::protobuf::uint32 size_bytes_;
  int source_process_;
  ::google::protobuf::internal::ArenaStringPtr build_id_;
  ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto_AllocationBreakdown > alloc_breakdown_history_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_memory_5fleak_5freport_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_memory_5fleak_5freport_2eproto();
  #endif
  friend void protobuf_AssignDesc_memory_5fleak_5freport_2eproto();
  friend void protobuf_ShutdownFile_memory_5fleak_5freport_2eproto();

  void InitAsDefaultInstance();
  static MemoryLeakReportProto* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MemoryLeakReportProto_Params

// optional float sampling_rate = 1;
inline bool MemoryLeakReportProto_Params::has_sampling_rate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MemoryLeakReportProto_Params::set_has_sampling_rate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MemoryLeakReportProto_Params::clear_has_sampling_rate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MemoryLeakReportProto_Params::clear_sampling_rate() {
  sampling_rate_ = 0;
  clear_has_sampling_rate();
}
inline float MemoryLeakReportProto_Params::sampling_rate() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.Params.sampling_rate)
  return sampling_rate_;
}
inline void MemoryLeakReportProto_Params::set_sampling_rate(float value) {
  set_has_sampling_rate();
  sampling_rate_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.Params.sampling_rate)
}

// optional uint32 max_stack_depth = 2;
inline bool MemoryLeakReportProto_Params::has_max_stack_depth() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MemoryLeakReportProto_Params::set_has_max_stack_depth() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MemoryLeakReportProto_Params::clear_has_max_stack_depth() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MemoryLeakReportProto_Params::clear_max_stack_depth() {
  max_stack_depth_ = 0u;
  clear_has_max_stack_depth();
}
inline ::google::protobuf::uint32 MemoryLeakReportProto_Params::max_stack_depth() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.Params.max_stack_depth)
  return max_stack_depth_;
}
inline void MemoryLeakReportProto_Params::set_max_stack_depth(::google::protobuf::uint32 value) {
  set_has_max_stack_depth();
  max_stack_depth_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.Params.max_stack_depth)
}

// optional uint64 analysis_interval_bytes = 3;
inline bool MemoryLeakReportProto_Params::has_analysis_interval_bytes() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MemoryLeakReportProto_Params::set_has_analysis_interval_bytes() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MemoryLeakReportProto_Params::clear_has_analysis_interval_bytes() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MemoryLeakReportProto_Params::clear_analysis_interval_bytes() {
  analysis_interval_bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_analysis_interval_bytes();
}
inline ::google::protobuf::uint64 MemoryLeakReportProto_Params::analysis_interval_bytes() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.Params.analysis_interval_bytes)
  return analysis_interval_bytes_;
}
inline void MemoryLeakReportProto_Params::set_analysis_interval_bytes(::google::protobuf::uint64 value) {
  set_has_analysis_interval_bytes();
  analysis_interval_bytes_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.Params.analysis_interval_bytes)
}

// optional uint32 size_suspicion_threshold = 4;
inline bool MemoryLeakReportProto_Params::has_size_suspicion_threshold() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MemoryLeakReportProto_Params::set_has_size_suspicion_threshold() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MemoryLeakReportProto_Params::clear_has_size_suspicion_threshold() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MemoryLeakReportProto_Params::clear_size_suspicion_threshold() {
  size_suspicion_threshold_ = 0u;
  clear_has_size_suspicion_threshold();
}
inline ::google::protobuf::uint32 MemoryLeakReportProto_Params::size_suspicion_threshold() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.Params.size_suspicion_threshold)
  return size_suspicion_threshold_;
}
inline void MemoryLeakReportProto_Params::set_size_suspicion_threshold(::google::protobuf::uint32 value) {
  set_has_size_suspicion_threshold();
  size_suspicion_threshold_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.Params.size_suspicion_threshold)
}

// optional uint32 call_stack_suspicion_threshold = 5;
inline bool MemoryLeakReportProto_Params::has_call_stack_suspicion_threshold() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MemoryLeakReportProto_Params::set_has_call_stack_suspicion_threshold() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MemoryLeakReportProto_Params::clear_has_call_stack_suspicion_threshold() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MemoryLeakReportProto_Params::clear_call_stack_suspicion_threshold() {
  call_stack_suspicion_threshold_ = 0u;
  clear_has_call_stack_suspicion_threshold();
}
inline ::google::protobuf::uint32 MemoryLeakReportProto_Params::call_stack_suspicion_threshold() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.Params.call_stack_suspicion_threshold)
  return call_stack_suspicion_threshold_;
}
inline void MemoryLeakReportProto_Params::set_call_stack_suspicion_threshold(::google::protobuf::uint32 value) {
  set_has_call_stack_suspicion_threshold();
  call_stack_suspicion_threshold_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.Params.call_stack_suspicion_threshold)
}

// -------------------------------------------------------------------

// MemoryLeakReportProto_AllocationBreakdown

// repeated uint32 counts_by_size = 1;
inline int MemoryLeakReportProto_AllocationBreakdown::counts_by_size_size() const {
  return counts_by_size_.size();
}
inline void MemoryLeakReportProto_AllocationBreakdown::clear_counts_by_size() {
  counts_by_size_.Clear();
}
inline ::google::protobuf::uint32 MemoryLeakReportProto_AllocationBreakdown::counts_by_size(int index) const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.AllocationBreakdown.counts_by_size)
  return counts_by_size_.Get(index);
}
inline void MemoryLeakReportProto_AllocationBreakdown::set_counts_by_size(int index, ::google::protobuf::uint32 value) {
  counts_by_size_.Set(index, value);
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.AllocationBreakdown.counts_by_size)
}
inline void MemoryLeakReportProto_AllocationBreakdown::add_counts_by_size(::google::protobuf::uint32 value) {
  counts_by_size_.Add(value);
  // @@protoc_insertion_point(field_add:metrics.MemoryLeakReportProto.AllocationBreakdown.counts_by_size)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MemoryLeakReportProto_AllocationBreakdown::counts_by_size() const {
  // @@protoc_insertion_point(field_list:metrics.MemoryLeakReportProto.AllocationBreakdown.counts_by_size)
  return counts_by_size_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MemoryLeakReportProto_AllocationBreakdown::mutable_counts_by_size() {
  // @@protoc_insertion_point(field_mutable_list:metrics.MemoryLeakReportProto.AllocationBreakdown.counts_by_size)
  return &counts_by_size_;
}

// optional uint32 count_for_call_stack = 2;
inline bool MemoryLeakReportProto_AllocationBreakdown::has_count_for_call_stack() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MemoryLeakReportProto_AllocationBreakdown::set_has_count_for_call_stack() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MemoryLeakReportProto_AllocationBreakdown::clear_has_count_for_call_stack() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MemoryLeakReportProto_AllocationBreakdown::clear_count_for_call_stack() {
  count_for_call_stack_ = 0u;
  clear_has_count_for_call_stack();
}
inline ::google::protobuf::uint32 MemoryLeakReportProto_AllocationBreakdown::count_for_call_stack() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.AllocationBreakdown.count_for_call_stack)
  return count_for_call_stack_;
}
inline void MemoryLeakReportProto_AllocationBreakdown::set_count_for_call_stack(::google::protobuf::uint32 value) {
  set_has_count_for_call_stack();
  count_for_call_stack_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.AllocationBreakdown.count_for_call_stack)
}

// -------------------------------------------------------------------

// MemoryLeakReportProto

// repeated uint64 call_stack = 1;
inline int MemoryLeakReportProto::call_stack_size() const {
  return call_stack_.size();
}
inline void MemoryLeakReportProto::clear_call_stack() {
  call_stack_.Clear();
}
inline ::google::protobuf::uint64 MemoryLeakReportProto::call_stack(int index) const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.call_stack)
  return call_stack_.Get(index);
}
inline void MemoryLeakReportProto::set_call_stack(int index, ::google::protobuf::uint64 value) {
  call_stack_.Set(index, value);
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.call_stack)
}
inline void MemoryLeakReportProto::add_call_stack(::google::protobuf::uint64 value) {
  call_stack_.Add(value);
  // @@protoc_insertion_point(field_add:metrics.MemoryLeakReportProto.call_stack)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
MemoryLeakReportProto::call_stack() const {
  // @@protoc_insertion_point(field_list:metrics.MemoryLeakReportProto.call_stack)
  return call_stack_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
MemoryLeakReportProto::mutable_call_stack() {
  // @@protoc_insertion_point(field_mutable_list:metrics.MemoryLeakReportProto.call_stack)
  return &call_stack_;
}

// optional uint32 size_bytes = 2;
inline bool MemoryLeakReportProto::has_size_bytes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MemoryLeakReportProto::set_has_size_bytes() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MemoryLeakReportProto::clear_has_size_bytes() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MemoryLeakReportProto::clear_size_bytes() {
  size_bytes_ = 0u;
  clear_has_size_bytes();
}
inline ::google::protobuf::uint32 MemoryLeakReportProto::size_bytes() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.size_bytes)
  return size_bytes_;
}
inline void MemoryLeakReportProto::set_size_bytes(::google::protobuf::uint32 value) {
  set_has_size_bytes();
  size_bytes_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.size_bytes)
}

// optional .metrics.MemoryLeakReportProto.Params params = 3;
inline bool MemoryLeakReportProto::has_params() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MemoryLeakReportProto::set_has_params() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MemoryLeakReportProto::clear_has_params() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MemoryLeakReportProto::clear_params() {
  if (params_ != NULL) params_->::metrics::MemoryLeakReportProto_Params::Clear();
  clear_has_params();
}
inline const ::metrics::MemoryLeakReportProto_Params& MemoryLeakReportProto::params() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.params)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return params_ != NULL ? *params_ : *default_instance().params_;
#else
  return params_ != NULL ? *params_ : *default_instance_->params_;
#endif
}
inline ::metrics::MemoryLeakReportProto_Params* MemoryLeakReportProto::mutable_params() {
  set_has_params();
  if (params_ == NULL) {
    params_ = new ::metrics::MemoryLeakReportProto_Params;
  }
  // @@protoc_insertion_point(field_mutable:metrics.MemoryLeakReportProto.params)
  return params_;
}
inline ::metrics::MemoryLeakReportProto_Params* MemoryLeakReportProto::release_params() {
  // @@protoc_insertion_point(field_release:metrics.MemoryLeakReportProto.params)
  clear_has_params();
  ::metrics::MemoryLeakReportProto_Params* temp = params_;
  params_ = NULL;
  return temp;
}
inline void MemoryLeakReportProto::set_allocated_params(::metrics::MemoryLeakReportProto_Params* params) {
  delete params_;
  params_ = params;
  if (params) {
    set_has_params();
  } else {
    clear_has_params();
  }
  // @@protoc_insertion_point(field_set_allocated:metrics.MemoryLeakReportProto.params)
}

// optional .metrics.MemoryLeakReportProto.ProcessType source_process = 5;
inline bool MemoryLeakReportProto::has_source_process() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MemoryLeakReportProto::set_has_source_process() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MemoryLeakReportProto::clear_has_source_process() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MemoryLeakReportProto::clear_source_process() {
  source_process_ = 0;
  clear_has_source_process();
}
inline ::metrics::MemoryLeakReportProto_ProcessType MemoryLeakReportProto::source_process() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.source_process)
  return static_cast< ::metrics::MemoryLeakReportProto_ProcessType >(source_process_);
}
inline void MemoryLeakReportProto::set_source_process(::metrics::MemoryLeakReportProto_ProcessType value) {
  assert(::metrics::MemoryLeakReportProto_ProcessType_IsValid(value));
  set_has_source_process();
  source_process_ = value;
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.source_process)
}

// optional bytes build_id = 6;
inline bool MemoryLeakReportProto::has_build_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MemoryLeakReportProto::set_has_build_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MemoryLeakReportProto::clear_has_build_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MemoryLeakReportProto::clear_build_id() {
  build_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_build_id();
}
inline const ::std::string& MemoryLeakReportProto::build_id() const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.build_id)
  return build_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MemoryLeakReportProto::set_build_id(const ::std::string& value) {
  set_has_build_id();
  build_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.MemoryLeakReportProto.build_id)
}
inline void MemoryLeakReportProto::set_build_id(const char* value) {
  set_has_build_id();
  build_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.MemoryLeakReportProto.build_id)
}
inline void MemoryLeakReportProto::set_build_id(const void* value, size_t size) {
  set_has_build_id();
  build_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.MemoryLeakReportProto.build_id)
}
inline ::std::string* MemoryLeakReportProto::mutable_build_id() {
  set_has_build_id();
  // @@protoc_insertion_point(field_mutable:metrics.MemoryLeakReportProto.build_id)
  return build_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MemoryLeakReportProto::release_build_id() {
  // @@protoc_insertion_point(field_release:metrics.MemoryLeakReportProto.build_id)
  clear_has_build_id();
  return build_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MemoryLeakReportProto::set_allocated_build_id(::std::string* build_id) {
  if (build_id != NULL) {
    set_has_build_id();
  } else {
    clear_has_build_id();
  }
  build_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), build_id);
  // @@protoc_insertion_point(field_set_allocated:metrics.MemoryLeakReportProto.build_id)
}

// repeated .metrics.MemoryLeakReportProto.AllocationBreakdown alloc_breakdown_history = 4;
inline int MemoryLeakReportProto::alloc_breakdown_history_size() const {
  return alloc_breakdown_history_.size();
}
inline void MemoryLeakReportProto::clear_alloc_breakdown_history() {
  alloc_breakdown_history_.Clear();
}
inline const ::metrics::MemoryLeakReportProto_AllocationBreakdown& MemoryLeakReportProto::alloc_breakdown_history(int index) const {
  // @@protoc_insertion_point(field_get:metrics.MemoryLeakReportProto.alloc_breakdown_history)
  return alloc_breakdown_history_.Get(index);
}
inline ::metrics::MemoryLeakReportProto_AllocationBreakdown* MemoryLeakReportProto::mutable_alloc_breakdown_history(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.MemoryLeakReportProto.alloc_breakdown_history)
  return alloc_breakdown_history_.Mutable(index);
}
inline ::metrics::MemoryLeakReportProto_AllocationBreakdown* MemoryLeakReportProto::add_alloc_breakdown_history() {
  // @@protoc_insertion_point(field_add:metrics.MemoryLeakReportProto.alloc_breakdown_history)
  return alloc_breakdown_history_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto_AllocationBreakdown >*
MemoryLeakReportProto::mutable_alloc_breakdown_history() {
  // @@protoc_insertion_point(field_mutable_list:metrics.MemoryLeakReportProto.alloc_breakdown_history)
  return &alloc_breakdown_history_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::MemoryLeakReportProto_AllocationBreakdown >&
MemoryLeakReportProto::alloc_breakdown_history() const {
  // @@protoc_insertion_point(field_list:metrics.MemoryLeakReportProto.alloc_breakdown_history)
  return alloc_breakdown_history_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metrics::MemoryLeakReportProto_ProcessType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_memory_5fleak_5freport_2eproto__INCLUDED