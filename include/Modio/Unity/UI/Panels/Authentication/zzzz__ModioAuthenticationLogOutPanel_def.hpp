#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationLogOutPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationLogOutPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationLogOutPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationLogOutPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationLogOutPanel
class CORDL_TYPE ModioAuthenticationLogOutPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel* New_ctor() ;

/// @brief Method OnPressLogout, addr 0x9faee3c, size 0x1c, virtual false, abstract: false, final false
inline void OnPressLogout() ;

/// @brief Method .ctor, addr 0x9faee58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationLogOutPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationLogOutPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationLogOutPanel(ModioAuthenticationLogOutPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationLogOutPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationLogOutPanel(ModioAuthenticationLogOutPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27105};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationLogOutPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
