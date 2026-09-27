#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOController)
namespace Pathfinding::RVO {
class IAgent;
}
namespace Pathfinding::RVO {
struct MovementPlane;
}
namespace Pathfinding::RVO {
class Simulator;
}
namespace Pathfinding {
class IAstarAI;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::RVO {
class RVOController;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::RVOController*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVOController*, "Pathfinding.RVO", "RVOController");
// [AddComponentMenu("Pathfinding/Local Avoidance/RVO Controller")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_r_v_o_1_1_r_v_o_controller.php")]
// Dependencies Pathfinding.RVO.RVOLayer, Pathfinding.VersionedMonoBehaviour
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVOController
class CORDL_TYPE RVOController : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field <rvoAgent>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rvoAgent_k__BackingField, put=__cordl_internal_set__rvoAgent_k__BackingField)) ::Pathfinding::RVO::IAgent*  _rvoAgent_k__BackingField;

/// @brief Field <simulator>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__simulator_k__BackingField, put=__cordl_internal_set__simulator_k__BackingField)) ::Pathfinding::RVO::Simulator*  _simulator_k__BackingField;

/// @brief Field agentTimeHorizon, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_agentTimeHorizon, put=__cordl_internal_set_agentTimeHorizon)) float_t  agentTimeHorizon;

 __declspec(property(get=get_ai, put=set_ai)) ::Pathfinding::IAstarAI*  ai;

/// @brief Field aiBackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_aiBackingField, put=__cordl_internal_set_aiBackingField)) ::Pathfinding::IAstarAI*  aiBackingField;

 __declspec(property(get=get_center, put=set_center)) float_t  center;

/// @brief Field centerBackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_centerBackingField, put=__cordl_internal_set_centerBackingField)) float_t  centerBackingField;

/// @brief Field collidesWith, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_collidesWith, put=__cordl_internal_set_collidesWith)) ::Pathfinding::RVO::RVOLayer  collidesWith;

/// @brief Field debug, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug, put=__cordl_internal_set_debug)) bool  debug;

/// @brief [Obsolete("This field is obsolete in version 4.0 and will not affect anything. Use the LegacyRVOController if you need the old behaviour")]
 __declspec(property(get=get_enableRotation, put=set_enableRotation)) bool  enableRotation;

 __declspec(property(get=get_height, put=set_height)) float_t  height;

/// @brief Field heightBackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightBackingField, put=__cordl_internal_set_heightBackingField)) float_t  heightBackingField;

/// @brief Field layer, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::Pathfinding::RVO::RVOLayer  layer;

/// @brief Field lockWhenNotMoving, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_lockWhenNotMoving, put=__cordl_internal_set_lockWhenNotMoving)) bool  lockWhenNotMoving;

/// @brief Field locked, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_locked, put=__cordl_internal_set_locked)) bool  locked;

/// @brief [Obsolete("This field is obsolete in version 4.0 and will not affect anything. Use the LegacyRVOController if you need the old behaviour")]
 __declspec(property(get=get_mask, put=set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field maxNeighbours, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNeighbours, put=__cordl_internal_set_maxNeighbours)) int32_t  maxNeighbours;

/// @brief [Obsolete("This field is obsolete in version 4.0 and will not affect anything. Use the LegacyRVOController if you need the old behaviour")]
 __declspec(property(get=get_maxSpeed, put=set_maxSpeed)) float_t  maxSpeed;

 __declspec(property(get=get_movementPlane)) ::Pathfinding::RVO::MovementPlane  movementPlane;

/// @brief Field obstacleTimeHorizon, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_obstacleTimeHorizon, put=__cordl_internal_set_obstacleTimeHorizon)) float_t  obstacleTimeHorizon;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

/// @brief Field priority, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) float_t  priority;

 __declspec(property(get=get_radius, put=set_radius)) float_t  radius;

/// @brief Field radiusBackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_radiusBackingField, put=__cordl_internal_set_radiusBackingField)) float_t  radiusBackingField;

