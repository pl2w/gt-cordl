#pragma once
// IWYU pragma private; include "Pathfinding/AIBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__OrientationMode_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AIBase)
namespace Pathfinding::RVO {
class RVOController;
}
namespace Pathfinding::Util {
class IMovementPlane;
}
namespace Pathfinding {
class AutoRepathPolicy;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Seeker;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
class Rigidbody;
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
namespace Pathfinding {
class AIBase;
}
// Write type traits
MARK_REF_T(::Pathfinding::AIBase*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AIBase*, "Pathfinding", "AIBase");
// [RequireComponent(typeof(Pathfinding.Seeker))]
// Dependencies Pathfinding.OrientationMode, Pathfinding.VersionedMonoBehaviour, UnityEngine.Color, UnityEngine.LayerMask, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AIBase
class CORDL_TYPE AIBase : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field ShapeGizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ShapeGizmoColor, put=setStaticF_ShapeGizmoColor)) ::UnityEngine::Color  ShapeGizmoColor;

/// @brief Field <destination>k__BackingField, offset 0x114, size 0xc 
 __declspec(property(get=__cordl_internal_get__destination_k__BackingField, put=__cordl_internal_set__destination_k__BackingField)) ::UnityEngine::Vector3  _destination_k__BackingField;

/// @brief Field <isStopped>k__BackingField, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get__isStopped_k__BackingField, put=__cordl_internal_set__isStopped_k__BackingField)) bool  _isStopped_k__BackingField;

/// @brief Field <onSearchPath>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSearchPath_k__BackingField, put=__cordl_internal_set__onSearchPath_k__BackingField)) ::System::Action*  _onSearchPath_k__BackingField;

/// @brief Field <usingGravity>k__BackingField, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__usingGravity_k__BackingField, put=__cordl_internal_set__usingGravity_k__BackingField)) bool  _usingGravity_k__BackingField;

/// @brief Field accumulatedMovementDelta, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_accumulatedMovementDelta, put=__cordl_internal_set_accumulatedMovementDelta)) ::UnityEngine::Vector3  accumulatedMovementDelta;

/// @brief Field autoRepath, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoRepath, put=__cordl_internal_set_autoRepath)) ::Pathfinding::AutoRepathPolicy*  autoRepath;

/// @brief Field canMove, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_canMove, put=__cordl_internal_set_canMove)) bool  canMove;

 __declspec(property(get=get_canSearch, put=set_canSearch)) bool  canSearch;

/// @brief Field canSearchCompability, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSearchCompability, put=__cordl_internal_set_canSearchCompability)) bool  canSearchCompability;

/// @brief [Obsolete("Use the height property instead (2x this value)")]
 __declspec(property(get=get_centerOffset, put=set_centerOffset)) float_t  centerOffset;

/// @brief Field centerOffsetCompatibility, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_centerOffsetCompatibility, put=__cordl_internal_set_centerOffsetCompatibility)) float_t  centerOffsetCompatibility;

/// @brief Field controller, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::UnityEngine::CharacterController>  controller;

 __declspec(property(get=get_desiredVelocity)) ::UnityEngine::Vector3  desiredVelocity;

 __declspec(property(get=get_destination, put=set_destination)) ::UnityEngine::Vector3  destination;

/// @brief Field enableRotation, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableRotation, put=__cordl_internal_set_enableRotation)) bool  enableRotation;

/// @brief Field gravity, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) ::UnityEngine::Vector3  gravity;

/// @brief Field groundMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundMask, put=__cordl_internal_set_groundMask)) ::UnityEngine::LayerMask  groundMask;

/// @brief Field height, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

 __declspec(property(get=get_isStopped, put=set_isStopped)) bool  isStopped;

/// @brief Field lastDeltaPosition, offset 0xfc, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastDeltaPosition, put=__cordl_internal_set_lastDeltaPosition)) ::UnityEngine::Vector2  lastDeltaPosition;

/// @brief Field lastDeltaTime, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDeltaTime, put=__cordl_internal_set_lastDeltaTime)) float_t  lastDeltaTime;

