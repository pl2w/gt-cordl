#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_BindingJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_BindingJson)
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_BindingJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_BindingJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_BindingJson, "UnityEngine.InputSystem", "InputActionMap/BindingJson");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/BindingJson
struct CORDL_TYPE InputActionMap_BindingJson {
public:
// Declarations
/// @brief Method FromBinding, addr 0xaf15a68, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputActionMap_BindingJson FromBinding(::by_ref<::UnityEngine::InputSystem::InputBinding>  binding) ;

/// @brief Method ToBinding, addr 0xaf1590c, size 0x15c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputBinding ToBinding() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_BindingJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_BindingJson(::StringW  name, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors, ::StringW  groups, ::StringW  action, bool  isComposite, bool  isPartOfComposite) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field id, offset: 0x8, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field interactions, offset: 0x18, size: 0x8, def value: None
 ::StringW  interactions;

/// @brief Field processors, offset: 0x20, size: 0x8, def value: None
 ::StringW  processors;

/// @brief Field groups, offset: 0x28, size: 0x8, def value: None
 ::StringW  groups;

/// @brief Field action, offset: 0x30, size: 0x8, def value: None
 ::StringW  action;

/// @brief Field isComposite, offset: 0x38, size: 0x1, def value: None
 bool  isComposite;

/// @brief Field isPartOfComposite, offset: 0x39, size: 0x1, def value: None
 bool  isPartOfComposite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, groups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, isComposite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_BindingJson, isPartOfComposite) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_BindingJson) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
