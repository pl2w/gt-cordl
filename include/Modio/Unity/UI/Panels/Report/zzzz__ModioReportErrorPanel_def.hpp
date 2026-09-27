#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportErrorPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioReportErrorPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels::Report {
class ModioReportErrorPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel*, "Modio.Unity.UI.Panels.Report", "ModioReportErrorPanel");
// Dependencies Modio.Unity.UI.Panels.ModioErrorPanelBase
namespace Modio::Unity::UI::Panels::Report {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Report.ModioReportErrorPanel
class CORDL_TYPE ModioReportErrorPanel : public ::Modio::Unity::UI::Panels::ModioErrorPanelBase {
public:
// Declarations
static inline ::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel* New_ctor() ;

/// @brief Method .ctor, addr 0x9fad480, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioReportErrorPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioReportErrorPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioReportErrorPanel(ModioReportErrorPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioReportErrorPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioReportErrorPanel(ModioReportErrorPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27091};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::Report::ModioReportErrorPanel) == 0xa0, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Report
