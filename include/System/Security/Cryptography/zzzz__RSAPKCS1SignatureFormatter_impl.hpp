#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureFormatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureFormatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)()>(&::System::Security::Cryptography::RSAPKCS1SignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa186d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1SignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa186d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureFormatter.CreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSAPKCS1SignatureFormatter::CreateSignature)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa186d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureFormatter.SetHashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::StringW)>(&::System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa186e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureFormatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetKey)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa186ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RSA*& System::Security::Cryptography::RSAPKCS1SignatureFormatter::__cordl_internal_get_rsa()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rsa;
}
constexpr ::System::Security::Cryptography::RSA* const& System::Security::Cryptography::RSAPKCS1SignatureFormatter::__cordl_internal_get_rsa() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rsa;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureFormatter::__cordl_internal_set_rsa(::System::Security::Cryptography::RSA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rsa = value;
}
constexpr ::StringW& System::Security::Cryptography::RSAPKCS1SignatureFormatter::__cordl_internal_get_hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr ::StringW const& System::Security::Cryptography::RSAPKCS1SignatureFormatter::__cordl_internal_get_hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureFormatter::__cordl_internal_set_hash(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash = value;
}
inline void System::Security::Cryptography::RSAPKCS1SignatureFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureFormatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSAPKCS1SignatureFormatter::CreateSignature(::ArrayW<uint8_t>  rgbHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetHashAlgorithm(::StringW  strName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strName);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureFormatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* System::Security::Cryptography::RSAPKCS1SignatureFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>());
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* System::Security::Cryptography::RSAPKCS1SignatureFormatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1SignatureFormatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SignatureFormatter::RSAPKCS1SignatureFormatter()   {
}
