#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationWaitingPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationWaitingPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationWaitingPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationWaitingPanel");
// Dependencies Modio.Unity.UI.Panels.ModioWaitingPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationWaitingPanel
class CORDL_TYPE ModioAuthenticationWaitingPanel : public ::Modio::Unity::UI::Panels::ModioWaitingPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9faff80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationWaitingPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationWaitingPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationWaitingPanel(ModioAuthenticationWaitingPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationWaitingPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationWaitingPanel(ModioAuthenticationWaitingPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27110};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationWaitingPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
