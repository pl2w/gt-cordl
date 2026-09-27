#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCamera_LegacyTransitionParams.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_LegacyTransitionParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineLegacyCameraEvents_def.hpp"
// Ctor Parameters [CppParam { name: "m_BlendHint", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InheritPosition", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OnCameraLive", ty: "::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams::CinemachineVirtualCamera_LegacyTransitionParams(int32_t  m_BlendHint, bool  m_InheritPosition, ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  m_OnCameraLive) noexcept  {
this->m_BlendHint = m_BlendHint;
this->m_InheritPosition = m_InheritPosition;
this->m_OnCameraLive = m_OnCameraLive;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams::CinemachineVirtualCamera_LegacyTransitionParams()   {
}
