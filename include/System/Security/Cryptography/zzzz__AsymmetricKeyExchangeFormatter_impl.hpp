#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricKeyExchangeFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeFormatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::*)()>(&::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::*)()>(&::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::get_Parameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::SetKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter.CreateKeyExchange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::CreateKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter.CreateKeyExchange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::*)(::ArrayW<uint8_t>, ::System::Type*)>(&::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::CreateKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AsymmetricKeyExchangeFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::AsymmetricKeyExchangeFormatter::get_Parameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricKeyExchangeFormatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricKeyExchangeFormatter::CreateKeyExchange(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricKeyExchangeFormatter::CreateKeyExchange(::ArrayW<uint8_t>  data, ::System::Type*  symAlgType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, symAlgType);
}
inline ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter* System::Security::Cryptography::AsymmetricKeyExchangeFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter::AsymmetricKeyExchangeFormatter()   {
}
