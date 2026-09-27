#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationErrorPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationErrorPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationErrorPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationErrorPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationErrorPanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationErrorPanel");
// Dependencies Modio.Unity.UI.Panels.ModioErrorPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationErrorPanel
class CORDL_TYPE ModioAuthenticationErrorPanel : public ::Modio::Unity::UI::Panels::ModioErrorPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationErrorPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9fadc24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationErrorPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationErrorPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationErrorPanel(ModioAuthenticationErrorPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationErrorPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationErrorPanel(ModioAuthenticationErrorPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationErrorPanel) == 0xa0, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
