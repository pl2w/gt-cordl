#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerSplitDebugArray_Info.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerSplitDebugArray_Info_def.hpp"
// Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceCullerSplitDebugArray_Info::InstanceCullerSplitDebugArray_Info(::UnityEngine::Rendering::BatchCullingViewType  viewType, int32_t  viewInstanceID, int32_t  splitIndex) noexcept  {
this->viewType = viewType;
this->viewInstanceID = viewInstanceID;
this->splitIndex = splitIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceCullerSplitDebugArray_Info::InstanceCullerSplitDebugArray_Info()   {
}
