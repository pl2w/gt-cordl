#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset_WriteFileJsonNoName.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_WriteFileJsonNoName_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionAsset_WriteFileJsonNoName::InputActionAsset_WriteFileJsonNoName(::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps, ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes) noexcept  {
this->maps = maps;
this->controlSchemes = controlSchemes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionAsset_WriteFileJsonNoName::InputActionAsset_WriteFileJsonNoName()   {
}
