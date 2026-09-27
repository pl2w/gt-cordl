#pragma once
// IWYU pragma private; include "System/Net/CredentialHostKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CredentialHostKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::CredentialHostKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialHostKey::*)(::StringW, int32_t, ::StringW)>(&::System::Net::CredentialHostKey::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac55608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialHostKey.Match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialHostKey::*)(::StringW, int32_t, ::StringW)>(&::System::Net::CredentialHostKey::Match)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac56044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                        {"Match", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialHostKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CredentialHostKey::*)()>(&::System::Net::CredentialHostKey::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xac5665c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                    {::i2c::class_of<::System::Net::CredentialHostKey*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialHostKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialHostKey::*)(::System::Object*)>(&::System::Net::CredentialHostKey::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xac566f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                    {::i2c::class_of<::System::Net::CredentialHostKey*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialHostKey.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CredentialHostKey::*)()>(&::System::Net::CredentialHostKey::ToString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xac567b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                    {::i2c::class_of<::System::Net::CredentialHostKey*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::CredentialHostKey::__cordl_internal_get_Host()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Host;
}
constexpr ::StringW const& System::Net::CredentialHostKey::__cordl_internal_get_Host() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Host;
}
constexpr void System::Net::CredentialHostKey::__cordl_internal_set_Host(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Host = value;
}
constexpr ::StringW& System::Net::CredentialHostKey::__cordl_internal_get_AuthenticationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationType;
}
constexpr ::StringW const& System::Net::CredentialHostKey::__cordl_internal_get_AuthenticationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationType;
}
constexpr void System::Net::CredentialHostKey::__cordl_internal_set_AuthenticationType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthenticationType = value;
}
constexpr int32_t& System::Net::CredentialHostKey::__cordl_internal_get_Port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr int32_t const& System::Net::CredentialHostKey::__cordl_internal_get_Port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Port;
}
constexpr void System::Net::CredentialHostKey::__cordl_internal_set_Port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Port = value;
}
constexpr int32_t& System::Net::CredentialHostKey::__cordl_internal_get_m_HashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCode;
}
constexpr int32_t const& System::Net::CredentialHostKey::__cordl_internal_get_m_HashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HashCode;
}
constexpr void System::Net::CredentialHostKey::__cordl_internal_set_m_HashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HashCode = value;
}
constexpr bool& System::Net::CredentialHostKey::__cordl_internal_get_m_ComputedHashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComputedHashCode;
}
constexpr bool const& System::Net::CredentialHostKey::__cordl_internal_get_m_ComputedHashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComputedHashCode;
}
constexpr void System::Net::CredentialHostKey::__cordl_internal_set_m_ComputedHashCode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ComputedHashCode = value;
}
inline void System::Net::CredentialHostKey::_ctor(::StringW  host, int32_t  port, ::StringW  authenticationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, port, authenticationType);
}
inline bool System::Net::CredentialHostKey::Match(::StringW  host, int32_t  port, ::StringW  authenticationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialHostKey*>(),
                        {"Match", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host, port, authenticationType);
}
inline int32_t System::Net::CredentialHostKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CredentialHostKey*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::CredentialHostKey::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CredentialHostKey*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline ::StringW System::Net::CredentialHostKey::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CredentialHostKey*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::CredentialHostKey* System::Net::CredentialHostKey::New_ctor(::StringW  host, int32_t  port, ::StringW  authenticationType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CredentialHostKey*>(host, port, authenticationType));
}
// Ctor Parameters []
constexpr ::System::Net::CredentialHostKey::CredentialHostKey()   {
}
