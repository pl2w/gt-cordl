#pragma once
// IWYU pragma private; include "Pathfinding/AIPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__AIBase_def.hpp"
#include "Pathfinding/zzzz__CloseToDestinationMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AIPath)
namespace Pathfinding::Util {
class PathInterpolator;
}
namespace Pathfinding {
class IAstarAI;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class AIPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::AIPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AIPath*, "Pathfinding", "AIPath");
// [AddComponentMenu("Pathfinding/AI/AIPath (2D,3D)")]
// Dependencies Pathfinding.AIBase, Pathfinding.CloseToDestinationMode
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AIPath
class CORDL_TYPE AIPath : public ::Pathfinding::AIBase {
public:
// Declarations
 __declspec(property(get=Pathfinding_IAstarAI_get_canMove, put=Pathfinding_IAstarAI_set_canMove)) bool  Pathfinding_IAstarAI_canMove;

 __declspec(property(get=Pathfinding_IAstarAI_get_canSearch, put=Pathfinding_IAstarAI_set_canSearch)) bool  Pathfinding_IAstarAI_canSearch;

 __declspec(property(get=Pathfinding_IAstarAI_get_height, put=Pathfinding_IAstarAI_set_height)) float_t  Pathfinding_IAstarAI_height;

 __declspec(property(get=Pathfinding_IAstarAI_get_maxSpeed, put=Pathfinding_IAstarAI_set_maxSpeed)) float_t  Pathfinding_IAstarAI_maxSpeed;

 __declspec(property(get=Pathfinding_IAstarAI_get_radius, put=Pathfinding_IAstarAI_set_radius)) float_t  Pathfinding_IAstarAI_radius;

/// @brief [Obsolete("When unifying the interfaces for different movement scripts, this property has been renamed to reachedEndOfPath.  [AstarUpgradable: \'TargetReached\' -> \'reachedEndOfPath\']")]
 __declspec(property(get=get_TargetReached)) bool  TargetReached;

/// @brief Field <reachedEndOfPath>k__BackingField, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get__reachedEndOfPath_k__BackingField, put=__cordl_internal_set__reachedEndOfPath_k__BackingField)) bool  _reachedEndOfPath_k__BackingField;

/// @brief Field alwaysDrawGizmos, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysDrawGizmos, put=__cordl_internal_set_alwaysDrawGizmos)) bool  alwaysDrawGizmos;

/// @brief Field cachedNNConstraint, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedNNConstraint, put=setStaticF_cachedNNConstraint)) ::Pathfinding::NNConstraint*  cachedNNConstraint;

/// @brief Field constrainInsideGraph, offset 0x14c, size 0x1 
 __declspec(property(get=__cordl_internal_get_constrainInsideGraph, put=__cordl_internal_set_constrainInsideGraph)) bool  constrainInsideGraph;

/// @brief Field endReachedDistance, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_endReachedDistance, put=__cordl_internal_set_endReachedDistance)) float_t  endReachedDistance;

 __declspec(property(get=get_hasPath)) bool  hasPath;

/// @brief Field interpolator, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_interpolator, put=__cordl_internal_set_interpolator)) ::Pathfinding::Util::PathInterpolator*  interpolator;

/// @brief Field maxAcceleration, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAcceleration, put=__cordl_internal_set_maxAcceleration)) float_t  maxAcceleration;

/// @brief Field path, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

 __declspec(property(get=get_pathPending)) bool  pathPending;

/// @brief Field pickNextWaypointDist, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pickNextWaypointDist, put=__cordl_internal_set_pickNextWaypointDist)) float_t  pickNextWaypointDist;

 __declspec(property(get=get_reachedDestination)) bool  reachedDestination;

 __declspec(property(get=get_reachedEndOfPath, put=set_reachedEndOfPath)) bool  reachedEndOfPath;

