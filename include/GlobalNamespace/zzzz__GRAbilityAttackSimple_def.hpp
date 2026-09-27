#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSimple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_State_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityAttackSimple)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
struct GRAbilityAttackSimple_State;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAbilityEvents;
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
class GRAbilityAttackSimple;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAttackSimple*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAttackSimple*, "", "GRAbilityAttackSimple");
// Dependencies GRAbilityAttackSimple::State, GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAttackSimple
class CORDL_TYPE GRAbilityAttackSimple : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
using State = ::GlobalNamespace::GRAbilityAttackSimple_State;

/// @brief Field adjustByAnimationSpeed, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_adjustByAnimationSpeed, put=__cordl_internal_set_adjustByAnimationSpeed)) bool  adjustByAnimationSpeed;

/// @brief Field allowMovement, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowMovement, put=__cordl_internal_set_allowMovement)) bool  allowMovement;

/// @brief Field animNameString, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_animNameString, put=__cordl_internal_set_animNameString)) ::StringW  animNameString;

/// @brief Field attackAnimData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_attackAnimData, put=__cordl_internal_set_attackAnimData)) ::GlobalNamespace::AnimationData*  attackAnimData;

/// @brief Field attackDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDuration, put=__cordl_internal_set_attackDuration)) float_t  attackDuration;

/// @brief Field coolDown, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field damageTrigger, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageTrigger, put=__cordl_internal_set_damageTrigger)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  damageTrigger;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field events, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::GlobalNamespace::GameAbilityEvents*  events;

/// @brief Field maxTurnSpeed, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field outroAnimData, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_outroAnimData, put=__cordl_internal_set_outroAnimData)) ::GlobalNamespace::AnimationData*  outroAnimData;

/// @brief Field range, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Field soundAttack, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundAttack, put=__cordl_internal_set_soundAttack)) ::GlobalNamespace::AbilitySound*  soundAttack;

/// @brief Field soundOutro, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundOutro, put=__cordl_internal_set_soundOutro)) ::GlobalNamespace::AbilitySound*  soundOutro;

/// @brief Field soundTell, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundTell, put=__cordl_internal_set_soundTell)) ::GlobalNamespace::AbilitySound*  soundTell;

/// @brief Field state, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRAbilityAttackSimple_State  state;

/// @brief Field tellAnimData, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tellAnimData, put=__cordl_internal_set_tellAnimData)) ::GlobalNamespace::AnimationData*  tellAnimData;

/// @brief Field tellDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_tellDuration, put=__cordl_internal_set_tellDuration)) float_t  tellDuration;

/// @brief Field timeMult, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeMult, put=__cordl_internal_set_timeMult)) float_t  timeMult;

/// @brief Method EnableList, addr 0x586d164, size 0xf8, virtual false, abstract: false, final false
inline void EnableList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objs, bool  enable) ;

/// @brief Method GetAnimName, addr 0x586d5c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetAnimName() ;

/// @brief Method GetRange, addr 0x586d600, size 0x8, virtual true, abstract: false, final false
inline float_t GetRange() ;

/// @brief Method IsCoolDownOver, addr 0x586d5c8, size 0x38, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsDone, addr 0x586d4d4, size 0x10, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityAttackSimple* New_ctor() ;

/// @brief Method OnStart, addr 0x586d25c, size 0xc0, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586d45c, size 0x78, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x586d4e4, size 0xd8, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method PlayState, addr 0x586d31c, size 0x140, virtual false, abstract: false, final false
inline void PlayState(::GlobalNamespace::GRAbilityAttackSimple_State  newState, ::GlobalNamespace::AnimationData*  animData, ::GlobalNamespace::AbilitySound*  sound, bool  damageEnabled) ;

/// @brief Method SetTargetPlayer, addr 0x586d5bc, size 0x4, virtual false, abstract: false, final false
inline void SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method Setup, addr 0x586d148, size 0x1c, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr bool const& __cordl_internal_get_adjustByAnimationSpeed() const;

constexpr bool& __cordl_internal_get_adjustByAnimationSpeed() ;

constexpr bool const& __cordl_internal_get_allowMovement() const;

constexpr bool& __cordl_internal_get_allowMovement() ;

constexpr ::StringW const& __cordl_internal_get_animNameString() const;

