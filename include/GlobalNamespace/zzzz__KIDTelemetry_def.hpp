#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDTelemetry)
// Forward declare root types
namespace GlobalNamespace {
class KIDTelemetry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDTelemetry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDTelemetry*, "", "KIDTelemetry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDTelemetry
class CORDL_TYPE KIDTelemetry : public ::System::Object {
public:
// Declarations
/// @brief Method GetPermissionEnabledBodyData, addr 0x5a3e5f0, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW GetPermissionEnabledBodyData(::StringW  permission) ;

/// @brief Method GetPermissionManagedByBodyData, addr 0x5a3e584, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW GetPermissionManagedByBodyData(::StringW  permission) ;

/// @brief Method get_Closed_MetricActionCustomTag, addr 0x5a3e504, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_Closed_MetricActionCustomTag() ;

/// @brief Method get_GameEnvironment, addr 0x5a3e544, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_GameEnvironment() ;

/// @brief Method get_GameVersionCustomTag, addr 0x5a3e40c, size 0x78, virtual false, abstract: false, final false
static inline ::StringW get_GameVersionCustomTag() ;

/// @brief Method get_Open_MetricActionCustomTag, addr 0x5a3e484, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_Open_MetricActionCustomTag() ;

/// @brief Method get_Updated_MetricActionCustomTag, addr 0x5a3e4c4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_Updated_MetricActionCustomTag() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDTelemetry(KIDTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDTelemetry(KIDTelemetry const& ) = delete;

/// @brief Field AGE_APPEAL_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  AGE_APPEAL_EVENT_NAME{u"kid_age_appeal"};

/// @brief Field AGE_DECLARED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  AGE_DECLARED_BODY_DATA{u"age_declared"};

/// @brief Field AGE_DISCREPENCY_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  AGE_DISCREPENCY_EVENT_NAME{u"kid_age_gate_discrepency"};

/// @brief Field AGE_GATE_CONFIRM_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  AGE_GATE_CONFIRM_EVENT_NAME{u"kid_age_gate_confirm"};

/// @brief Field AGE_GATE_CUSTOM_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  AGE_GATE_CUSTOM_TAG{u"kid_age_gate"};

/// @brief Field AGE_GATE_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  AGE_GATE_EVENT_NAME{u"kid_age_gate"};

/// @brief Field APPEAL_AGE_GATE_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  APPEAL_AGE_GATE_EVENT_NAME{u"kid_age_appeal_age_gate"};

/// @brief Field APPEAL_CONFIRM_EMAIL_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  APPEAL_CONFIRM_EMAIL_EVENT_NAME{u"kid_age_appeal_confirm_email"};

/// @brief Field APPEAL_CUSTOM_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  APPEAL_CUSTOM_TAG{u"kid_age_appeal"};

/// @brief Field APPEAL_EMAIL_TYPE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  APPEAL_EMAIL_TYPE_BODY_DATA{u"email_type"};

/// @brief Field APPEAL_ENTER_EMAIL_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  APPEAL_ENTER_EMAIL_EVENT_NAME{u"kid_age_appeal_enter_email"};

/// @brief Field BUTTON_PRESSED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  BUTTON_PRESSED_BODY_DATA{u"button_pressed"};

/// @brief Field CORRECT_AGE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORRECT_AGE_BODY_DATA{u"correct_age"};

/// @brief Field EMAIL_CONFIRM_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  EMAIL_CONFIRM_EVENT_NAME{u"kid_email_confirm"};

/// @brief Field GAME_SETTINGS_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_SETTINGS_EVENT_NAME{u"kid_game_settings"};

/// @brief Field GAME_VERSION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_VERSION_CUSTOM_TAG_PREFIX{u"game_version_"};

/// @brief Field KID_STATUS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_STATUS_BODY_DATA{u"kid_status"};

/// @brief Field LEARN_MORE_URL_PRESSED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  LEARN_MORE_URL_PRESSED_BODY_DATA{u"learn_more_url_pressed"};

/// @brief Field METRIC_ACTION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  METRIC_ACTION_CUSTOM_TAG_PREFIX{u"metric_action_"};

/// @brief Field MISMATCH_ACTUAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  MISMATCH_ACTUAL_BODY_DATA{u"mismatch_actual"};

/// @brief Field MISMATCH_EXPECTED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  MISMATCH_EXPECTED_BODY_DATA{u"mismatch_expected"};

/// @brief Field OPT_IN_CHOICE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  OPT_IN_CHOICE_BODY_DATA{u"opt_in_choice"};

/// @brief Field PERMISSION_ENABLED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  PERMISSION_ENABLED_BODY_DATA{u"permission_eneabled_"};

/// @brief Field PERMISSION_MANAGED_BY_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  PERMISSION_MANAGED_BY_BODY_DATA{u"permission_managedby_"};

/// @brief Field PHASE_FOUR offset 0xffffffff size 0x8
static constexpr ::ConstString  PHASE_FOUR{u"kid_phase_4"};

/// @brief Field PHASE_THREE offset 0xffffffff size 0x8
static constexpr ::ConstString  PHASE_THREE{u"kid_phase_3"};

/// @brief Field PHASE_THREE_OPTIONAL_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  PHASE_THREE_OPTIONAL_EVENT_NAME{u"kid_phase3_optional"};

/// @brief Field PHASE_TWO offset 0xffffffff size 0x8
static constexpr ::ConstString  PHASE_TWO{u"kid_phase_2"};

/// @brief Field PHASE_TWO_IN_COHORT_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  PHASE_TWO_IN_COHORT_EVENT_NAME{u"kid_phase2_incohort"};

/// @brief Field SCREEN_SHOWN_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SCREEN_SHOWN_EVENT_NAME{u"kid_screen_shown"};

/// @brief Field SCREEN_SHOWN_REASON_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SCREEN_SHOWN_REASON_BODY_DATA{u"screen_shown_reason"};

/// @brief Field SCREEN_TYPE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SCREEN_TYPE_BODY_DATA{u"screen"};

/// @brief Field SETTINGS_CUSTOM_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  SETTINGS_CUSTOM_TAG{u"kid_settings"};

/// @brief Field SETUP_CUSTOM_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  SETUP_CUSTOM_TAG{u"kid_setup"};

/// @brief Field SHOWN_SETTINGS_SCREEN offset 0xffffffff size 0x8
static constexpr ::ConstString  SHOWN_SETTINGS_SCREEN{u"saw_game_settings"};

/// @brief Field SUBMITTED_AGE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SUBMITTED_AGE_BODY_DATA{u"submitted_age"};

/// @brief Field WARNING_SCREEN_CUSTOM_TAG offset 0xffffffff size 0x8
static constexpr ::ConstString  WARNING_SCREEN_CUSTOM_TAG{u"kid_warning_screen"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDTelemetry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
