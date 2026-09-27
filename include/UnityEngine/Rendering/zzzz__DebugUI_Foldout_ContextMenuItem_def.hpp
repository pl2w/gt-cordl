#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUI_Foldout_ContextMenuItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DebugUI_Foldout_ContextMenuItem)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct Foldout_DebugUI_ContextMenuItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Foldout_DebugUI_ContextMenuItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Foldout_DebugUI_ContextMenuItem, "UnityEngine.Rendering", "DebugUI/Foldout/ContextMenuItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/Foldout/ContextMenuItem
struct CORDL_TYPE Foldout_DebugUI_ContextMenuItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Foldout_DebugUI_ContextMenuItem() ;

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr Foldout_DebugUI_ContextMenuItem(::StringW  displayName, ::System::Action*  action) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16707};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field displayName, offset: 0x0, size: 0x8, def value: None
 ::StringW  displayName;

/// @brief Field action, offset: 0x8, size: 0x8, def value: None
 ::System::Action*  action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Foldout_DebugUI_ContextMenuItem, displayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Foldout_DebugUI_ContextMenuItem, action) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Foldout_DebugUI_ContextMenuItem) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
