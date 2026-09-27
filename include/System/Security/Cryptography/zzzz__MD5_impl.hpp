#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MD5.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__MD5_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MD5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MD5::*)()>(&::System::Security::Cryptography::MD5::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa169acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MD5*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::MD5* (*)()>(&::System::Security::Cryptography::MD5::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa169aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MD5*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MD5.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::MD5* (*)(::StringW)>(&::System::Security::Cryptography::MD5::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa169b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MD5*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::MD5::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MD5*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::MD5* System::Security::Cryptography::MD5::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MD5*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::MD5*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::MD5* System::Security::Cryptography::MD5::Create(::StringW  algName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MD5*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::MD5*>(nullptr, ___internal_method, algName);
}
inline ::System::Security::Cryptography::MD5* System::Security::Cryptography::MD5::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::MD5*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::MD5::MD5()   {
}