/// @brief Field maxSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field movementPlane, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_movementPlane, put=__cordl_internal_set_movementPlane)) ::Pathfinding::Util::IMovementPlane*  movementPlane;

 __declspec(property(get=get_onSearchPath, put=set_onSearchPath)) ::System::Action*  onSearchPath;

/// @brief Field orientation, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_orientation, put=__cordl_internal_set_orientation)) ::Pathfinding::OrientationMode  orientation;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

/// @brief Field prevFrame, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevFrame, put=__cordl_internal_set_prevFrame)) int32_t  prevFrame;

/// @brief Field prevPosition1, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevPosition1, put=__cordl_internal_set_prevPosition1)) ::UnityEngine::Vector3  prevPosition1;

/// @brief Field prevPosition2, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevPosition2, put=__cordl_internal_set_prevPosition2)) ::UnityEngine::Vector3  prevPosition2;

/// @brief Field radius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

 __declspec(property(get=get_repathRate, put=set_repathRate)) float_t  repathRate;

/// @brief Field repathRateCompatibility, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_repathRateCompatibility, put=__cordl_internal_set_repathRateCompatibility)) float_t  repathRateCompatibility;

/// @brief Field rigid, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigid, put=__cordl_internal_set_rigid)) ::UnityW<::UnityEngine::Rigidbody>  rigid;

/// @brief Field rigid2D, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigid2D, put=__cordl_internal_set_rigid2D)) ::UnityW<::UnityEngine::Rigidbody2D>  rigid2D;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief [Obsolete("Use orientation instead")]
 __declspec(property(get=get_rotationIn2D, put=set_rotationIn2D)) bool  rotationIn2D;

/// @brief Field rvoController, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rvoController, put=__cordl_internal_set_rvoController)) ::UnityW<::Pathfinding::RVO::RVOController>  rvoController;

/// @brief Field seeker, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

 __declspec(property(get=get_shouldRecalculatePath)) bool  shouldRecalculatePath;

/// @brief Field simulatedPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_simulatedPosition, put=__cordl_internal_set_simulatedPosition)) ::UnityEngine::Vector3  simulatedPosition;

/// @brief Field simulatedRotation, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_simulatedRotation, put=__cordl_internal_set_simulatedRotation)) ::UnityEngine::Quaternion  simulatedRotation;

/// @brief Field startHasRun, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_startHasRun, put=__cordl_internal_set_startHasRun)) bool  startHasRun;

/// @brief [Obsolete("Use the destination property or the AIDestinationSetter component instead")]
 __declspec(property(get=get_target, put=set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetCompatibility, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetCompatibility, put=__cordl_internal_set_targetCompatibility)) ::UnityW<::UnityEngine::Transform>  targetCompatibility;

/// @brief Field tr, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Field updatePosition, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatePosition, put=__cordl_internal_set_updatePosition)) bool  updatePosition;

/// @brief Field updateRotation, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateRotation, put=__cordl_internal_set_updateRotation)) bool  updateRotation;

 __declspec(property(get=get_usingGravity, put=set_usingGravity)) bool  usingGravity;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field velocity2D, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocity2D, put=__cordl_internal_set_velocity2D)) ::UnityEngine::Vector2  velocity2D;

/// @brief Field verticalVelocity, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalVelocity, put=__cordl_internal_set_verticalVelocity)) float_t  verticalVelocity;

/// @brief Field waitingForPathCalculation, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForPathCalculation, put=__cordl_internal_set_waitingForPathCalculation)) bool  waitingForPathCalculation;

/// @brief Method ApplyGravity, addr 0x5e398c4, size 0x15c, virtual false, abstract: false, final false
inline void ApplyGravity(float_t  deltaTime) ;

/// @brief Method CalculateDeltaToMoveThisFrame, addr 0x5e39a20, size 0x234, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 CalculateDeltaToMoveThisFrame(::UnityEngine::Vector2  position, float_t  distanceToEndOfPath, float_t  deltaTime) ;

/// @brief Method CalculatePathRequestEndpoints, addr 0x5e39524, size 0x50, virtual true, abstract: false, final false
inline void CalculatePathRequestEndpoints(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end) ;

