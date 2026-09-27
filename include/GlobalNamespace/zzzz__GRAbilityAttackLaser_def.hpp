#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackLaser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityAttackLaser_State_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityAttackLaser)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
struct GRAbilityAttackLaser_State;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class Monkeye_LazerFX;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityAttackLaser;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAttackLaser*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAttackLaser*, "", "GRAbilityAttackLaser");
// Dependencies GRAbilityAttackLaser::State, GRAbilityBase, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAttackLaser
class CORDL_TYPE GRAbilityAttackLaser : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
using State = ::GlobalNamespace::GRAbilityAttackLaser_State;

/// @brief Field animData, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_animData, put=__cordl_internal_set_animData)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  animData;

/// @brief Field animNameString, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animNameString, put=__cordl_internal_set_animNameString)) ::StringW  animNameString;

/// @brief Field attackDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDuration, put=__cordl_internal_set_attackDuration)) float_t  attackDuration;

/// @brief Field attackMoveSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackMoveSpeed, put=__cordl_internal_set_attackMoveSpeed)) float_t  attackMoveSpeed;

/// @brief Field coolDown, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field damageCollider, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageCollider, put=__cordl_internal_set_damageCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  damageCollider;

/// @brief Field damageTrigger, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageTrigger, put=__cordl_internal_set_damageTrigger)) ::UnityW<::UnityEngine::GameObject>  damageTrigger;

/// @brief Field doNotFaceTarget, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_doNotFaceTarget, put=__cordl_internal_set_doNotFaceTarget)) bool  doNotFaceTarget;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field initialPos, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialPos, put=__cordl_internal_set_initialPos)) ::UnityEngine::Vector3  initialPos;

/// @brief Field initialVel, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialVel, put=__cordl_internal_set_initialVel)) ::UnityEngine::Vector3  initialVel;

/// @brief Field laserFx, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserFx, put=__cordl_internal_set_laserFx)) ::UnityW<::GlobalNamespace::Monkeye_LazerFX>  laserFx;

/// @brief Field laserOrigins, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserOrigins, put=__cordl_internal_set_laserOrigins)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  laserOrigins;

/// @brief Field lastAnimIndex, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAnimIndex, put=__cordl_internal_set_lastAnimIndex)) int32_t  lastAnimIndex;

/// @brief Field maxLaserRange, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLaserRange, put=__cordl_internal_set_maxLaserRange)) float_t  maxLaserRange;

/// @brief Field maxTurnSpeed, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field range, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Field soundAttack, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundAttack, put=__cordl_internal_set_soundAttack)) ::GlobalNamespace::AbilitySound*  soundAttack;

/// @brief Field state, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRAbilityAttackLaser_State  state;

/// @brief Field target, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPos, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Field tellDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_tellDuration, put=__cordl_internal_set_tellDuration)) float_t  tellDuration;

/// @brief Field tellLaserFx, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tellLaserFx, put=__cordl_internal_set_tellLaserFx)) ::UnityW<::GlobalNamespace::Monkeye_LazerFX>  tellLaserFx;

/// @brief Method GetAnimName, addr 0x586f21c, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetAnimName() ;

/// @brief Method GetRange, addr 0x586f25c, size 0x8, virtual true, abstract: false, final false
inline float_t GetRange() ;

/// @brief Method IsCoolDownOver, addr 0x586f224, size 0x38, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsDone, addr 0x586e9e8, size 0x10, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityAttackLaser* New_ctor() ;

/// @brief Method OnStart, addr 0x586e6c4, size 0x208, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586e8cc, size 0x11c, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x586e9f8, size 0x718, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetTargetPlayer, addr 0x586f110, size 0x10c, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586e5cc, size 0xf8, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& __cordl_internal_get_animData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& __cordl_internal_get_animData() ;

constexpr ::StringW const& __cordl_internal_get_animNameString() const;

constexpr ::StringW& __cordl_internal_get_animNameString() ;

constexpr float_t const& __cordl_internal_get_attackDuration() const;

constexpr float_t& __cordl_internal_get_attackDuration() ;

constexpr float_t const& __cordl_internal_get_attackMoveSpeed() const;

