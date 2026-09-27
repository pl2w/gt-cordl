#pragma once
// IWYU pragma private; include "GlobalNamespace/Flocking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Flocking_FishState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Flocking)
namespace GlobalNamespace {
class FlockingManager_FishArea;
}
namespace GlobalNamespace {
class FlockingManager_FishFood;
}
namespace GlobalNamespace {
class FlockingManager;
}
namespace GlobalNamespace {
struct Flocking_FishState;
}
namespace GorillaTagScripts {
class GameObjectManagerWithId;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Flocking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Flocking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Flocking*, "", "Flocking");
// Dependencies Flocking::FishState, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Flocking
class CORDL_TYPE Flocking : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FishState = ::GlobalNamespace::Flocking_FishState;

 __declspec(property(get=get_FishArea, put=set_FishArea)) ::GlobalNamespace::FlockingManager_FishArea*  FishArea;

/// @brief Field FollowFakeFoodStopDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_FollowFakeFoodStopDistance, put=__cordl_internal_set_FollowFakeFoodStopDistance)) float_t  FollowFakeFoodStopDistance;

/// @brief Field FollowFoodStopDistance, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FollowFoodStopDistance, put=__cordl_internal_set_FollowFoodStopDistance)) double_t  FollowFoodStopDistance;

/// @brief Field <FishArea>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__FishArea_k__BackingField, put=__cordl_internal_set__FishArea_k__BackingField)) ::GlobalNamespace::FlockingManager_FishArea*  _FishArea_k__BackingField;

/// @brief Field _fishSceneGameObjectsManager, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__fishSceneGameObjectsManager, put=__cordl_internal_set__fishSceneGameObjectsManager)) ::UnityW<::GorillaTagScripts::GameObjectManagerWithId>  _fishSceneGameObjectsManager;

/// @brief Field averageHeading, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_averageHeading, put=__cordl_internal_set_averageHeading)) ::UnityEngine::Vector3  averageHeading;

/// @brief Field averagePosition, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_averagePosition, put=__cordl_internal_set_averagePosition)) ::UnityEngine::Vector3  averagePosition;

/// @brief Field avoidHandSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_avoidHandSpeed, put=__cordl_internal_set_avoidHandSpeed)) float_t  avoidHandSpeed;

/// @brief Field avointPointRadius, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_avointPointRadius, put=__cordl_internal_set_avointPointRadius)) float_t  avointPointRadius;

/// @brief Field cacheSpeed, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_cacheSpeed, put=__cordl_internal_set_cacheSpeed)) float_t  cacheSpeed;

/// @brief Field eatFoodDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_eatFoodDuration, put=__cordl_internal_set_eatFoodDuration)) float_t  eatFoodDuration;

/// @brief Field feedingTimeStarted, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_feedingTimeStarted, put=__cordl_internal_set_feedingTimeStarted)) float_t  feedingTimeStarted;

/// @brief Field fishState, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_fishState, put=__cordl_internal_set_fishState)) ::GlobalNamespace::Flocking_FishState  fishState;

/// @brief Field flockingAvoidanceDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flockingAvoidanceDistance, put=__cordl_internal_set_flockingAvoidanceDistance)) float_t  flockingAvoidanceDistance;

/// @brief Field followFoodSpeedMult, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_followFoodSpeedMult, put=__cordl_internal_set_followFoodSpeedMult)) float_t  followFoodSpeedMult;

/// @brief Field followingFood, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_followingFood, put=__cordl_internal_set_followingFood)) bool  followingFood;

/// @brief Field isRealFood, offset 0xbd, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRealFood, put=__cordl_internal_set_isRealFood)) bool  isRealFood;

/// @brief Field isTurning, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTurning, put=__cordl_internal_set_isTurning)) bool  isTurning;

/// @brief Field manager, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::FlockingManager>  manager;

/// @brief Field maxNeighbourDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNeighbourDistance, put=__cordl_internal_set_maxNeighbourDistance)) float_t  maxNeighbourDistance;