/// @brief Method CancelCurrentPathRequest, addr 0x5e38f90, size 0x88, virtual false, abstract: false, final false
inline void CancelCurrentPathRequest() ;

/// @brief Method ClampToNavmesh, addr 0x5e3a934, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClampToNavmesh(::UnityEngine::Vector3  position, ::by_ref<bool>  positionChanged) ;

/// @brief Method ClearPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearPath() ;

/// @brief Method FinalizeMovement, addr 0x5e3a0c8, size 0x5c, virtual true, abstract: false, final false
inline void FinalizeMovement(::UnityEngine::Vector3  nextPosition, ::UnityEngine::Quaternion  nextRotation) ;

/// @brief Method FinalizePosition, addr 0x5e3a2a4, size 0x358, virtual false, abstract: false, final false
inline void FinalizePosition(::UnityEngine::Vector3  nextPosition) ;

/// @brief Method FinalizeRotation, addr 0x5e3a124, size 0x180, virtual false, abstract: false, final false
inline void FinalizeRotation(::UnityEngine::Quaternion  nextRotation) ;

/// @brief Method FindComponents, addr 0x5e38b7c, size 0x144, virtual true, abstract: false, final false
inline void FindComponents() ;

/// @brief Method FixedUpdate, addr 0x5e3942c, size 0xf8, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetFeetPosition, addr 0x5e39880, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetFeetPosition() ;

/// @brief Method Init, addr 0x5e38da0, size 0x88, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Move, addr 0x5e3a0a8, size 0x20, virtual true, abstract: false, final false
inline void Move(::UnityEngine::Vector3  deltaPosition) ;

/// @brief Method MovementUpdate, addr 0x5e39418, size 0x14, virtual true, abstract: false, final true
inline void MovementUpdate(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

/// @brief Method MovementUpdateInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MovementUpdateInternal(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

static inline ::Pathfinding::AIBase* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e390b8, size 0x130, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5e3a9b4, size 0x3cc, virtual true, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e3a93c, size 0x78, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5e38cc0, size 0xe0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPathComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPathComplete(::Pathfinding::Path*  newPath) ;

/// @brief Method OnUpgradeSerializedData, addr 0x5e3ae70, size 0x144, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method RaycastPosition, addr 0x5e3a5fc, size 0x2e4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RaycastPosition(::UnityEngine::Vector3  position, float_t  lastElevation) ;

/// @brief Method Reset, addr 0x5e3ad80, size 0x1c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetShape, addr 0x5e3ad9c, size 0xd4, virtual false, abstract: false, final false
inline void ResetShape() ;

/// @brief Method SearchPath, addr 0x5e39574, size 0x10c, virtual true, abstract: false, final false
inline void SearchPath() ;

/// @brief Method SetPath, addr 0x5e39680, size 0x200, virtual true, abstract: false, final true
inline void SetPath(::Pathfinding::Path*  path, bool  updateDestinationFromPath) ;

/// @brief Method SimulateRotationTowards, addr 0x5e39d2c, size 0x37c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion SimulateRotationTowards(::UnityEngine::Vector2  direction, float_t  maxDegrees) ;

/// @brief Method SimulateRotationTowards, addr 0x5e39c54, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion SimulateRotationTowards(::UnityEngine::Vector3  direction, float_t  maxDegrees) ;

/// @brief Method Start, addr 0x5e38e28, size 0xc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Teleport, addr 0x5e38e34, size 0x15c, virtual true, abstract: false, final false
inline void Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath) ;

/// @brief Method Update, addr 0x5e391e8, size 0x230, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateVelocity, addr 0x5e3a8e0, size 0x54, virtual false, abstract: false, final false
inline void UpdateVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__destination_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__destination_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isStopped_k__BackingField() const;

constexpr bool& __cordl_internal_get__isStopped_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__onSearchPath_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__onSearchPath_k__BackingField() ;

constexpr bool const& __cordl_internal_get__usingGravity_k__BackingField() const;

constexpr bool& __cordl_internal_get__usingGravity_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_accumulatedMovementDelta() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_accumulatedMovementDelta() ;

