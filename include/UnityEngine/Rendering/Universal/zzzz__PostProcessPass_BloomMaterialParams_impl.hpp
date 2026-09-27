#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPass_BloomMaterialParams.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPass_BloomMaterialParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PostProcessPass_BloomMaterialParams.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PostProcessPass_BloomMaterialParams::*)(::by_ref<::GlobalNamespace::PostProcessPass_BloomMaterialParams>)>(&::GlobalNamespace::PostProcessPass_BloomMaterialParams::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb279e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessPass_BloomMaterialParams>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::PostProcessPass_BloomMaterialParams>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PostProcessPass_BloomMaterialParams::Equals(::by_ref<::GlobalNamespace::PostProcessPass_BloomMaterialParams>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PostProcessPass_BloomMaterialParams>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::PostProcessPass_BloomMaterialParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "highQualityFiltering", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableAlphaOutput", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PostProcessPass_BloomMaterialParams::PostProcessPass_BloomMaterialParams(::UnityEngine::Vector4  parameters, bool  highQualityFiltering, bool  enableAlphaOutput) noexcept  {
this->parameters = parameters;
this->highQualityFiltering = highQualityFiltering;
this->enableAlphaOutput = enableAlphaOutput;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PostProcessPass_BloomMaterialParams::PostProcessPass_BloomMaterialParams()   {
}
