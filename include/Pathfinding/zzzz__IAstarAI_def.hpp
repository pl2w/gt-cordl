#pragma once
// IWYU pragma private; include "Pathfinding/IAstarAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAstarAI)
namespace Pathfinding {
class Path;
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
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class IAstarAI;
}
// Write type traits
MARK_REF_T(::Pathfinding::IAstarAI*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IAstarAI*, "Pathfinding", "IAstarAI");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IAstarAI
class CORDL_TYPE IAstarAI {
public:
// Declarations
 __declspec(property(get=get_canMove, put=set_canMove)) bool  canMove;

 __declspec(property(get=get_canSearch, put=set_canSearch)) bool  canSearch;

 __declspec(property(get=get_desiredVelocity)) ::UnityEngine::Vector3  desiredVelocity;

 __declspec(property(get=get_destination, put=set_destination)) ::UnityEngine::Vector3  destination;

 __declspec(property(get=get_hasPath)) bool  hasPath;

 __declspec(property(get=get_height, put=set_height)) float_t  height;

 __declspec(property(get=get_isStopped, put=set_isStopped)) bool  isStopped;

 __declspec(property(get=get_maxSpeed, put=set_maxSpeed)) float_t  maxSpeed;

 __declspec(property(get=get_onSearchPath, put=set_onSearchPath)) ::System::Action*  onSearchPath;

 __declspec(property(get=get_pathPending)) bool  pathPending;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_radius, put=set_radius)) float_t  radius;

 __declspec(property(get=get_reachedDestination)) bool  reachedDestination;

 __declspec(property(get=get_reachedEndOfPath)) bool  reachedEndOfPath;

 __declspec(property(get=get_remainingDistance)) float_t  remainingDistance;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_steeringTarget)) ::UnityEngine::Vector3  steeringTarget;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method FinalizeMovement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void FinalizeMovement(::UnityEngine::Vector3  nextPosition, ::UnityEngine::Quaternion  nextRotation) ;

/// @brief Method GetRemainingPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale) ;

/// @brief Method Move, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Move(::UnityEngine::Vector3  deltaPosition) ;

/// @brief Method MovementUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MovementUpdate(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation) ;

/// @brief Method SearchPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SearchPath() ;

/// @brief Method SetPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetPath(::Pathfinding::Path*  path, bool  updateDestinationFromPath) ;

/// @brief Method Teleport, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath) ;

/// @brief Method get_canMove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canMove() ;

/// @brief Method get_canSearch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canSearch() ;

/// @brief Method get_desiredVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_desiredVelocity() ;

/// @brief Method get_destination, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_destination() ;

/// @brief Method get_hasPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_hasPath() ;

/// @brief Method get_height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_height() ;

/// @brief Method get_isStopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isStopped() ;

/// @brief Method get_maxSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_maxSpeed() ;

/// @brief Method get_onSearchPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Action* get_onSearchPath() ;

/// @brief Method get_pathPending, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_pathPending() ;

/// @brief Method get_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_radius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_radius() ;

/// @brief Method get_reachedDestination, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_reachedDestination() ;

/// @brief Method get_reachedEndOfPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_reachedEndOfPath() ;

/// @brief Method get_remainingDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_remainingDistance() ;

/// @brief Method get_rotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method get_steeringTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_steeringTarget() ;

/// @brief Method get_velocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method set_canMove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_canMove(bool  value) ;

/// @brief Method set_canSearch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_canSearch(bool  value) ;

/// @brief Method set_destination, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_destination(::UnityEngine::Vector3  value) ;

/// @brief Method set_height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_height(float_t  value) ;

/// @brief Method set_isStopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_isStopped(bool  value) ;

/// @brief Method set_maxSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_maxSpeed(float_t  value) ;

/// @brief Method set_onSearchPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_onSearchPath(::System::Action*  value) ;

/// @brief Method set_radius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_radius(float_t  value) ;

/// @brief Method set_rotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAstarAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAstarAI(IAstarAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
