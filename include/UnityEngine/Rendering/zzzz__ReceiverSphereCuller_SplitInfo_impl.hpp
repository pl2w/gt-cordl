#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverSphereCuller_SplitInfo.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_SplitInfo_def.hpp"
// Ctor Parameters [CppParam { name: "receiverSphereLightSpace", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReceiverSphereCuller_SplitInfo::ReceiverSphereCuller_SplitInfo(::Unity::Mathematics::float4  receiverSphereLightSpace, float_t  cascadeBlendCullingFactor) noexcept  {
this->receiverSphereLightSpace = receiverSphereLightSpace;
this->cascadeBlendCullingFactor = cascadeBlendCullingFactor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReceiverSphereCuller_SplitInfo::ReceiverSphereCuller_SplitInfo()   {
}
