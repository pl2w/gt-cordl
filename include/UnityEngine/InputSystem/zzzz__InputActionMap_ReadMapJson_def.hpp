#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_ReadMapJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_ReadMapJson)
namespace GlobalNamespace {
struct InputActionMap_BindingJson;
}
namespace GlobalNamespace {
struct InputActionMap_ReadActionJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_ReadMapJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_ReadMapJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_ReadMapJson, "UnityEngine.InputSystem", "InputActionMap/ReadMapJson");
// Dependencies UnityEngine.InputSystem.InputActionMap::BindingJson, UnityEngine.InputSystem.InputActionMap::ReadActionJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/ReadMapJson
struct CORDL_TYPE InputActionMap_ReadMapJson {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_ReadMapJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "actions", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindings", ty: "::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_ReadMapJson(::StringW  name, ::StringW  id, ::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>  actions, ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field id, offset: 0x8, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field actions, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>  actions;

/// @brief Field bindings, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadMapJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadMapJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadMapJson, actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadMapJson, bindings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_ReadMapJson) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
