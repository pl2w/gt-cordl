#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils_HDRDisplayInformation.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_HDRDisplayInformation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HDROutputUtils_HDRDisplayInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HDROutputUtils_HDRDisplayInformation::*)(int32_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::HDROutputUtils_HDRDisplayInformation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb1979c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HDROutputUtils_HDRDisplayInformation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HDROutputUtils_HDRDisplayInformation::_ctor(int32_t  maxFullFrameToneMapLuminance, int32_t  maxToneMapLuminance, int32_t  minToneMapLuminance, float_t  hdrPaperWhiteNits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HDROutputUtils_HDRDisplayInformation>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxFullFrameToneMapLuminance, maxToneMapLuminance, minToneMapLuminance, hdrPaperWhiteNits);
}
// Ctor Parameters [CppParam { name: "maxFullFrameToneMapLuminance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxToneMapLuminance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minToneMapLuminance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "paperWhiteNits", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HDROutputUtils_HDRDisplayInformation::HDROutputUtils_HDRDisplayInformation(int32_t  maxFullFrameToneMapLuminance, int32_t  maxToneMapLuminance, int32_t  minToneMapLuminance, float_t  paperWhiteNits) noexcept  {
this->maxFullFrameToneMapLuminance = maxFullFrameToneMapLuminance;
this->maxToneMapLuminance = maxToneMapLuminance;
this->minToneMapLuminance = minToneMapLuminance;
this->paperWhiteNits = paperWhiteNits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HDROutputUtils_HDRDisplayInformation::HDROutputUtils_HDRDisplayInformation()   {
}
