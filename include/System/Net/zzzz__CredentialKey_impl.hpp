#pragma once
// IWYU pragma private; include "System/Net/CredentialKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CredentialKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::CredentialKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialKey::*)(::System::Uri*, ::StringW)>(&::System::Net::CredentialKey::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac55280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialKey*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialKey.Match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialKey::*)(::System::Uri*, ::StringW)>(&::System::Net::CredentialKey::Match)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xac55be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialKey*>(),
                        {"Match", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialKey.IsPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialKey::*)(::System::Uri*, ::System::Uri*)>(&::System::Net::CredentialKey::IsPrefix)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xac56b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialKey*>(),
                        {"IsPrefix", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CredentialKey::*)()>(&::System::Net::CredentialKey::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xac56ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CredentialKey*>(),
                    {::i2c::class_of<::System::Net::CredentialKey*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialKey::*)(::System::Object*)>(&::System::Net::CredentialKey::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xac56d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CredentialKey*>(),
                    {::i2c::class_of<::System::Net::CredentialKey*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialKey.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CredentialKey::*)()>(&::System::Net::CredentialKey::ToString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xac56dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CredentialKey*>(),
                    {::i2c::class_of<::System::Net::CredentialKey*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::CredentialKey::__cordl_internal_get_UriPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UriPrefix;
}
constexpr ::System::Uri* const& System::Net::CredentialKey::__cordl_internal_get_UriPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UriPrefix;
}
constexpr void System::Net::CredentialKey::__cordl_internal_set_UriPrefix(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UriPrefix = value;
}
constexpr int32_t& System::Net::CredentialKey::__cordl_internal_get_UriPrefixLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UriPrefixLength;
}
constexpr int32_t const& System::Net::CredentialKey::__cordl_internal_get_UriPrefixLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UriPrefixLength;
}
constexpr void System::Net::CredentialKey::__cordl_internal_set_UriPrefixLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UriPrefixLength = value;
}
constexpr ::StringW& System::Net::CredentialKey::__cordl_internal_get_AuthenticationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationType;
}
constexpr ::StringW const& System::Net::CredentialKey::__cordl_internal_get_AuthenticationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationType;
}
constexpr void System::Net::CredentialKey::__cordl_internal_set_AuthenticationType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthenticationType = value;
}
constexpr int32_t& System::Net::CredentialKey::__cordl_internal_get_m_HashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCode;
}
constexpr int32_t const& System::Net::CredentialKey::__cordl_internal_get_m_HashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCode;
}
constexpr void System::Net::CredentialKey::__cordl_internal_set_m_HashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HashCode = value;
}
constexpr bool& System::Net::CredentialKey::__cordl_internal_get_m_ComputedHashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComputedHashCode;
}
constexpr bool const& System::Net::CredentialKey::__cordl_internal_get_m_ComputedHashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComputedHashCode;
}
constexpr void System::Net::CredentialKey::__cordl_internal_set_m_ComputedHashCode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ComputedHashCode = value;
}
inline void System::Net::CredentialKey::_ctor(::System::Uri*  uriPrefix, ::StringW  authenticationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialKey*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uriPrefix, authenticationType);
}
inline bool System::Net::CredentialKey::Match(::System::Uri*  uri, ::StringW  authenticationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialKey*>(),
                        {"Match", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri, authenticationType);
}
inline bool System::Net::CredentialKey::IsPrefix(::System::Uri*  uri, ::System::Uri*  prefixUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialKey*>(),
                        {"IsPrefix", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri, prefixUri);
}
inline int32_t System::Net::CredentialKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CredentialKey*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::CredentialKey::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CredentialKey*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline ::StringW System::Net::CredentialKey::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CredentialKey*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::CredentialKey* System::Net::CredentialKey::New_ctor(::System::Uri*  uriPrefix, ::StringW  authenticationType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CredentialKey*>(uriPrefix, authenticationType));
}
// Ctor Parameters []
constexpr ::System::Net::CredentialKey::CredentialKey()   {
}