/// @brief [Obsolete("This field is obsolete in version 4.0 and will not affect anything. Use the LegacyRVOController if you need the old behaviour")]
 __declspec(property(get=get_rotationSpeed, put=set_rotationSpeed)) float_t  rotationSpeed;

 __declspec(property(get=get_rvoAgent, put=set_rvoAgent)) ::Pathfinding::RVO::IAgent*  rvoAgent;

 __declspec(property(get=get_simulator, put=set_simulator)) ::Pathfinding::RVO::Simulator*  simulator;

/// @brief Field tr, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

 __declspec(property(get=get_velocity, put=set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field wallAvoidFalloff, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallAvoidFalloff, put=__cordl_internal_set_wallAvoidFalloff)) float_t  wallAvoidFalloff;

/// @brief Field wallAvoidForce, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallAvoidForce, put=__cordl_internal_set_wallAvoidForce)) float_t  wallAvoidForce;

/// @brief Method CalculateMovementDelta, addr 0x5ee76f8, size 0x2f8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateMovementDelta(float_t  deltaTime) ;

/// @brief Method CalculateMovementDelta, addr 0x5ee7b00, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateMovementDelta(::UnityEngine::Vector3  position, float_t  deltaTime) ;

/// [Obsolete("Set the \'velocity\' property instead")]
/// @brief Method ForceSetVelocity, addr 0x5ee7db4, size 0x4, virtual false, abstract: false, final false
inline void ForceSetVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method Move, addr 0x5ee8a5c, size 0x244, virtual false, abstract: false, final false
inline void Move(::UnityEngine::Vector3  vel) ;

static inline ::Pathfinding::RVO::RVOController* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ee7e00, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5ee8cb8, size 0x300, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x5ee7e18, size 0x370, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpgradeSerializedData, addr 0x5ee8fb8, size 0x118, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method SetCollisionNormal, addr 0x5ee7cdc, size 0xd8, virtual false, abstract: false, final false
inline void SetCollisionNormal(::UnityEngine::Vector3  normal) ;

/// @brief Method SetTarget, addr 0x5ee8944, size 0x118, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::Vector3  pos, float_t  speed, float_t  maxSpeed) ;

/// [Obsolete("Use transform.position instead, the RVOController can now handle that without any issues.")]
/// @brief Method Teleport, addr 0x5ee8ca0, size 0x18, virtual false, abstract: false, final false
inline void Teleport(::UnityEngine::Vector3  pos) ;

/// @brief Method To2D, addr 0x5ee7ac8, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 To2D(::UnityEngine::Vector3  p) ;

/// @brief Method To2D, addr 0x5ee7db8, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 To2D(::UnityEngine::Vector3  p, ::by_ref<float_t>  elevation) ;

/// @brief Method To3D, addr 0x5ee7658, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 To3D(::UnityEngine::Vector2  p, float_t  elevationCoordinate) ;

/// @brief Method UpdateAgentProperties, addr 0x5ee81b4, size 0x790, virtual false, abstract: false, final false
inline void UpdateAgentProperties() ;

constexpr ::Pathfinding::RVO::IAgent* const& __cordl_internal_get__rvoAgent_k__BackingField() const;

constexpr ::Pathfinding::RVO::IAgent*& __cordl_internal_get__rvoAgent_k__BackingField() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get__simulator_k__BackingField() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get__simulator_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_agentTimeHorizon() const;

constexpr float_t& __cordl_internal_get_agentTimeHorizon() ;

constexpr ::Pathfinding::IAstarAI* const& __cordl_internal_get_aiBackingField() const;

constexpr ::Pathfinding::IAstarAI*& __cordl_internal_get_aiBackingField() ;

constexpr float_t const& __cordl_internal_get_centerBackingField() const;

constexpr float_t& __cordl_internal_get_centerBackingField() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get_collidesWith() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get_collidesWith() ;

constexpr bool const& __cordl_internal_get_debug() const;

constexpr bool& __cordl_internal_get_debug() ;

constexpr float_t const& __cordl_internal_get_heightBackingField() const;

constexpr float_t& __cordl_internal_get_heightBackingField() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get_layer() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_lockWhenNotMoving() const;

constexpr bool& __cordl_internal_get_lockWhenNotMoving() ;

constexpr bool const& __cordl_internal_get_locked() const;

constexpr bool& __cordl_internal_get_locked() ;