/// @brief Field maxSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field minSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeed, put=__cordl_internal_set_minSpeed)) float_t  minSpeed;

/// @brief Field pos, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) ::UnityEngine::Vector3  pos;

/// @brief Field projectileGameObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileGameObject, put=__cordl_internal_set_projectileGameObject)) ::UnityW<::UnityEngine::GameObject>  projectileGameObject;

/// @brief Field rot, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_rot, put=__cordl_internal_set_rot)) ::UnityEngine::Quaternion  rot;

/// @brief Field rotationSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field sendIdEvent, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendIdEvent, put=__cordl_internal_set_sendIdEvent)) ::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>*  sendIdEvent;

/// @brief Field speed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field velocity, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Method AvoidPlayerHands, addr 0x580691c, size 0x268, virtual false, abstract: false, final false
inline void AvoidPlayerHands() ;

/// @brief Method Awake, addr 0x5806274, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Flock, addr 0x5806d68, size 0x65c, virtual false, abstract: false, final false
inline void Flock(::UnityEngine::Vector3  nextGoal) ;

/// @brief Method FollowFood, addr 0x58073c4, size 0x318, virtual false, abstract: false, final false
inline void FollowFood() ;

/// @brief Method HandleOnFoodDestroyed, addr 0x5807ad0, size 0xf0, virtual false, abstract: false, final false
inline void HandleOnFoodDestroyed(::UnityEngine::BoxCollider*  collider) ;

/// @brief Method HandleOnFoodDetected, addr 0x58079bc, size 0x114, virtual false, abstract: false, final false
inline void HandleOnFoodDetected(::GlobalNamespace::FlockingManager_FishFood*  fishFood) ;

/// @brief Method InvokeUpdate, addr 0x58065ac, size 0x370, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

/// @brief Method MaybeTurn, addr 0x5806b84, size 0x1e4, virtual false, abstract: false, final false
inline void MaybeTurn() ;

static inline ::GlobalNamespace::Flocking* New_ctor() ;

/// @brief Method OnDisable, addr 0x58062f4, size 0x1b8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5808298, size 0x238, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetSyncPosRot, addr 0x5807cb0, size 0x308, virtual false, abstract: false, final false
inline void SetSyncPosRot(::UnityEngine::Vector3  syncPos, ::UnityEngine::Quaternion  syncRot) ;

/// @brief Method Start, addr 0x58062cc, size 0x28, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchState, addr 0x58079b4, size 0x8, virtual false, abstract: false, final false
inline void SwitchState(::GlobalNamespace::Flocking_FishState  state) ;

/// @brief Method Turn, addr 0x5807810, size 0x1a4, virtual false, abstract: false, final false
inline void Turn(::UnityEngine::Vector3  towardPoint) ;

constexpr float_t const& __cordl_internal_get_FollowFakeFoodStopDistance() const;

constexpr float_t& __cordl_internal_get_FollowFakeFoodStopDistance() ;

constexpr double_t const& __cordl_internal_get_FollowFoodStopDistance() const;

constexpr double_t& __cordl_internal_get_FollowFoodStopDistance() ;

constexpr ::GlobalNamespace::FlockingManager_FishArea* const& __cordl_internal_get__FishArea_k__BackingField() const;

constexpr ::GlobalNamespace::FlockingManager_FishArea*& __cordl_internal_get__FishArea_k__BackingField() ;

constexpr ::UnityW<::GorillaTagScripts::GameObjectManagerWithId> const& __cordl_internal_get__fishSceneGameObjectsManager() const;

constexpr ::UnityW<::GorillaTagScripts::GameObjectManagerWithId>& __cordl_internal_get__fishSceneGameObjectsManager() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_averageHeading() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_averageHeading() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_averagePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_averagePosition() ;

constexpr float_t const& __cordl_internal_get_avoidHandSpeed() const;

