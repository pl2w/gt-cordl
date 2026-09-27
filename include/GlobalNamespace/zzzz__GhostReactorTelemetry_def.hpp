#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GhostReactorTelemetry)
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorTelemetry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorTelemetry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorTelemetry*, "", "GhostReactorTelemetry");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorTelemetry
class CORDL_TYPE GhostReactorTelemetry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GhostReactorTelemetry* New_ctor() ;

/// @brief Method .ctor, addr 0x5866100, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GameEnvironment, addr 0x58660c0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_GameEnvironment() ;

/// @brief Method get_GameVersionCustomTag, addr 0x5866048, size 0x78, virtual false, abstract: false, final false
static inline ::StringW get_GameVersionCustomTag() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorTelemetry(GhostReactorTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorTelemetry(GhostReactorTelemetry const& ) = delete;

/// @brief Field CAUGHT_IN_ANAMOLE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CAUGHT_IN_ANAMOLE_BODY_DATA{u"caught_in_anamole"};

/// @brief Field CHAOS_JUICE_COLLECTED_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  CHAOS_JUICE_COLLECTED_EVENT_NAME{u"ghost_chaos_juice_collected"};

/// @brief Field CHAOS_SEEDS_COLLECTED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CHAOS_SEEDS_COLLECTED_BODY_DATA{u"chaos_seeds_collected"};

/// @brief Field CHAOS_SEEDS_IN_QUEUE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CHAOS_SEEDS_IN_QUEUE_BODY_DATA{u"chaos_seeds_in_queue"};

/// @brief Field CHAOS_SEED_START_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  CHAOS_SEED_START_EVENT_NAME{u"ghost_chaos_seed_start"};

/// @brief Field CORES_COLLECTED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_COLLECTED_BODY_DATA{u"cores_collected"};

/// @brief Field CORES_COLLECTED_FROM_GATHERING_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_COLLECTED_FROM_GATHERING_BODY_DATA{u"cores_collected_from_gathering"};

/// @brief Field CORES_COLLECTED_FROM_GHOSTS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_COLLECTED_FROM_GHOSTS_BODY_DATA{u"cores_collected_from_ghosts"};

/// @brief Field CORES_GIVEN_TO_OTHERS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_GIVEN_TO_OTHERS_BODY_DATA{u"cores_given_to_others"};

/// @brief Field CORES_PROCESSED_BY_OVERDRIVE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_PROCESSED_BY_OVERDRIVE_BODY_DATA{u"cores_processed_by_overdrive"};

/// @brief Field CORES_RECEIVED_FROM_OTHERS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_RECEIVED_FROM_OTHERS_BODY_DATA{u"cores_received_from_others"};

/// @brief Field CORES_SPENT_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_SPENT_BODY_DATA{u"cores_spent"};

/// @brief Field CORES_SPENT_ON_GATES_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_SPENT_ON_GATES_BODY_DATA{u"cores_spent_on_gates"};

/// @brief Field CORES_SPENT_ON_ITEMS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_SPENT_ON_ITEMS_BODY_DATA{u"cores_spent_on_items"};

/// @brief Field CORES_SPENT_ON_LEVELS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_SPENT_ON_LEVELS_BODY_DATA{u"cores_spent_on_levels"};

/// @brief Field CORES_SPENT_WAITING_IN_BREAKROOM_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  CORES_SPENT_WAITING_IN_BREAKROOM_BODY_DATA{u"cores_spent_waiting_in_breakroom"};

/// @brief Field CREDITS_REFILL_PURCHASED_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  CREDITS_REFILL_PURCHASED_EVENT_NAME{u"ghost_credits_refill_purchased"};

/// @brief Field DIED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  DIED_BODY_DATA{u"died"};

/// @brief Field END_NUMBER_IN_GAME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  END_NUMBER_IN_GAME_BODY_DATA{u"end_number_in_game"};

/// @brief Field EVENT_TIMESTAMP_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_TIMESTAMP_BODY_DATA{u"event_timestamp"};

/// @brief Field FINAL_CORES_BALANCE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  FINAL_CORES_BALANCE_BODY_DATA{u"final_cores_balance"};

/// @brief Field FINAL_CREDITS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  FINAL_CREDITS_BODY_DATA{u"final_credits"};

/// @brief Field FLOOR_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  FLOOR_BODY_DATA{u"floor"};

/// @brief Field FLOOR_END_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  FLOOR_END_EVENT_NAME{u"ghost_floor_end"};

/// @brief Field FLOOR_JOINED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  FLOOR_JOINED_BODY_DATA{u"floor_joined"};

/// @brief Field FLOOR_START_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  FLOOR_START_EVENT_NAME{u"ghost_floor_start"};

/// @brief Field GAME_VERSION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_VERSION_CUSTOM_TAG_PREFIX{u"game_version_"};

/// @brief Field GATES_UNLOCKED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  GATES_UNLOCKED_BODY_DATA{u"gates_unlocked"};

/// @brief Field GHOST_GAME_ID_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  GHOST_GAME_ID_BODY_DATA{u"ghost_game_id"};

/// @brief Field GRIFT_PRICE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  GRIFT_PRICE_BODY_DATA{u"grift_price"};

/// @brief Field GRIFT_SPENT_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  GRIFT_SPENT_BODY_DATA{u"grift_spent"};

/// @brief Field INITIAL_CORES_BALANCE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  INITIAL_CORES_BALANCE_BODY_DATA{u"initial_cores_balance"};

/// @brief Field IS_PRIVATE_ROOM_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  IS_PRIVATE_ROOM_BODY_DATA{u"is_private_room"};

/// @brief Field ITEMS_PICKED_UP_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  ITEMS_PICKED_UP_BODY_DATA{u"items_picked_up"};

/// @brief Field ITEMS_PURCHASED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  ITEMS_PURCHASED_BODY_DATA{u"items_purchased"};

/// @brief Field JUICE_COLLECTED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  JUICE_COLLECTED_BODY_DATA{u"juice_collected"};

/// @brief Field JUICE_SPENT_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  JUICE_SPENT_BODY_DATA{u"juice_spent"};

/// @brief Field LEVELS_UNLOCKED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  LEVELS_UNLOCKED_BODY_DATA{u"levels_unlocked"};

/// @brief Field MAX_NUMBER_IN_GAME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  MAX_NUMBER_IN_GAME_BODY_DATA{u"max_number_in_game"};

/// @brief Field METRIC_ACTION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  METRIC_ACTION_CUSTOM_TAG_PREFIX{u"metric_action_"};

/// @brief Field MODIFIER_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  MODIFIER_BODY_DATA{u"modifier"};

/// @brief Field NEW_LEVEL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  NEW_LEVEL_BODY_DATA{u"new_level"};

/// @brief Field NEW_RANK_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  NEW_RANK_BODY_DATA{u"new_rank"};

/// @brief Field NUMBER_OF_PLAYERS_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  NUMBER_OF_PLAYERS_BODY_DATA{u"number_of_players"};

/// @brief Field NUM_SHIFTS_PLAYED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  NUM_SHIFTS_PLAYED_BODY_DATA{u"num_shifts_played"};

/// @brief Field OBJECTIVES_COMPLETED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  OBJECTIVES_COMPLETED_BODY_DATA{u"objectives_completed"};

/// @brief Field OVERDRIVE_PURCHASED_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  OVERDRIVE_PURCHASED_EVENT_NAME{u"ghost_overdrive_purchased"};

/// @brief Field PLAYER_RANK_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  PLAYER_RANK_BODY_DATA{u"player_rank"};

/// @brief Field PLAY_DURATION_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  PLAY_DURATION_BODY_DATA{u"play_duration"};

/// @brief Field POD_UPGRADE_PURCHASED_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  POD_UPGRADE_PURCHASED_EVENT_NAME{u"ghost_pod_upgrade_purchased"};

/// @brief Field PRESET_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  PRESET_BODY_DATA{u"preset"};

/// @brief Field RANK_UP_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  RANK_UP_EVENT_NAME{u"ghost_game_rank_up"};

/// @brief Field REASON_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  REASON_BODY_DATA{u"reason"};

/// @brief Field REVIVES_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  REVIVES_BODY_DATA{u"revives"};

/// @brief Field SECONDS_INTO_SHIFT_AT_JOIN_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SECONDS_INTO_SHIFT_AT_JOIN_BODY_DATA{u"seconds_into_shift_at_join"};

/// @brief Field SECTION_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SECTION_BODY_DATA{u"section"};

/// @brief Field SHIFT_CUT_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SHIFT_CUT_DATA{u"shift_cut_data"};

/// @brief Field SHIFT_END_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SHIFT_END_EVENT_NAME{u"ghost_game_end"};

/// @brief Field SHIFT_START_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SHIFT_START_EVENT_NAME{u"ghost_game_start"};

/// @brief Field SHINY_ROCKS_SPENT_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SHINY_ROCKS_SPENT_BODY_DATA{u"shiny_rocks_spent"};

/// @brief Field SHINY_ROCKS_USED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  SHINY_ROCKS_USED_BODY_DATA{u"shiny_rocks_used"};

/// @brief Field STARTED_LATE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTED_LATE_BODY_DATA{u"started_late"};

/// @brief Field START_AT_BEGINNING_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  START_AT_BEGINNING_BODY_DATA{u"start_at_beginning"};

/// @brief Field TIME_STARTED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TIME_STARTED_BODY_DATA{u"time_started"};

/// @brief Field TOOL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_BODY_DATA{u"tool"};

/// @brief Field TOOL_LEVEL_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_LEVEL_BODY_DATA{u"tool_level"};

/// @brief Field TOOL_PURCHASED_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_PURCHASED_EVENT_NAME{u"ghost_tool_purchased"};

/// @brief Field TOOL_UNLOCK_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_UNLOCK_EVENT_NAME{u"ghost_game_tool_unlock"};

/// @brief Field TOOL_UPGRADE_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  TOOL_UPGRADE_EVENT_NAME{u"ghost_game_tool_upgrade"};

/// @brief Field TOTAL_CORES_COLLECTED_BY_GROUP_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOTAL_CORES_COLLECTED_BY_GROUP_BODY_DATA{u"total_cores_collected_by_group"};

/// @brief Field TOTAL_CORES_COLLECTED_BY_PLAYER_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOTAL_CORES_COLLECTED_BY_PLAYER_BODY_DATA{u"total_cores_collected_by_player"};

/// @brief Field TOTAL_CORES_SPENT_BY_GROUP_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOTAL_CORES_SPENT_BY_GROUP_BODY_DATA{u"total_cores_spent_by_group"};

/// @brief Field TOTAL_CORES_SPENT_BY_PLAYER_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TOTAL_CORES_SPENT_BY_PLAYER_BODY_DATA{u"total_cores_spent_by_player"};

/// @brief Field TYPE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  TYPE_BODY_DATA{u"type"};

/// @brief Field UNLOCK_TIME_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  UNLOCK_TIME_BODY_DATA{u"unlock_time"};

/// @brief Field UPGRADE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  UPGRADE_BODY_DATA{u"upgrade"};

/// @brief Field XP_GAINED_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  XP_GAINED_BODY_DATA{u"xp_gained"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GhostReactorTelemetry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
