#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPass_FinalBlitSettings.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_Operation_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPass_FinalBlitSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PostProcessPass_FinalBlitSettings.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PostProcessPass_FinalBlitSettings (*)()>(&::GlobalNamespace::PostProcessPass_FinalBlitSettings::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb279f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessPass_FinalBlitSettings>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PostProcessPass_FinalBlitSettings GlobalNamespace::PostProcessPass_FinalBlitSettings::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessPass_FinalBlitSettings>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PostProcessPass_FinalBlitSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isFxaaEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isFsrEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isTaaSharpeningEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requireHDROutput", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resolveToDebugScreen", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isAlphaOutputEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hdrOperations", ty: "::GlobalNamespace::HDROutputUtils_Operation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PostProcessPass_FinalBlitSettings::PostProcessPass_FinalBlitSettings(bool  isFxaaEnabled, bool  isFsrEnabled, bool  isTaaSharpeningEnabled, bool  requireHDROutput, bool  resolveToDebugScreen, bool  isAlphaOutputEnabled, ::GlobalNamespace::HDROutputUtils_Operation  hdrOperations) noexcept  {
this->isFxaaEnabled = isFxaaEnabled;
this->isFsrEnabled = isFsrEnabled;
this->isTaaSharpeningEnabled = isTaaSharpeningEnabled;
this->requireHDROutput = requireHDROutput;
this->resolveToDebugScreen = resolveToDebugScreen;
this->isAlphaOutputEnabled = isAlphaOutputEnabled;
this->hdrOperations = hdrOperations;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PostProcessPass_FinalBlitSettings::PostProcessPass_FinalBlitSettings()   {
}
