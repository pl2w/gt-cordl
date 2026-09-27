#pragma once
// IWYU pragma private; include "GlobalNamespace/PrefabType.hpp"
#include "GlobalNamespace/zzzz__PrefabType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefabName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomObject", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "photonViewCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PrefabType::PrefabType(::UnityW<::UnityEngine::GameObject>  prefab, ::StringW  prefabName, bool  roomObject, int32_t  photonViewCount) noexcept  {
this->prefab = prefab;
this->prefabName = prefabName;
this->roomObject = roomObject;
this->photonViewCount = photonViewCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrefabType::PrefabType()   {
}