 __declspec(property(get=get_remainingDistance)) float_t  remainingDistance;

/// @brief Field rotationSpeed, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field slowWhenNotFacingTarget, offset 0x145, size 0x1 
 __declspec(property(get=__cordl_internal_get_slowWhenNotFacingTarget, put=__cordl_internal_set_slowWhenNotFacingTarget)) bool  slowWhenNotFacingTarget;

/// @brief Field slowdownDistance, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowdownDistance, put=__cordl_internal_set_slowdownDistance)) float_t  slowdownDistance;

/// @brief [Obsolete("This member has been deprecated. Use \'maxSpeed\' instead. [AstarUpgradable: \'speed\' -> \'maxSpeed\']")]
 __declspec(property(get=get_speed, put=set_speed)) float_t  speed;

 __declspec(property(get=get_steeringTarget)) ::UnityEngine::Vector3  steeringTarget;

/// @brief [Obsolete("Only exists for compatibility reasons. Use desiredVelocity or steeringTarget instead.")]
 __declspec(property(get=get_targetDirection)) ::UnityEngine::Vector3  targetDirection;

/// @brief [Obsolete("This field has been renamed to #rotationSpeed and is now in degrees per second instead of a damping factor")]
 __declspec(property(get=get_turningSpeed, put=set_turningSpeed)) float_t  turningSpeed;

/// @brief Field whenCloseToDestination, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_whenCloseToDestination, put=__cordl_internal_set_whenCloseToDestination)) ::Pathfinding::CloseToDestinationMode  whenCloseToDestination;

/// @brief Convert operator to "::Pathfinding::IAstarAI"
constexpr operator  ::Pathfinding::IAstarAI*() noexcept;

/// @brief Method CalculateNextRotation, addr 0x5e3e580, size 0x1a8, virtual true, abstract: false, final false
inline void CalculateNextRotation(float_t  slowdown, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

/// [Obsolete("This method no longer calculates the velocity. Use the desiredVelocity property instead")]
/// @brief Method CalculateVelocity, addr 0x5e3ebac, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateVelocity(::UnityEngine::Vector3  position) ;

/// @brief Method ClampToNavmesh, addr 0x5e3e728, size 0x304, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClampToNavmesh(::UnityEngine::Vector3  position, ::by_ref<bool>  positionChanged) ;

/// @brief Method ClearPath, addr 0x5e3dc34, size 0x58, virtual true, abstract: false, final false
inline void ClearPath() ;

/// @brief Method GetRemainingPath, addr 0x5e3d4e8, size 0x110, virtual true, abstract: false, final true
inline void GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale) ;

/// @brief Method MovementUpdateInternal, addr 0x5e3dc8c, size 0x8f4, virtual true, abstract: false, final false
inline void MovementUpdateInternal(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

static inline ::Pathfinding::AIPath* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e3d5f8, size 0x58, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnPathComplete, addr 0x5e3d654, size 0x5e0, virtual true, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  newPath) ;

/// @brief Method OnTargetReached, addr 0x5e3d650, size 0x4, virtual true, abstract: false, final false
inline void OnTargetReached() ;

/// @brief Method OnUpgradeSerializedData, addr 0x5e3ea2c, size 0x34, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method Pathfinding.IAstarAI.get_canMove, addr 0x5e3d4d8, size 0x8, virtual true, abstract: false, final true
inline bool Pathfinding_IAstarAI_get_canMove() ;

/// @brief Method Pathfinding.IAstarAI.get_canSearch, addr 0x5e3d4b4, size 0x20, virtual true, abstract: false, final true
inline bool Pathfinding_IAstarAI_get_canSearch() ;

/// @brief Method Pathfinding.IAstarAI.get_height, addr 0x5e3d494, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_height() ;

/// @brief Method Pathfinding.IAstarAI.get_maxSpeed, addr 0x5e3d4a4, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_maxSpeed() ;

/// @brief Method Pathfinding.IAstarAI.get_radius, addr 0x5e3d484, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_radius() ;

/// @brief Method Pathfinding.IAstarAI.set_canMove, addr 0x5e3d4e0, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_canMove(bool  value) ;

/// @brief Method Pathfinding.IAstarAI.set_canSearch, addr 0x5e3d4d4, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_canSearch(bool  value) ;

/// @brief Method Pathfinding.IAstarAI.set_height, addr 0x5e3d49c, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_height(float_t  value) ;

/// @brief Method Pathfinding.IAstarAI.set_maxSpeed, addr 0x5e3d4ac, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_maxSpeed(float_t  value) ;

/// @brief Method Pathfinding.IAstarAI.set_radius, addr 0x5e3d48c, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_radius(float_t  value) ;

/// @brief Method Teleport, addr 0x5e3d024, size 0x8, virtual true, abstract: false, final false
inline void Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath) ;

