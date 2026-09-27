#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricSignatureFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureFormatter::*)()>(&::System::Security::Cryptography::AsymmetricSignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureFormatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::AsymmetricSignatureFormatter::SetKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureFormatter.SetHashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureFormatter::*)(::StringW)>(&::System::Security::Cryptography::AsymmetricSignatureFormatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureFormatter.CreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricSignatureFormatter::*)(::System::Security::Cryptography::HashAlgorithm*)>(&::System::Security::Cryptography::AsymmetricSignatureFormatter::CreateSignature)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa162960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureFormatter.CreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricSignatureFormatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AsymmetricSignatureFormatter::CreateSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AsymmetricSignatureFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricSignatureFormatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::AsymmetricSignatureFormatter::SetHashAlgorithm(::StringW  strName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strName);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricSignatureFormatter::CreateSignature(::System::Security::Cryptography::HashAlgorithm*  hash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, hash);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricSignatureFormatter::CreateSignature(::ArrayW<uint8_t>  rgbHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash);
}
inline ::System::Security::Cryptography::AsymmetricSignatureFormatter* System::Security::Cryptography::AsymmetricSignatureFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsymmetricSignatureFormatter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricSignatureFormatter::AsymmetricSignatureFormatter()   {
}
