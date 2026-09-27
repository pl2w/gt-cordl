#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspKeyContainerInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CspKeyContainerInfo_def.hpp"
#include "System/Security/AccessControl/zzzz__CryptoKeySecurity_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__KeyNumber_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CspKeyContainerInfo::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::CspKeyContainerInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa176460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_Accessible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_Accessible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Accessible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_CryptoKeySecurity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::CryptoKeySecurity* (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_CryptoKeySecurity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_CryptoKeySecurity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_Exportable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_Exportable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Exportable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_HardwareDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_HardwareDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_HardwareDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_KeyContainerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_KeyContainerName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa181c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_KeyContainerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_KeyNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeyNumber (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_KeyNumber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa181c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_KeyNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_MachineKeyStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_MachineKeyStore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_MachineKeyStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_Protected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_Protected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Protected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_ProviderName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_ProviderName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa181c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_ProviderName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_ProviderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_ProviderType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa181c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_ProviderType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_RandomlyGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_RandomlyGenerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_RandomlyGenerated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_Removable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_Removable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa181c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Removable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CspKeyContainerInfo.get_UniqueKeyContainerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::CspKeyContainerInfo::*)()>(&::System::Security::Cryptography::CspKeyContainerInfo::get_UniqueKeyContainerName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa181c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_UniqueKeyContainerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::CspParameters*& System::Security::Cryptography::CspKeyContainerInfo::__cordl_internal_get__params()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____params;
}
constexpr ::System::Security::Cryptography::CspParameters* const& System::Security::Cryptography::CspKeyContainerInfo::__cordl_internal_get__params() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____params;
}
constexpr void System::Security::Cryptography::CspKeyContainerInfo::__cordl_internal_set__params(::System::Security::Cryptography::CspParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____params = value;
}
constexpr bool& System::Security::Cryptography::CspKeyContainerInfo::__cordl_internal_get__random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr bool const& System::Security::Cryptography::CspKeyContainerInfo::__cordl_internal_get__random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr void System::Security::Cryptography::CspKeyContainerInfo::__cordl_internal_set__random(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____random = value;
}
inline void System::Security::Cryptography::CspKeyContainerInfo::_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_Accessible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Accessible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::AccessControl::CryptoKeySecurity* System::Security::Cryptography::CspKeyContainerInfo::get_CryptoKeySecurity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_CryptoKeySecurity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::CryptoKeySecurity*>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_Exportable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Exportable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_HardwareDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_HardwareDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::CspKeyContainerInfo::get_KeyContainerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_KeyContainerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::KeyNumber System::Security::Cryptography::CspKeyContainerInfo::get_KeyNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_KeyNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeyNumber>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_MachineKeyStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_MachineKeyStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_Protected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Protected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::CspKeyContainerInfo::get_ProviderName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_ProviderName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::CspKeyContainerInfo::get_ProviderType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_ProviderType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_RandomlyGenerated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_RandomlyGenerated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CspKeyContainerInfo::get_Removable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_Removable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::CspKeyContainerInfo::get_UniqueKeyContainerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CspKeyContainerInfo*>(),
                        {"get_UniqueKeyContainerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CspKeyContainerInfo* System::Security::Cryptography::CspKeyContainerInfo::New_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CspKeyContainerInfo*>(parameters));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CspKeyContainerInfo::CspKeyContainerInfo()   {
}
