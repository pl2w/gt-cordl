#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsDemoRig_EdSpawnedCosmetic.hpp"
#include "GlobalNamespace/zzzz__CosmeticsDemoRig_EdSpawnedCosmetic_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "so", ty: "::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holdableObjects", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isEmpty", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic::CosmeticsDemoRig_EdSpawnedCosmetic(::StringW  itemName, ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  so, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objects, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  holdableObjects, bool  isEmpty) noexcept  {
this->itemName = itemName;
this->so = so;
this->objects = objects;
this->holdableObjects = holdableObjects;
this->isEmpty = isEmpty;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic::CosmeticsDemoRig_EdSpawnedCosmetic()   {
}