constexpr float_t& __cordl_internal_get_avoidHandSpeed() ;

constexpr float_t const& __cordl_internal_get_avointPointRadius() const;

constexpr float_t& __cordl_internal_get_avointPointRadius() ;

constexpr float_t const& __cordl_internal_get_cacheSpeed() const;

constexpr float_t& __cordl_internal_get_cacheSpeed() ;

constexpr float_t const& __cordl_internal_get_eatFoodDuration() const;

constexpr float_t& __cordl_internal_get_eatFoodDuration() ;

constexpr float_t const& __cordl_internal_get_feedingTimeStarted() const;

constexpr float_t& __cordl_internal_get_feedingTimeStarted() ;

constexpr ::GlobalNamespace::Flocking_FishState const& __cordl_internal_get_fishState() const;

constexpr ::GlobalNamespace::Flocking_FishState& __cordl_internal_get_fishState() ;

constexpr float_t const& __cordl_internal_get_flockingAvoidanceDistance() const;

constexpr float_t& __cordl_internal_get_flockingAvoidanceDistance() ;

constexpr float_t const& __cordl_internal_get_followFoodSpeedMult() const;

constexpr float_t& __cordl_internal_get_followFoodSpeedMult() ;

constexpr bool const& __cordl_internal_get_followingFood() const;

constexpr bool& __cordl_internal_get_followingFood() ;

constexpr bool const& __cordl_internal_get_isRealFood() const;

constexpr bool& __cordl_internal_get_isRealFood() ;

constexpr bool const& __cordl_internal_get_isTurning() const;

constexpr bool& __cordl_internal_get_isTurning() ;

constexpr ::UnityW<::GlobalNamespace::FlockingManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::FlockingManager>& __cordl_internal_get_manager() ;

constexpr float_t const& __cordl_internal_get_maxNeighbourDistance() const;

constexpr float_t& __cordl_internal_get_maxNeighbourDistance() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_minSpeed() const;

constexpr float_t& __cordl_internal_get_minSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectileGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectileGameObject() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rot() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_sendIdEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_sendIdEvent() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_FollowFakeFoodStopDistance(float_t  value) ;

constexpr void __cordl_internal_set_FollowFoodStopDistance(double_t  value) ;

constexpr void __cordl_internal_set__FishArea_k__BackingField(::GlobalNamespace::FlockingManager_FishArea*  value) ;

constexpr void __cordl_internal_set__fishSceneGameObjectsManager(::UnityW<::GorillaTagScripts::GameObjectManagerWithId>  value) ;

