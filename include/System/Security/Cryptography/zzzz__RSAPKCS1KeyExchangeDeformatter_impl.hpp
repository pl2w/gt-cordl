#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1KeyExchangeDeformatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeDeformatter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1KeyExchangeDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1774f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa175268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.get_RNG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_RNG)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1774fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {"get_RNG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.set_RNG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::System::Security::Cryptography::RandomNumberGenerator*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_RNG)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa177504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {"set_RNG", {}, {::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17750c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.set_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::StringW)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_Parameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa177514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.DecryptKeyExchange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa177518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa177908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter.get_OverridesDecrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_OverridesDecrypt)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa177710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {"get_OverridesDecrypt", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RSA*& System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_get__rsaKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaKey;
}
constexpr ::System::Security::Cryptography::RSA* const& System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_get__rsaKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaKey;
}
constexpr void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_set__rsaKey(::System::Security::Cryptography::RSA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsaKey = value;
}
constexpr ::System::Nullable_1<bool>& System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_get__rsaOverridesDecrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaOverridesDecrypt;
}
constexpr ::System::Nullable_1<bool> const& System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_get__rsaOverridesDecrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaOverridesDecrypt;
}
constexpr void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_set__rsaOverridesDecrypt(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsaOverridesDecrypt = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_get_RngValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RngValue;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_get_RngValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RngValue;
}
constexpr void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::__cordl_internal_set_RngValue(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RngValue = value;
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_RNG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {"get_RNG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_RNG(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {"set_RNG", {}, {::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_Parameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::set_Parameters(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(::ArrayW<uint8_t>  rgbIn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbIn);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline bool System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::get_OverridesDecrypt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(),
                        {"get_OverridesDecrypt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter* System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>());
}
inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter* System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter::RSAPKCS1KeyExchangeDeformatter()   {
}
