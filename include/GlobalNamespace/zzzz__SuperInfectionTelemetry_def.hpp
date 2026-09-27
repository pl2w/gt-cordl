#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SuperInfectionTelemetry)
// Forward declare root types
namespace GlobalNamespace {
class SuperInfectionTelemetry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfectionTelemetry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionTelemetry*, "", "SuperInfectionTelemetry");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionTelemetry
class CORDL_TYPE SuperInfectionTelemetry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SuperInfectionTelemetry* New_ctor() ;

/// @brief Method .ctor, addr 0x5bf8200, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GameEnvironment, addr 0x5bf81c0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_GameEnvironment() ;

/// @brief Method get_GameVersionCustomTag, addr 0x5bf8148, size 0x78, virtual false, abstract: false, final false
static inline ::StringW get_GameVersionCustomTag() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionTelemetry(SuperInfectionTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionTelemetry(SuperInfectionTelemetry const& ) = delete;

/// @brief Field EVENT_TIMESTAMP_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_TIMESTAMP_BODY_DATA{u"event_timestamp"};

/// @brief Field GAME_VERSION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_VERSION_CUSTOM_TAG_PREFIX{u"game_version_"};

/// @brief Field INTERVAL_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  INTERVAL_EVENT_NAME{u"super_infection_interval"};

/// @brief Field INTERVAL_PLAY_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  INTERVAL_PLAY_TIME_BODY_DATA{u"interval_play_time"};

/// @brief Field METRIC_ACTION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  METRIC_ACTION_CUSTOM_TAG_PREFIX{u"metric_action_"};

/// @brief Field PLAYER_COUNT_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  PLAYER_COUNT_BODY_DATA{u"player_count"};

/// @brief Field RESOURCE_TYPE_COLLECTED_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  RESOURCE_TYPE_COLLECTED_INTERVAL_BODY_DATA{u"resource_type_collected_interval"};

/// @brief Field RESOURCE_TYPE_COLLECTED_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  RESOURCE_TYPE_COLLECTED_TOTAL_BODY_DATA{u"resource_type_collected_total"};

/// @brief Field ROOM_LEFT_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_LEFT_EVENT_NAME{u"super_infection_room_left"};

/// @brief Field ROOM_PLAY_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_PLAY_TIME_BODY_DATA{u"room_play_time"};

/// @brief Field ROUNDS_PLAYED_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  ROUNDS_PLAYED_INTERVAL_BODY_DATA{u"rounds_played_interval"};

/// @brief Field ROUNDS_PLAYED_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  ROUNDS_PLAYED_TOTAL_BODY_DATA{u"rounds_played_total"};

/// @brief Field SESSION_PLAY_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SESSION_PLAY_TIME_BODY_DATA{u"session_play_time"};

/// @brief Field SI_PURCHASE_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SI_PURCHASE_EVENT_NAME{u"super_infection_purchase"};

/// @brief Field SI_PURCHASE_TYPE offset 0xffffffff size 0x8
static constexpr ::ConstString  SI_PURCHASE_TYPE{u"si_purchase_type"};

/// @brief Field SI_SHINY_ROCK_COST offset 0xffffffff size 0x8
static constexpr ::ConstString  SI_SHINY_ROCK_COST{u"si_shiny_rock_cost"};

/// @brief Field SI_TECH_POINTS_PURCHASED offset 0xffffffff size 0x8
static constexpr ::ConstString  SI_TECH_POINTS_PURCHASED{u"si_tech_points_purchased"};

/// @brief Field SUPER_INFECTION_GAME_ID_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPER_INFECTION_GAME_ID_BODY_DATA{u"super_infection_round_id"};

/// @brief Field SUPER_INFECTION_PREPEND offset 0xffffffff size 0x8
static constexpr ::ConstString  SUPER_INFECTION_PREPEND{u"super_infection_"};

/// @brief Field TAGS_HOLDING_GADGET_TYPE_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TAGS_HOLDING_GADGET_TYPE_INTERVAL_BODY_DATA{u"tags_holding_gadget_type_interval"};

/// @brief Field TAGS_HOLDING_GADGET_TYPE_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TAGS_HOLDING_GADGET_TYPE_TOTAL_BODY_DATA{u"tags_holding_gadget_type_total"};

/// @brief Field TAGS_HOLDING_OTHERS_GADGETS_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TAGS_HOLDING_OTHERS_GADGETS_INTERVAL_BODY_DATA{u"tags_holding_others_gadgets_interval"};

/// @brief Field TAGS_HOLDING_OTHERS_GADGETS_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TAGS_HOLDING_OTHERS_GADGETS_TOTAL_BODY_DATA{u"tags_holding_others_gadgets_total"};

/// @brief Field TAGS_HOLDING_OWN_GADGETS_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TAGS_HOLDING_OWN_GADGETS_INTERVAL_BODY_DATA{u"tags_holding_own_gadgets_interval"};

/// @brief Field TAGS_HOLDING_OWN_GADGETS_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TAGS_HOLDING_OWN_GADGETS_TOTAL_BODY_DATA{u"tags_holding_own_gadgets_total"};

/// @brief Field TERMINAL_INTERVAL_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TERMINAL_INTERVAL_TIME_BODY_DATA{u"terminal_interval_time"};

/// @brief Field TERMINAL_TOTAL_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TERMINAL_TOTAL_TIME_BODY_DATA{u"terminal_total_time"};

/// @brief Field TIME_HOLDING_OTHERS_GADGETS_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_HOLDING_OTHERS_GADGETS_INTERVAL_BODY_DATA{u"time_holding_others_gadgets_interval"};

/// @brief Field TIME_HOLDING_OTHERS_GADGETS_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_HOLDING_OTHERS_GADGETS_TOTAL_BODY_DATA{u"time_holding_others_gadgets_total"};

/// @brief Field TIME_HOLDING_OWN_GADGETS_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_HOLDING_OWN_GADGETS_INTERVAL_BODY_DATA{u"time_holding_own_gadgets_interval"};

/// @brief Field TIME_HOLDING_OWN_GADGETS_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_HOLDING_OWN_GADGETS_TOTAL_BODY_DATA{u"time_holding_own_gadgets_total"};

/// @brief Field TIME_USING_GADGET_TYPE_INTERVAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_USING_GADGET_TYPE_INTERVAL_BODY_DATA{u"time_holding_gadget_type_interval"};

/// @brief Field TIME_USING_GADGET_TYPE_TOTAL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_USING_GADGET_TYPE_TOTAL_BODY_DATA{u"time_holding_gadget_type_total"};

/// @brief Field TOTAL_PLAY_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOTAL_PLAY_TIME_BODY_DATA{u"total_play_time"};

/// @brief Field UNLOCKED_NODES_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  UNLOCKED_NODES_BODY_DATA{u"unlocked_nodes"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SuperInfectionTelemetry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
