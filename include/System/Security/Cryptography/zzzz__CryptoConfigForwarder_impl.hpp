#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoConfigForwarder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoConfigForwarder_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfigForwarder.CreateFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::System::Security::Cryptography::CryptoConfigForwarder::CreateFromName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa188cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfigForwarder*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoConfigForwarder.CreateDefaultHashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)()>(&::System::Security::Cryptography::CryptoConfigForwarder::CreateDefaultHashAlgorithm)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa188d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfigForwarder*>(),
                        {"CreateDefaultHashAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* System::Security::Cryptography::CryptoConfigForwarder::CreateFromName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfigForwarder*>(),
                        {"CreateFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, name);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::CryptoConfigForwarder::CreateDefaultHashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoConfigForwarder*>(),
                        {"CreateDefaultHashAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoConfigForwarder::CryptoConfigForwarder()   {
}
