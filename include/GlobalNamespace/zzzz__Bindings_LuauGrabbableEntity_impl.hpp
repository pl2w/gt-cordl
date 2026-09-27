#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauGrabbableEntity.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauGrabbableEntity_def.hpp"
// Ctor Parameters [CppParam { name: "EntityID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EntityPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EntityRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_LuauGrabbableEntity::Bindings_LuauGrabbableEntity(int32_t  EntityID, ::UnityEngine::Vector3  EntityPosition, ::UnityEngine::Quaternion  EntityRotation) noexcept  {
this->EntityID = EntityID;
this->EntityPosition = EntityPosition;
this->EntityRotation = EntityRotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_LuauGrabbableEntity::Bindings_LuauGrabbableEntity()   {
}
