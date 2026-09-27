#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioErrorPanelGeneric.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioErrorPanelGeneric)
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioErrorPanelGeneric;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioErrorPanelGeneric*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioErrorPanelGeneric*, "Modio.Unity.UI.Panels", "ModioErrorPanelGeneric");
// Dependencies Modio.Unity.UI.Panels.ModioErrorPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioErrorPanelGeneric
class CORDL_TYPE ModioErrorPanelGeneric : public ::Modio::Unity::UI::Panels::ModioErrorPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::ModioErrorPanelGeneric* New_ctor() ;

/// @brief Method .ctor, addr 0x9fa8544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioErrorPanelGeneric() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioErrorPanelGeneric", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioErrorPanelGeneric(ModioErrorPanelGeneric && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioErrorPanelGeneric", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioErrorPanelGeneric(ModioErrorPanelGeneric const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27072};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModioErrorPanelGeneric) == 0xa0, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
