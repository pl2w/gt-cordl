#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodManager_GroupInfo.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__StaticLodManager_GroupInfo_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
// Ctor Parameters [CppParam { name: "isLoaded", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "componentEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radiusSq", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uiEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uiEnableDistanceSq", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uiGraphics", ty: "::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::Renderer>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collidersEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collisionEnableDistanceSq", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactableColliders", ty: "::ArrayW<::UnityW<::UnityEngine::Collider>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StaticLodManager_GroupInfo::StaticLodManager_GroupInfo(bool  isLoaded, bool  componentEnabled, ::UnityEngine::Vector3  center, float_t  radiusSq, ::UnityEngine::Bounds  bounds, bool  uiEnabled, float_t  uiEnableDistanceSq, ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>  uiGraphics, ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers, bool  collidersEnabled, float_t  collisionEnableDistanceSq, ::ArrayW<::UnityW<::UnityEngine::Collider>>  interactableColliders) noexcept  {
this->isLoaded = isLoaded;
this->componentEnabled = componentEnabled;
this->center = center;
this->radiusSq = radiusSq;
this->bounds = bounds;
this->uiEnabled = uiEnabled;
this->uiEnableDistanceSq = uiEnableDistanceSq;
this->uiGraphics = uiGraphics;
this->renderers = renderers;
this->collidersEnabled = collidersEnabled;
this->collisionEnableDistanceSq = collisionEnableDistanceSq;
this->interactableColliders = interactableColliders;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticLodManager_GroupInfo::StaticLodManager_GroupInfo()   {
}
