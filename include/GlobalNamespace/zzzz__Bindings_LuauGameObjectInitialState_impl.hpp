#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauGameObjectInitialState.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauGameObjectInitialState_def.hpp"
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Visible", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Collidable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Created", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_LuauGameObjectInitialState::Bindings_LuauGameObjectInitialState(::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, ::UnityEngine::Vector3  Scale, bool  Visible, bool  Collidable, bool  Created) noexcept  {
this->Position = Position;
this->Rotation = Rotation;
this->Scale = Scale;
this->Visible = Visible;
this->Collidable = Collidable;
this->Created = Created;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_LuauGameObjectInitialState::Bindings_LuauGameObjectInitialState()   {
}
