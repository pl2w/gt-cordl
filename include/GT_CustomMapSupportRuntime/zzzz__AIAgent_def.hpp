#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AIAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__AttackType_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__NavAgentType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AIAgent)
namespace GT_CustomMapSupportRuntime {
struct AgentBehaviours;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::AIAgent*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::AIAgent*, "GT_CustomMapSupportRuntime", "AIAgent");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies GT_CustomMapSupportRuntime.AttackType, GT_CustomMapSupportRuntime.MapEntity, GT_CustomMapSupportRuntime.NavAgentType, UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.AIAgent
class CORDL_TYPE AIAgent : public ::GT_CustomMapSupportRuntime::MapEntity {
public:
// Declarations
/// @brief Field acceleration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief Field agentBehaviours, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_agentBehaviours, put=__cordl_internal_set_agentBehaviours)) ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  agentBehaviours;

/// @brief Field allowTargetingTaggedPlayers, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowTargetingTaggedPlayers, put=__cordl_internal_set_allowTargetingTaggedPlayers)) bool  allowTargetingTaggedPlayers;

/// @brief Field animBlendTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_animBlendTime, put=__cordl_internal_set_animBlendTime)) float_t  animBlendTime;

/// @brief Field attackAnimName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_attackAnimName, put=__cordl_internal_set_attackAnimName)) ::StringW  attackAnimName;

/// @brief Field attackDist, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDist, put=__cordl_internal_set_attackDist)) float_t  attackDist;

/// @brief Field attackType, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackType, put=__cordl_internal_set_attackType)) ::GT_CustomMapSupportRuntime::AttackType  attackType;

/// @brief Field damageAmount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_damageAmount, put=__cordl_internal_set_damageAmount)) float_t  damageAmount;

/// @brief Field damageDelayAfterPlayingAnim, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_damageDelayAfterPlayingAnim, put=__cordl_internal_set_damageDelayAfterPlayingAnim)) float_t  damageDelayAfterPlayingAnim;

/// @brief Field enemyTypeId, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_enemyTypeId, put=__cordl_internal_set_enemyTypeId)) uint8_t  enemyTypeId;

/// @brief Field invalidEntries, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invalidEntries, put=setStaticF_invalidEntries)) ::System::Collections::Generic::List_1<int32_t>*  invalidEntries;

/// @brief Field loseSightDist, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_loseSightDist, put=__cordl_internal_set_loseSightDist)) float_t  loseSightDist;

/// @brief Field lua_AgentID, offset 0x88, size 0x2 
 __declspec(property(get=__cordl_internal_get_lua_AgentID, put=__cordl_internal_set_lua_AgentID)) int16_t  lua_AgentID;

/// @brief Field movementSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementSpeed, put=__cordl_internal_set_movementSpeed)) float_t  movementSpeed;

/// @brief Field navAgentType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_navAgentType, put=__cordl_internal_set_navAgentType)) ::GT_CustomMapSupportRuntime::NavAgentType  navAgentType;

/// @brief Field rememberLoseSightPosition, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_rememberLoseSightPosition, put=__cordl_internal_set_rememberLoseSightPosition)) bool  rememberLoseSightPosition;

/// @brief Field sightDist, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightDist, put=__cordl_internal_set_sightDist)) float_t  sightDist;

/// @brief Field sightFOV, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightFOV, put=__cordl_internal_set_sightFOV)) float_t  sightFOV;

/// @brief Field sightOffset, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_sightOffset, put=__cordl_internal_set_sightOffset)) ::UnityEngine::Vector3  sightOffset;

/// @brief Field stopDist, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_stopDist, put=__cordl_internal_set_stopDist)) float_t  stopDist;

/// @brief Field stopMovingToAttack, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_stopMovingToAttack, put=__cordl_internal_set_stopMovingToAttack)) bool  stopMovingToAttack;

/// @brief Field timeBetweenAttacks, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBetweenAttacks, put=__cordl_internal_set_timeBetweenAttacks)) float_t  timeBetweenAttacks;

/// @brief Field turnSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

/// @brief Field useColliders, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_useColliders, put=__cordl_internal_set_useColliders)) bool  useColliders;

/// @brief Field validateBehaviors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_validateBehaviors, put=setStaticF_validateBehaviors)) ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  validateBehaviors;

/// @brief Method GetPackedCreateData, addr 0x9cb0cb8, size 0x74, virtual true, abstract: false, final false
inline int64_t GetPackedCreateData() ;

static inline ::GT_CustomMapSupportRuntime::AIAgent* New_ctor() ;

/// @brief Method OnValidate, addr 0x9cb0698, size 0x620, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method UnpackCreateData, addr 0x9cb0d2c, size 0x10, virtual false, abstract: false, final false
static inline void UnpackCreateData(int64_t  data, ::by_ref<uint8_t>  entityTypeID, ::by_ref<int16_t>  luaAgentID) ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>* const& __cordl_internal_get_agentBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*& __cordl_internal_get_agentBehaviours() ;

constexpr bool const& __cordl_internal_get_allowTargetingTaggedPlayers() const;

constexpr bool& __cordl_internal_get_allowTargetingTaggedPlayers() ;

constexpr float_t const& __cordl_internal_get_animBlendTime() const;

constexpr float_t& __cordl_internal_get_animBlendTime() ;

constexpr ::StringW const& __cordl_internal_get_attackAnimName() const;

constexpr ::StringW& __cordl_internal_get_attackAnimName() ;

constexpr float_t const& __cordl_internal_get_attackDist() const;

constexpr float_t& __cordl_internal_get_attackDist() ;

constexpr ::GT_CustomMapSupportRuntime::AttackType const& __cordl_internal_get_attackType() const;

constexpr ::GT_CustomMapSupportRuntime::AttackType& __cordl_internal_get_attackType() ;

constexpr float_t const& __cordl_internal_get_damageAmount() const;

constexpr float_t& __cordl_internal_get_damageAmount() ;

constexpr float_t const& __cordl_internal_get_damageDelayAfterPlayingAnim() const;

constexpr float_t& __cordl_internal_get_damageDelayAfterPlayingAnim() ;

constexpr uint8_t const& __cordl_internal_get_enemyTypeId() const;

constexpr uint8_t& __cordl_internal_get_enemyTypeId() ;

constexpr float_t const& __cordl_internal_get_loseSightDist() const;

constexpr float_t& __cordl_internal_get_loseSightDist() ;

constexpr int16_t const& __cordl_internal_get_lua_AgentID() const;

constexpr int16_t& __cordl_internal_get_lua_AgentID() ;

constexpr float_t const& __cordl_internal_get_movementSpeed() const;

constexpr float_t& __cordl_internal_get_movementSpeed() ;

constexpr ::GT_CustomMapSupportRuntime::NavAgentType const& __cordl_internal_get_navAgentType() const;

constexpr ::GT_CustomMapSupportRuntime::NavAgentType& __cordl_internal_get_navAgentType() ;

constexpr bool const& __cordl_internal_get_rememberLoseSightPosition() const;

constexpr bool& __cordl_internal_get_rememberLoseSightPosition() ;

constexpr float_t const& __cordl_internal_get_sightDist() const;

constexpr float_t& __cordl_internal_get_sightDist() ;

constexpr float_t const& __cordl_internal_get_sightFOV() const;

constexpr float_t& __cordl_internal_get_sightFOV() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sightOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sightOffset() ;

constexpr float_t const& __cordl_internal_get_stopDist() const;

constexpr float_t& __cordl_internal_get_stopDist() ;

constexpr bool const& __cordl_internal_get_stopMovingToAttack() const;

constexpr bool& __cordl_internal_get_stopMovingToAttack() ;

constexpr float_t const& __cordl_internal_get_timeBetweenAttacks() const;

constexpr float_t& __cordl_internal_get_timeBetweenAttacks() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr bool const& __cordl_internal_get_useColliders() const;

constexpr bool& __cordl_internal_get_useColliders() ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_agentBehaviours(::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  value) ;

constexpr void __cordl_internal_set_allowTargetingTaggedPlayers(bool  value) ;

constexpr void __cordl_internal_set_animBlendTime(float_t  value) ;

constexpr void __cordl_internal_set_attackAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_attackDist(float_t  value) ;

constexpr void __cordl_internal_set_attackType(::GT_CustomMapSupportRuntime::AttackType  value) ;

constexpr void __cordl_internal_set_damageAmount(float_t  value) ;

constexpr void __cordl_internal_set_damageDelayAfterPlayingAnim(float_t  value) ;

constexpr void __cordl_internal_set_enemyTypeId(uint8_t  value) ;

constexpr void __cordl_internal_set_loseSightDist(float_t  value) ;

constexpr void __cordl_internal_set_lua_AgentID(int16_t  value) ;

constexpr void __cordl_internal_set_movementSpeed(float_t  value) ;

constexpr void __cordl_internal_set_navAgentType(::GT_CustomMapSupportRuntime::NavAgentType  value) ;

constexpr void __cordl_internal_set_rememberLoseSightPosition(bool  value) ;

constexpr void __cordl_internal_set_sightDist(float_t  value) ;

constexpr void __cordl_internal_set_sightFOV(float_t  value) ;

constexpr void __cordl_internal_set_sightOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_stopDist(float_t  value) ;

constexpr void __cordl_internal_set_stopMovingToAttack(bool  value) ;

constexpr void __cordl_internal_set_timeBetweenAttacks(float_t  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_useColliders(bool  value) ;

/// @brief Method .ctor, addr 0x9cb0d3c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_invalidEntries() ;

static inline ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>* getStaticF_validateBehaviors() ;

static inline void setStaticF_invalidEntries(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_validateBehaviors(::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AIAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AIAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AIAgent(AIAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AIAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AIAgent(AIAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30875};

/// [HideInInspector]
/// [Obsolete("Use MapEntity.entityTypeId instead")]
/// @brief Field enemyTypeId, offset: 0x24, size: 0x1, def value: None
 uint8_t  ___enemyTypeId;

/// [Tooltip("\"NavAgentType\" determines how the NavAgent will interact with the NavMesh.\nCheck the settings for each Nav Agent type in the \"Window > AI > Navigation\" window on the \"Agents\" tab to determine which agent type best fits your Agent.\nEnsure your Scene contains a baked navmesh for the corresponding agent type.\n\nPlease note that any changes to the values for the agent types as well as the addition of any new agent types will be ignored once your map is loaded in-game")]
/// @brief Field navAgentType, offset: 0x28, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::NavAgentType  ___navAgentType;

/// [Tooltip("\"MovementSpeed\" determines the max movement speed of the agent.")]
/// @brief Field movementSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___movementSpeed;

/// [Tooltip("\"Acceleration\" determines how quickly the agent can get to max speed.")]
/// @brief Field acceleration, offset: 0x30, size: 0x4, def value: None
 float_t  ___acceleration;

/// [Tooltip("\"TurnSpeed\" determines how quickly the agent can turn.")]
/// @brief Field turnSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___turnSpeed;

/// [Tooltip("If checked, this agent can target players who have already been tagged in non-custom game modes. If unchecked, this agent will NOT target tagged players in non-custom game modes.")]
/// @brief Field allowTargetingTaggedPlayers, offset: 0x38, size: 0x1, def value: None
 bool  ___allowTargetingTaggedPlayers;

/// [Tooltip("\"SightOffset\" determines from what point raycasts will begin. It is the offset from the position of the AIAgent\'s transform.")]
/// @brief Field sightOffset, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sightOffset;

/// [Tooltip("\"SightFOV\" is the field of view for the agent when searching for players. 360 max")]
/// [Range(0, 360)]
/// @brief Field sightFOV, offset: 0x48, size: 0x4, def value: None
 float_t  ___sightFOV;

/// [Tooltip("\"SightDist\" determines how close a player must be to the agent before it will consider them as a target.")]
/// @brief Field sightDist, offset: 0x4c, size: 0x4, def value: None
 float_t  ___sightDist;

/// [Tooltip("\"LoseSightDist\" sets the distance at which an agent will lose sight of a player and stop targeting them.")]
/// @brief Field loseSightDist, offset: 0x50, size: 0x4, def value: None
 float_t  ___loseSightDist;

/// [Tooltip("If checked, this agent will continue moving to their chase target\'s last known position.\nIf unchecked, this agent will stop moving as soon as it loses sight of their chase target.")]
/// @brief Field rememberLoseSightPosition, offset: 0x54, size: 0x1, def value: None
 bool  ___rememberLoseSightPosition;

/// [Tooltip("\"StopDist\" sets how close an agent will come to a player when chasing.\nSetting this too small may result in players getting stuck inside agent colliders.\"")]
/// @brief Field stopDist, offset: 0x58, size: 0x4, def value: None
 float_t  ___stopDist;

/// [Tooltip("\"AttackType\" Determines how a hit from this Agent will be handled.\nTag - Agent won\'t deal damage to players when attacking and will Tag them instead. In the Custom Game Mode this will send the \"taggedByAI\" event to your Luau script.\nUseGT - Will deal damage to players using GT\'s built-in systems. Allows you to make use of GT\'s health, death, and revive systems.\nUseLuau - Sends the \"playerHit\" event to Luau with the damage amount. Allows you to determine what happens with damage, but you won\'t be able to use GT\'s built-in systems")]
/// @brief Field attackType, offset: 0x5c, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::AttackType  ___attackType;

/// [Tooltip("\"AttackDist\" is the distance at which an agent will start attacking a player.")]
/// @brief Field attackDist, offset: 0x60, size: 0x4, def value: None
 float_t  ___attackDist;

/// [Tooltip("If checked, the Attack behavior will be driven by Trigger colliders attached to this Agent.\n The design intention for these colliders is that they are small and attached to the \"damaging\" parts of your agent like their hands or weapon. If they are too big, attacking may not work as expected.\n\n If unchecked, the Attack behavior will be driven solely by the target being within the specified Attack Distance.")]
/// @brief Field useColliders, offset: 0x64, size: 0x1, def value: None
 bool  ___useColliders;

/// [Tooltip("If checked, this Agent will immediately stop moving when starting an attack. If unchecked, the Agent will finish it\'s active move request while it starts attacking.")]
/// @brief Field stopMovingToAttack, offset: 0x65, size: 0x1, def value: None
 bool  ___stopMovingToAttack;

/// [Tooltip("\"DamageAmount\" is how much damage the agent does per attack")]
/// @brief Field damageAmount, offset: 0x68, size: 0x4, def value: None
 float_t  ___damageAmount;

/// [Tooltip("\"TimeBetweenAttacks\" is how much time (in seconds) should there be between attacks.")]
/// @brief Field timeBetweenAttacks, offset: 0x6c, size: 0x4, def value: None
 float_t  ___timeBetweenAttacks;

/// [Tooltip("\"AttackAnimName\" is the name of the Attack state in the Animation Controller(s) that will be activated when the agent attacks.")]
/// @brief Field attackAnimName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___attackAnimName;

/// [Tooltip("\"AnimBlendTime\" is how much time (in seconds) it should take to blend into the Attack animation.\nSetting this to 0 means the Animation Controller(s) will immediately switch to the Attackanimation state\"")]
/// @brief Field animBlendTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___animBlendTime;

/// [Tooltip("\"DamageDelayAfterPlayingAnim\" is how much time (in seconds) to delay the attack damage event after starting the attack animation. This is only used if \"UseColliders\" is unchecked. This is useful when your attack animation contains a long windup.")]
/// @brief Field damageDelayAfterPlayingAnim, offset: 0x7c, size: 0x4, def value: None
 float_t  ___damageDelayAfterPlayingAnim;

/// [Tooltip("The \"AgentBehaviours\" list determines what behaviours an agent will use and what priority each behaviour is be given.\n\nPriority is based of index in the list. If the first behaviour in the list can execute, all behaviours after it will be skipped.\n\nOnly one instance of a behaviour will be used, any duplicates will be ignored.\n\nLeaving this empty will result in the agent doing nothing unless specifically told by a LUAU script.\"")]
/// @brief Field agentBehaviours, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GT_CustomMapSupportRuntime::AgentBehaviours>*  ___agentBehaviours;

/// [Obsolete("Use MapEntity.lua_EntityID instead")]
/// @brief Field lua_AgentID, offset: 0x88, size: 0x2, def value: None
 int16_t  ___lua_AgentID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___enemyTypeId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___navAgentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___movementSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___acceleration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___turnSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___allowTargetingTaggedPlayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___sightOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___sightFOV) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___sightDist) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___loseSightDist) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___rememberLoseSightPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___stopDist) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___attackType) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___attackDist) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___useColliders) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___stopMovingToAttack) == 0x65, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___damageAmount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___timeBetweenAttacks) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___attackAnimName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___animBlendTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___damageDelayAfterPlayingAnim) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___agentBehaviours) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AIAgent, ___lua_AgentID) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::AIAgent) == 0x90, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
