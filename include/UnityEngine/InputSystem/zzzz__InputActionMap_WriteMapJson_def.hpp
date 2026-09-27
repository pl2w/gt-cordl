#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_WriteMapJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteActionJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_WriteMapJson)
namespace GlobalNamespace {
struct InputActionMap_BindingJson;
}
namespace GlobalNamespace {
struct InputActionMap_WriteActionJson;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_WriteMapJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_WriteMapJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_WriteMapJson, "UnityEngine.InputSystem", "InputActionMap/WriteMapJson");
// Dependencies UnityEngine.InputSystem.InputActionMap::BindingJson, UnityEngine.InputSystem.InputActionMap::WriteActionJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/WriteMapJson
struct CORDL_TYPE InputActionMap_WriteMapJson {
public:
// Declarations
/// @brief Method FromMap, addr 0xaf15ecc, size 0x240, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap*  map) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_WriteMapJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "actions", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteActionJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindings", ty: "::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_WriteMapJson(::StringW  name, ::StringW  id, ::ArrayW<::GlobalNamespace::InputActionMap_WriteActionJson>  actions, ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field id, offset: 0x8, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field actions, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_WriteActionJson>  actions;

/// @brief Field bindings, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_BindingJson>  bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteMapJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteMapJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteMapJson, actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_WriteMapJson, bindings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_WriteMapJson) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
