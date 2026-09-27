#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackJump.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityAttackJump_State_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityAttackJump)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
struct GRAbilityAttackJump_State;
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
class GRAbilityAttackJump;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAttackJump*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAttackJump*, "", "GRAbilityAttackJump");
// Dependencies GRAbilityAttackJump::State, GRAbilityBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAttackJump
class CORDL_TYPE GRAbilityAttackJump : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
using State = ::GlobalNamespace::GRAbilityAttackJump_State;

/// @brief Field animName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field animSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field attackLandTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackLandTime, put=__cordl_internal_set_attackLandTime)) float_t  attackLandTime;

/// @brief Field attackReturnTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackReturnTime, put=__cordl_internal_set_attackReturnTime)) float_t  attackReturnTime;

/// @brief Field damageTrigger, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageTrigger, put=__cordl_internal_set_damageTrigger)) ::UnityW<::UnityEngine::GameObject>  damageTrigger;

/// @brief Field doReturnPhase, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_doReturnPhase, put=__cordl_internal_set_doReturnPhase)) bool  doReturnPhase;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field initialPos, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialPos, put=__cordl_internal_set_initialPos)) ::UnityEngine::Vector3  initialPos;

/// @brief Field initialVel, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialVel, put=__cordl_internal_set_initialVel)) ::UnityEngine::Vector3  initialVel;

/// @brief Field jumpAnimName, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpAnimName, put=__cordl_internal_set_jumpAnimName)) ::StringW  jumpAnimName;

/// @brief Field jumpLengthScale, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpLengthScale, put=__cordl_internal_set_jumpLengthScale)) float_t  jumpLengthScale;

/// @brief Field jumpSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpSound, put=__cordl_internal_set_jumpSound)) ::GlobalNamespace::AbilitySound*  jumpSound;

/// @brief Field jumpTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpTime, put=__cordl_internal_set_jumpTime)) float_t  jumpTime;

/// @brief Field maxTurnSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field state, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRAbilityAttackJump_State  state;

/// @brief Field target, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPos, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Method IsDone, addr 0x586df58, size 0x30, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityAttackJump* New_ctor() ;

/// @brief Method OnStart, addr 0x586ddd0, size 0xdc, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586deac, size 0xac, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x586df88, size 0x518, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetTargetPlayer, addr 0x586e4a0, size 0x10c, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586dcd8, size 0xf8, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr float_t const& __cordl_internal_get_attackLandTime() const;

constexpr float_t& __cordl_internal_get_attackLandTime() ;

constexpr float_t const& __cordl_internal_get_attackReturnTime() const;

constexpr float_t& __cordl_internal_get_attackReturnTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_damageTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_damageTrigger() ;

constexpr bool const& __cordl_internal_get_doReturnPhase() const;

constexpr bool& __cordl_internal_get_doReturnPhase() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialVel() ;

constexpr ::StringW const& __cordl_internal_get_jumpAnimName() const;

constexpr ::StringW& __cordl_internal_get_jumpAnimName() ;

constexpr float_t const& __cordl_internal_get_jumpLengthScale() const;

constexpr float_t& __cordl_internal_get_jumpLengthScale() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_jumpSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_jumpSound() ;

constexpr float_t const& __cordl_internal_get_jumpTime() const;

constexpr float_t& __cordl_internal_get_jumpTime() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr ::GlobalNamespace::GRAbilityAttackJump_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRAbilityAttackJump_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_attackLandTime(float_t  value) ;

constexpr void __cordl_internal_set_attackReturnTime(float_t  value) ;

constexpr void __cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_doReturnPhase(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_initialPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_jumpAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_jumpLengthScale(float_t  value) ;

constexpr void __cordl_internal_set_jumpSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_jumpTime(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackJump_State  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x586e5ac, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAttackJump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackJump", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAttackJump(GRAbilityAttackJump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackJump", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAttackJump(GRAbilityAttackJump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1870};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field jumpTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___jumpTime;

/// @brief Field attackLandTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___attackLandTime;

/// @brief Field attackReturnTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___attackReturnTime;

/// @brief Field doReturnPhase, offset: 0x84, size: 0x1, def value: None
 bool  ___doReturnPhase;

/// @brief Field jumpLengthScale, offset: 0x88, size: 0x4, def value: None
 float_t  ___jumpLengthScale;

/// @brief Field animName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field animSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field maxTurnSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field jumpAnimName, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___jumpAnimName;

/// @brief Field jumpSound, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___jumpSound;

/// @brief Field damageTrigger, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___damageTrigger;

/// @brief Field target, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field state, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::GRAbilityAttackJump_State  ___state;

/// @brief Field targetPos, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// @brief Field initialPos, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialPos;

/// @brief Field initialVel, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialVel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___jumpTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___attackLandTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___attackReturnTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___doReturnPhase) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___jumpLengthScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___animName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___animSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___maxTurnSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___jumpAnimName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___jumpSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___damageTrigger) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___target) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___state) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___targetPos) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___initialPos) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackJump, ___initialVel) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAttackJump) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
