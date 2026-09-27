#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_WriteActionJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_WriteActionJson)
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_WriteActionJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_WriteActionJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_WriteActionJson, "UnityEngine.InputSystem", "InputActionMap/WriteActionJson");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/WriteActionJson
struct CORDL_TYPE InputActionMap_WriteActionJson {
public:
// Declarations
/// @brief Method FromAction, addr 0xaf15da8, size 0x124, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction*  action) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_WriteActionJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_WriteActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  processors, ::StringW  interactions, bool  initialStateCheck) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field type, offset: 0x8, size: 0x8, def value: None
 ::StringW  type;

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field expectedControlType, offset: 0x18, size: 0x8, def value: None
 ::StringW  expectedControlType;

/// @brief Field processors, offset: 0x20, size: 0x8, def value: None
 ::StringW  processors;

/// @brief Field interactions, offset: 0x28, size: 0x8, def value: None
 ::StringW  interactions;

/// @brief Field initialStateCheck, offset: 0x30, size: 0x1, def value: None
 bool  initialStateCheck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, expectedControlType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, interactions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteActionJson, initialStateCheck) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_WriteActionJson) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