constexpr void __cordl_internal_set_averageHeading(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_averagePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_avoidHandSpeed(float_t  value) ;

constexpr void __cordl_internal_set_avointPointRadius(float_t  value) ;

constexpr void __cordl_internal_set_cacheSpeed(float_t  value) ;

constexpr void __cordl_internal_set_eatFoodDuration(float_t  value) ;

constexpr void __cordl_internal_set_feedingTimeStarted(float_t  value) ;

constexpr void __cordl_internal_set_fishState(::GlobalNamespace::Flocking_FishState  value) ;

constexpr void __cordl_internal_set_flockingAvoidanceDistance(float_t  value) ;

constexpr void __cordl_internal_set_followFoodSpeedMult(float_t  value) ;

constexpr void __cordl_internal_set_followingFood(bool  value) ;

constexpr void __cordl_internal_set_isRealFood(bool  value) ;

constexpr void __cordl_internal_set_isTurning(bool  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::FlockingManager>  value) ;

constexpr void __cordl_internal_set_maxNeighbourDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_projectileGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_sendIdEvent(::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x5808624, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FishArea, addr 0x5806264, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FlockingManager_FishArea* get_FishArea() ;

/// [CompilerGenerated]
/// @brief Method set_FishArea, addr 0x580626c, size 0x8, virtual false, abstract: false, final false
inline void set_FishArea(::GlobalNamespace::FlockingManager_FishArea*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Flocking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Flocking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Flocking(Flocking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Flocking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Flocking(Flocking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1696};

/// [Tooltip("Speed is randomly generated from min and max speed")]
/// @brief Field minSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___minSpeed;

/// @brief Field maxSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field rotationSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// [Tooltip("Maximum distance to the neighbours to form a flocking group")]
/// @brief Field maxNeighbourDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxNeighbourDistance;

/// @brief Field eatFoodDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___eatFoodDuration;

/// [Tooltip("How fast should it follow the food? This value multiplies by the current speed")]
/// @brief Field followFoodSpeedMult, offset: 0x34, size: 0x4, def value: None
 float_t  ___followFoodSpeedMult;

/// [Tooltip("How fast should it run away from players hand?")]
/// @brief Field avoidHandSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___avoidHandSpeed;

/// [FormerlySerializedAs("avoidanceDistance")]
/// [Tooltip("When flocking they will avoid each other if the distance between them is less than this value")]
/// @brief Field flockingAvoidanceDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___flockingAvoidanceDistance;

/// [Tooltip("Follow the fish food until they are this far from it")]
/// [FormerlySerializedAs("distanceToFollowFood")]
/// @brief Field FollowFoodStopDistance, offset: 0x40, size: 0x8, def value: None
 double_t  ___FollowFoodStopDistance;

/// [Tooltip("Follow any fake fish food until they are this far from it")]
/// [FormerlySerializedAs("distanceToFollowFakeFood")]
/// @brief Field FollowFakeFoodStopDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ___FollowFakeFoodStopDistance;

/// @brief Field speed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field averageHeading, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___averageHeading;

/// @brief Field averagePosition, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___averagePosition;

/// @brief Field feedingTimeStarted, offset: 0x68, size: 0x4, def value: None
 float_t  ___feedingTimeStarted;

/// @brief Field projectileGameObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectileGameObject;

/// @brief Field followingFood, offset: 0x78, size: 0x1, def value: None
 bool  ___followingFood;

/// @brief Field manager, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FlockingManager>  ___manager;

/// @brief Field _fishSceneGameObjectsManager, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GameObjectManagerWithId>  ____fishSceneGameObjectsManager;

/// @brief Field sendIdEvent, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::StringW,::UnityW<::UnityEngine::Transform>>*  ___sendIdEvent;

/// @brief Field fishState, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::Flocking_FishState  ___fishState;

/// [HideInInspector]
/// @brief Field pos, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pos;

/// [HideInInspector]
/// @brief Field rot, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rot;

/// @brief Field velocity, offset: 0xb8, size: 0x4, def value: None
 float_t  ___velocity;

/// @brief Field isTurning, offset: 0xbc, size: 0x1, def value: None
 bool  ___isTurning;

/// @brief Field isRealFood, offset: 0xbd, size: 0x1, def value: None
 bool  ___isRealFood;

/// @brief Field avointPointRadius, offset: 0xc0, size: 0x4, def value: None
 float_t  ___avointPointRadius;

/// @brief Field cacheSpeed, offset: 0xc4, size: 0x4, def value: None
 float_t  ___cacheSpeed;

/// [CompilerGenerated]
/// @brief Field <FishArea>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::FlockingManager_FishArea*  ____FishArea_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Flocking, ___minSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___maxSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___rotationSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___maxNeighbourDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___eatFoodDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___followFoodSpeedMult) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___avoidHandSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___flockingAvoidanceDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___FollowFoodStopDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___FollowFakeFoodStopDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___speed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___averageHeading) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___averagePosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___feedingTimeStarted) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___projectileGameObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___followingFood) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___manager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ____fishSceneGameObjectsManager) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___sendIdEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___fishState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___pos) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___rot) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___velocity) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___isTurning) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___isRealFood) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___avointPointRadius) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ___cacheSpeed) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Flocking, ____FishArea_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Flocking) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
