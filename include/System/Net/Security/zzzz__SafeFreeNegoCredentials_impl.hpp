#pragma once
// IWYU pragma private; include "System/Net/Security/SafeFreeNegoCredentials.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_impl.hpp"
#include "System/Net/Security/zzzz__SafeFreeNegoCredentials_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssCredHandle_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials.get_GssCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssCredHandle* (::System::Net::Security::SafeFreeNegoCredentials::*)()>(&::System::Net::Security::SafeFreeNegoCredentials::get_GssCredential)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_GssCredential", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials.get_IsNtlmOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeFreeNegoCredentials::*)()>(&::System::Net::Security::SafeFreeNegoCredentials::get_IsNtlmOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_IsNtlmOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials.get_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Security::SafeFreeNegoCredentials::*)()>(&::System::Net::Security::SafeFreeNegoCredentials::get_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_UserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeFreeNegoCredentials::*)()>(&::System::Net::Security::SafeFreeNegoCredentials::get_IsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_IsDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeFreeNegoCredentials::*)(bool, ::StringW, ::StringW, ::StringW)>(&::System::Net::Security::SafeFreeNegoCredentials::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xacf3e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeFreeNegoCredentials::*)()>(&::System::Net::Security::SafeFreeNegoCredentials::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacf4a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                    {::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeFreeNegoCredentials.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeFreeNegoCredentials::*)()>(&::System::Net::Security::SafeFreeNegoCredentials::ReleaseHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf4a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                    {::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__credential()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credential;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* const& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__credential() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credential;
}
constexpr void System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_set__credential(::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credential = value;
}
constexpr bool& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__isNtlmOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNtlmOnly;
}
constexpr bool const& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__isNtlmOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNtlmOnly;
}
constexpr void System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_set__isNtlmOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isNtlmOnly = value;
}
constexpr ::StringW& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__userName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userName;
}
constexpr ::StringW const& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__userName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userName;
}
constexpr void System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_set__userName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userName = value;
}
constexpr bool& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__isDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefault;
}
constexpr bool const& System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_get__isDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefault;
}
constexpr void System::Net::Security::SafeFreeNegoCredentials::__cordl_internal_set__isDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDefault = value;
}
inline ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* System::Net::Security::SafeFreeNegoCredentials::get_GssCredential()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_GssCredential", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(this, ___internal_method);
}
inline bool System::Net::Security::SafeFreeNegoCredentials::get_IsNtlmOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_IsNtlmOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::Security::SafeFreeNegoCredentials::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_UserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::Security::SafeFreeNegoCredentials::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {"get_IsDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Security::SafeFreeNegoCredentials::_ctor(bool  isNtlmOnly, ::StringW  username, ::StringW  password, ::StringW  domain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isNtlmOnly, username, password, domain);
}
inline bool System::Net::Security::SafeFreeNegoCredentials::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Security::SafeFreeNegoCredentials::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Security::SafeFreeNegoCredentials*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Security::SafeFreeNegoCredentials* System::Net::Security::SafeFreeNegoCredentials::New_ctor(bool  isNtlmOnly, ::StringW  username, ::StringW  password, ::StringW  domain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SafeFreeNegoCredentials*>(isNtlmOnly, username, password, domain));
}
// Ctor Parameters []
constexpr ::System::Net::Security::SafeFreeNegoCredentials::SafeFreeNegoCredentials()   {
}
