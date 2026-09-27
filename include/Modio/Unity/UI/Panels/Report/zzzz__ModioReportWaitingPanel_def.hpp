#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportWaitingPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioWaitingPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioReportWaitingPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Report {
class ModioReportWaitingPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Report::ModioReportWaitingPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Report::ModioReportWaitingPanel*, "Modio.Unity.UI.Panels.Report", "ModioReportWaitingPanel");
// Dependencies Modio.Unity.UI.Panels.ModioWaitingPanelBase
namespace Modio::Unity::UI::Panels::Report {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Report.ModioReportWaitingPanel
class CORDL_TYPE ModioReportWaitingPanel : public ::Modio::Unity::UI::Panels::ModioWaitingPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Report::ModioReportWaitingPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9fad574, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioReportWaitingPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioReportWaitingPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioReportWaitingPanel(ModioReportWaitingPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioReportWaitingPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioReportWaitingPanel(ModioReportWaitingPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27094};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Report::ModioReportWaitingPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Report
