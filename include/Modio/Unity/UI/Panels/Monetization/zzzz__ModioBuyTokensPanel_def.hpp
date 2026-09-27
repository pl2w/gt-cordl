#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Monetization/ModioBuyTokensPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioBuyTokensPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Monetization {
class ModioBuyTokensPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Monetization::ModioBuyTokensPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Monetization::ModioBuyTokensPanel*, "Modio.Unity.UI.Panels.Monetization", "ModioBuyTokensPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Monetization {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Monetization.ModioBuyTokensPanel
class CORDL_TYPE ModioBuyTokensPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Monetization::ModioBuyTokensPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9fad57c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioBuyTokensPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioBuyTokensPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioBuyTokensPanel(ModioBuyTokensPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioBuyTokensPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioBuyTokensPanel(ModioBuyTokensPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Monetization::ModioBuyTokensPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Monetization
