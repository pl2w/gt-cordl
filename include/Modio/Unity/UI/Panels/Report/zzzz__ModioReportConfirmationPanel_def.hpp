#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportConfirmationPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioReportConfirmationPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Report {
class ModioReportConfirmationPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Report::ModioReportConfirmationPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Report::ModioReportConfirmationPanel*, "Modio.Unity.UI.Panels.Report", "ModioReportConfirmationPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Report {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Report.ModioReportConfirmationPanel
class CORDL_TYPE ModioReportConfirmationPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Report::ModioReportConfirmationPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9facdfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioReportConfirmationPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioReportConfirmationPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioReportConfirmationPanel(ModioReportConfirmationPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioReportConfirmationPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioReportConfirmationPanel(ModioReportConfirmationPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27089};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Report::ModioReportConfirmationPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Report