constexpr ::Pathfinding::AutoRepathPolicy* const& __cordl_internal_get_autoRepath() const;

constexpr ::Pathfinding::AutoRepathPolicy*& __cordl_internal_get_autoRepath() ;

constexpr bool const& __cordl_internal_get_canMove() const;

constexpr bool& __cordl_internal_get_canMove() ;

constexpr bool const& __cordl_internal_get_canSearchCompability() const;

constexpr bool& __cordl_internal_get_canSearchCompability() ;

constexpr float_t const& __cordl_internal_get_centerOffsetCompatibility() const;

constexpr float_t& __cordl_internal_get_centerOffsetCompatibility() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_controller() ;

constexpr bool const& __cordl_internal_get_enableRotation() const;

constexpr bool& __cordl_internal_get_enableRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravity() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundMask() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_lastDeltaPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_lastDeltaPosition() ;

constexpr float_t const& __cordl_internal_get_lastDeltaTime() const;

constexpr float_t& __cordl_internal_get_lastDeltaTime() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::Pathfinding::Util::IMovementPlane* const& __cordl_internal_get_movementPlane() const;

constexpr ::Pathfinding::Util::IMovementPlane*& __cordl_internal_get_movementPlane() ;

constexpr ::Pathfinding::OrientationMode const& __cordl_internal_get_orientation() const;

constexpr ::Pathfinding::OrientationMode& __cordl_internal_get_orientation() ;

constexpr int32_t const& __cordl_internal_get_prevFrame() const;

constexpr int32_t& __cordl_internal_get_prevFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevPosition1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevPosition1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevPosition2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevPosition2() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_repathRateCompatibility() const;

constexpr float_t& __cordl_internal_get_repathRateCompatibility() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigid() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigid() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_rigid2D() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_rigid2D() ;

constexpr ::UnityW<::Pathfinding::RVO::RVOController> const& __cordl_internal_get_rvoController() const;

constexpr ::UnityW<::Pathfinding::RVO::RVOController>& __cordl_internal_get_rvoController() ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_simulatedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_simulatedPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_simulatedRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_simulatedRotation() ;

constexpr bool const& __cordl_internal_get_startHasRun() const;

constexpr bool& __cordl_internal_get_startHasRun() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetCompatibility() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetCompatibility() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr bool const& __cordl_internal_get_updatePosition() const;

constexpr bool& __cordl_internal_get_updatePosition() ;

constexpr bool const& __cordl_internal_get_updateRotation() const;

constexpr bool& __cordl_internal_get_updateRotation() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_velocity2D() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_velocity2D() ;

constexpr float_t const& __cordl_internal_get_verticalVelocity() const;

constexpr float_t& __cordl_internal_get_verticalVelocity() ;

constexpr bool const& __cordl_internal_get_waitingForPathCalculation() const;

constexpr bool& __cordl_internal_get_waitingForPathCalculation() ;

constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__isStopped_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__onSearchPath_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__usingGravity_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_accumulatedMovementDelta(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_autoRepath(::Pathfinding::AutoRepathPolicy*  value) ;

constexpr void __cordl_internal_set_canMove(bool  value) ;

constexpr void __cordl_internal_set_canSearchCompability(bool  value) ;

constexpr void __cordl_internal_set_centerOffsetCompatibility(float_t  value) ;

constexpr void __cordl_internal_set_controller(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_enableRotation(bool  value) ;

constexpr void __cordl_internal_set_gravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_groundMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_lastDeltaPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_lastDeltaTime(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_movementPlane(::Pathfinding::Util::IMovementPlane*  value) ;

constexpr void __cordl_internal_set_orientation(::Pathfinding::OrientationMode  value) ;

constexpr void __cordl_internal_set_prevFrame(int32_t  value) ;

constexpr void __cordl_internal_set_prevPosition1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_prevPosition2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_repathRateCompatibility(float_t  value) ;

constexpr void __cordl_internal_set_rigid(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rigid2D(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

constexpr void __cordl_internal_set_rvoController(::UnityW<::Pathfinding::RVO::RVOController>  value) ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

constexpr void __cordl_internal_set_simulatedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_simulatedRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startHasRun(bool  value) ;

constexpr void __cordl_internal_set_targetCompatibility(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_updatePosition(bool  value) ;

constexpr void __cordl_internal_set_updateRotation(bool  value) ;

constexpr void __cordl_internal_set_velocity2D(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_verticalVelocity(float_t  value) ;

constexpr void __cordl_internal_set_waitingForPathCalculation(bool  value) ;

/// @brief Method .ctor, addr 0x5e38a34, size 0x148, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_ShapeGizmoColor() ;

/// @brief Method get_canSearch, addr 0x5e384b0, size 0x20, virtual false, abstract: false, final false
inline bool get_canSearch() ;

/// @brief Method get_centerOffset, addr 0x5e38508, size 0x10, virtual false, abstract: false, final false
inline float_t get_centerOffset() ;

/// @brief Method get_desiredVelocity, addr 0x5e38880, size 0x130, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_desiredVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_destination, addr 0x5e387dc, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_destination() ;

/// [CompilerGenerated]
/// @brief Method get_isStopped, addr 0x5e389b0, size 0x8, virtual true, abstract: false, final true
inline bool get_isStopped() ;

/// [CompilerGenerated]
/// @brief Method get_onSearchPath, addr 0x5e389c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Action* get_onSearchPath() ;

/// @brief Method get_position, addr 0x5e3854c, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_repathRate, addr 0x5e38480, size 0x18, virtual false, abstract: false, final false
inline float_t get_repathRate() ;

/// @brief Method get_rotation, addr 0x5e38580, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotationIn2D, addr 0x5e38524, size 0x10, virtual false, abstract: false, final false
inline bool get_rotationIn2D() ;

/// @brief Method get_shouldRecalculatePath, addr 0x5e389d8, size 0x5c, virtual true, abstract: false, final false
inline bool get_shouldRecalculatePath() ;

/// @brief Method get_target, addr 0x5e385f0, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_target() ;

/// [CompilerGenerated]
/// @brief Method get_usingGravity, addr 0x5e385e0, size 0x8, virtual false, abstract: false, final false
inline bool get_usingGravity() ;

/// @brief Method get_velocity, addr 0x5e387fc, size 0x84, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_velocity() ;

static inline void setStaticF_ShapeGizmoColor(::UnityEngine::Color  value) ;

/// @brief Method set_canSearch, addr 0x5e384d0, size 0x38, virtual false, abstract: false, final false
inline void set_canSearch(bool  value) ;

/// @brief Method set_centerOffset, addr 0x5e38518, size 0xc, virtual false, abstract: false, final false
inline void set_centerOffset(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_destination, addr 0x5e387ec, size 0x10, virtual true, abstract: false, final true
inline void set_destination(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_isStopped, addr 0x5e389b8, size 0x8, virtual true, abstract: false, final true
inline void set_isStopped(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_onSearchPath, addr 0x5e389c8, size 0x10, virtual true, abstract: false, final true
inline void set_onSearchPath(::System::Action*  value) ;

/// @brief Method set_repathRate, addr 0x5e38498, size 0x18, virtual false, abstract: false, final false
inline void set_repathRate(float_t  value) ;

/// @brief Method set_rotation, addr 0x5e385b4, size 0x2c, virtual true, abstract: false, final true
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotationIn2D, addr 0x5e38534, size 0x18, virtual false, abstract: false, final false
inline void set_rotationIn2D(bool  value) ;

/// @brief Method set_target, addr 0x5e38698, size 0x144, virtual false, abstract: false, final false
inline void set_target(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_usingGravity, addr 0x5e385e8, size 0x8, virtual false, abstract: false, final false
inline void set_usingGravity(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AIBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AIBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AIBase(AIBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AIBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AIBase(AIBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21175};

/// @brief Field radius, offset: 0x24, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field height, offset: 0x28, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field canMove, offset: 0x2c, size: 0x1, def value: None
 bool  ___canMove;

/// [FormerlySerializedAs("speed")]
/// @brief Field maxSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field gravity, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravity;

/// @brief Field groundMask, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___groundMask;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("centerOffset")]
/// @brief Field centerOffsetCompatibility, offset: 0x44, size: 0x4, def value: None
 float_t  ___centerOffsetCompatibility;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("repathRate")]
/// @brief Field repathRateCompatibility, offset: 0x48, size: 0x4, def value: None
 float_t  ___repathRateCompatibility;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("canSearch")]
/// [FormerlySerializedAs("repeatedlySearchPaths")]
/// @brief Field canSearchCompability, offset: 0x4c, size: 0x1, def value: None
 bool  ___canSearchCompability;

/// [FormerlySerializedAs("rotationIn2D")]
/// @brief Field orientation, offset: 0x50, size: 0x4, def value: None
 ::Pathfinding::OrientationMode  ___orientation;

/// @brief Field enableRotation, offset: 0x54, size: 0x1, def value: None
 bool  ___enableRotation;

/// @brief Field simulatedPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___simulatedPosition;

/// @brief Field simulatedRotation, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___simulatedRotation;

/// @brief Field accumulatedMovementDelta, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___accumulatedMovementDelta;

/// @brief Field velocity2D, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___velocity2D;

/// @brief Field verticalVelocity, offset: 0x88, size: 0x4, def value: None
 float_t  ___verticalVelocity;

/// @brief Field seeker, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

/// @brief Field tr, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field rigid, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigid;

/// @brief Field rigid2D, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___rigid2D;

/// @brief Field controller, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___controller;

/// @brief Field rvoController, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RVO::RVOController>  ___rvoController;

/// @brief Field movementPlane, offset: 0xc0, size: 0x8, def value: None
 ::Pathfinding::Util::IMovementPlane*  ___movementPlane;

/// @brief Field updatePosition, offset: 0xc8, size: 0x1, def value: None
 bool  ___updatePosition;

/// @brief Field updateRotation, offset: 0xc9, size: 0x1, def value: None
 bool  ___updateRotation;

/// @brief Field autoRepath, offset: 0xd0, size: 0x8, def value: None
 ::Pathfinding::AutoRepathPolicy*  ___autoRepath;

/// [CompilerGenerated]
/// @brief Field <usingGravity>k__BackingField, offset: 0xd8, size: 0x1, def value: None
 bool  ____usingGravity_k__BackingField;

/// @brief Field lastDeltaTime, offset: 0xdc, size: 0x4, def value: None
 float_t  ___lastDeltaTime;

/// @brief Field prevFrame, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___prevFrame;

/// @brief Field prevPosition1, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevPosition1;

/// @brief Field prevPosition2, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevPosition2;

/// @brief Field lastDeltaPosition, offset: 0xfc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___lastDeltaPosition;

/// @brief Field waitingForPathCalculation, offset: 0x104, size: 0x1, def value: None
 bool  ___waitingForPathCalculation;

/// [FormerlySerializedAs("target")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field targetCompatibility, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetCompatibility;

/// @brief Field startHasRun, offset: 0x110, size: 0x1, def value: None
 bool  ___startHasRun;

/// [CompilerGenerated]
/// @brief Field <destination>k__BackingField, offset: 0x114, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____destination_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isStopped>k__BackingField, offset: 0x120, size: 0x1, def value: None
 bool  ____isStopped_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <onSearchPath>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::System::Action*  ____onSearchPath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AIBase, ___radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___canMove) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___maxSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___gravity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___groundMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___centerOffsetCompatibility) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___repathRateCompatibility) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___canSearchCompability) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___orientation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___enableRotation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___simulatedPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___simulatedRotation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___accumulatedMovementDelta) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___velocity2D) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___verticalVelocity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___seeker) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___tr) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___rigid) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___rigid2D) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___controller) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___rvoController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___movementPlane) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___updatePosition) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___updateRotation) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___autoRepath) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ____usingGravity_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___lastDeltaTime) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___prevFrame) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___prevPosition1) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___prevPosition2) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___lastDeltaPosition) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___waitingForPathCalculation) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___targetCompatibility) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ___startHasRun) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ____destination_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ____isStopped_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIBase, ____onSearchPath_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AIBase) == 0x130, "Size mismatch!");

} // namespace end def Pathfinding
