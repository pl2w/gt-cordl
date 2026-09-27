#pragma once
// IWYU pragma private; include "Pathfinding/AILerp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__OrientationMode_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AILerp)
namespace Pathfinding::Util {
class PathInterpolator;
}
namespace Pathfinding {
class ABPath;
}
namespace Pathfinding {
class AutoRepathPolicy;
}
namespace Pathfinding {
class IAstarAI;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Seeker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
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
namespace Pathfinding {
class AILerp;
}
// Write type traits
MARK_REF_T(::Pathfinding::AILerp*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AILerp*, "Pathfinding", "AILerp");
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [AddComponentMenu("Pathfinding/AI/AILerp (2D,3D)")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_a_i_lerp.php")]
// Dependencies Pathfinding.OrientationMode, Pathfinding.VersionedMonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AILerp
class CORDL_TYPE AILerp : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
 __declspec(property(get=Pathfinding_IAstarAI_get_canMove, put=Pathfinding_IAstarAI_set_canMove)) bool  Pathfinding_IAstarAI_canMove;

 __declspec(property(get=Pathfinding_IAstarAI_get_canSearch, put=Pathfinding_IAstarAI_set_canSearch)) bool  Pathfinding_IAstarAI_canSearch;

 __declspec(property(get=Pathfinding_IAstarAI_get_desiredVelocity)) ::UnityEngine::Vector3  Pathfinding_IAstarAI_desiredVelocity;

 __declspec(property(get=Pathfinding_IAstarAI_get_height, put=Pathfinding_IAstarAI_set_height)) float_t  Pathfinding_IAstarAI_height;

 __declspec(property(get=Pathfinding_IAstarAI_get_maxSpeed, put=Pathfinding_IAstarAI_set_maxSpeed)) float_t  Pathfinding_IAstarAI_maxSpeed;

 __declspec(property(get=Pathfinding_IAstarAI_get_radius, put=Pathfinding_IAstarAI_set_radius)) float_t  Pathfinding_IAstarAI_radius;

 __declspec(property(get=Pathfinding_IAstarAI_get_steeringTarget)) ::UnityEngine::Vector3  Pathfinding_IAstarAI_steeringTarget;

/// @brief Field <destination>k__BackingField, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__destination_k__BackingField, put=__cordl_internal_set__destination_k__BackingField)) ::UnityEngine::Vector3  _destination_k__BackingField;

/// @brief Field <isStopped>k__BackingField, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get__isStopped_k__BackingField, put=__cordl_internal_set__isStopped_k__BackingField)) bool  _isStopped_k__BackingField;

/// @brief Field <onSearchPath>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSearchPath_k__BackingField, put=__cordl_internal_set__onSearchPath_k__BackingField)) ::System::Action*  _onSearchPath_k__BackingField;

/// @brief Field <reachedEndOfPath>k__BackingField, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__reachedEndOfPath_k__BackingField, put=__cordl_internal_set__reachedEndOfPath_k__BackingField)) bool  _reachedEndOfPath_k__BackingField;

/// @brief Field autoRepath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoRepath, put=__cordl_internal_set_autoRepath)) ::Pathfinding::AutoRepathPolicy*  autoRepath;

/// @brief Field canMove, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_canMove, put=__cordl_internal_set_canMove)) bool  canMove;

 __declspec(property(get=get_canSearch, put=set_canSearch)) bool  canSearch;

/// @brief Field canSearchAgain, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSearchAgain, put=__cordl_internal_set_canSearchAgain)) bool  canSearchAgain;

/// @brief Field canSearchCompability, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSearchCompability, put=__cordl_internal_set_canSearchCompability)) bool  canSearchCompability;

 __declspec(property(get=get_destination, put=set_destination)) ::UnityEngine::Vector3  destination;

/// @brief Field enableRotation, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableRotation, put=__cordl_internal_set_enableRotation)) bool  enableRotation;

 __declspec(property(get=get_hasPath)) bool  hasPath;

/// @brief Field interpolatePathSwitches, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_interpolatePathSwitches, put=__cordl_internal_set_interpolatePathSwitches)) bool  interpolatePathSwitches;

/// @brief Field interpolator, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_interpolator, put=__cordl_internal_set_interpolator)) ::Pathfinding::Util::PathInterpolator*  interpolator;

 __declspec(property(get=get_isStopped, put=set_isStopped)) bool  isStopped;

 __declspec(property(get=get_onSearchPath, put=set_onSearchPath)) ::System::Action*  onSearchPath;

/// @brief Field orientation, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_orientation, put=__cordl_internal_set_orientation)) ::Pathfinding::OrientationMode  orientation;

/// @brief Field path, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::ABPath*  path;

 __declspec(property(get=get_pathPending)) bool  pathPending;

/// @brief Field pathSwitchInterpolationTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pathSwitchInterpolationTime, put=__cordl_internal_set_pathSwitchInterpolationTime)) float_t  pathSwitchInterpolationTime;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

/// @brief Field previousMovementDirection, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousMovementDirection, put=__cordl_internal_set_previousMovementDirection)) ::UnityEngine::Vector3  previousMovementDirection;

/// @brief Field previousMovementOrigin, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousMovementOrigin, put=__cordl_internal_set_previousMovementOrigin)) ::UnityEngine::Vector3  previousMovementOrigin;

/// @brief Field previousPosition1, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousPosition1, put=__cordl_internal_set_previousPosition1)) ::UnityEngine::Vector3  previousPosition1;

/// @brief Field previousPosition2, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousPosition2, put=__cordl_internal_set_previousPosition2)) ::UnityEngine::Vector3  previousPosition2;

 __declspec(property(get=get_reachedDestination)) bool  reachedDestination;

 __declspec(property(get=get_reachedEndOfPath, put=set_reachedEndOfPath)) bool  reachedEndOfPath;

 __declspec(property(get=get_remainingDistance, put=set_remainingDistance)) float_t  remainingDistance;

 __declspec(property(get=get_repathRate, put=set_repathRate)) float_t  repathRate;

/// @brief Field repathRateCompatibility, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_repathRateCompatibility, put=__cordl_internal_set_repathRateCompatibility)) float_t  repathRateCompatibility;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief [Obsolete("Use orientation instead")]
 __declspec(property(get=get_rotationIn2D, put=set_rotationIn2D)) bool  rotationIn2D;

/// @brief Field rotationSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field seeker, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

 __declspec(property(get=get_shouldRecalculatePath)) bool  shouldRecalculatePath;

/// @brief Field simulatedPosition, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_simulatedPosition, put=__cordl_internal_set_simulatedPosition)) ::UnityEngine::Vector3  simulatedPosition;

/// @brief Field simulatedRotation, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_simulatedRotation, put=__cordl_internal_set_simulatedRotation)) ::UnityEngine::Quaternion  simulatedRotation;

/// @brief Field speed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field startHasRun, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_startHasRun, put=__cordl_internal_set_startHasRun)) bool  startHasRun;

/// @brief Field switchPathInterpolationSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_switchPathInterpolationSpeed, put=__cordl_internal_set_switchPathInterpolationSpeed)) float_t  switchPathInterpolationSpeed;

/// @brief [Obsolete("Use the destination property or the AIDestinationSetter component instead")]
 __declspec(property(get=get_target, put=set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetCompatibility, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetCompatibility, put=__cordl_internal_set_targetCompatibility)) ::UnityW<::UnityEngine::Transform>  targetCompatibility;

/// @brief Field tr, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Field updatePosition, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatePosition, put=__cordl_internal_set_updatePosition)) bool  updatePosition;

/// @brief Field updateRotation, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateRotation, put=__cordl_internal_set_updateRotation)) bool  updateRotation;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Convert operator to "::Pathfinding::IAstarAI"
constexpr operator  ::Pathfinding::IAstarAI*() noexcept;

/// @brief Method Awake, addr 0x5e3b7f4, size 0xec, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateNextPosition, addr 0x5e3cccc, size 0x24c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateNextPosition(::by_ref<::UnityEngine::Vector3>  direction, float_t  deltaTime) ;

/// @brief Method ClearPath, addr 0x5e3c300, size 0xc4, virtual true, abstract: false, final false
inline void ClearPath() ;

/// @brief Method ConfigureNewPath, addr 0x5e3c5b8, size 0x2e4, virtual true, abstract: false, final false
inline void ConfigureNewPath() ;

/// @brief Method ConfigurePathSwitchInterpolation, addr 0x5e3c3c4, size 0x1f0, virtual true, abstract: false, final false
inline void ConfigurePathSwitchInterpolation() ;

/// @brief Method FinalizeMovement, addr 0x5e3ca08, size 0xa8, virtual true, abstract: false, final true
inline void FinalizeMovement(::UnityEngine::Vector3  nextPosition, ::UnityEngine::Quaternion  nextRotation) ;

/// [Obsolete("Use SearchPath instead")]
/// @brief Method ForceSearchPath, addr 0x5e3bd4c, size 0x10, virtual true, abstract: false, final false
inline void ForceSearchPath() ;

/// @brief Method GetFeetPosition, addr 0x5e3c5b4, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetFeetPosition() ;

/// @brief Method GetRemainingPath, addr 0x5e3bbb8, size 0x13c, virtual true, abstract: false, final true
inline void GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale) ;

/// @brief Method Init, addr 0x5e3b8ec, size 0x70, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method MovementUpdate, addr 0x5e3c928, size 0xe0, virtual true, abstract: false, final true
inline void MovementUpdate(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

static inline ::Pathfinding::AILerp* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e3bae0, size 0xd8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5e3cfc8, size 0x50, virtual true, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x5e3b95c, size 0xcc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPathComplete, addr 0x5e3c054, size 0x2ac, virtual true, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  _p) ;

/// @brief Method OnTargetReached, addr 0x5e3c050, size 0x4, virtual true, abstract: false, final false
inline void OnTargetReached() ;

/// @brief Method OnUpgradeSerializedData, addr 0x5e3cf18, size 0xb0, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method Pathfinding.IAstarAI.Move, addr 0x5e3b460, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_Move(::UnityEngine::Vector3  deltaPosition) ;

/// @brief Method Pathfinding.IAstarAI.get_canMove, addr 0x5e3b4c8, size 0x8, virtual true, abstract: false, final true
inline bool Pathfinding_IAstarAI_get_canMove() ;

/// @brief Method Pathfinding.IAstarAI.get_canSearch, addr 0x5e3b48c, size 0x20, virtual true, abstract: false, final true
inline bool Pathfinding_IAstarAI_get_canSearch() ;

/// @brief Method Pathfinding.IAstarAI.get_desiredVelocity, addr 0x5e3b578, size 0x98, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Pathfinding_IAstarAI_get_desiredVelocity() ;

/// @brief Method Pathfinding.IAstarAI.get_height, addr 0x5e3b470, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_height() ;

/// @brief Method Pathfinding.IAstarAI.get_maxSpeed, addr 0x5e3b47c, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_maxSpeed() ;

/// @brief Method Pathfinding.IAstarAI.get_radius, addr 0x5e3b464, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_radius() ;

/// @brief Method Pathfinding.IAstarAI.get_steeringTarget, addr 0x5e3b610, size 0x80, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Pathfinding_IAstarAI_get_steeringTarget() ;

/// @brief Method Pathfinding.IAstarAI.set_canMove, addr 0x5e3b4d0, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_canMove(bool  value) ;

/// @brief Method Pathfinding.IAstarAI.set_canSearch, addr 0x5e3b4ac, size 0x1c, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_canSearch(bool  value) ;

/// @brief Method Pathfinding.IAstarAI.set_height, addr 0x5e3b478, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_height(float_t  value) ;

/// @brief Method Pathfinding.IAstarAI.set_maxSpeed, addr 0x5e3b484, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_maxSpeed(float_t  value) ;

/// @brief Method Pathfinding.IAstarAI.set_radius, addr 0x5e3b46c, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_radius(float_t  value) ;

/// @brief Method SearchPath, addr 0x5e3bd5c, size 0x108, virtual true, abstract: false, final false
inline void SearchPath() ;

/// @brief Method SetPath, addr 0x5e3be64, size 0x1ec, virtual true, abstract: false, final true
inline void SetPath(::Pathfinding::Path*  path, bool  updateDestinationFromPath) ;

/// @brief Method SimulateRotationTowards, addr 0x5e3cab0, size 0x21c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion SimulateRotationTowards(::UnityEngine::Vector3  direction, float_t  deltaTime) ;

/// @brief Method Start, addr 0x5e3b8e0, size 0xc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Teleport, addr 0x5e3ba28, size 0xb8, virtual true, abstract: false, final true
inline void Teleport(::UnityEngine::Vector3  position, bool  clearPath) ;

/// @brief Method Update, addr 0x5e3c89c, size 0x8c, virtual true, abstract: false, final false
inline void Update() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__91_0, addr 0x5e3d018, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _Awake_b__91_0() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__destination_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__destination_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isStopped_k__BackingField() const;

constexpr bool& __cordl_internal_get__isStopped_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__onSearchPath_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__onSearchPath_k__BackingField() ;

constexpr bool const& __cordl_internal_get__reachedEndOfPath_k__BackingField() const;

constexpr bool& __cordl_internal_get__reachedEndOfPath_k__BackingField() ;

constexpr ::Pathfinding::AutoRepathPolicy* const& __cordl_internal_get_autoRepath() const;

constexpr ::Pathfinding::AutoRepathPolicy*& __cordl_internal_get_autoRepath() ;

constexpr bool const& __cordl_internal_get_canMove() const;

constexpr bool& __cordl_internal_get_canMove() ;

constexpr bool const& __cordl_internal_get_canSearchAgain() const;

constexpr bool& __cordl_internal_get_canSearchAgain() ;

constexpr bool const& __cordl_internal_get_canSearchCompability() const;

constexpr bool& __cordl_internal_get_canSearchCompability() ;

constexpr bool const& __cordl_internal_get_enableRotation() const;

constexpr bool& __cordl_internal_get_enableRotation() ;

constexpr bool const& __cordl_internal_get_interpolatePathSwitches() const;

constexpr bool& __cordl_internal_get_interpolatePathSwitches() ;

constexpr ::Pathfinding::Util::PathInterpolator* const& __cordl_internal_get_interpolator() const;

constexpr ::Pathfinding::Util::PathInterpolator*& __cordl_internal_get_interpolator() ;

constexpr ::Pathfinding::OrientationMode const& __cordl_internal_get_orientation() const;

constexpr ::Pathfinding::OrientationMode& __cordl_internal_get_orientation() ;

constexpr ::Pathfinding::ABPath* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::ABPath*& __cordl_internal_get_path() ;

constexpr float_t const& __cordl_internal_get_pathSwitchInterpolationTime() const;

constexpr float_t& __cordl_internal_get_pathSwitchInterpolationTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousMovementDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousMovementDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousMovementOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousMovementOrigin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousPosition1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousPosition1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousPosition2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousPosition2() ;

constexpr float_t const& __cordl_internal_get_repathRateCompatibility() const;

constexpr float_t& __cordl_internal_get_repathRateCompatibility() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_simulatedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_simulatedPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_simulatedRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_simulatedRotation() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr bool const& __cordl_internal_get_startHasRun() const;

constexpr bool& __cordl_internal_get_startHasRun() ;

constexpr float_t const& __cordl_internal_get_switchPathInterpolationSpeed() const;

constexpr float_t& __cordl_internal_get_switchPathInterpolationSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetCompatibility() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetCompatibility() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr bool const& __cordl_internal_get_updatePosition() const;

constexpr bool& __cordl_internal_get_updatePosition() ;

constexpr bool const& __cordl_internal_get_updateRotation() const;

constexpr bool& __cordl_internal_get_updateRotation() ;

constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__isStopped_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__onSearchPath_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__reachedEndOfPath_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_autoRepath(::Pathfinding::AutoRepathPolicy*  value) ;

constexpr void __cordl_internal_set_canMove(bool  value) ;

constexpr void __cordl_internal_set_canSearchAgain(bool  value) ;

constexpr void __cordl_internal_set_canSearchCompability(bool  value) ;

constexpr void __cordl_internal_set_enableRotation(bool  value) ;

constexpr void __cordl_internal_set_interpolatePathSwitches(bool  value) ;

constexpr void __cordl_internal_set_interpolator(::Pathfinding::Util::PathInterpolator*  value) ;

constexpr void __cordl_internal_set_orientation(::Pathfinding::OrientationMode  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::ABPath*  value) ;

constexpr void __cordl_internal_set_pathSwitchInterpolationTime(float_t  value) ;

constexpr void __cordl_internal_set_previousMovementDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousMovementOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousPosition1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousPosition2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_repathRateCompatibility(float_t  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

constexpr void __cordl_internal_set_simulatedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_simulatedRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_startHasRun(bool  value) ;

constexpr void __cordl_internal_set_switchPathInterpolationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_targetCompatibility(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_updatePosition(bool  value) ;

constexpr void __cordl_internal_set_updateRotation(bool  value) ;

/// @brief Method .ctor, addr 0x5e3b6f8, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canSearch, addr 0x5e3b034, size 0x20, virtual false, abstract: false, final false
inline bool get_canSearch() ;

/// [CompilerGenerated]
/// @brief Method get_destination, addr 0x5e3b1cc, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_destination() ;

/// @brief Method get_hasPath, addr 0x5e3b6b0, size 0x18, virtual true, abstract: false, final true
inline bool get_hasPath() ;

/// [CompilerGenerated]
/// @brief Method get_isStopped, addr 0x5e3b6d8, size 0x8, virtual true, abstract: false, final true
inline bool get_isStopped() ;

/// [CompilerGenerated]
/// @brief Method get_onSearchPath, addr 0x5e3b6e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Action* get_onSearchPath() ;

/// @brief Method get_pathPending, addr 0x5e3b6c8, size 0x10, virtual true, abstract: false, final true
inline bool get_pathPending() ;

/// @brief Method get_position, addr 0x5e3b3cc, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_reachedDestination, addr 0x5e3b0a8, size 0xfc, virtual true, abstract: false, final true
inline bool get_reachedDestination() ;

/// [CompilerGenerated]
/// @brief Method get_reachedEndOfPath, addr 0x5e3b098, size 0x8, virtual true, abstract: false, final true
inline bool get_reachedEndOfPath() ;

/// @brief Method get_remainingDistance, addr 0x5e3b1a4, size 0x28, virtual true, abstract: false, final true
inline float_t get_remainingDistance() ;

/// @brief Method get_repathRate, addr 0x5e3b004, size 0x18, virtual false, abstract: false, final false
inline float_t get_repathRate() ;

/// @brief Method get_rotation, addr 0x5e3b400, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_rotationIn2D, addr 0x5e3b070, size 0x10, virtual false, abstract: false, final false
inline bool get_rotationIn2D() ;

/// @brief Method get_shouldRecalculatePath, addr 0x5e3bcf4, size 0x58, virtual true, abstract: false, final false
inline bool get_shouldRecalculatePath() ;

/// @brief Method get_target, addr 0x5e3b1e4, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_target() ;

/// @brief Method get_velocity, addr 0x5e3b4d8, size 0xa0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Convert to "::Pathfinding::IAstarAI"
constexpr ::Pathfinding::IAstarAI* i___Pathfinding__IAstarAI() noexcept;

/// @brief Method set_canSearch, addr 0x5e3b054, size 0x1c, virtual false, abstract: false, final false
inline void set_canSearch(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_destination, addr 0x5e3b1d8, size 0xc, virtual true, abstract: false, final true
inline void set_destination(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_isStopped, addr 0x5e3b6e0, size 0x8, virtual true, abstract: false, final true
inline void set_isStopped(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_onSearchPath, addr 0x5e3b6f0, size 0x8, virtual true, abstract: false, final true
inline void set_onSearchPath(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_reachedEndOfPath, addr 0x5e3b0a0, size 0x8, virtual false, abstract: false, final false
inline void set_reachedEndOfPath(bool  value) ;

/// @brief Method set_remainingDistance, addr 0x5e3b690, size 0x20, virtual false, abstract: false, final false
inline void set_remainingDistance(float_t  value) ;

/// @brief Method set_repathRate, addr 0x5e3b01c, size 0x18, virtual false, abstract: false, final false
inline void set_repathRate(float_t  value) ;

/// @brief Method set_rotation, addr 0x5e3b434, size 0x2c, virtual true, abstract: false, final true
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotationIn2D, addr 0x5e3b080, size 0x18, virtual false, abstract: false, final false
inline void set_rotationIn2D(bool  value) ;

/// @brief Method set_target, addr 0x5e3b28c, size 0x140, virtual false, abstract: false, final false
inline void set_target(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AILerp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AILerp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AILerp(AILerp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AILerp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AILerp(AILerp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21176};

/// @brief Field autoRepath, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::AutoRepathPolicy*  ___autoRepath;

/// @brief Field canMove, offset: 0x30, size: 0x1, def value: None
 bool  ___canMove;

/// @brief Field speed, offset: 0x34, size: 0x4, def value: None
 float_t  ___speed;

/// [FormerlySerializedAs("rotationIn2D")]
/// @brief Field orientation, offset: 0x38, size: 0x4, def value: None
 ::Pathfinding::OrientationMode  ___orientation;

/// @brief Field enableRotation, offset: 0x3c, size: 0x1, def value: None
 bool  ___enableRotation;

/// @brief Field rotationSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field interpolatePathSwitches, offset: 0x44, size: 0x1, def value: None
 bool  ___interpolatePathSwitches;

/// @brief Field switchPathInterpolationSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ___switchPathInterpolationSpeed;

/// [CompilerGenerated]
/// @brief Field <reachedEndOfPath>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  ____reachedEndOfPath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <destination>k__BackingField, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____destination_k__BackingField;

/// @brief Field updatePosition, offset: 0x5c, size: 0x1, def value: None
 bool  ___updatePosition;

/// @brief Field updateRotation, offset: 0x5d, size: 0x1, def value: None
 bool  ___updateRotation;

/// [CompilerGenerated]
/// @brief Field <isStopped>k__BackingField, offset: 0x5e, size: 0x1, def value: None
 bool  ____isStopped_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <onSearchPath>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ____onSearchPath_k__BackingField;

/// @brief Field seeker, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

/// @brief Field tr, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field path, offset: 0x78, size: 0x8, def value: None
 ::Pathfinding::ABPath*  ___path;

/// @brief Field canSearchAgain, offset: 0x80, size: 0x1, def value: None
 bool  ___canSearchAgain;

/// @brief Field previousMovementOrigin, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousMovementOrigin;

/// @brief Field previousMovementDirection, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousMovementDirection;

/// @brief Field pathSwitchInterpolationTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___pathSwitchInterpolationTime;

/// @brief Field interpolator, offset: 0xa0, size: 0x8, def value: None
 ::Pathfinding::Util::PathInterpolator*  ___interpolator;

/// @brief Field startHasRun, offset: 0xa8, size: 0x1, def value: None
 bool  ___startHasRun;

/// @brief Field previousPosition1, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousPosition1;

/// @brief Field previousPosition2, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousPosition2;

/// @brief Field simulatedPosition, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___simulatedPosition;

/// @brief Field simulatedRotation, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___simulatedRotation;

/// [FormerlySerializedAs("target")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field targetCompatibility, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetCompatibility;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("repathRate")]
/// @brief Field repathRateCompatibility, offset: 0xe8, size: 0x4, def value: None
 float_t  ___repathRateCompatibility;

/// [SerializeField]
/// [HideInInspector]
/// [FormerlySerializedAs("canSearch")]
/// @brief Field canSearchCompability, offset: 0xec, size: 0x1, def value: None
 bool  ___canSearchCompability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AILerp, ___autoRepath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___canMove) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___speed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___orientation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___enableRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___rotationSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___interpolatePathSwitches) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___switchPathInterpolationSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ____reachedEndOfPath_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ____destination_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___updatePosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___updateRotation) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ____isStopped_k__BackingField) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ____onSearchPath_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___seeker) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___tr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___path) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___canSearchAgain) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___previousMovementOrigin) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___previousMovementDirection) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___pathSwitchInterpolationTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___interpolator) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___startHasRun) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___previousPosition1) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___previousPosition2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___simulatedPosition) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___simulatedRotation) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___targetCompatibility) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___repathRateCompatibility) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AILerp, ___canSearchCompability) == 0xec, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AILerp) == 0xf0, "Size mismatch!");

} // namespace end def Pathfinding
