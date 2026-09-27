#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1KeyExchangeFormatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeFormatter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1KeyExchangeFormatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa177a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa1754fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::get_Parameters)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa177a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.get_Rng
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::get_Rng)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa177a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {"get_Rng", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.set_Rng
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)(::System::Security::Cryptography::RandomNumberGenerator*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::set_Rng)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa177a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {"set_Rng", {}, {::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::SetKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa177a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.CreateKeyExchange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::CreateKeyExchange)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa177b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.CreateKeyExchange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)(::ArrayW<uint8_t>, ::System::Type*)>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::CreateKeyExchange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa17807c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter.get_OverridesEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::*)()>(&::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::get_OverridesEncrypt)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa177e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {"get_OverridesEncrypt", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_get_RngValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RngValue;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_get_RngValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RngValue;
}
constexpr void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_set_RngValue(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RngValue = value;
}
constexpr ::System::Security::Cryptography::RSA*& System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_get__rsaKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaKey;
}
constexpr ::System::Security::Cryptography::RSA* const& System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_get__rsaKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaKey;
}
constexpr void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_set__rsaKey(::System::Security::Cryptography::RSA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsaKey = value;
}
constexpr ::System::Nullable_1<bool>& System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_get__rsaOverridesEncrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaOverridesEncrypt;
}
constexpr ::System::Nullable_1<bool> const& System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_get__rsaOverridesEncrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rsaOverridesEncrypt;
}
constexpr void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::__cordl_internal_set__rsaOverridesEncrypt(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rsaOverridesEncrypt = value;
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::StringW System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::get_Parameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::get_Rng()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {"get_Rng", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::set_Rng(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {"set_Rng", {}, {::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(::ArrayW<uint8_t>  rgbData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbData);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(::ArrayW<uint8_t>  rgbData, ::System::Type*  symAlgType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbData, symAlgType);
}
inline bool System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::get_OverridesEncrypt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(),
                        {"get_OverridesEncrypt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter* System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>());
}
inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter* System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter::RSAPKCS1KeyExchangeFormatter()   {
}
