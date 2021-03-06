// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#ifndef PROTOBUF_address_2eproto__INCLUDED
#define PROTOBUF_address_2eproto__INCLUDED

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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_address_2eproto();
void protobuf_AssignDesc_address_2eproto();
void protobuf_ShutdownFile_address_2eproto();

class av_address;

// ===================================================================

class av_address : public ::google::protobuf::Message {
 public:
  av_address();
  virtual ~av_address();

  av_address(const av_address& from);

  inline av_address& operator=(const av_address& from) {
    CopyFrom(from);
    return *this;
  }

  #if __cplusplus >= 201103L || _MSC_VER >= 1600
  inline av_address& operator=(av_address&& from) {
    if (&from != this) {
      Clear();
      Swap(&from);
    }
    return *this;
  }

  av_address(av_address&& from);
  #endif

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const av_address& default_instance();

  void Swap(av_address* other);

  // implements Message ----------------------------------------------

  inline av_address* New() const { return New(NULL); }

  av_address* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const av_address& from);
  void MergeFrom(const av_address& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(av_address* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string username = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // required string domain = 2;
  inline bool has_domain() const;
  inline void clear_domain();
  static const int kDomainFieldNumber = 2;
  inline const ::std::string& domain() const;
  inline void set_domain(const ::std::string& value);
  inline void set_domain(const char* value);
  inline void set_domain(const char* value, size_t size);
  inline ::std::string* mutable_domain();
  inline ::std::string* release_domain();
  inline void set_allocated_domain(::std::string* domain);

  // optional string resource = 3;
  inline bool has_resource() const;
  inline void clear_resource();
  static const int kResourceFieldNumber = 3;
  inline const ::std::string& resource() const;
  inline void set_resource(const ::std::string& value);
  inline void set_resource(const char* value);
  inline void set_resource(const char* value, size_t size);
  inline ::std::string* mutable_resource();
  inline ::std::string* release_resource();
  inline void set_allocated_resource(::std::string* resource);

  // @@protoc_insertion_point(class_scope:proto.av_address)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_domain();
  inline void clear_has_domain();
  inline void set_has_resource();
  inline void clear_has_resource();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr domain_;
  ::google::protobuf::internal::ArenaStringPtr resource_;
  friend void  protobuf_AddDesc_address_2eproto();
  friend void protobuf_AssignDesc_address_2eproto();
  friend void protobuf_ShutdownFile_address_2eproto();

  void InitAsDefaultInstance();
  static av_address* default_instance_;
};
// ===================================================================


// ===================================================================

// av_address

// required string username = 1;
inline bool av_address::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void av_address::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void av_address::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void av_address::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_username();
}
inline const ::std::string& av_address::username() const {
  // @@protoc_insertion_point(field_get:proto.av_address.username)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void av_address::set_username(const ::std::string& value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.av_address.username)
}
inline void av_address::set_username(const char* value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.av_address.username)
}
inline void av_address::set_username(const char* value, size_t size) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.av_address.username)
}
inline ::std::string* av_address::mutable_username() {
  set_has_username();
  // @@protoc_insertion_point(field_mutable:proto.av_address.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* av_address::release_username() {
  clear_has_username();
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void av_address::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    set_has_username();
  } else {
    clear_has_username();
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:proto.av_address.username)
}

// required string domain = 2;
inline bool av_address::has_domain() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void av_address::set_has_domain() {
  _has_bits_[0] |= 0x00000002u;
}
inline void av_address::clear_has_domain() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void av_address::clear_domain() {
  domain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_domain();
}
inline const ::std::string& av_address::domain() const {
  // @@protoc_insertion_point(field_get:proto.av_address.domain)
  return domain_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void av_address::set_domain(const ::std::string& value) {
  set_has_domain();
  domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.av_address.domain)
}
inline void av_address::set_domain(const char* value) {
  set_has_domain();
  domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.av_address.domain)
}
inline void av_address::set_domain(const char* value, size_t size) {
  set_has_domain();
  domain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.av_address.domain)
}
inline ::std::string* av_address::mutable_domain() {
  set_has_domain();
  // @@protoc_insertion_point(field_mutable:proto.av_address.domain)
  return domain_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* av_address::release_domain() {
  clear_has_domain();
  return domain_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void av_address::set_allocated_domain(::std::string* domain) {
  if (domain != NULL) {
    set_has_domain();
  } else {
    clear_has_domain();
  }
  domain_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), domain);
  // @@protoc_insertion_point(field_set_allocated:proto.av_address.domain)
}

// optional string resource = 3;
inline bool av_address::has_resource() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void av_address::set_has_resource() {
  _has_bits_[0] |= 0x00000004u;
}
inline void av_address::clear_has_resource() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void av_address::clear_resource() {
  resource_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_resource();
}
inline const ::std::string& av_address::resource() const {
  // @@protoc_insertion_point(field_get:proto.av_address.resource)
  return resource_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void av_address::set_resource(const ::std::string& value) {
  set_has_resource();
  resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.av_address.resource)
}
inline void av_address::set_resource(const char* value) {
  set_has_resource();
  resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.av_address.resource)
}
inline void av_address::set_resource(const char* value, size_t size) {
  set_has_resource();
  resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.av_address.resource)
}
inline ::std::string* av_address::mutable_resource() {
  set_has_resource();
  // @@protoc_insertion_point(field_mutable:proto.av_address.resource)
  return resource_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* av_address::release_resource() {
  clear_has_resource();
  return resource_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void av_address::set_allocated_resource(::std::string* resource) {
  if (resource != NULL) {
    set_has_resource();
  } else {
    clear_has_resource();
  }
  resource_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource);
  // @@protoc_insertion_point(field_set_allocated:proto.av_address.resource)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_address_2eproto__INCLUDED