constexpr bool const& __cordl_internal_get__reachedEndOfPath_k__BackingField() const;

constexpr bool& __cordl_internal_get__reachedEndOfPath_k__BackingField() ;

constexpr bool const& __cordl_internal_get_alwaysDrawGizmos() const;

constexpr bool& __cordl_internal_get_alwaysDrawGizmos() ;

constexpr bool const& __cordl_internal_get_constrainInsideGraph() const;

constexpr bool& __cordl_internal_get_constrainInsideGraph() ;

constexpr float_t const& __cordl_internal_get_endReachedDistance() const;

constexpr float_t& __cordl_internal_get_endReachedDistance() ;

constexpr ::Pathfinding::Util::PathInterpolator* const& __cordl_internal_get_interpolator() const;

constexpr ::Pathfinding::Util::PathInterpolator*& __cordl_internal_get_interpolator() ;

constexpr float_t const& __cordl_internal_get_maxAcceleration() const;

constexpr float_t& __cordl_internal_get_maxAcceleration() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr float_t const& __cordl_internal_get_pickNextWaypointDist() const;

constexpr float_t& __cordl_internal_get_pickNextWaypointDist() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr bool const& __cordl_internal_get_slowWhenNotFacingTarget() const;

constexpr bool& __cordl_internal_get_slowWhenNotFacingTarget() ;

constexpr float_t const& __cordl_internal_get_slowdownDistance() const;

constexpr float_t& __cordl_internal_get_slowdownDistance() ;

constexpr ::Pathfinding::CloseToDestinationMode const& __cordl_internal_get_whenCloseToDestination() const;

constexpr ::Pathfinding::CloseToDestinationMode& __cordl_internal_get_whenCloseToDestination() ;

constexpr void __cordl_internal_set__reachedEndOfPath_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_alwaysDrawGizmos(bool  value) ;

constexpr void __cordl_internal_set_constrainInsideGraph(bool  value) ;

constexpr void __cordl_internal_set_endReachedDistance(float_t  value) ;

constexpr void __cordl_internal_set_interpolator(::Pathfinding::Util::PathInterpolator*  value) ;

