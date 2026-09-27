#pragma once
// IWYU pragma private; include "GlobalNamespace/GRArmorEnemy_GREnemyArmorLevel.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_GREnemyArmorLevel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "healthThreshold", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mainRendererMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "visibleObjects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hiddenObjects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel::GRArmorEnemy_GREnemyArmorLevel(int32_t  healthThreshold, ::UnityW<::UnityEngine::Material>  mainRendererMaterial, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  visibleObjects, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hiddenObjects) noexcept  {
this->healthThreshold = healthThreshold;
this->mainRendererMaterial = mainRendererMaterial;
this->visibleObjects = visibleObjects;
this->hiddenObjects = hiddenObjects;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRArmorEnemy_GREnemyArmorLevel::GRArmorEnemy_GREnemyArmorLevel()   {
}
