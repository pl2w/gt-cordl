#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioWaitingPanelGeneric.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioWaitingPanelGeneric)
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioWaitingPanelGeneric;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric*, "Modio.Unity.UI.Panels", "ModioWaitingPanelGeneric");
// Dependencies Modio.Unity.UI.Panels.ModioWaitingPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioWaitingPanelGeneric
class CORDL_TYPE ModioWaitingPanelGeneric : public ::Modio::Unity::UI::Panels::ModioWaitingPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric* New_ctor() ;

/// @brief Method .ctor, addr 0x9fac294, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioWaitingPanelGeneric() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioWaitingPanelGeneric", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioWaitingPanelGeneric(ModioWaitingPanelGeneric && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioWaitingPanelGeneric", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioWaitingPanelGeneric(ModioWaitingPanelGeneric const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
