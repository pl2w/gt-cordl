#pragma once
// IWYU pragma private; include "Pathfinding/RichAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__AIBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RichAI)
namespace Pathfinding {
class IAstarAI;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class RichAI__TraverseOffMeshLinkFallback_d__69;
}
namespace Pathfinding {
class RichAI__TraverseSpecial_d__68;
}
namespace Pathfinding {
class RichFunnel;
}
namespace Pathfinding {
class RichPath;
}
namespace Pathfinding {
class RichSpecial;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RichAI;
}
namespace Pathfinding {
class RichAI__TraverseOffMeshLinkFallback_d__69;
}
namespace Pathfinding {
class RichAI__TraverseSpecial_d__68;
}
// Write type traits
MARK_REF_T(::Pathfinding::RichAI*);
MARK_REF_T(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*);
MARK_REF_T(::Pathfinding::RichAI__TraverseSpecial_d__68*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RichAI*, "Pathfinding", "RichAI");
DEFINE_IL2CPP_CLASS(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*, "Pathfinding", "RichAI/<TraverseOffMeshLinkFallback>d__69");
DEFINE_IL2CPP_CLASS(::Pathfinding::RichAI__TraverseSpecial_d__68*, "Pathfinding", "RichAI/<TraverseSpecial>d__68");
// [AddComponentMenu("Pathfinding/AI/RichAI (3D, for navmesh)")]
// Dependencies Pathfinding.AIBase, UnityEngine.Color, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichAI
class CORDL_TYPE RichAI : public ::Pathfinding::AIBase {
public:
// Declarations
using _TraverseOffMeshLinkFallback_d__69 = ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69;

using _TraverseSpecial_d__68 = ::Pathfinding::RichAI__TraverseSpecial_d__68;

/// @brief [Obsolete("Use approachingPartEndpoint (lowercase \'a\') instead")]
 __declspec(property(get=get_ApproachingPartEndpoint)) bool  ApproachingPartEndpoint;

/// @brief [Obsolete("Use approachingPathEndpoint (lowercase \'a\') instead")]
 __declspec(property(get=get_ApproachingPathEndpoint)) bool  ApproachingPathEndpoint;

/// @brief [Obsolete("Use Vector3.Distance(transform.position, ai.steeringTarget) instead.")]
 __declspec(property(get=get_DistanceToNextWaypoint)) float_t  DistanceToNextWaypoint;

/// @brief Field GizmoColorPath, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmoColorPath, put=setStaticF_GizmoColorPath)) ::UnityEngine::Color  GizmoColorPath;

/// @brief [Obsolete("Use steeringTarget instead. [AstarUpgradable: \'NextWaypoint\' -> \'steeringTarget\']")]
 __declspec(property(get=get_NextWaypoint)) ::UnityEngine::Vector3  NextWaypoint;

/// @brief [Obsolete("Use pathPending instead (lowercase \'p\'). [AstarUpgradable: \'PathPending\' -> \'pathPending\']")]
 __declspec(property(get=get_PathPending)) bool  PathPending;

 __declspec(property(get=Pathfinding_IAstarAI_get_canMove, put=Pathfinding_IAstarAI_set_canMove)) bool  Pathfinding_IAstarAI_canMove;

 __declspec(property(get=Pathfinding_IAstarAI_get_canSearch, put=Pathfinding_IAstarAI_set_canSearch)) bool  Pathfinding_IAstarAI_canSearch;

 __declspec(property(get=Pathfinding_IAstarAI_get_height, put=Pathfinding_IAstarAI_set_height)) float_t  Pathfinding_IAstarAI_height;

 __declspec(property(get=Pathfinding_IAstarAI_get_maxSpeed, put=Pathfinding_IAstarAI_set_maxSpeed)) float_t  Pathfinding_IAstarAI_maxSpeed;

