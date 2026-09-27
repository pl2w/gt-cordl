#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspParameters.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/AccessControl/zzzz__CryptoKeySecurity_def.hpp"
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
#include "System/Security/zzzz__SecureString_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CspProviderFlags (::System::Security::Cryptography::CspParameters::*)()>(&::System::Security::Cryptography::CspParameters::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(::System::Security::Cryptography::CspProviderFlags)>(&::System::Security::Cryptography::CspParameters::set_Flags)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa163df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_Flags", {}, {::i2c::type_of<::System::Security::Cryptography::CspProviderFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.get_CryptoKeySecurity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::CryptoKeySecurity* (::System::Security::Cryptography::CspParameters::*)()>(&::System::Security::Cryptography::CspParameters::get_CryptoKeySecurity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_CryptoKeySecurity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.set_CryptoKeySecurity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(::System::Security::AccessControl::CryptoKeySecurity*)>(&::System::Security::Cryptography::CspParameters::set_CryptoKeySecurity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_CryptoKeySecurity", {}, {::i2c::type_of<::System::Security::AccessControl::CryptoKeySecurity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.get_KeyPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecureString* (::System::Security::Cryptography::CspParameters::*)()>(&::System::Security::Cryptography::CspParameters::get_KeyPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_KeyPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.set_KeyPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(::System::Security::SecureString*)>(&::System::Security::Cryptography::CspParameters::set_KeyPassword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa163ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_KeyPassword", {}, {::i2c::type_of<::System::Security::SecureString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.get_ParentWindowHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Security::Cryptography::CspParameters::*)()>(&::System::Security::Cryptography::CspParameters::get_ParentWindowHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_ParentWindowHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters.set_ParentWindowHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(::System::IntPtr)>(&::System::Security::Cryptography::CspParameters::set_ParentWindowHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa163f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_ParentWindowHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)()>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa163f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(int32_t)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa163f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(int32_t, ::StringW)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa163f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(int32_t, ::StringW, ::StringW)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(int32_t, ::StringW, ::StringW, ::System::Security::AccessControl::CryptoKeySecurity*, ::System::Security::SecureString*)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa163fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::CryptoKeySecurity*>(), ::i2c::type_of<::System::Security::SecureString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(int32_t, ::StringW, ::StringW, ::System::Security::AccessControl::CryptoKeySecurity*, ::System::IntPtr)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa164008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::CryptoKeySecurity*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(int32_t, ::StringW, ::StringW, ::System::Security::Cryptography::CspProviderFlags)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa163f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::CspProviderFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspParameters::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::CspParameters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa164044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::CspParameters::__cordl_internal_get_ProviderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderType;
}
constexpr int32_t const& System::Security::Cryptography::CspParameters::__cordl_internal_get_ProviderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderType;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_ProviderType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderType = value;
}
constexpr ::StringW& System::Security::Cryptography::CspParameters::__cordl_internal_get_ProviderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderName;
}
constexpr ::StringW const& System::Security::Cryptography::CspParameters::__cordl_internal_get_ProviderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderName;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_ProviderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderName = value;
}
constexpr ::StringW& System::Security::Cryptography::CspParameters::__cordl_internal_get_KeyContainerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyContainerName;
}
constexpr ::StringW const& System::Security::Cryptography::CspParameters::__cordl_internal_get_KeyContainerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyContainerName;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_KeyContainerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyContainerName = value;
}
constexpr int32_t& System::Security::Cryptography::CspParameters::__cordl_internal_get_KeyNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyNumber;
}
constexpr int32_t const& System::Security::Cryptography::CspParameters::__cordl_internal_get_KeyNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyNumber;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_KeyNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyNumber = value;
}
constexpr int32_t& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_flags;
}
constexpr int32_t const& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_flags;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_m_flags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_flags = value;
}
constexpr ::System::Security::AccessControl::CryptoKeySecurity*& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_cryptoKeySecurity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cryptoKeySecurity;
}
constexpr ::System::Security::AccessControl::CryptoKeySecurity* const& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_cryptoKeySecurity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cryptoKeySecurity;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_m_cryptoKeySecurity(::System::Security::AccessControl::CryptoKeySecurity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cryptoKeySecurity = value;
}
constexpr ::System::Security::SecureString*& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_keyPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_keyPassword;
}
constexpr ::System::Security::SecureString* const& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_keyPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_keyPassword;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_m_keyPassword(::System::Security::SecureString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_keyPassword = value;
}
constexpr ::System::IntPtr& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_parentWindowHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_parentWindowHandle;
}
constexpr ::System::IntPtr const& System::Security::Cryptography::CspParameters::__cordl_internal_get_m_parentWindowHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_parentWindowHandle;
}
constexpr void System::Security::Cryptography::CspParameters::__cordl_internal_set_m_parentWindowHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_parentWindowHandle = value;
}
inline ::System::Security::Cryptography::CspProviderFlags System::Security::Cryptography::CspParameters::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspProviderFlags>(this, ___internal_method);
}
inline void System::Security::Cryptography::CspParameters::set_Flags(::System::Security::Cryptography::CspProviderFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_Flags", {}, {::i2c::type_of<::System::Security::Cryptography::CspProviderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::AccessControl::CryptoKeySecurity* System::Security::Cryptography::CspParameters::get_CryptoKeySecurity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_CryptoKeySecurity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::CryptoKeySecurity*>(this, ___internal_method);
}
inline void System::Security::Cryptography::CspParameters::set_CryptoKeySecurity(::System::Security::AccessControl::CryptoKeySecurity*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_CryptoKeySecurity", {}, {::i2c::type_of<::System::Security::AccessControl::CryptoKeySecurity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::SecureString* System::Security::Cryptography::CspParameters::get_KeyPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_KeyPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::SecureString*>(this, ___internal_method);
}
inline void System::Security::Cryptography::CspParameters::set_KeyPassword(::System::Security::SecureString*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_KeyPassword", {}, {::i2c::type_of<::System::Security::SecureString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr System::Security::Cryptography::CspParameters::get_ParentWindowHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"get_ParentWindowHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void System::Security::Cryptography::CspParameters::set_ParentWindowHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {"set_ParentWindowHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::CspParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::CspParameters::_ctor(int32_t  dwTypeIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwTypeIn);
}
inline void System::Security::Cryptography::CspParameters::_ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwTypeIn, strProviderNameIn);
}
inline void System::Security::Cryptography::CspParameters::_ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn, ::StringW  strContainerNameIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwTypeIn, strProviderNameIn, strContainerNameIn);
}
inline void System::Security::Cryptography::CspParameters::_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::Security::SecureString*  keyPassword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::CryptoKeySecurity*>(), ::i2c::type_of<::System::Security::SecureString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerType, providerName, keyContainerName, cryptoKeySecurity, keyPassword);
}
inline void System::Security::Cryptography::CspParameters::_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::IntPtr  parentWindowHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::CryptoKeySecurity*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerType, providerName, keyContainerName, cryptoKeySecurity, parentWindowHandle);
}
inline void System::Security::Cryptography::CspParameters::_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::Cryptography::CspProviderFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::CspProviderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerType, providerName, keyContainerName, flags);
}
inline void System::Security::Cryptography::CspParameters::_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspParameters*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>());
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int32_t  dwTypeIn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(dwTypeIn));
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(dwTypeIn, strProviderNameIn));
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn, ::StringW  strContainerNameIn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(dwTypeIn, strProviderNameIn, strContainerNameIn));
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::Security::SecureString*  keyPassword)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(providerType, providerName, keyContainerName, cryptoKeySecurity, keyPassword));
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::IntPtr  parentWindowHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(providerType, providerName, keyContainerName, cryptoKeySecurity, parentWindowHandle));
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::Cryptography::CspProviderFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(providerType, providerName, keyContainerName, flags));
}
inline ::System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspParameters*>(parameters));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CspParameters::CspParameters()   {
}
