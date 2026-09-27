#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupData.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData__fadeTransitionWidth_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData__fadeTransitionWidth_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "screenRelativeTransitionHeights", ty: "::GlobalNamespace::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fadeTransitionWidth", ty: "::GlobalNamespace::LODGroupData__fadeTransitionWidth_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::LODGroupData::LODGroupData(bool  valid, int32_t  lodCount, int32_t  rendererCount, ::GlobalNamespace::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer  screenRelativeTransitionHeights, ::GlobalNamespace::LODGroupData__fadeTransitionWidth_e__FixedBuffer  fadeTransitionWidth) noexcept  {
this->valid = valid;
this->lodCount = lodCount;
this->rendererCount = rendererCount;
this->screenRelativeTransitionHeights = screenRelativeTransitionHeights;
this->fadeTransitionWidth = fadeTransitionWidth;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LODGroupData::LODGroupData()   {
}
