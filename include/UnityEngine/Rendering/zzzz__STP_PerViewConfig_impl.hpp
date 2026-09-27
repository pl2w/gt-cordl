#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_PerViewConfig.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__STP_PerViewConfig_def.hpp"
// Ctor Parameters [CppParam { name: "currentProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastLastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastLastView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::STP_PerViewConfig::STP_PerViewConfig(::UnityEngine::Matrix4x4  currentProj, ::UnityEngine::Matrix4x4  lastProj, ::UnityEngine::Matrix4x4  lastLastProj, ::UnityEngine::Matrix4x4  currentView, ::UnityEngine::Matrix4x4  lastView, ::UnityEngine::Matrix4x4  lastLastView) noexcept  {
this->currentProj = currentProj;
this->lastProj = lastProj;
this->lastLastProj = lastLastProj;
this->currentView = currentView;
this->lastView = lastView;
this->lastLastView = lastLastView;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::STP_PerViewConfig::STP_PerViewConfig()   {
}
