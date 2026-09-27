#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_ReadMapJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actions", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindings", ty: "::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_ReadMapJson::InputActionMap_ReadMapJson(::StringW  name, ::StringW  id, ::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>  actions, ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings) noexcept  {
this->name = name;
this->id = id;
this->actions = actions;
this->bindings = bindings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_ReadMapJson::InputActionMap_ReadMapJson()   {
}
