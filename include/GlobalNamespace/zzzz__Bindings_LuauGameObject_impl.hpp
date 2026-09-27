#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauGameObject.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauGameObject_def.hpp"
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_LuauGameObject::Bindings_LuauGameObject(::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, ::UnityEngine::Vector3  Scale) noexcept  {
this->Position = Position;
this->Rotation = Rotation;
this->Scale = Scale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_LuauGameObject::Bindings_LuauGameObject()   {
}
