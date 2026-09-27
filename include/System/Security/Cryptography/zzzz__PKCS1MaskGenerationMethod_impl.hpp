#pragma once
// IWYU pragma private; include "System/Security/Cryptography/PKCS1MaskGenerationMethod.hpp"
#include "System/Security/Cryptography/zzzz__MaskGenerationMethod_impl.hpp"
#include "System/Security/Cryptography/zzzz__PKCS1MaskGenerationMethod_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)()>(&::System::Security::Cryptography::PKCS1MaskGenerationMethod::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa16af64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod.get_HashName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)()>(&::System::Security::Cryptography::PKCS1MaskGenerationMethod::get_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa16afbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                        {"get_HashName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod.set_HashName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)(::StringW)>(&::System::Security::Cryptography::PKCS1MaskGenerationMethod::set_HashName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa16afc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                        {"set_HashName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod.GenerateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::PKCS1MaskGenerationMethod::GenerateMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa16b038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                    {::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::PKCS1MaskGenerationMethod::__cordl_internal_get_HashNameValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HashNameValue;
}
constexpr ::StringW const& System::Security::Cryptography::PKCS1MaskGenerationMethod::__cordl_internal_get_HashNameValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HashNameValue;
}
constexpr void System::Security::Cryptography::PKCS1MaskGenerationMethod::__cordl_internal_set_HashNameValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HashNameValue = value;
}
inline void System::Security::Cryptography::PKCS1MaskGenerationMethod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::PKCS1MaskGenerationMethod::get_HashName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                        {"get_HashName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::PKCS1MaskGenerationMethod::set_HashName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(),
                        {"set_HashName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::PKCS1MaskGenerationMethod::GenerateMask(::ArrayW<uint8_t>  rgbSeed, int32_t  cbReturn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbSeed, cbReturn);
}
inline ::System::Security::Cryptography::PKCS1MaskGenerationMethod* System::Security::Cryptography::PKCS1MaskGenerationMethod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::PKCS1MaskGenerationMethod::PKCS1MaskGenerationMethod()   {
}
