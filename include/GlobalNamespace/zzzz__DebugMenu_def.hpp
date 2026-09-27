#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugMenu)
// Forward declare root types
namespace GlobalNamespace {
class DebugMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugMenu*, "", "DebugMenu");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugMenu
class CORDL_TYPE DebugMenu : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugMenu", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugMenu(DebugMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugMenu", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugMenu(DebugMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DebugMenu) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
