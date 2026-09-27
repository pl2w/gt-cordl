#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackLatchOn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityAttackLatchOn)
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityAttackLatchOn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAttackLatchOn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAttackLatchOn*, "", "GRAbilityAttackLatchOn");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAttackLatchOn
class CORDL_TYPE GRAbilityAttackLatchOn : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field animSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field attackMoveSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackMoveSpeed, put=__cordl_internal_set_attackMoveSpeed)) float_t  attackMoveSpeed;

/// @brief Field damageTrigger, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageTrigger, put=__cordl_internal_set_damageTrigger)) ::UnityW<::UnityEngine::GameObject>  damageTrigger;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field maxTurnSpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field target, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field tellDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tellDuration, put=__cordl_internal_set_tellDuration)) float_t  tellDuration;

/// @brief Field tellMoveSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_tellMoveSpeed, put=__cordl_internal_set_tellMoveSpeed)) float_t  tellMoveSpeed;

/// @brief Method IsDone, addr 0x586d8a4, size 0x30, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityAttackLatchOn* New_ctor() ;

/// @brief Method OnStart, addr 0x586d718, size 0xcc, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586d7e4, size 0xc0, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateAuthority, addr 0x586d8d4, size 0x34, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x586dac4, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetTargetPlayer, addr 0x586dac8, size 0x200, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586d620, size 0xf8, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method UpdateNavSpeed, addr 0x586d908, size 0x1bc, virtual false, abstract: false, final false
inline void UpdateNavSpeed() ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr float_t const& __cordl_internal_get_attackMoveSpeed() const;

constexpr float_t& __cordl_internal_get_attackMoveSpeed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_damageTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_damageTrigger() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr float_t const& __cordl_internal_get_tellDuration() const;

constexpr float_t& __cordl_internal_get_tellDuration() ;

constexpr float_t const& __cordl_internal_get_tellMoveSpeed() const;

constexpr float_t& __cordl_internal_get_tellMoveSpeed() ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_attackMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tellDuration(float_t  value) ;

constexpr void __cordl_internal_set_tellMoveSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x586dcc8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAttackLatchOn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackLatchOn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAttackLatchOn(GRAbilityAttackLatchOn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackLatchOn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAttackLatchOn(GRAbilityAttackLatchOn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1868};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field attackMoveSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___attackMoveSpeed;

/// @brief Field tellDuration, offset: 0x7c, size: 0x4, def value: None
 float_t  ___tellDuration;

/// @brief Field tellMoveSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___tellMoveSpeed;

/// @brief Field animName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field animSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field maxTurnSpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field target, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field damageTrigger, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___damageTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___attackMoveSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___tellDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___tellMoveSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___animName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___animSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___maxTurnSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___target) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLatchOn, ___damageTrigger) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAttackLatchOn) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
