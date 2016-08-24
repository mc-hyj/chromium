// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: layer_selection_bound.proto

#ifndef PROTOBUF_layer_5fselection_5fbound_2eproto__INCLUDED
#define PROTOBUF_layer_5fselection_5fbound_2eproto__INCLUDED

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
#include "point.pb.h"
// @@protoc_insertion_point(includes)
#include "cc/proto/cc_proto_export.h"

namespace cc {
namespace proto {

// Internal implementation detail -- do not call these.
void CC_PROTO_EXPORT protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
void protobuf_AssignDesc_layer_5fselection_5fbound_2eproto();
void protobuf_ShutdownFile_layer_5fselection_5fbound_2eproto();

class LayerSelection;
class LayerSelectionBound;

enum LayerSelectionBound_SelectionBoundType {
LayerSelectionBound_SelectionBoundType_UNKNOWN = 0,
LayerSelectionBound_SelectionBoundType_LEFT = 1,
LayerSelectionBound_SelectionBoundType_RIGHT = 2,
LayerSelectionBound_SelectionBoundType_CENTER = 3,
LayerSelectionBound_SelectionBoundType_EMPTY = 4
};
CC_PROTO_EXPORT bool LayerSelectionBound_SelectionBoundType_IsValid(int value);
const LayerSelectionBound_SelectionBoundType LayerSelectionBound_SelectionBoundType_SelectionBoundType_MIN = LayerSelectionBound_SelectionBoundType_UNKNOWN;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound_SelectionBoundType_SelectionBoundType_MAX = LayerSelectionBound_SelectionBoundType_EMPTY;
const int LayerSelectionBound_SelectionBoundType_SelectionBoundType_ARRAYSIZE = LayerSelectionBound_SelectionBoundType_SelectionBoundType_MAX + 1;

// ===================================================================

class CC_PROTO_EXPORT LayerSelectionBound : public ::google::protobuf::MessageLite {
public:
LayerSelectionBound();
virtual ~LayerSelectionBound();

LayerSelectionBound(const LayerSelectionBound& from);

inline LayerSelectionBound& operator=(const LayerSelectionBound& from) {
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

static const LayerSelectionBound& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const LayerSelectionBound* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(LayerSelectionBound* other);

// implements Message ----------------------------------------------

inline LayerSelectionBound* New() const { return New(NULL); }

LayerSelectionBound* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const LayerSelectionBound& from);
void MergeFrom(const LayerSelectionBound& from);
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
void InternalSwap(LayerSelectionBound* other);
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

typedef LayerSelectionBound_SelectionBoundType SelectionBoundType;
static const SelectionBoundType UNKNOWN =
LayerSelectionBound_SelectionBoundType_UNKNOWN;
static const SelectionBoundType LEFT =
LayerSelectionBound_SelectionBoundType_LEFT;
static const SelectionBoundType RIGHT =
LayerSelectionBound_SelectionBoundType_RIGHT;
static const SelectionBoundType CENTER =
LayerSelectionBound_SelectionBoundType_CENTER;
static const SelectionBoundType EMPTY =
LayerSelectionBound_SelectionBoundType_EMPTY;
static inline bool SelectionBoundType_IsValid(int value) {
return LayerSelectionBound_SelectionBoundType_IsValid(value);
}
static const SelectionBoundType SelectionBoundType_MIN =
LayerSelectionBound_SelectionBoundType_SelectionBoundType_MIN;
static const SelectionBoundType SelectionBoundType_MAX =
LayerSelectionBound_SelectionBoundType_SelectionBoundType_MAX;
static const int SelectionBoundType_ARRAYSIZE =
LayerSelectionBound_SelectionBoundType_SelectionBoundType_ARRAYSIZE;

// accessors -------------------------------------------------------

// optional .cc.proto.LayerSelectionBound.SelectionBoundType type = 1;
bool has_type() const;
void clear_type();
static const int kTypeFieldNumber = 1;
::cc::proto::LayerSelectionBound_SelectionBoundType type() const;
void set_type(::cc::proto::LayerSelectionBound_SelectionBoundType value);

// optional .cc.proto.Point edge_top = 2;
bool has_edge_top() const;
void clear_edge_top();
static const int kEdgeTopFieldNumber = 2;
const ::cc::proto::Point& edge_top() const;
::cc::proto::Point* mutable_edge_top();
::cc::proto::Point* release_edge_top();
void set_allocated_edge_top(::cc::proto::Point* edge_top);

// optional .cc.proto.Point edge_bottom = 3;
bool has_edge_bottom() const;
void clear_edge_bottom();
static const int kEdgeBottomFieldNumber = 3;
const ::cc::proto::Point& edge_bottom() const;
::cc::proto::Point* mutable_edge_bottom();
::cc::proto::Point* release_edge_bottom();
void set_allocated_edge_bottom(::cc::proto::Point* edge_bottom);

// optional int32 layer_id = 4;
bool has_layer_id() const;
void clear_layer_id();
static const int kLayerIdFieldNumber = 4;
::google::protobuf::int32 layer_id() const;
void set_layer_id(::google::protobuf::int32 value);

// @@protoc_insertion_point(class_scope:cc.proto.LayerSelectionBound)
private:
inline void set_has_type();
inline void clear_has_type();
inline void set_has_edge_top();
inline void clear_has_edge_top();
inline void set_has_edge_bottom();
inline void clear_has_edge_bottom();
inline void set_has_layer_id();
inline void clear_has_layer_id();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
::cc::proto::Point* edge_top_;
int type_;
::google::protobuf::int32 layer_id_;
::cc::proto::Point* edge_bottom_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_layer_5fselection_5fbound_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
#endif
friend void protobuf_AssignDesc_layer_5fselection_5fbound_2eproto();
friend void protobuf_ShutdownFile_layer_5fselection_5fbound_2eproto();

void InitAsDefaultInstance();
static LayerSelectionBound* default_instance_;
};
// -------------------------------------------------------------------

class CC_PROTO_EXPORT LayerSelection : public ::google::protobuf::MessageLite {
public:
LayerSelection();
virtual ~LayerSelection();

LayerSelection(const LayerSelection& from);

inline LayerSelection& operator=(const LayerSelection& from) {
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

static const LayerSelection& default_instance();

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Returns the internal default instance pointer. This function can
// return NULL thus should not be used by the user. This is intended
// for Protobuf internal code. Please use default_instance() declared
// above instead.
static inline const LayerSelection* internal_default_instance() {
return default_instance_;
}
#endif

GOOGLE_ATTRIBUTE_NOINLINE void Swap(LayerSelection* other);

// implements Message ----------------------------------------------

inline LayerSelection* New() const { return New(NULL); }

LayerSelection* New(::google::protobuf::Arena* arena) const;
void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
void CopyFrom(const LayerSelection& from);
void MergeFrom(const LayerSelection& from);
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
void InternalSwap(LayerSelection* other);
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

// optional .cc.proto.LayerSelectionBound start = 1;
bool has_start() const;
void clear_start();
static const int kStartFieldNumber = 1;
const ::cc::proto::LayerSelectionBound& start() const;
::cc::proto::LayerSelectionBound* mutable_start();
::cc::proto::LayerSelectionBound* release_start();
void set_allocated_start(::cc::proto::LayerSelectionBound* start);

// optional .cc.proto.LayerSelectionBound end = 2;
bool has_end() const;
void clear_end();
static const int kEndFieldNumber = 2;
const ::cc::proto::LayerSelectionBound& end() const;
::cc::proto::LayerSelectionBound* mutable_end();
::cc::proto::LayerSelectionBound* release_end();
void set_allocated_end(::cc::proto::LayerSelectionBound* end);

// optional bool is_editable = 3;
bool has_is_editable() const;
void clear_is_editable();
static const int kIsEditableFieldNumber = 3;
bool is_editable() const;
void set_is_editable(bool value);

// optional bool is_empty_text_form_control = 4;
bool has_is_empty_text_form_control() const;
void clear_is_empty_text_form_control();
static const int kIsEmptyTextFormControlFieldNumber = 4;
bool is_empty_text_form_control() const;
void set_is_empty_text_form_control(bool value);

// @@protoc_insertion_point(class_scope:cc.proto.LayerSelection)
private:
inline void set_has_start();
inline void clear_has_start();
inline void set_has_end();
inline void clear_has_end();
inline void set_has_is_editable();
inline void clear_has_is_editable();
inline void set_has_is_empty_text_form_control();
inline void clear_has_is_empty_text_form_control();

::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
::google::protobuf::Arena* _arena_ptr_;

::google::protobuf::uint32 _has_bits_[1];
mutable int _cached_size_;
::cc::proto::LayerSelectionBound* start_;
::cc::proto::LayerSelectionBound* end_;
bool is_editable_;
bool is_empty_text_form_control_;
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
friend void CC_PROTO_EXPORT protobuf_AddDesc_layer_5fselection_5fbound_2eproto_impl();
#else
friend void CC_PROTO_EXPORT protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
#endif
friend void protobuf_AssignDesc_layer_5fselection_5fbound_2eproto();
friend void protobuf_ShutdownFile_layer_5fselection_5fbound_2eproto();

void InitAsDefaultInstance();
static LayerSelection* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LayerSelectionBound

// optional .cc.proto.LayerSelectionBound.SelectionBoundType type = 1;
inline bool LayerSelectionBound::has_type() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LayerSelectionBound::set_has_type() {
_has_bits_[0] |= 0x00000001u;
}
inline void LayerSelectionBound::clear_has_type() {
_has_bits_[0] &= ~0x00000001u;
}
inline void LayerSelectionBound::clear_type() {
type_ = 0;
clear_has_type();
}
inline ::cc::proto::LayerSelectionBound_SelectionBoundType LayerSelectionBound::type() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.type)
return static_cast< ::cc::proto::LayerSelectionBound_SelectionBoundType >(type_);
}
inline void LayerSelectionBound::set_type(::cc::proto::LayerSelectionBound_SelectionBoundType value) {
assert(::cc::proto::LayerSelectionBound_SelectionBoundType_IsValid(value));
set_has_type();
type_ = value;
// @@protoc_insertion_point(field_set:cc.proto.LayerSelectionBound.type)
}

// optional .cc.proto.Point edge_top = 2;
inline bool LayerSelectionBound::has_edge_top() const {
return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LayerSelectionBound::set_has_edge_top() {
_has_bits_[0] |= 0x00000002u;
}
inline void LayerSelectionBound::clear_has_edge_top() {
_has_bits_[0] &= ~0x00000002u;
}
inline void LayerSelectionBound::clear_edge_top() {
if (edge_top_ != NULL) edge_top_->::cc::proto::Point::Clear();
clear_has_edge_top();
}
inline const ::cc::proto::Point& LayerSelectionBound::edge_top() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.edge_top)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
return edge_top_ != NULL ? *edge_top_ : *default_instance().edge_top_;
#else
return edge_top_ != NULL ? *edge_top_ : *default_instance_->edge_top_;
#endif
}
inline ::cc::proto::Point* LayerSelectionBound::mutable_edge_top() {
set_has_edge_top();
if (edge_top_ == NULL) {
edge_top_ = new ::cc::proto::Point;
}
// @@protoc_insertion_point(field_mutable:cc.proto.LayerSelectionBound.edge_top)
return edge_top_;
}
inline ::cc::proto::Point* LayerSelectionBound::release_edge_top() {
// @@protoc_insertion_point(field_release:cc.proto.LayerSelectionBound.edge_top)
clear_has_edge_top();
::cc::proto::Point* temp = edge_top_;
edge_top_ = NULL;
return temp;
}
inline void LayerSelectionBound::set_allocated_edge_top(::cc::proto::Point* edge_top) {
delete edge_top_;
edge_top_ = edge_top;
if (edge_top) {
set_has_edge_top();
} else {
clear_has_edge_top();
}
// @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelectionBound.edge_top)
}

// optional .cc.proto.Point edge_bottom = 3;
inline bool LayerSelectionBound::has_edge_bottom() const {
return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LayerSelectionBound::set_has_edge_bottom() {
_has_bits_[0] |= 0x00000004u;
}
inline void LayerSelectionBound::clear_has_edge_bottom() {
_has_bits_[0] &= ~0x00000004u;
}
inline void LayerSelectionBound::clear_edge_bottom() {
if (edge_bottom_ != NULL) edge_bottom_->::cc::proto::Point::Clear();
clear_has_edge_bottom();
}
inline const ::cc::proto::Point& LayerSelectionBound::edge_bottom() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.edge_bottom)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
return edge_bottom_ != NULL ? *edge_bottom_ : *default_instance().edge_bottom_;
#else
return edge_bottom_ != NULL ? *edge_bottom_ : *default_instance_->edge_bottom_;
#endif
}
inline ::cc::proto::Point* LayerSelectionBound::mutable_edge_bottom() {
set_has_edge_bottom();
if (edge_bottom_ == NULL) {
edge_bottom_ = new ::cc::proto::Point;
}
// @@protoc_insertion_point(field_mutable:cc.proto.LayerSelectionBound.edge_bottom)
return edge_bottom_;
}
inline ::cc::proto::Point* LayerSelectionBound::release_edge_bottom() {
// @@protoc_insertion_point(field_release:cc.proto.LayerSelectionBound.edge_bottom)
clear_has_edge_bottom();
::cc::proto::Point* temp = edge_bottom_;
edge_bottom_ = NULL;
return temp;
}
inline void LayerSelectionBound::set_allocated_edge_bottom(::cc::proto::Point* edge_bottom) {
delete edge_bottom_;
edge_bottom_ = edge_bottom;
if (edge_bottom) {
set_has_edge_bottom();
} else {
clear_has_edge_bottom();
}
// @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelectionBound.edge_bottom)
}

