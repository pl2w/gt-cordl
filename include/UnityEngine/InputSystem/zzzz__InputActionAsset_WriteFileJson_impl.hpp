#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset_WriteFileJson.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_WriteFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
// Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionAsset_WriteFileJson::InputActionAsset_WriteFileJson(int32_t  version, ::StringW  name, ::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps, ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes) noexcept  {
this->version = version;
this->name = name;
this->maps = maps;
this->controlSchemes = controlSchemes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionAsset_WriteFileJson::InputActionAsset_WriteFileJson()   {
}