constexpr void __cordl_internal_set_maxAcceleration(float_t  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_pickNextWaypointDist(float_t  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_slowWhenNotFacingTarget(bool  value) ;

constexpr void __cordl_internal_set_slowdownDistance(float_t  value) ;

constexpr void __cordl_internal_set_whenCloseToDestination(::Pathfinding::CloseToDestinationMode  value) ;

/// @brief Method .ctor, addr 0x5e3ebb0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::NNConstraint* getStaticF_cachedNNConstraint() ;

/// @brief Method get_TargetReached, addr 0x5e3ea60, size 0x8, virtual false, abstract: false, final false
inline bool get_TargetReached() ;

/// @brief Method get_hasPath, addr 0x5e3d420, size 0x18, virtual true, abstract: false, final true
inline bool get_hasPath() ;

/// @brief Method get_pathPending, addr 0x5e3d438, size 0x8, virtual true, abstract: false, final true
inline bool get_pathPending() ;

/// @brief Method get_reachedDestination, addr 0x5e3d1a8, size 0x268, virtual true, abstract: false, final true
inline bool get_reachedDestination() ;

/// [CompilerGenerated]
/// @brief Method get_reachedEndOfPath, addr 0x5e3d410, size 0x8, virtual true, abstract: false, final true
inline bool get_reachedEndOfPath() ;

/// @brief Method get_remainingDistance, addr 0x5e3d02c, size 0x17c, virtual true, abstract: false, final true
inline float_t get_remainingDistance() ;

/// @brief Method get_speed, addr 0x5e3ea90, size 0x8, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_steeringTarget, addr 0x5e3d440, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_steeringTarget() ;

/// @brief Method get_targetDirection, addr 0x5e3eaa0, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_targetDirection() ;

/// @brief Method get_turningSpeed, addr 0x5e3ea68, size 0x14, virtual false, abstract: false, final false
inline float_t get_turningSpeed() ;

/// @brief Convert to "::Pathfinding::IAstarAI"
constexpr ::Pathfinding::IAstarAI* i___Pathfinding__IAstarAI() noexcept;

static inline void setStaticF_cachedNNConstraint(::Pathfinding::NNConstraint*  value) ;

/// [CompilerGenerated]
/// @brief Method set_reachedEndOfPath, addr 0x5e3d418, size 0x8, virtual false, abstract: false, final false
inline void set_reachedEndOfPath(bool  value) ;

/// @brief Method set_speed, addr 0x5e3ea98, size 0x8, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_turningSpeed, addr 0x5e3ea7c, size 0x14, virtual false, abstract: false, final false
inline void set_turningSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AIPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AIPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AIPath(AIPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AIPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AIPath(AIPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21177};

/// @brief Field maxAcceleration, offset: 0x130, size: 0x4, def value: None
 float_t  ___maxAcceleration;

/// [FormerlySerializedAs("turningSpeed")]
/// @brief Field rotationSpeed, offset: 0x134, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field slowdownDistance, offset: 0x138, size: 0x4, def value: None
 float_t  ___slowdownDistance;

/// @brief Field pickNextWaypointDist, offset: 0x13c, size: 0x4, def value: None
 float_t  ___pickNextWaypointDist;

/// @brief Field endReachedDistance, offset: 0x140, size: 0x4, def value: None
 float_t  ___endReachedDistance;

/// @brief Field alwaysDrawGizmos, offset: 0x144, size: 0x1, def value: None
 bool  ___alwaysDrawGizmos;

/// @brief Field slowWhenNotFacingTarget, offset: 0x145, size: 0x1, def value: None
 bool  ___slowWhenNotFacingTarget;

/// @brief Field whenCloseToDestination, offset: 0x148, size: 0x4, def value: None
 ::Pathfinding::CloseToDestinationMode  ___whenCloseToDestination;

/// @brief Field constrainInsideGraph, offset: 0x14c, size: 0x1, def value: None
 bool  ___constrainInsideGraph;

/// @brief Field path, offset: 0x150, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

/// @brief Field interpolator, offset: 0x158, size: 0x8, def value: None
 ::Pathfinding::Util::PathInterpolator*  ___interpolator;

/// [CompilerGenerated]
/// @brief Field <reachedEndOfPath>k__BackingField, offset: 0x160, size: 0x1, def value: None
 bool  ____reachedEndOfPath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AIPath, ___maxAcceleration) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___rotationSpeed) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___slowdownDistance) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___pickNextWaypointDist) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___endReachedDistance) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___alwaysDrawGizmos) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___slowWhenNotFacingTarget) == 0x145, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___whenCloseToDestination) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___constrainInsideGraph) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___path) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ___interpolator) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AIPath, ____reachedEndOfPath_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AIPath) == 0x168, "Size mismatch!");

} // namespace end def Pathfinding
