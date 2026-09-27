#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioReportPanel)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Report {
class ModioReportPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Report::ModioReportPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Report::ModioReportPanel*, "Modio.Unity.UI.Panels.Report", "ModioReportPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Report {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Report.ModioReportPanel
class CORDL_TYPE ModioReportPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Field _modioUIMod, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioUIMod, put=__cordl_internal_set__modioUIMod)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _modioUIMod;

/// @brief Method Awake, addr 0x9fad488, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x9fad4e8, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Modio::Unity::UI::Panels::Report::ModioReportPanel* New_ctor() ;

/// @brief Method OpenReportFlow, addr 0x9fa5e04, size 0x74, virtual false, abstract: false, final false
inline void OpenReportFlow(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__modioUIMod() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__modioUIMod() ;

constexpr void __cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

/// @brief Method .ctor, addr 0x9fad4f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioReportPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioReportPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioReportPanel(ModioReportPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioReportPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioReportPanel(ModioReportPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27092};

/// @brief Field _modioUIMod, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____modioUIMod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportPanel, ____modioUIMod) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::Report::ModioReportPanel) == 0x60, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Report
