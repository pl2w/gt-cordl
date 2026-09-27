#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSASignatureFormatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureFormatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)()>(&::System::Security::Cryptography::DSASignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa167228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::DSASignatureFormatter::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa1672b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter.SetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::DSASignatureFormatter::SetKey)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa1673ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter.SetHashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureFormatter::*)(::StringW)>(&::System::Security::Cryptography::DSASignatureFormatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa1674a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureFormatter.CreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSASignatureFormatter::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSASignatureFormatter::CreateSignature)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa167564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::DSA*& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__dsaKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dsaKey;
}
constexpr ::System::Security::Cryptography::DSA* const& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__dsaKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dsaKey;
}
constexpr void System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_set__dsaKey(::System::Security::Cryptography::DSA*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dsaKey = value;
}
constexpr ::StringW& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__oid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oid;
}
constexpr ::StringW const& System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_get__oid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oid;
}
constexpr void System::Security::Cryptography::DSASignatureFormatter::__cordl_internal_set__oid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oid = value;
}
inline void System::Security::Cryptography::DSASignatureFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::DSASignatureFormatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DSASignatureFormatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DSASignatureFormatter::SetHashAlgorithm(::StringW  strName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strName);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSASignatureFormatter::CreateSignature(::ArrayW<uint8_t>  rgbHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSASignatureFormatter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash);
}
inline ::System::Security::Cryptography::DSASignatureFormatter* System::Security::Cryptography::DSASignatureFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSASignatureFormatter*>());
}
inline ::System::Security::Cryptography::DSASignatureFormatter* System::Security::Cryptography::DSASignatureFormatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSASignatureFormatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureFormatter::DSASignatureFormatter()   {
}
