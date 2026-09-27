#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportTypePanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioReportTypePanel)
namespace Modio::Reports {
struct ReportType;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Report {
class ModioReportTypePanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Report::ModioReportTypePanel*, "Modio.Unity.UI.Panels.Report", "ModioReportTypePanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Report {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Report.ModioReportTypePanel
class CORDL_TYPE ModioReportTypePanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Report::ModioReportTypePanel* New_ctor() ;

/// @brief Method OnUserSubmittedReportType, addr 0x9fad500, size 0x4, virtual false, abstract: false, final false
inline void OnUserSubmittedReportType(int32_t  type) ;

/// @brief Method OnUserSubmittedReportTypeEnum, addr 0x9fad504, size 0x68, virtual false, abstract: false, final false
inline void OnUserSubmittedReportTypeEnum(::Modio::Reports::ReportType  type) ;

/// @brief Method .ctor, addr 0x9fad56c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioReportTypePanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioReportTypePanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioReportTypePanel(ModioReportTypePanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioReportTypePanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioReportTypePanel(ModioReportTypePanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Report::ModioReportTypePanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Report