constexpr float_t& __cordl_internal_get_attackMoveSpeed() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_damageCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_damageCollider() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_damageTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_damageTrigger() ;

constexpr bool const& __cordl_internal_get_doNotFaceTarget() const;

constexpr bool& __cordl_internal_get_doNotFaceTarget() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialVel() ;

constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX> const& __cordl_internal_get_laserFx() const;

constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX>& __cordl_internal_get_laserFx() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_laserOrigins() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_laserOrigins() ;

constexpr int32_t const& __cordl_internal_get_lastAnimIndex() const;

constexpr int32_t& __cordl_internal_get_lastAnimIndex() ;

constexpr float_t const& __cordl_internal_get_maxLaserRange() const;

constexpr float_t& __cordl_internal_get_maxLaserRange() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundAttack() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundAttack() ;

constexpr ::GlobalNamespace::GRAbilityAttackLaser_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRAbilityAttackLaser_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr float_t const& __cordl_internal_get_tellDuration() const;

constexpr float_t& __cordl_internal_get_tellDuration() ;

constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX> const& __cordl_internal_get_tellLaserFx() const;

constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX>& __cordl_internal_get_tellLaserFx() ;

constexpr void __cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value) ;

constexpr void __cordl_internal_set_animNameString(::StringW  value) ;

constexpr void __cordl_internal_set_attackDuration(float_t  value) ;

constexpr void __cordl_internal_set_attackMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_damageCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_doNotFaceTarget(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_initialPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_laserFx(::UnityW<::GlobalNamespace::Monkeye_LazerFX>  value) ;

constexpr void __cordl_internal_set_laserOrigins(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_lastAnimIndex(int32_t  value) ;

constexpr void __cordl_internal_set_maxLaserRange(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

constexpr void __cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackLaser_State  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tellDuration(float_t  value) ;

constexpr void __cordl_internal_set_tellLaserFx(::UnityW<::GlobalNamespace::Monkeye_LazerFX>  value) ;

/// @brief Method .ctor, addr 0x586f264, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAttackLaser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackLaser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAttackLaser(GRAbilityAttackLaser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackLaser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAttackLaser(GRAbilityAttackLaser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1872};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field tellDuration, offset: 0x78, size: 0x4, def value: None
 float_t  ___tellDuration;

/// @brief Field attackDuration, offset: 0x7c, size: 0x4, def value: None
 float_t  ___attackDuration;

/// @brief Field coolDown, offset: 0x80, size: 0x4, def value: None
 float_t  ___coolDown;

/// @brief Field range, offset: 0x84, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field attackMoveSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___attackMoveSpeed;

/// @brief Field doNotFaceTarget, offset: 0x8c, size: 0x1, def value: None
 bool  ___doNotFaceTarget;

/// @brief Field animData, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  ___animData;

/// @brief Field soundAttack, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundAttack;

/// @brief Field maxLaserRange, offset: 0xa0, size: 0x4, def value: None
 float_t  ___maxLaserRange;

/// @brief Field laserOrigins, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___laserOrigins;

/// @brief Field tellLaserFx, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Monkeye_LazerFX>  ___tellLaserFx;

/// @brief Field laserFx, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Monkeye_LazerFX>  ___laserFx;

/// @brief Field state, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::GRAbilityAttackLaser_State  ___state;

/// @brief Field maxTurnSpeed, offset: 0xc4, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field damageTrigger, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___damageTrigger;

/// @brief Field damageCollider, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___damageCollider;

/// @brief Field target, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field animNameString, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___animNameString;

/// @brief Field lastAnimIndex, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___lastAnimIndex;

/// @brief Field targetPos, offset: 0xec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// @brief Field initialPos, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialPos;

/// @brief Field initialVel, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialVel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___tellDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___attackDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___coolDown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___range) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___attackMoveSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___doNotFaceTarget) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___animData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___soundAttack) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___maxLaserRange) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___laserOrigins) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___tellLaserFx) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___laserFx) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___state) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___maxTurnSpeed) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___damageTrigger) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___damageCollider) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___target) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___animNameString) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___lastAnimIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___targetPos) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___initialPos) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackLaser, ___initialVel) == 0x104, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAttackLaser) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
