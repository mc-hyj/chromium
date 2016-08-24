// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: extension_setting_specifics.proto

#ifndef PROTOBUF_extension_5fsetting_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_extension_5fsetting_5fspecifics_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sync_pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_extension_5fsetting_5fspecifics_2eproto();
void protobuf_AssignDesc_extension_5fsetting_5fspecifics_2eproto();
void protobuf_ShutdownFile_extension_5fsetting_5fspecifics_2eproto();

class ExtensionSettingSpecifics;

// ===================================================================

class ExtensionSettingSpecifics : public ::google::protobuf::MessageLite {
 public:
  ExtensionSettingSpecifics();
  virtual ~ExtensionSettingSpecifics();

  ExtensionSettingSpecifics(const ExtensionSettingSpecifics& from);

  inline ExtensionSettingSpecifics& operator=(const ExtensionSettingSpecifics& from) {
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

  static const ExtensionSettingSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ExtensionSettingSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ExtensionSettingSpecifics* other);

  // implements Message ----------------------------------------------

  inline ExtensionSettingSpecifics* New() const { return New(NULL); }

  ExtensionSettingSpecifics* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ExtensionSettingSpecifics& from);
  void MergeFrom(const ExtensionSettingSpecifics& from);
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
  void InternalSwap(ExtensionSettingSpecifics* other);
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

  // optional string extension_id = 1;
  bool has_extension_id() const;
  void clear_extension_id();
  static const int kExtensionIdFieldNumber = 1;
  const ::std::string& extension_id() const;
  void set_extension_id(const ::std::string& value);
  void set_extension_id(const char* value);
  void set_extension_id(const char* value, size_t size);
  ::std::string* mutable_extension_id();
  ::std::string* release_extension_id();
  void set_allocated_extension_id(::std::string* extension_id);

  // optional string key = 2;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 2;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 3;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:sync_pb.ExtensionSettingSpecifics)
 private:
  inline void set_has_extension_id();
  inline void clear_has_extension_id();
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr extension_id_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_extension_5fsetting_5fspecifics_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_extension_5fsetting_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_extension_5fsetting_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_extension_5fsetting_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static ExtensionSettingSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ExtensionSettingSpecifics

// optional string extension_id = 1;
inline bool ExtensionSettingSpecifics::has_extension_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExtensionSettingSpecifics::set_has_extension_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExtensionSettingSpecifics::clear_has_extension_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExtensionSettingSpecifics::clear_extension_id() {
  extension_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_extension_id();
}
inline const ::std::string& ExtensionSettingSpecifics::extension_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSettingSpecifics.extension_id)
  return extension_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExtensionSettingSpecifics::set_extension_id(const ::std::string& value) {
  set_has_extension_id();
  extension_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSettingSpecifics.extension_id)
}
inline void ExtensionSettingSpecifics::set_extension_id(const char* value) {
  set_has_extension_id();
  extension_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSettingSpecifics.extension_id)
}
inline void ExtensionSettingSpecifics::set_extension_id(const char* value, size_t size) {
  set_has_extension_id();
  extension_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSettingSpecifics.extension_id)
}
inline ::std::string* ExtensionSettingSpecifics::mutable_extension_id() {
  set_has_extension_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSettingSpecifics.extension_id)
  return extension_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExtensionSettingSpecifics::release_extension_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSettingSpecifics.extension_id)
  clear_has_extension_id();
  return extension_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExtensionSettingSpecifics::set_allocated_extension_id(::std::string* extension_id) {
  if (extension_id != NULL) {
    set_has_extension_id();
  } else {
    clear_has_extension_id();
  }
  extension_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extension_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSettingSpecifics.extension_id)
}

// optional string key = 2;
inline bool ExtensionSettingSpecifics::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExtensionSettingSpecifics::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExtensionSettingSpecifics::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExtensionSettingSpecifics::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& ExtensionSettingSpecifics::key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSettingSpecifics.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExtensionSettingSpecifics::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSettingSpecifics.key)
}
inline void ExtensionSettingSpecifics::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSettingSpecifics.key)
}
inline void ExtensionSettingSpecifics::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSettingSpecifics.key)
}
inline ::std::string* ExtensionSettingSpecifics::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSettingSpecifics.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExtensionSettingSpecifics::release_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSettingSpecifics.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExtensionSettingSpecifics::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSettingSpecifics.key)
}

// optional string value = 3;
inline bool ExtensionSettingSpecifics::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ExtensionSettingSpecifics::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ExtensionSettingSpecifics::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ExtensionSettingSpecifics::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& ExtensionSettingSpecifics::value() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSettingSpecifics.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExtensionSettingSpecifics::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSettingSpecifics.value)
}
inline void ExtensionSettingSpecifics::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSettingSpecifics.value)
}
inline void ExtensionSettingSpecifics::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSettingSpecifics.value)
}
inline ::std::string* ExtensionSettingSpecifics::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSettingSpecifics.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExtensionSettingSpecifics::release_value() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSettingSpecifics.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExtensionSettingSpecifics::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSettingSpecifics.value)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_extension_5fsetting_5fspecifics_2eproto__INCLUDED