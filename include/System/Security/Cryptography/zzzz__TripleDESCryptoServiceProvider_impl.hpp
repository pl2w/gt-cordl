#pragma once
// IWYU pragma private; include "System/Security/Cryptography/TripleDESCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_impl.hpp"
#include "System/Security/Cryptography/zzzz__TripleDESCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa17d344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.CreateEncryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa17d82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.CreateDecryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa17d938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.GenerateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa17da44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESCryptoServiceProvider.GenerateIV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TripleDESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa17dc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 27}
                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::TripleDESCryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t>  rgbKey, ::ArrayW<uint8_t>  rgbIV)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::TripleDESCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t>  rgbKey, ::ArrayW<uint8_t>  rgbIV)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::TripleDESCryptoServiceProvider::GenerateIV()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::TripleDESCryptoServiceProvider* System::Security::Cryptography::TripleDESCryptoServiceProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::TripleDESCryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::TripleDESCryptoServiceProvider::TripleDESCryptoServiceProvider()   {
}
