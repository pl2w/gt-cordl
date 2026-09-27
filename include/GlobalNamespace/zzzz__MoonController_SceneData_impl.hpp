#pragma once
// IWYU pragma private; include "GlobalNamespace/MoonController_SceneData.hpp"
#include "GlobalNamespace/zzzz__MoonController_Placement_impl.hpp"
#include "GlobalNamespace/zzzz__MoonController_Scenes_impl.hpp"
#include "GlobalNamespace/zzzz__MoonController_SceneData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "scene", ty: "::GlobalNamespace::MoonController_Scenes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "referencePoint", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overridePlacement", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlacementOverride", ty: "::GlobalNamespace::MoonController_Placement", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MoonController_SceneData::MoonController_SceneData(::GlobalNamespace::MoonController_Scenes  scene, ::UnityW<::UnityEngine::Transform>  referencePoint, bool  overridePlacement, ::GlobalNamespace::MoonController_Placement  PlacementOverride) noexcept  {
this->scene = scene;
this->referencePoint = referencePoint;
this->overridePlacement = overridePlacement;
this->PlacementOverride = PlacementOverride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoonController_SceneData::MoonController_SceneData()   {
}
