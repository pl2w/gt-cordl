#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityMoveToTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityMoveToTarget)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
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
class GRAbilityMoveToTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityMoveToTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityMoveToTarget*, "", "GRAbilityMoveToTarget");
// Dependencies GRAbilityBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityMoveToTarget
class CORDL_TYPE GRAbilityMoveToTarget : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field animSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field lookAtTarget, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookAtTarget, put=__cordl_internal_set_lookAtTarget)) ::UnityW<::UnityEngine::Transform>  lookAtTarget;

/// @brief Field maxTurnSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field moveSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveSpeed, put=__cordl_internal_set_moveSpeed)) float_t  moveSpeed;

/// @brief Field movementSound, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_movementSound, put=__cordl_internal_set_movementSound)) ::GlobalNamespace::AbilitySound*  movementSound;

/// @brief Field target, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPos, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Method GetTargetPos, addr 0x586884c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetTargetPos() ;

/// @brief Method IsDone, addr 0x58686d4, size 0x68, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityMoveToTarget* New_ctor() ;

/// @brief Method OnStart, addr 0x586858c, size 0xf8, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x58686c0, size 0x14, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x586873c, size 0xe4, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetLookAtTarget, addr 0x5868858, size 0x8, virtual false, abstract: false, final false
inline void SetLookAtTarget(::UnityEngine::Transform*  transform) ;

/// @brief Method SetTarget, addr 0x5868820, size 0x8, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::Transform*  transform) ;

/// @brief Method SetTargetPos, addr 0x5868828, size 0x24, virtual false, abstract: false, final false
inline void SetTargetPos(::UnityEngine::Vector3  targetPos) ;

/// @brief Method Setup, addr 0x5868534, size 0x58, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookAtTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookAtTarget() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr float_t const& __cordl_internal_get_moveSpeed() const;

constexpr float_t& __cordl_internal_get_moveSpeed() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_movementSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_movementSound() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lookAtTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_movementSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5868860, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityMoveToTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityMoveToTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityMoveToTarget(GRAbilityMoveToTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityMoveToTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityMoveToTarget(GRAbilityMoveToTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1852};

/// @brief Field moveSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___moveSpeed;

/// @brief Field animName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field animSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field maxTurnSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field movementSound, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___movementSound;

/// @brief Field targetPos, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// @brief Field target, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field lookAtTarget, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookAtTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___moveSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___animName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___animSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___maxTurnSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___movementSound) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___targetPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___target) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityMoveToTarget, ___lookAtTarget) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityMoveToTarget) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
