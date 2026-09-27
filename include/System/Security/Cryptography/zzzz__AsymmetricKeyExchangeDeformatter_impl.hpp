#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricKeyExchangeDeformatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::*)()>(&::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa16288c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::*)()>(&::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::get_Parameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter.set_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::*)(::StringW)>(&::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::set_Parameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter.DecryptKeyExchange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::DecryptKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::get_Parameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::set_Parameters(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::DecryptKeyExchange(::ArrayW<uint8_t>  rgb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter* System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter::AsymmetricKeyExchangeDeformatter()   {
}
