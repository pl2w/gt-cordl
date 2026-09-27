#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass_BlitMaterialData.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__FinalBlitPass_BlitMaterialData_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nearestSamplerPass", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bilinearSamplerPass", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FinalBlitPass_BlitMaterialData::FinalBlitPass_BlitMaterialData(::UnityW<::UnityEngine::Material>  material, int32_t  nearestSamplerPass, int32_t  bilinearSamplerPass) noexcept  {
this->material = material;
this->nearestSamplerPass = nearestSamplerPass;
this->bilinearSamplerPass = bilinearSamplerPass;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FinalBlitPass_BlitMaterialData::FinalBlitPass_BlitMaterialData()   {
}
