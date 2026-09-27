#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSwipe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityAttackSwipe_State_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityAttackSwipe)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
struct GRAbilityAttackSwipe_State;
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
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityAttackSwipe;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAttackSwipe*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAttackSwipe*, "", "GRAbilityAttackSwipe");
// Dependencies GRAbilityAttackSwipe::State, GRAbilityBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAttackSwipe
class CORDL_TYPE GRAbilityAttackSwipe : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
using State = ::GlobalNamespace::GRAbilityAttackSwipe_State;

/// @brief Field animData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_animData, put=__cordl_internal_set_animData)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  animData;

/// @brief Field animNameString, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animNameString, put=__cordl_internal_set_animNameString)) ::StringW  animNameString;

/// @brief Field attackDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDuration, put=__cordl_internal_set_attackDuration)) float_t  attackDuration;

/// @brief Field attackMoveSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackMoveSpeed, put=__cordl_internal_set_attackMoveSpeed)) float_t  attackMoveSpeed;

/// @brief Field coolDown, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field damageTrigger, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageTrigger, put=__cordl_internal_set_damageTrigger)) ::UnityW<::UnityEngine::GameObject>  damageTrigger;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field initialPos, offset 0xc8, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialPos, put=__cordl_internal_set_initialPos)) ::UnityEngine::Vector3  initialPos;

/// @brief Field initialVel, offset 0xd4, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialVel, put=__cordl_internal_set_initialVel)) ::UnityEngine::Vector3  initialVel;

/// @brief Field lastAnimIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAnimIndex, put=__cordl_internal_set_lastAnimIndex)) int32_t  lastAnimIndex;

/// @brief Field maxTurnSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field soundAttack, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundAttack, put=__cordl_internal_set_soundAttack)) ::GlobalNamespace::AbilitySound*  soundAttack;

/// @brief Field state, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRAbilityAttackSwipe_State  state;

/// @brief Field target, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPos, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Field tellDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_tellDuration, put=__cordl_internal_set_tellDuration)) float_t  tellDuration;

/// @brief Method GetAnimName, addr 0x586d0f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetAnimName() ;

/// @brief Method IsCoolDownOver, addr 0x586d0fc, size 0x38, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsDone, addr 0x586cc48, size 0x10, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityAttackSwipe* New_ctor() ;

/// @brief Method OnStart, addr 0x586c994, size 0x208, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586cb9c, size 0xac, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x586cc58, size 0x390, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetTargetPlayer, addr 0x586cfe8, size 0x10c, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586c89c, size 0xf8, virtual true, abstract: false, final false
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

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_damageTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_damageTrigger() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialVel() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialVel() ;

constexpr int32_t const& __cordl_internal_get_lastAnimIndex() const;

constexpr int32_t& __cordl_internal_get_lastAnimIndex() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundAttack() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundAttack() ;

constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr float_t const& __cordl_internal_get_tellDuration() const;

constexpr float_t& __cordl_internal_get_tellDuration() ;

constexpr void __cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value) ;

constexpr void __cordl_internal_set_animNameString(::StringW  value) ;

constexpr void __cordl_internal_set_attackDuration(float_t  value) ;

constexpr void __cordl_internal_set_attackMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_initialPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialVel(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastAnimIndex(int32_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackSwipe_State  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tellDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x586d134, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAttackSwipe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackSwipe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAttackSwipe(GRAbilityAttackSwipe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackSwipe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAttackSwipe(GRAbilityAttackSwipe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1865};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field tellDuration, offset: 0x78, size: 0x4, def value: None
 float_t  ___tellDuration;

/// @brief Field attackDuration, offset: 0x7c, size: 0x4, def value: None
 float_t  ___attackDuration;

/// @brief Field coolDown, offset: 0x80, size: 0x4, def value: None
 float_t  ___coolDown;

/// @brief Field attackMoveSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___attackMoveSpeed;

/// @brief Field animData, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  ___animData;

/// @brief Field soundAttack, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundAttack;

/// @brief Field state, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::GRAbilityAttackSwipe_State  ___state;

/// @brief Field maxTurnSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field damageTrigger, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___damageTrigger;

/// @brief Field target, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field animNameString, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___animNameString;

/// @brief Field lastAnimIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___lastAnimIndex;

/// @brief Field targetPos, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// @brief Field initialPos, offset: 0xc8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialPos;

/// @brief Field initialVel, offset: 0xd4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialVel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___tellDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___attackDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___coolDown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___attackMoveSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___animData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___soundAttack) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___state) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___maxTurnSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___damageTrigger) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___target) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___animNameString) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___lastAnimIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___targetPos) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___initialPos) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSwipe, ___initialVel) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAttackSwipe) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