// optional int32 layer_id = 4;
inline bool LayerSelectionBound::has_layer_id() const {
return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LayerSelectionBound::set_has_layer_id() {
_has_bits_[0] |= 0x00000008u;
}
inline void LayerSelectionBound::clear_has_layer_id() {
_has_bits_[0] &= ~0x00000008u;
}
inline void LayerSelectionBound::clear_layer_id() {
layer_id_ = 0;
clear_has_layer_id();
}
inline ::google::protobuf::int32 LayerSelectionBound::layer_id() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.layer_id)
return layer_id_;
}
inline void LayerSelectionBound::set_layer_id(::google::protobuf::int32 value) {
set_has_layer_id();
layer_id_ = value;
// @@protoc_insertion_point(field_set:cc.proto.LayerSelectionBound.layer_id)
}

// -------------------------------------------------------------------

// LayerSelection

// optional .cc.proto.LayerSelectionBound start = 1;
inline bool LayerSelection::has_start() const {
return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LayerSelection::set_has_start() {
_has_bits_[0] |= 0x00000001u;
}
inline void LayerSelection::clear_has_start() {
_has_bits_[0] &= ~0x00000001u;
}
inline void LayerSelection::clear_start() {
if (start_ != NULL) start_->::cc::proto::LayerSelectionBound::Clear();
clear_has_start();
}
inline const ::cc::proto::LayerSelectionBound& LayerSelection::start() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelection.start)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
return start_ != NULL ? *start_ : *default_instance().start_;
#else
return start_ != NULL ? *start_ : *default_instance_->start_;
#endif
}
inline ::cc::proto::LayerSelectionBound* LayerSelection::mutable_start() {
set_has_start();
if (start_ == NULL) {
start_ = new ::cc::proto::LayerSelectionBound;
}
// @@protoc_insertion_point(field_mutable:cc.proto.LayerSelection.start)
return start_;
}
inline ::cc::proto::LayerSelectionBound* LayerSelection::release_start() {
// @@protoc_insertion_point(field_release:cc.proto.LayerSelection.start)
clear_has_start();
::cc::proto::LayerSelectionBound* temp = start_;
start_ = NULL;
return temp;
}
inline void LayerSelection::set_allocated_start(::cc::proto::LayerSelectionBound* start) {
delete start_;
start_ = start;
if (start) {
set_has_start();
} else {
clear_has_start();
}
// @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelection.start)
}