constexpr int32_t const& __cordl_internal_get_maxNeighbours() const;

constexpr int32_t& __cordl_internal_get_maxNeighbours() ;

constexpr float_t const& __cordl_internal_get_obstacleTimeHorizon() const;

constexpr float_t& __cordl_internal_get_obstacleTimeHorizon() ;

constexpr float_t const& __cordl_internal_get_priority() const;

constexpr float_t& __cordl_internal_get_priority() ;

constexpr float_t const& __cordl_internal_get_radiusBackingField() const;

constexpr float_t& __cordl_internal_get_radiusBackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr float_t const& __cordl_internal_get_wallAvoidFalloff() const;

constexpr float_t& __cordl_internal_get_wallAvoidFalloff() ;

constexpr float_t const& __cordl_internal_get_wallAvoidForce() const;

constexpr float_t& __cordl_internal_get_wallAvoidForce() ;

constexpr void __cordl_internal_set__rvoAgent_k__BackingField(::Pathfinding::RVO::IAgent*  value) ;

constexpr void __cordl_internal_set__simulator_k__BackingField(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_agentTimeHorizon(float_t  value) ;

constexpr void __cordl_internal_set_aiBackingField(::Pathfinding::IAstarAI*  value) ;

constexpr void __cordl_internal_set_centerBackingField(float_t  value) ;

constexpr void __cordl_internal_set_collidesWith(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set_debug(bool  value) ;

constexpr void __cordl_internal_set_heightBackingField(float_t  value) ;

constexpr void __cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set_lockWhenNotMoving(bool  value) ;

constexpr void __cordl_internal_set_locked(bool  value) ;

constexpr void __cordl_internal_set_maxNeighbours(int32_t  value) ;

constexpr void __cordl_internal_set_obstacleTimeHorizon(float_t  value) ;

constexpr void __cordl_internal_set_priority(float_t  value) ;

constexpr void __cordl_internal_set_radiusBackingField(float_t  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_wallAvoidFalloff(float_t  value) ;

constexpr void __cordl_internal_set_wallAvoidForce(float_t  value) ;

/// @brief Method .ctor, addr 0x5ee90d0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ai, addr 0x5ee6fd4, size 0xcc, virtual false, abstract: false, final false
inline ::Pathfinding::IAstarAI* get_ai() ;

/// @brief Method get_center, addr 0x5ee7308, size 0xcc, virtual false, abstract: false, final false
inline float_t get_center() ;

/// @brief Method get_enableRotation, addr 0x5ee73ec, size 0x8, virtual false, abstract: false, final false
inline bool get_enableRotation() ;

/// @brief Method get_height, addr 0x5ee7170, size 0xc8, virtual false, abstract: false, final false
inline float_t get_height() ;

/// @brief Method get_mask, addr 0x5ee73dc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_mask() ;

/// @brief Method get_maxSpeed, addr 0x5ee7404, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxSpeed() ;

/// @brief Method get_movementPlane, addr 0x5ee7410, size 0xe0, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::MovementPlane get_movementPlane() ;

/// @brief Method get_position, addr 0x5ee7518, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_radius, addr 0x5ee6f10, size 0xc4, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_rotationSpeed, addr 0x5ee73f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotationSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_rvoAgent, addr 0x5ee74f0, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::IAgent* get_rvoAgent() ;

/// [CompilerGenerated]
/// @brief Method get_simulator, addr 0x5ee7500, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::Simulator* get_simulator() ;

/// @brief Method get_velocity, addr 0x5ee7698, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method set_ai, addr 0x5ee7510, size 0x8, virtual false, abstract: false, final false
inline void set_ai(::Pathfinding::IAstarAI*  value) ;

/// @brief Method set_center, addr 0x5ee73d4, size 0x8, virtual false, abstract: false, final false
inline void set_center(float_t  value) ;

/// @brief Method set_enableRotation, addr 0x5ee73f4, size 0x4, virtual false, abstract: false, final false
inline void set_enableRotation(bool  value) ;

/// @brief Method set_height, addr 0x5ee7238, size 0xd0, virtual false, abstract: false, final false
inline void set_height(float_t  value) ;

/// @brief Method set_mask, addr 0x5ee73e8, size 0x4, virtual false, abstract: false, final false
inline void set_mask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_maxSpeed, addr 0x5ee740c, size 0x4, virtual false, abstract: false, final false
inline void set_maxSpeed(float_t  value) ;

/// @brief Method set_radius, addr 0x5ee70a0, size 0xd0, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

/// @brief Method set_rotationSpeed, addr 0x5ee7400, size 0x4, virtual false, abstract: false, final false
inline void set_rotationSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_rvoAgent, addr 0x5ee74f8, size 0x8, virtual false, abstract: false, final false
inline void set_rvoAgent(::Pathfinding::RVO::IAgent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_simulator, addr 0x5ee7508, size 0x8, virtual false, abstract: false, final false
inline void set_simulator(::Pathfinding::RVO::Simulator*  value) ;

/// @brief Method set_velocity, addr 0x5ee79f0, size 0xd8, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOController(RVOController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOController(RVOController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21503};

/// [SerializeField]
/// [FormerlySerializedAs("radius")]
/// @brief Field radiusBackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ___radiusBackingField;

/// [SerializeField]
/// [FormerlySerializedAs("height")]
/// @brief Field heightBackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ___heightBackingField;

/// [SerializeField]
/// [FormerlySerializedAs("center")]
/// @brief Field centerBackingField, offset: 0x2c, size: 0x4, def value: None
 float_t  ___centerBackingField;

/// [Tooltip("A locked unit cannot move. Other units will still avoid it. But avoidance quality is not the best")]
/// @brief Field locked, offset: 0x30, size: 0x1, def value: None
 bool  ___locked;

/// [Tooltip("Automatically set #locked to true when desired velocity is approximately zero")]
/// @brief Field lockWhenNotMoving, offset: 0x31, size: 0x1, def value: None
 bool  ___lockWhenNotMoving;

/// [Tooltip("How far into the future to look for collisions with other agents (in seconds)")]
/// @brief Field agentTimeHorizon, offset: 0x34, size: 0x4, def value: None
 float_t  ___agentTimeHorizon;

/// [Tooltip("How far into the future to look for collisions with obstacles (in seconds)")]
/// @brief Field obstacleTimeHorizon, offset: 0x38, size: 0x4, def value: None
 float_t  ___obstacleTimeHorizon;

/// [Tooltip("Max number of other agents to take into account.\nA smaller value can reduce CPU load, a higher value can lead to better local avoidance quality.")]
/// @brief Field maxNeighbours, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___maxNeighbours;

/// @brief Field layer, offset: 0x40, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ___layer;

/// [EnumFlag]
/// @brief Field collidesWith, offset: 0x44, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ___collidesWith;

/// [HideInInspector]
/// [Obsolete]
/// @brief Field wallAvoidForce, offset: 0x48, size: 0x4, def value: None
 float_t  ___wallAvoidForce;

/// [HideInInspector]
/// [Obsolete]
/// @brief Field wallAvoidFalloff, offset: 0x4c, size: 0x4, def value: None
 float_t  ___wallAvoidFalloff;

/// [Tooltip("How strongly other agents will avoid this agent")]
/// [Range(0, 1)]
/// @brief Field priority, offset: 0x50, size: 0x4, def value: None
 float_t  ___priority;

/// [CompilerGenerated]
/// @brief Field <rvoAgent>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::RVO::IAgent*  ____rvoAgent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <simulator>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ____simulator_k__BackingField;

/// @brief Field tr, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// [SerializeField]
/// [FormerlySerializedAs("ai")]
/// @brief Field aiBackingField, offset: 0x70, size: 0x8, def value: None
 ::Pathfinding::IAstarAI*  ___aiBackingField;

/// @brief Field debug, offset: 0x78, size: 0x1, def value: None
 bool  ___debug;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVOController, ___radiusBackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___heightBackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___centerBackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___locked) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___lockWhenNotMoving) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___agentTimeHorizon) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___obstacleTimeHorizon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___maxNeighbours) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___layer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___collidesWith) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___wallAvoidForce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___wallAvoidFalloff) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___priority) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ____rvoAgent_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ____simulator_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___tr) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___aiBackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOController, ___debug) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVOController) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding::RVO
