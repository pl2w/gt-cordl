#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MaskGenerationMethod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__MaskGenerationMethod_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MaskGenerationMethod.GenerateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::MaskGenerationMethod::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::MaskGenerationMethod::GenerateMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::MaskGenerationMethod*>(),
                    {::i2c::class_of<::System::Security::Cryptography::MaskGenerationMethod*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MaskGenerationMethod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::MaskGenerationMethod::*)()>(&::System::Security::Cryptography::MaskGenerationMethod::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa169ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MaskGenerationMethod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> System::Security::Cryptography::MaskGenerationMethod::GenerateMask(::ArrayW<uint8_t>  rgbSeed, int32_t  cbReturn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::MaskGenerationMethod*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbSeed, cbReturn);
}
inline void System::Security::Cryptography::MaskGenerationMethod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::MaskGenerationMethod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::MaskGenerationMethod* System::Security::Cryptography::MaskGenerationMethod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::MaskGenerationMethod*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::MaskGenerationMethod::MaskGenerationMethod()   {
}
