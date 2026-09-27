#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_BindingOverrideJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_BindingOverrideJson)
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_BindingOverrideJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_BindingOverrideJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_BindingOverrideJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideJson");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/BindingOverrideJson
struct CORDL_TYPE InputActionMap_BindingOverrideJson {
public:
// Declarations
/// @brief Method FromBinding, addr 0xaf157c0, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding  binding) ;

/// @brief Method FromBinding, addr 0xaf156b4, size 0x10c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding  binding, ::StringW  actionName) ;

/// @brief Method ToBinding, addr 0xaf15814, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputBinding ToBinding(::GlobalNamespace::InputActionMap_BindingOverrideJson  bindingOverride) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_BindingOverrideJson() ;

// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_BindingOverrideJson(::StringW  action, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field action, offset: 0x0, size: 0x8, def value: None
 ::StringW  action;

/// @brief Field id, offset: 0x8, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field interactions, offset: 0x18, size: 0x8, def value: None
 ::StringW  interactions;

/// @brief Field processors, offset: 0x20, size: 0x8, def value: None
 ::StringW  processors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingOverrideJson, action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingOverrideJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingOverrideJson, path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingOverrideJson, interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingOverrideJson, processors) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_BindingOverrideJson) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