constexpr ::StringW& __cordl_internal_get_animNameString() ;

constexpr ::GlobalNamespace::AnimationData* const& __cordl_internal_get_attackAnimData() const;

constexpr ::GlobalNamespace::AnimationData*& __cordl_internal_get_attackAnimData() ;

constexpr float_t const& __cordl_internal_get_attackDuration() const;

constexpr float_t& __cordl_internal_get_attackDuration() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_damageTrigger() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_damageTrigger() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::GlobalNamespace::GameAbilityEvents* const& __cordl_internal_get_events() const;

constexpr ::GlobalNamespace::GameAbilityEvents*& __cordl_internal_get_events() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr ::GlobalNamespace::AnimationData* const& __cordl_internal_get_outroAnimData() const;

constexpr ::GlobalNamespace::AnimationData*& __cordl_internal_get_outroAnimData() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundAttack() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundAttack() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundOutro() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundOutro() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundTell() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundTell() ;

constexpr ::GlobalNamespace::GRAbilityAttackSimple_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRAbilityAttackSimple_State& __cordl_internal_get_state() ;

constexpr ::GlobalNamespace::AnimationData* const& __cordl_internal_get_tellAnimData() const;

constexpr ::GlobalNamespace::AnimationData*& __cordl_internal_get_tellAnimData() ;

constexpr float_t const& __cordl_internal_get_tellDuration() const;

constexpr float_t& __cordl_internal_get_tellDuration() ;

constexpr float_t const& __cordl_internal_get_timeMult() const;

constexpr float_t& __cordl_internal_get_timeMult() ;

constexpr void __cordl_internal_set_adjustByAnimationSpeed(bool  value) ;

constexpr void __cordl_internal_set_allowMovement(bool  value) ;

constexpr void __cordl_internal_set_animNameString(::StringW  value) ;

constexpr void __cordl_internal_set_attackAnimData(::GlobalNamespace::AnimationData*  value) ;

constexpr void __cordl_internal_set_attackDuration(float_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_damageTrigger(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_events(::GlobalNamespace::GameAbilityEvents*  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_outroAnimData(::GlobalNamespace::AnimationData*  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

constexpr void __cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundOutro(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundTell(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackSimple_State  value) ;

constexpr void __cordl_internal_set_tellAnimData(::GlobalNamespace::AnimationData*  value) ;

constexpr void __cordl_internal_set_tellDuration(float_t  value) ;

constexpr void __cordl_internal_set_timeMult(float_t  value) ;

/// @brief Method .ctor, addr 0x586d608, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAttackSimple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackSimple", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAttackSimple(GRAbilityAttackSimple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAttackSimple", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAttackSimple(GRAbilityAttackSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1867};

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

/// @brief Field allowMovement, offset: 0x88, size: 0x1, def value: None
 bool  ___allowMovement;

/// @brief Field tellAnimData, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::AnimationData*  ___tellAnimData;

/// @brief Field attackAnimData, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AnimationData*  ___attackAnimData;

/// @brief Field outroAnimData, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::AnimationData*  ___outroAnimData;

/// @brief Field soundTell, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundTell;

/// @brief Field soundAttack, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundAttack;

/// @brief Field soundOutro, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundOutro;

/// @brief Field timeMult, offset: 0xc0, size: 0x4, def value: None
 float_t  ___timeMult;

/// @brief Field state, offset: 0xc4, size: 0x4, def value: None
 ::GlobalNamespace::GRAbilityAttackSimple_State  ___state;

/// @brief Field maxTurnSpeed, offset: 0xc8, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field damageTrigger, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___damageTrigger;

/// @brief Field animNameString, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___animNameString;

/// @brief Field events, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::GameAbilityEvents*  ___events;

/// @brief Field adjustByAnimationSpeed, offset: 0xe8, size: 0x1, def value: None
 bool  ___adjustByAnimationSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___tellDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___attackDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___coolDown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___range) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___allowMovement) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___tellAnimData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___attackAnimData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___outroAnimData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___soundTell) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___soundAttack) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___soundOutro) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___timeMult) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___state) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___maxTurnSpeed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___damageTrigger) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___animNameString) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___events) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityAttackSimple, ___adjustByAnimationSpeed) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAttackSimple) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
