#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommon_OccluderContextSlot.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommon_OccluderContextSlot_def.hpp"
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot::OcclusionCullingCommon_OccluderContextSlot(bool  valid, int32_t  lastUsedFrameIndex, int32_t  viewInstanceID) noexcept  {
this->valid = valid;
this->lastUsedFrameIndex = lastUsedFrameIndex;
this->viewInstanceID = viewInstanceID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot::OcclusionCullingCommon_OccluderContextSlot()   {
}
