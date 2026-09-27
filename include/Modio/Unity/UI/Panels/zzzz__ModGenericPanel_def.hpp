#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModGenericPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModGenericPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModGenericPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModGenericPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModGenericPanel*, "Modio.Unity.UI.Panels", "ModGenericPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModGenericPanel
class CORDL_TYPE ModGenericPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::ModGenericPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9fa62bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModGenericPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModGenericPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModGenericPanel(ModGenericPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModGenericPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModGenericPanel(ModGenericPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModGenericPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
