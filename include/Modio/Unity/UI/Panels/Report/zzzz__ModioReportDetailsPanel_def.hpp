#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Report/ModioReportDetailsPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Reports/zzzz__ReportType_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioReportDetailsPanel)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Reports {
struct ReportType;
}
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIButton;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
namespace Modio {
class Error;
}
namespace TMPro {
class TMP_InputField;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Report {
class ModioReportDetailsPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel*, "Modio.Unity.UI.Panels.Report", "ModioReportDetailsPanel");
// Dependencies Modio.Reports.ReportType, Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Report {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Report.ModioReportDetailsPanel
class CORDL_TYPE ModioReportDetailsPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Field _description, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__description, put=__cordl_internal_set__description)) ::UnityW<::TMPro::TMP_InputField>  _description;

/// @brief Field _disableWhenInvalidToSubmit, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableWhenInvalidToSubmit, put=__cordl_internal_set__disableWhenInvalidToSubmit)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  _disableWhenInvalidToSubmit;

/// @brief Field _email, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__email, put=__cordl_internal_set__email)) ::UnityW<::TMPro::TMP_InputField>  _email;

/// @brief Field _lastMod, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastMod, put=__cordl_internal_set__lastMod)) ::Modio::Mods::Mod*  _lastMod;

/// @brief Field _modioUIMod, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioUIMod, put=__cordl_internal_set__modioUIMod)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _modioUIMod;

/// @brief Field _reportType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__reportType, put=__cordl_internal_set__reportType)) ::Modio::Reports::ReportType  _reportType;

static inline ::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel* New_ctor() ;

/// @brief Method OnDescriptionTextChanged, addr 0x9facfac, size 0xcc, virtual false, abstract: false, final false
inline void OnDescriptionTextChanged(::StringW  description) ;

/// @brief Method OnDestroy, addr 0x9fad108, size 0xf0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnModUpdated, addr 0x9fad078, size 0x90, virtual false, abstract: false, final false
inline void OnModUpdated() ;

/// @brief Method OnUserPressedBackButton, addr 0x9fad20c, size 0x58, virtual false, abstract: false, final false
inline void OnUserPressedBackButton() ;

/// @brief Method OnUserSubmittedReportDetails, addr 0x9fad264, size 0x158, virtual false, abstract: false, final false
inline void OnUserSubmittedReportDetails() ;

/// @brief Method OpenPanel, addr 0x9fad204, size 0x8, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Reports::ReportType  type) ;

/// @brief Method ReportCompleted, addr 0x9fad3bc, size 0xbc, virtual false, abstract: false, final false
inline void ReportCompleted(::Modio::Error*  error) ;

/// @brief Method Start, addr 0x9face04, size 0x1a8, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__description() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__description() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton> const& __cordl_internal_get__disableWhenInvalidToSubmit() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>& __cordl_internal_get__disableWhenInvalidToSubmit() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__email() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__email() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__lastMod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__lastMod() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__modioUIMod() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__modioUIMod() ;

constexpr ::Modio::Reports::ReportType const& __cordl_internal_get__reportType() const;

constexpr ::Modio::Reports::ReportType& __cordl_internal_get__reportType() ;

constexpr void __cordl_internal_set__description(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__disableWhenInvalidToSubmit(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  value) ;

constexpr void __cordl_internal_set__email(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__lastMod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

constexpr void __cordl_internal_set__reportType(::Modio::Reports::ReportType  value) ;

/// @brief Method .ctor, addr 0x9fad478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioReportDetailsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioReportDetailsPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioReportDetailsPanel(ModioReportDetailsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioReportDetailsPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioReportDetailsPanel(ModioReportDetailsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27090};

/// @brief Field _reportType, offset: 0x58, size: 0x4, def value: None
 ::Modio::Reports::ReportType  ____reportType;

/// [SerializeField]
/// @brief Field _email, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____email;

/// [SerializeField]
/// @brief Field _description, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____description;

/// [SerializeField]
/// @brief Field _disableWhenInvalidToSubmit, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  ____disableWhenInvalidToSubmit;

/// @brief Field _modioUIMod, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____modioUIMod;

/// @brief Field _lastMod, offset: 0x80, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____lastMod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel, ____reportType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel, ____email) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel, ____description) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel, ____disableWhenInvalidToSubmit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel, ____modioUIMod) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel, ____lastMod) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::Report::ModioReportDetailsPanel) == 0x88, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Report
