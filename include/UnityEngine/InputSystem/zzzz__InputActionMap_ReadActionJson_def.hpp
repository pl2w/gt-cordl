#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_ReadActionJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_ReadActionJson)
namespace GlobalNamespace {
struct InputActionMap_BindingJson;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_ReadActionJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_ReadActionJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_ReadActionJson, "UnityEngine.InputSystem", "InputActionMap/ReadActionJson");
// Dependencies UnityEngine.InputSystem.InputActionMap::BindingJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/ReadActionJson
struct CORDL_TYPE InputActionMap_ReadActionJson {
public:
// Declarations
/// @brief Method ToAction, addr 0xaf15b44, size 0x264, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* ToAction(::StringW  actionName) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_ReadActionJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindings", ty: "::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_ReadActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  expectedControlLayout, ::StringW  processors, ::StringW  interactions, bool  passThrough, bool  initialStateCheck, ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field type, offset: 0x8, size: 0x8, def value: None
 ::StringW  type;

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field expectedControlType, offset: 0x18, size: 0x8, def value: None
 ::StringW  expectedControlType;

/// @brief Field expectedControlLayout, offset: 0x20, size: 0x8, def value: None
 ::StringW  expectedControlLayout;

/// @brief Field processors, offset: 0x28, size: 0x8, def value: None
 ::StringW  processors;

/// @brief Field interactions, offset: 0x30, size: 0x8, def value: None
 ::StringW  interactions;

/// @brief Field passThrough, offset: 0x38, size: 0x1, def value: None
 bool  passThrough;

/// @brief Field initialStateCheck, offset: 0x39, size: 0x1, def value: None
 bool  initialStateCheck;

/// @brief Field bindings, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, expectedControlType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, expectedControlLayout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, processors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, interactions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, passThrough) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, initialStateCheck) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadActionJson, bindings) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_ReadActionJson) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
