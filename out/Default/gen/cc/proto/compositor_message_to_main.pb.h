// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: compositor_message_to_main.proto

#ifndef PROTOBUF_compositor_5fmessage_5fto_5fmain_2eproto__INCLUDED
#define PROTOBUF_compositor_5fmessage_5fto_5fmain_2eproto__INCLUDED

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
#include "begin_main_frame_and_commit_state.pb.h"
// @@protoc_insertion_point(includes)
#include "cc/proto/cc_proto_export.h"

namespace cc {
namespace proto {

// Internal implementation detail -- do not call these.
void CC_PROTO_EXPORT protobuf_AddDesc_compositor_5fmessage_5fto_5fmain_2eproto();
void protobuf_AssignDesc_compositor_5fmessage_5fto_5fmain_2eproto();
void protobuf_ShutdownFile_compositor_5fmessage_5fto_5fmain_2eproto();

class BeginMainFrame;
class CompositorMessageToMain;

enum CompositorMessageToMain_Type {
CompositorMessageToMain_Type_UNKNOWN = 0,
CompositorMessageToMain_Type_BEGIN_MAIN_FRAME = 1
};
CC_PROTO_EXPORT bool CompositorMessageToMain_Type_IsValid(int value);
const CompositorMessageToMain_Type CompositorMessageToMain_Type_Type_MIN = CompositorMessageToMain_Type_UNKNOWN;
const CompositorMessageToMain_Type CompositorMessageToMain_Type_Type_MAX = CompositorMessageToMain_Type_BEGIN_MAIN_FRAME;
const int CompositorMessageToMain_Type_Type_ARRAYSIZE = CompositorMessageToMain_Type_Type_MAX + 1;

// ===================================================================

class CC_PROTO_EXPORT CompositorMessageToMain : public ::google::protobuf::MessageLite {
public:
CompositorMessageToMain();
virtual ~CompositorMessageToMain();

CompositorMessageToMain(const CompositorMessageToMain& from);

inline CompositorMessageToMain& operator=(const CompositorMessageToMain& from) {
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

static const CompositorMessageToMain& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const CompositorMessageToMain* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(CompositorMessageToMain* other);

// implements Message ----------------------------------------------

inline CompositorMessageToMain* New() const { return New(NULL); }

CompositorMessageToMain* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const CompositorMessageToMain& from);
void MergeFrom(const CompositorMessageToMain& from);
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
void InternalSwap(CompositorMessageToMain* other);
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

typedef CompositorMessageToMain_Type Type;
static const Type UNKNOWN =
CompositorMessageToMain_Type_UNKNOWN;
static const Type BEGIN_MAIN_FRAME =
CompositorMessageToMain_Type_BEGIN_MAIN_FRAME;
static inline bool Type_IsValid(int value) {
return CompositorMessageToMain_Type_IsValid(value);
}
static const Type Type_MIN =
CompositorMessageToMain_Type_Type_MIN;
static const Type Type_MAX =
CompositorMessageToMain_Type_Type_MAX;
static const int Type_ARRAYSIZE =
CompositorMessageToMain_Type_Type_ARRAYSIZE;

// accessors -------------------------------------------------------

// optional .cc.proto.CompositorMessageToMain.Type message_type = 1;
bool has_message_type() const;
void clear_message_type();
static const int kMessageTypeFieldNumber = 1;
::cc::proto::CompositorMessageToMain_Type message_type() const;
void set_message_type(::cc::proto::CompositorMessageToMain_Type value);

// optional .cc.proto.BeginMainFrame begin_main_frame_message = 2;
bool has_begin_main_frame_message() const;
void clear_begin_main_frame_message();
static const int kBeginMainFrameMessageFieldNumber = 2;
const ::cc::proto::BeginMainFrame& begin_main_frame_message() const;
::cc::proto::BeginMainFrame* mutable_begin_main_frame_message();
::cc::proto::BeginMainFrame* release_begin_main_frame_message();
void set_allocated_begin_main_frame_message(::cc::proto::BeginMainFrame* begin_main_frame_message);

// @@protoc_insertion_point(class_scope:cc.proto.CompositorMessageToMain)
private:
inline void set_has_message_type();
inline void clear_has_message_type();
inline void set_has_begin_main_frame_message();
inline void clear_has_begin_main_frame_message();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
::cc::proto::BeginMainFrame* begin_main_frame_message_;
int message_type_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_compositor_5fmessage_5fto_5fmain_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_compositor_5fmessage_5fto_5fmain_2eproto();
#endif
friend void protobuf_AssignDesc_compositor_5fmessage_5fto_5fmain_2eproto();
friend void protobuf_ShutdownFile_compositor_5fmessage_5fto_5fmain_2eproto();

void InitAsDefaultInstance();
static CompositorMessageToMain* default_instance_;
};
// -------------------------------------------------------------------

class CC_PROTO_EXPORT BeginMainFrame : public ::google::protobuf::MessageLite {
public:
BeginMainFrame();
virtual ~BeginMainFrame();

BeginMainFrame(const BeginMainFrame& from);

inline BeginMainFrame& operator=(const BeginMainFrame& from) {
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

static const BeginMainFrame& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const BeginMainFrame* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(BeginMainFrame* other);

// implements Message ----------------------------------------------

inline BeginMainFrame* New() const { return New(NULL); }

BeginMainFrame* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const BeginMainFrame& from);
void MergeFrom(const BeginMainFrame& from);
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
void InternalSwap(BeginMainFrame* other);
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

// optional .cc.proto.BeginMainFrameAndCommitState begin_main_frame_state = 1;
bool has_begin_main_frame_state() const;
void clear_begin_main_frame_state();
static const int kBeginMainFrameStateFieldNumber = 1;
const ::cc::proto::BeginMainFrameAndCommitState& begin_main_frame_state() const;
::cc::proto::BeginMainFrameAndCommitState* mutable_begin_main_frame_state();
::cc::proto::BeginMainFrameAndCommitState* release_begin_main_frame_state();
void set_allocated_begin_main_frame_state(::cc::proto::BeginMainFrameAndCommitState* begin_main_frame_state);

// @@protoc_insertion_point(class_scope:cc.proto.BeginMainFrame)
private:
inline void set_has_begin_main_frame_state();
inline void clear_has_begin_main_frame_state();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
::cc::proto::BeginMainFrameAndCommitState* begin_main_frame_state_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_compositor_5fmessage_5fto_5fmain_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_compositor_5fmessage_5fto_5fmain_2eproto();
#endif
friend void protobuf_AssignDesc_compositor_5fmessage_5fto_5fmain_2eproto();
friend void protobuf_ShutdownFile_compositor_5fmessage_5fto_5fmain_2eproto();

void InitAsDefaultInstance();
static BeginMainFrame* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CompositorMessageToMain

// optional .cc.proto.CompositorMessageToMain.Type message_type = 1;
inline bool CompositorMessageToMain::has_message_type() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CompositorMessageToMain::set_has_message_type() {
_has_bits_[0] |= 0x00000001u;
}
inline void CompositorMessageToMain::clear_has_message_type() {
_has_bits_[0] &= ~0x00000001u;
}
inline void CompositorMessageToMain::clear_message_type() {
message_type_ = 0;
clear_has_message_type();
}
inline ::cc::proto::CompositorMessageToMain_Type CompositorMessageToMain::message_type() const {
// @@protoc_insertion_point(field_get:cc.proto.CompositorMessageToMain.message_type)
return static_cast< ::cc::proto::CompositorMessageToMain_Type >(message_type_);
}
inline void CompositorMessageToMain::set_message_type(::cc::proto::CompositorMessageToMain_Type value) {
assert(::cc::proto::CompositorMessageToMain_Type_IsValid(value));
set_has_message_type();
message_type_ = value;
// @@protoc_insertion_point(field_set:cc.proto.CompositorMessageToMain.message_type)
}

// optional .cc.proto.BeginMainFrame begin_main_frame_message = 2;
inline bool CompositorMessageToMain::has_begin_main_frame_message() const {
return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CompositorMessageToMain::set_has_begin_main_frame_message() {
_has_bits_[0] |= 0x00000002u;
}
inline void CompositorMessageToMain::clear_has_begin_main_frame_message() {
_has_bits_[0] &= ~0x00000002u;
}
inline void CompositorMessageToMain::clear_begin_main_frame_message() {
if (begin_main_frame_message_ != NULL) begin_main_frame_message_->::cc::proto::BeginMainFrame::Clear();
clear_has_begin_main_frame_message();
}
inline const ::cc::proto::BeginMainFrame& CompositorMessageToMain::begin_main_frame_message() const {
// @@protoc_insertion_point(field_get:cc.proto.CompositorMessageToMain.begin_main_frame_message)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
return begin_main_frame_message_ != NULL ? *begin_main_frame_message_ : *default_instance().begin_main_frame_message_;
#else
return begin_main_frame_message_ != NULL ? *begin_main_frame_message_ : *default_instance_->begin_main_frame_message_;
#endif
}
inline ::cc::proto::BeginMainFrame* CompositorMessageToMain::mutable_begin_main_frame_message() {
set_has_begin_main_frame_message();
if (begin_main_frame_message_ == NULL) {
begin_main_frame_message_ = new ::cc::proto::BeginMainFrame;
}
// @@protoc_insertion_point(field_mutable:cc.proto.CompositorMessageToMain.begin_main_frame_message)
return begin_main_frame_message_;
}
inline ::cc::proto::BeginMainFrame* CompositorMessageToMain::release_begin_main_frame_message() {
// @@protoc_insertion_point(field_release:cc.proto.CompositorMessageToMain.begin_main_frame_message)
clear_has_begin_main_frame_message();
::cc::proto::BeginMainFrame* temp = begin_main_frame_message_;
begin_main_frame_message_ = NULL;
return temp;
}
inline void CompositorMessageToMain::set_allocated_begin_main_frame_message(::cc::proto::BeginMainFrame* begin_main_frame_message) {
delete begin_main_frame_message_;
begin_main_frame_message_ = begin_main_frame_message;
if (begin_main_frame_message) {
set_has_begin_main_frame_message();
} else {
clear_has_begin_main_frame_message();
}
// @@protoc_insertion_point(field_set_allocated:cc.proto.CompositorMessageToMain.begin_main_frame_message)
}

// -------------------------------------------------------------------

// BeginMainFrame

// optional .cc.proto.BeginMainFrameAndCommitState begin_main_frame_state = 1;
inline bool BeginMainFrame::has_begin_main_frame_state() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BeginMainFrame::set_has_begin_main_frame_state() {
_has_bits_[0] |= 0x00000001u;
}
inline void BeginMainFrame::clear_has_begin_main_frame_state() {
_has_bits_[0] &= ~0x00000001u;
}
inline void BeginMainFrame::clear_begin_main_frame_state() {
if (begin_main_frame_state_ != NULL) begin_main_frame_state_->::cc::proto::BeginMainFrameAndCommitState::Clear();
clear_has_begin_main_frame_state();
}
inline const ::cc::proto::BeginMainFrameAndCommitState& BeginMainFrame::begin_main_frame_state() const {
// @@protoc_insertion_point(field_get:cc.proto.BeginMainFrame.begin_main_frame_state)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
return begin_main_frame_state_ != NULL ? *begin_main_frame_state_ : *default_instance().begin_main_frame_state_;
#else
return begin_main_frame_state_ != NULL ? *begin_main_frame_state_ : *default_instance_->begin_main_frame_state_;
#endif
}
inline ::cc::proto::BeginMainFrameAndCommitState* BeginMainFrame::mutable_begin_main_frame_state() {
set_has_begin_main_frame_state();
if (begin_main_frame_state_ == NULL) {
begin_main_frame_state_ = new ::cc::proto::BeginMainFrameAndCommitState;
}
// @@protoc_insertion_point(field_mutable:cc.proto.BeginMainFrame.begin_main_frame_state)
return begin_main_frame_state_;
}
inline ::cc::proto::BeginMainFrameAndCommitState* BeginMainFrame::release_begin_main_frame_state() {
// @@protoc_insertion_point(field_release:cc.proto.BeginMainFrame.begin_main_frame_state)
clear_has_begin_main_frame_state();
::cc::proto::BeginMainFrameAndCommitState* temp = begin_main_frame_state_;
begin_main_frame_state_ = NULL;
return temp;
}
inline void BeginMainFrame::set_allocated_begin_main_frame_state(::cc::proto::BeginMainFrameAndCommitState* begin_main_frame_state) {
delete begin_main_frame_state_;
begin_main_frame_state_ = begin_main_frame_state;
if (begin_main_frame_state) {
set_has_begin_main_frame_state();
} else {
clear_has_begin_main_frame_state();
}
// @@protoc_insertion_point(field_set_allocated:cc.proto.BeginMainFrame.begin_main_frame_state)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cc::proto::CompositorMessageToMain_Type> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_compositor_5fmessage_5fto_5fmain_2eproto__INCLUDED