 __declspec(property(get=Pathfinding_IAstarAI_get_radius, put=Pathfinding_IAstarAI_set_radius)) float_t  Pathfinding_IAstarAI_radius;

/// @brief [Obsolete("This property has been renamed to steeringTarget")]
 __declspec(property(get=get_TargetPoint)) ::UnityEngine::Vector3  TargetPoint;

/// @brief [Obsolete("When unifying the interfaces for different movement scripts, this property has been renamed to reachedEndOfPath (lowercase t).  [AstarUpgradable: \'TargetReached\' -> \'reachedEndOfPath\']")]
 __declspec(property(get=get_TargetReached)) bool  TargetReached;

/// @brief [Obsolete("This property has been renamed to \'traversingOffMeshLink\'. [AstarUpgradable: \'TraversingSpecial\' -> \'traversingOffMeshLink\']")]
 __declspec(property(get=get_TraversingSpecial)) bool  TraversingSpecial;

/// @brief [Obsolete("Use velocity instead (lowercase \'v\'). [AstarUpgradable: \'Velocity\' -> \'velocity\']")]
 __declspec(property(get=get_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field <steeringTarget>k__BackingField, offset 0x17c, size 0xc 
 __declspec(property(get=__cordl_internal_get__steeringTarget_k__BackingField, put=__cordl_internal_set__steeringTarget_k__BackingField)) ::UnityEngine::Vector3  _steeringTarget_k__BackingField;

/// @brief Field <traversingOffMeshLink>k__BackingField, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get__traversingOffMeshLink_k__BackingField, put=__cordl_internal_set__traversingOffMeshLink_k__BackingField)) bool  _traversingOffMeshLink_k__BackingField;

/// @brief Field acceleration, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief [Obsolete("Use the onTraverseOffMeshLink event or the ... component instead. Setting this value will add a ... component")]
 __declspec(property(get=get_anim, put=set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field animCompatibility, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_animCompatibility, put=__cordl_internal_set_animCompatibility)) ::UnityW<::UnityEngine::Animation>  animCompatibility;

 __declspec(property(get=get_approachingPartEndpoint)) bool  approachingPartEndpoint;

 __declspec(property(get=get_approachingPathEndpoint)) bool  approachingPathEndpoint;

/// @brief Field delayUpdatePath, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get_delayUpdatePath, put=__cordl_internal_set_delayUpdatePath)) bool  delayUpdatePath;

/// @brief Field distanceToSteeringTarget, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceToSteeringTarget, put=__cordl_internal_set_distanceToSteeringTarget)) float_t  distanceToSteeringTarget;

/// @brief Field endReachedDistance, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_endReachedDistance, put=__cordl_internal_set_endReachedDistance)) float_t  endReachedDistance;

/// @brief Field funnelSimplification, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_funnelSimplification, put=__cordl_internal_set_funnelSimplification)) bool  funnelSimplification;

 __declspec(property(get=get_hasPath)) bool  hasPath;

/// @brief Field lastCorner, offset 0x161, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastCorner, put=__cordl_internal_set_lastCorner)) bool  lastCorner;

/// @brief Field nextCorners, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextCorners, put=__cordl_internal_set_nextCorners)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  nextCorners;

/// @brief Field onTraverseOffMeshLink, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTraverseOffMeshLink, put=__cordl_internal_set_onTraverseOffMeshLink)) ::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>*  onTraverseOffMeshLink;

 __declspec(property(get=get_pathPending)) bool  pathPending;

 __declspec(property(get=get_reachedDestination)) bool  reachedDestination;

 __declspec(property(get=get_reachedEndOfPath)) bool  reachedEndOfPath;

 __declspec(property(get=get_remainingDistance)) float_t  remainingDistance;

/// @brief [Obsolete("Use canSearch instead. [AstarUpgradable: \'repeatedlySearchPaths\' -> \'canSearch\']")]
 __declspec(property(get=get_repeatedlySearchPaths, put=set_repeatedlySearchPaths)) bool  repeatedlySearchPaths;

/// @brief Field richPath, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_richPath, put=__cordl_internal_set_richPath)) ::Pathfinding::RichPath*  richPath;

/// @brief Field rotationSpeed, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

 __declspec(property(get=get_shouldRecalculatePath)) bool  shouldRecalculatePath;

/// @brief Field slowWhenNotFacingTarget, offset 0x149, size 0x1 
 __declspec(property(get=__cordl_internal_get_slowWhenNotFacingTarget, put=__cordl_internal_set_slowWhenNotFacingTarget)) bool  slowWhenNotFacingTarget;

/// @brief Field slowdownTime, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowdownTime, put=__cordl_internal_set_slowdownTime)) float_t  slowdownTime;

 __declspec(property(get=get_steeringTarget, put=set_steeringTarget)) ::UnityEngine::Vector3  steeringTarget;

 __declspec(property(get=get_traversingOffMeshLink, put=set_traversingOffMeshLink)) bool  traversingOffMeshLink;

/// @brief Field wallBuffer, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_wallBuffer, put=__cordl_internal_set_wallBuffer)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  wallBuffer;

/// @brief Field wallDist, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallDist, put=__cordl_internal_set_wallDist)) float_t  wallDist;

/// @brief Field wallForce, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallForce, put=__cordl_internal_set_wallForce)) float_t  wallForce;

/// @brief Convert operator to "::Pathfinding::IAstarAI"
constexpr operator  ::Pathfinding::IAstarAI*() noexcept;

/// @brief Method CalculateWallForce, addr 0x5e41af0, size 0x464, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 CalculateWallForce(::UnityEngine::Vector2  position, float_t  elevation, ::UnityEngine::Vector2  directionToTarget) ;

/// @brief Method ClampToNavmesh, addr 0x5e41f54, size 0x2a0, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClampToNavmesh(::UnityEngine::Vector3  position, ::by_ref<bool>  positionChanged) ;

/// @brief Method ClearPath, addr 0x5e402f8, size 0x30, virtual true, abstract: false, final false
inline void ClearPath() ;

/// @brief Method FinalMovement, addr 0x5e41594, size 0x540, virtual false, abstract: false, final false
inline void FinalMovement(::UnityEngine::Vector3  position3D, float_t  deltaTime, float_t  distanceToEndOfPath, float_t  slowdownFactor, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

/// @brief Method GetRemainingPath, addr 0x5e40454, size 0x20, virtual true, abstract: false, final true
inline void GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale) ;

/// @brief Method MovementUpdateInternal, addr 0x5e40bb0, size 0x2c0, virtual true, abstract: false, final false
inline void MovementUpdateInternal(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

static inline ::Pathfinding::RichAI* New_ctor() ;

/// @brief Method NextPart, addr 0x5e4028c, size 0x6c, virtual false, abstract: false, final false
inline void NextPart() ;

/// @brief Method OnDisable, addr 0x5e3f504, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5e424ec, size 0x164, virtual true, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnPathComplete, addr 0x5e3f568, size 0x3ac, virtual true, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  p) ;

/// @brief Method OnTargetReached, addr 0x5e4069c, size 0x4, virtual true, abstract: false, final false
inline void OnTargetReached() ;

/// @brief Method OnUpgradeSerializedData, addr 0x5e42650, size 0x9c, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method Pathfinding.IAstarAI.get_canMove, addr 0x5e3f184, size 0x8, virtual true, abstract: false, final true
inline bool Pathfinding_IAstarAI_get_canMove() ;

/// @brief Method Pathfinding.IAstarAI.get_canSearch, addr 0x5e3f160, size 0x20, virtual true, abstract: false, final true
inline bool Pathfinding_IAstarAI_get_canSearch() ;

/// @brief Method Pathfinding.IAstarAI.get_height, addr 0x5e3f140, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_height() ;

/// @brief Method Pathfinding.IAstarAI.get_maxSpeed, addr 0x5e3f150, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_maxSpeed() ;

/// @brief Method Pathfinding.IAstarAI.get_radius, addr 0x5e3f130, size 0x8, virtual true, abstract: false, final true
inline float_t Pathfinding_IAstarAI_get_radius() ;

/// @brief Method Pathfinding.IAstarAI.set_canMove, addr 0x5e3f18c, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_canMove(bool  value) ;

/// @brief Method Pathfinding.IAstarAI.set_canSearch, addr 0x5e3f180, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_canSearch(bool  value) ;

/// @brief Method Pathfinding.IAstarAI.set_height, addr 0x5e3f148, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_height(float_t  value) ;

/// @brief Method Pathfinding.IAstarAI.set_maxSpeed, addr 0x5e3f158, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_maxSpeed(float_t  value) ;

/// @brief Method Pathfinding.IAstarAI.set_radius, addr 0x5e3f138, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IAstarAI_set_radius(float_t  value) ;

/// @brief Method SearchPath, addr 0x5e3f550, size 0x18, virtual true, abstract: false, final false
inline void SearchPath() ;

/// @brief Method Teleport, addr 0x5e3f24c, size 0x2b8, virtual true, abstract: false, final false
inline void Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath) ;

/// @brief Method TraverseFunnel, addr 0x5e40e70, size 0x724, virtual false, abstract: false, final false
inline void TraverseFunnel(::Pathfinding::RichFunnel*  fn, float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

/// [IteratorStateMachine(typeof(Pathfinding.RichAI::<TraverseOffMeshLinkFallback>d__69))]
/// @brief Method TraverseOffMeshLinkFallback, addr 0x5e4243c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TraverseOffMeshLinkFallback(::Pathfinding::RichSpecial*  link) ;

/// [IteratorStateMachine(typeof(Pathfinding.RichAI::<TraverseSpecial>d__68))]
/// @brief Method TraverseSpecial, addr 0x5e4238c, size 0x88, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* TraverseSpecial(::Pathfinding::RichSpecial*  link) ;

/// [Obsolete("Use SearchPath instead. [AstarUpgradable: \'UpdatePath\' -> \'SearchPath\']")]
/// @brief Method UpdatePath, addr 0x5e427d8, size 0x10, virtual false, abstract: false, final false
inline void UpdatePath() ;

/// @brief Method UpdateTarget, addr 0x5e406a0, size 0xd4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 UpdateTarget(::Pathfinding::RichFunnel*  fn) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__steeringTarget_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__steeringTarget_k__BackingField() ;

constexpr bool const& __cordl_internal_get__traversingOffMeshLink_k__BackingField() const;

constexpr bool& __cordl_internal_get__traversingOffMeshLink_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animCompatibility() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animCompatibility() ;

constexpr bool const& __cordl_internal_get_delayUpdatePath() const;

constexpr bool& __cordl_internal_get_delayUpdatePath() ;

constexpr float_t const& __cordl_internal_get_distanceToSteeringTarget() const;

constexpr float_t& __cordl_internal_get_distanceToSteeringTarget() ;

constexpr float_t const& __cordl_internal_get_endReachedDistance() const;

constexpr float_t& __cordl_internal_get_endReachedDistance() ;

constexpr bool const& __cordl_internal_get_funnelSimplification() const;

constexpr bool& __cordl_internal_get_funnelSimplification() ;

constexpr bool const& __cordl_internal_get_lastCorner() const;

constexpr bool& __cordl_internal_get_lastCorner() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_nextCorners() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_nextCorners() ;

constexpr ::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>* const& __cordl_internal_get_onTraverseOffMeshLink() const;

constexpr ::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>*& __cordl_internal_get_onTraverseOffMeshLink() ;

constexpr ::Pathfinding::RichPath* const& __cordl_internal_get_richPath() const;

constexpr ::Pathfinding::RichPath*& __cordl_internal_get_richPath() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr bool const& __cordl_internal_get_slowWhenNotFacingTarget() const;

constexpr bool& __cordl_internal_get_slowWhenNotFacingTarget() ;

constexpr float_t const& __cordl_internal_get_slowdownTime() const;

constexpr float_t& __cordl_internal_get_slowdownTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_wallBuffer() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_wallBuffer() ;

constexpr float_t const& __cordl_internal_get_wallDist() const;

constexpr float_t& __cordl_internal_get_wallDist() ;

constexpr float_t const& __cordl_internal_get_wallForce() const;

constexpr float_t& __cordl_internal_get_wallForce() ;

constexpr void __cordl_internal_set__steeringTarget_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__traversingOffMeshLink_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_animCompatibility(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_delayUpdatePath(bool  value) ;

constexpr void __cordl_internal_set_distanceToSteeringTarget(float_t  value) ;

constexpr void __cordl_internal_set_endReachedDistance(float_t  value) ;

constexpr void __cordl_internal_set_funnelSimplification(bool  value) ;

constexpr void __cordl_internal_set_lastCorner(bool  value) ;

constexpr void __cordl_internal_set_nextCorners(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_onTraverseOffMeshLink(::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>*  value) ;

constexpr void __cordl_internal_set_richPath(::Pathfinding::RichPath*  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_slowWhenNotFacingTarget(bool  value) ;

constexpr void __cordl_internal_set_slowdownTime(float_t  value) ;

constexpr void __cordl_internal_set_wallBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_wallDist(float_t  value) ;

constexpr void __cordl_internal_set_wallForce(float_t  value) ;

/// @brief Method .ctor, addr 0x5e42940, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_GizmoColorPath() ;

/// @brief Method get_ApproachingPartEndpoint, addr 0x5e42878, size 0x4, virtual false, abstract: false, final false
inline bool get_ApproachingPartEndpoint() ;

/// @brief Method get_ApproachingPathEndpoint, addr 0x5e4287c, size 0x4, virtual false, abstract: false, final false
inline bool get_ApproachingPathEndpoint() ;

/// @brief Method get_DistanceToNextWaypoint, addr 0x5e427fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_DistanceToNextWaypoint() ;

/// @brief Method get_NextWaypoint, addr 0x5e427ec, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NextWaypoint() ;

/// @brief Method get_PathPending, addr 0x5e42858, size 0x20, virtual false, abstract: false, final false
inline bool get_PathPending() ;

/// @brief Method get_TargetPoint, addr 0x5e42888, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TargetPoint() ;

/// @brief Method get_TargetReached, addr 0x5e42828, size 0x30, virtual false, abstract: false, final false
inline bool get_TargetReached() ;

/// @brief Method get_TraversingSpecial, addr 0x5e42880, size 0x8, virtual false, abstract: false, final false
inline bool get_TraversingSpecial() ;

/// @brief Method get_Velocity, addr 0x5e427e8, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Method get_anim, addr 0x5e42898, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animation> get_anim() ;

/// @brief Method get_approachingPartEndpoint, addr 0x5e3f194, size 0x60, virtual false, abstract: false, final false
inline bool get_approachingPartEndpoint() ;

/// @brief Method get_approachingPathEndpoint, addr 0x5e3eda0, size 0x30, virtual false, abstract: false, final false
inline bool get_approachingPathEndpoint() ;

/// @brief Method get_hasPath, addr 0x5e3f048, size 0x24, virtual true, abstract: false, final true
inline bool get_hasPath() ;

/// @brief Method get_pathPending, addr 0x5e3f0f0, size 0x20, virtual true, abstract: false, final true
inline bool get_pathPending() ;

/// @brief Method get_reachedDestination, addr 0x5e3edd0, size 0x278, virtual true, abstract: false, final true
inline bool get_reachedDestination() ;

/// @brief Method get_reachedEndOfPath, addr 0x5e3ed70, size 0x30, virtual true, abstract: false, final true
inline bool get_reachedEndOfPath() ;

/// @brief Method get_remainingDistance, addr 0x5e3ecd0, size 0xa0, virtual true, abstract: false, final true
inline float_t get_remainingDistance() ;

/// @brief Method get_repeatedlySearchPaths, addr 0x5e42804, size 0x20, virtual false, abstract: false, final false
inline bool get_repeatedlySearchPaths() ;

/// @brief Method get_shouldRecalculatePath, addr 0x5e3f524, size 0x2c, virtual true, abstract: false, final false
inline bool get_shouldRecalculatePath() ;

/// [CompilerGenerated]
/// @brief Method get_steeringTarget, addr 0x5e3f110, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_steeringTarget() ;

/// [CompilerGenerated]
/// @brief Method get_traversingOffMeshLink, addr 0x5e3ecc0, size 0x8, virtual false, abstract: false, final false
inline bool get_traversingOffMeshLink() ;

/// @brief Convert to "::Pathfinding::IAstarAI"
constexpr ::Pathfinding::IAstarAI* i___Pathfinding__IAstarAI() noexcept;

static inline void setStaticF_GizmoColorPath(::UnityEngine::Color  value) ;

/// @brief Method set_anim, addr 0x5e426ec, size 0xec, virtual false, abstract: false, final false
inline void set_anim(::UnityEngine::Animation*  value) ;

/// @brief Method set_repeatedlySearchPaths, addr 0x5e42824, size 0x4, virtual false, abstract: false, final false
inline void set_repeatedlySearchPaths(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_steeringTarget, addr 0x5e3f120, size 0x10, virtual false, abstract: false, final false
inline void set_steeringTarget(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_traversingOffMeshLink, addr 0x5e3ecc8, size 0x8, virtual false, abstract: false, final false
inline void set_traversingOffMeshLink(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichAI(RichAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichAI(RichAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21181};

/// @brief Field acceleration, offset: 0x130, size: 0x4, def value: None
 float_t  ___acceleration;

/// @brief Field rotationSpeed, offset: 0x134, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field slowdownTime, offset: 0x138, size: 0x4, def value: None
 float_t  ___slowdownTime;

/// @brief Field endReachedDistance, offset: 0x13c, size: 0x4, def value: None
 float_t  ___endReachedDistance;

/// @brief Field wallForce, offset: 0x140, size: 0x4, def value: None
 float_t  ___wallForce;

/// @brief Field wallDist, offset: 0x144, size: 0x4, def value: None
 float_t  ___wallDist;

/// @brief Field funnelSimplification, offset: 0x148, size: 0x1, def value: None
 bool  ___funnelSimplification;

/// @brief Field slowWhenNotFacingTarget, offset: 0x149, size: 0x1, def value: None
 bool  ___slowWhenNotFacingTarget;

/// @brief Field onTraverseOffMeshLink, offset: 0x150, size: 0x8, def value: None
 ::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>*  ___onTraverseOffMeshLink;

/// @brief Field richPath, offset: 0x158, size: 0x8, def value: None
 ::Pathfinding::RichPath*  ___richPath;

/// @brief Field delayUpdatePath, offset: 0x160, size: 0x1, def value: None
 bool  ___delayUpdatePath;

/// @brief Field lastCorner, offset: 0x161, size: 0x1, def value: None
 bool  ___lastCorner;

/// @brief Field distanceToSteeringTarget, offset: 0x164, size: 0x4, def value: None
 float_t  ___distanceToSteeringTarget;

/// @brief Field nextCorners, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___nextCorners;

/// @brief Field wallBuffer, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___wallBuffer;

/// [CompilerGenerated]
/// @brief Field <traversingOffMeshLink>k__BackingField, offset: 0x178, size: 0x1, def value: None
 bool  ____traversingOffMeshLink_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <steeringTarget>k__BackingField, offset: 0x17c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____steeringTarget_k__BackingField;

/// [FormerlySerializedAs("anim")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field animCompatibility, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___animCompatibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RichAI, ___acceleration) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___rotationSpeed) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___slowdownTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___endReachedDistance) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___wallForce) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___wallDist) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___funnelSimplification) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___slowWhenNotFacingTarget) == 0x149, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___onTraverseOffMeshLink) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___richPath) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___delayUpdatePath) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___lastCorner) == 0x161, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___distanceToSteeringTarget) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___nextCorners) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___wallBuffer) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ____traversingOffMeshLink_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ____steeringTarget_k__BackingField) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI, ___animCompatibility) == 0x188, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RichAI) == 0x190, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichAI/<TraverseSpecial>d__68
class CORDL_TYPE RichAI__TraverseSpecial_d__68 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::RichAI>  __4__this;

/// @brief Field link, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_link, put=__cordl_internal_set_link)) ::Pathfinding::RichSpecial*  link;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e42de8, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::RichAI__TraverseSpecial_d__68* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e42f0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e42f14, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e42f4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e42de4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::RichAI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::RichAI>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::RichSpecial* const& __cordl_internal_get_link() const;

constexpr ::Pathfinding::RichSpecial*& __cordl_internal_get_link() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::RichAI>  value) ;

constexpr void __cordl_internal_set_link(::Pathfinding::RichSpecial*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e42414, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichAI__TraverseSpecial_d__68() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichAI__TraverseSpecial_d__68", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichAI__TraverseSpecial_d__68(RichAI__TraverseSpecial_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichAI__TraverseSpecial_d__68", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichAI__TraverseSpecial_d__68(RichAI__TraverseSpecial_d__68 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21180};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RichAI>  _____4__this;

/// @brief Field link, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::RichSpecial*  ___link;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RichAI__TraverseSpecial_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseSpecial_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseSpecial_d__68, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseSpecial_d__68, ___link) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RichAI__TraverseSpecial_d__68) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichAI/<TraverseOffMeshLinkFallback>d__69
class CORDL_TYPE RichAI__TraverseOffMeshLinkFallback_d__69 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::RichAI>  __4__this;

/// @brief Field <duration>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration_5__2, put=__cordl_internal_set__duration_5__2)) float_t  _duration_5__2;

/// @brief Field <startTime>5__3, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__3, put=__cordl_internal_set__startTime_5__3)) float_t  _startTime_5__3;

/// @brief Field link, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_link, put=__cordl_internal_set_link)) ::Pathfinding::RichSpecial*  link;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e42b54, size 0x248, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e42d9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e42da4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e42ddc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e42b50, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::RichAI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::RichAI>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__duration_5__2() const;

constexpr float_t& __cordl_internal_get__duration_5__2() ;

constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

constexpr float_t& __cordl_internal_get__startTime_5__3() ;

constexpr ::Pathfinding::RichSpecial* const& __cordl_internal_get_link() const;

constexpr ::Pathfinding::RichSpecial*& __cordl_internal_get_link() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::RichAI>  value) ;

constexpr void __cordl_internal_set__duration_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startTime_5__3(float_t  value) ;

constexpr void __cordl_internal_set_link(::Pathfinding::RichSpecial*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e424c4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichAI__TraverseOffMeshLinkFallback_d__69() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichAI__TraverseOffMeshLinkFallback_d__69", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichAI__TraverseOffMeshLinkFallback_d__69(RichAI__TraverseOffMeshLinkFallback_d__69 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichAI__TraverseOffMeshLinkFallback_d__69", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichAI__TraverseOffMeshLinkFallback_d__69(RichAI__TraverseOffMeshLinkFallback_d__69 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21179};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RichAI>  _____4__this;

/// @brief Field link, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::RichSpecial*  ___link;

/// @brief Field <duration>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____duration_5__2;

/// @brief Field <startTime>5__3, offset: 0x34, size: 0x4, def value: None
 float_t  ____startTime_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69, ___link) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69, ____duration_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69, ____startTime_5__3) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
