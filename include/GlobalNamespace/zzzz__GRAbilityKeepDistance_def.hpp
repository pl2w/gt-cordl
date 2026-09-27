#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityKeepDistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityKeepDistance)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRAbilityMoveToTarget;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityKeepDistance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityKeepDistance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityKeepDistance*, "", "GRAbilityKeepDistance");
// Dependencies GRAbilityBase, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityKeepDistance
class CORDL_TYPE GRAbilityKeepDistance : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field defaultUpdateRotation, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_defaultUpdateRotation, put=__cordl_internal_set_defaultUpdateRotation)) bool  defaultUpdateRotation;

/// @brief Field idleAnimName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleAnimName, put=__cordl_internal_set_idleAnimName)) ::StringW  idleAnimName;

/// @brief Field idleSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleSound, put=__cordl_internal_set_idleSound)) ::GlobalNamespace::AbilitySound*  idleSound;

/// @brief Field maxDistanceFromTarget, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromTarget, put=__cordl_internal_set_maxDistanceFromTarget)) float_t  maxDistanceFromTarget;

/// @brief Field minBackupSpaceRequired, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minBackupSpaceRequired, put=__cordl_internal_set_minBackupSpaceRequired)) float_t  minBackupSpaceRequired;

/// @brief Field moveAbility, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveAbility, put=__cordl_internal_set_moveAbility)) ::GlobalNamespace::GRAbilityMoveToTarget*  moveAbility;

/// @brief Field navMeshAgent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_navMeshAgent, put=__cordl_internal_set_navMeshAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navMeshAgent;

/// @brief Field rotations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rotations, put=setStaticF_rotations)) ::ArrayW<::UnityEngine::Quaternion>  rotations;

/// @brief Field target, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method IsDone, addr 0x586b580, size 0x8, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityKeepDistance* New_ctor() ;

/// @brief Method OnStart, addr 0x586af04, size 0x240, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586b4c0, size 0xc0, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnThink, addr 0x586b6ac, size 0x2b4, virtual true, abstract: false, final false
inline void OnThink(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x586ba64, size 0x44, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x586baa8, size 0x44, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method OnUpdateShared, addr 0x586b960, size 0x104, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method PickBackupDestination, addr 0x586b144, size 0x37c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PickBackupDestination() ;

/// @brief Method SetTargetPlayer, addr 0x586b588, size 0x124, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586adc0, size 0x144, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr bool const& __cordl_internal_get_defaultUpdateRotation() const;

constexpr bool& __cordl_internal_get_defaultUpdateRotation() ;

constexpr ::StringW const& __cordl_internal_get_idleAnimName() const;

constexpr ::StringW& __cordl_internal_get_idleAnimName() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_idleSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_idleSound() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromTarget() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromTarget() ;

constexpr float_t const& __cordl_internal_get_minBackupSpaceRequired() const;

constexpr float_t& __cordl_internal_get_minBackupSpaceRequired() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_moveAbility() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_moveAbility() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navMeshAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navMeshAgent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_defaultUpdateRotation(bool  value) ;

constexpr void __cordl_internal_set_idleAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_idleSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_maxDistanceFromTarget(float_t  value) ;

constexpr void __cordl_internal_set_minBackupSpaceRequired(float_t  value) ;

constexpr void __cordl_internal_set_moveAbility(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x586baec, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Quaternion> getStaticF_rotations() ;

static inline void setStaticF_rotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityKeepDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityKeepDistance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityKeepDistance(GRAbilityKeepDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityKeepDistance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityKeepDistance(GRAbilityKeepDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1860};

/// @brief Field navMeshAgent, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navMeshAgent;

/// @brief Field target, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field moveAbility, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___moveAbility;

/// @brief Field idleAnimName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___idleAnimName;

/// @brief Field idleSound, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___idleSound;

/// @brief Field minBackupSpaceRequired, offset: 0xa0, size: 0x4, def value: None
 float_t  ___minBackupSpaceRequired;

/// @brief Field maxDistanceFromTarget, offset: 0xa4, size: 0x4, def value: None
 float_t  ___maxDistanceFromTarget;

/// @brief Field defaultUpdateRotation, offset: 0xa8, size: 0x1, def value: None
 bool  ___defaultUpdateRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___navMeshAgent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___target) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___moveAbility) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___idleAnimName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___idleSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___minBackupSpaceRequired) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___maxDistanceFromTarget) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityKeepDistance, ___defaultUpdateRotation) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityKeepDistance) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