// optional .cc.proto.LayerSelectionBound end = 2;
inline bool LayerSelection::has_end() const {
return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LayerSelection::set_has_end() {
_has_bits_[0] |= 0x00000002u;
}
inline void LayerSelection::clear_has_end() {
_has_bits_[0] &= ~0x00000002u;
}
inline void LayerSelection::clear_end() {
if (end_ != NULL) end_->::cc::proto::LayerSelectionBound::Clear();
clear_has_end();
}
inline const ::cc::proto::LayerSelectionBound& LayerSelection::end() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelection.end)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
return end_ != NULL ? *end_ : *default_instance().end_;
#else
return end_ != NULL ? *end_ : *default_instance_->end_;
#endif
}
inline ::cc::proto::LayerSelectionBound* LayerSelection::mutable_end() {
set_has_end();
if (end_ == NULL) {
end_ = new ::cc::proto::LayerSelectionBound;
}
// @@protoc_insertion_point(field_mutable:cc.proto.LayerSelection.end)
return end_;
}
inline ::cc::proto::LayerSelectionBound* LayerSelection::release_end() {
// @@protoc_insertion_point(field_release:cc.proto.LayerSelection.end)
clear_has_end();
::cc::proto::LayerSelectionBound* temp = end_;
end_ = NULL;
return temp;
}
inline void LayerSelection::set_allocated_end(::cc::proto::LayerSelectionBound* end) {
delete end_;
end_ = end;
if (end) {
set_has_end();
} else {
clear_has_end();
}
// @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelection.end)
}

