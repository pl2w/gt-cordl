#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Builder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Builder_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Builder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Builder::*)()>(&::Mono::Security::X509::X509Builder::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa0ec600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.ToBeSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X509Builder::*)(::StringW)>(&::Mono::Security::X509::X509Builder::ToBeSigned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.GetOid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Builder::*)(::StringW)>(&::Mono::Security::X509::X509Builder::GetOid)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xa0ec658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"GetOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.get_Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Builder::*)()>(&::Mono::Security::X509::X509Builder::get_Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0ec978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"get_Hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.set_Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Builder::*)(::StringW)>(&::Mono::Security::X509::X509Builder::set_Hash)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa0ec980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"set_Hash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.Sign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Builder::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::X509Builder::Sign)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa0ec9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Builder::*)(::Mono::Security::ASN1*, ::StringW, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Builder::Build)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa0ecb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"Build", {}, {::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.Sign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Builder::*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::X509::X509Builder::Sign)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa0ecc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Builder.Sign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Builder::*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::X509::X509Builder::Sign)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa0ecd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Builder::__cordl_internal_get_hashName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hashName;
}
constexpr ::StringW const& Mono::Security::X509::X509Builder::__cordl_internal_get_hashName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hashName;
}
constexpr void Mono::Security::X509::X509Builder::__cordl_internal_set_hashName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hashName = value;
}
inline void Mono::Security::X509::X509Builder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X509Builder::ToBeSigned(::StringW  hashName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, hashName);
}
inline ::StringW Mono::Security::X509::X509Builder::GetOid(::StringW  hashName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"GetOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, hashName);
}
inline ::StringW Mono::Security::X509::X509Builder::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"get_Hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Builder::set_Hash(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"set_Hash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Builder::Sign(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, aa);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Builder::Build(::Mono::Security::ASN1*  tbs, ::StringW  hashoid, ::ArrayW<uint8_t>  signature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Builder*>(),
                        {"Build", {}, {::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, tbs, hashoid, signature);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Builder::Sign(::System::Security::Cryptography::RSA*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Builder::Sign(::System::Security::Cryptography::DSA*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Builder*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, key);
}
inline ::Mono::Security::X509::X509Builder* Mono::Security::X509::X509Builder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Builder*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Builder::X509Builder()   {
}
