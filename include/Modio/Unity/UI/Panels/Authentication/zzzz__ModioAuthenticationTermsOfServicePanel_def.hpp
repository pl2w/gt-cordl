#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationTermsOfServicePanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationTermsOfServicePanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationTermsOfServicePanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationTermsOfServicePanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationTermsOfServicePanel
class CORDL_TYPE ModioAuthenticationTermsOfServicePanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel* New_ctor() ;

/// @brief Method OnPressAgreeTOS, addr 0x9faff20, size 0x58, virtual false, abstract: false, final false
inline void OnPressAgreeTOS() ;

/// @brief Method .ctor, addr 0x9faff78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationTermsOfServicePanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationTermsOfServicePanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationTermsOfServicePanel(ModioAuthenticationTermsOfServicePanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationTermsOfServicePanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationTermsOfServicePanel(ModioAuthenticationTermsOfServicePanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27109};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationTermsOfServicePanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