// optional bool is_editable = 3;
inline bool LayerSelection::has_is_editable() const {
return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LayerSelection::set_has_is_editable() {
_has_bits_[0] |= 0x00000004u;
}
inline void LayerSelection::clear_has_is_editable() {
_has_bits_[0] &= ~0x00000004u;
}
inline void LayerSelection::clear_is_editable() {
is_editable_ = false;
clear_has_is_editable();
}
inline bool LayerSelection::is_editable() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelection.is_editable)
return is_editable_;
}
inline void LayerSelection::set_is_editable(bool value) {
set_has_is_editable();
is_editable_ = value;
// @@protoc_insertion_point(field_set:cc.proto.LayerSelection.is_editable)
}

// optional bool is_empty_text_form_control = 4;
inline bool LayerSelection::has_is_empty_text_form_control() const {
return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LayerSelection::set_has_is_empty_text_form_control() {
_has_bits_[0] |= 0x00000008u;
}
inline void LayerSelection::clear_has_is_empty_text_form_control() {
_has_bits_[0] &= ~0x00000008u;
}
inline void LayerSelection::clear_is_empty_text_form_control() {
is_empty_text_form_control_ = false;
clear_has_is_empty_text_form_control();
}
inline bool LayerSelection::is_empty_text_form_control() const {
// @@protoc_insertion_point(field_get:cc.proto.LayerSelection.is_empty_text_form_control)
return is_empty_text_form_control_;
}
inline void LayerSelection::set_is_empty_text_form_control(bool value) {
set_has_is_empty_text_form_control();
is_empty_text_form_control_ = value;
// @@protoc_insertion_point(field_set:cc.proto.LayerSelection.is_empty_text_form_control)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cc::proto::LayerSelectionBound_SelectionBoundType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_layer_5fselection_5fbound_2eproto__INCLUDED