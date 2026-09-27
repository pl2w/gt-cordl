#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSimple.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_State_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_State_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAbilityEvents_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityAttackSimple::Setup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586d148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::OnStart)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x586d25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::OnStop)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x586d45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.PlayState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)(::GlobalNamespace::GRAbilityAttackSimple_State, ::GlobalNamespace::AnimationData*, ::GlobalNamespace::AbilitySound*, bool)>(&::GlobalNamespace::GRAbilityAttackSimple::PlayState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x586d31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"PlayState", {}, {::i2c::type_of<::GlobalNamespace::GRAbilityAttackSimple_State>(), ::i2c::type_of<::GlobalNamespace::AnimationData*>(), ::i2c::type_of<::GlobalNamespace::AbilitySound*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackSimple::OnUpdateShared)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x586d4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityAttackSimple::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586d5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.GetAnimName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::GetAnimName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"GetAnimName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.EnableList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, bool)>(&::GlobalNamespace::GRAbilityAttackSimple::EnableList)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x586d164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"EnableList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.IsCoolDownOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::IsCoolDownOver)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x586d5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple.GetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::GetRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimple._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimple::*)()>(&::GlobalNamespace::GRAbilityAttackSimple::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x586d608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_tellDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellDuration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_tellDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellDuration;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_tellDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellDuration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_attackDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDuration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_attackDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDuration;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_attackDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDuration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr bool& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_allowMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowMovement;
}
constexpr bool const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_allowMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowMovement;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_allowMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowMovement = value;
}
constexpr ::GlobalNamespace::AnimationData*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_tellAnimData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellAnimData;
}
constexpr ::GlobalNamespace::AnimationData* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_tellAnimData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellAnimData;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_tellAnimData(::GlobalNamespace::AnimationData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellAnimData = value;
}
constexpr ::GlobalNamespace::AnimationData*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_attackAnimData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAnimData;
}
constexpr ::GlobalNamespace::AnimationData* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_attackAnimData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAnimData;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_attackAnimData(::GlobalNamespace::AnimationData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackAnimData = value;
}
constexpr ::GlobalNamespace::AnimationData*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_outroAnimData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outroAnimData;
}
constexpr ::GlobalNamespace::AnimationData* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_outroAnimData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outroAnimData;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_outroAnimData(::GlobalNamespace::AnimationData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outroAnimData = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_soundTell()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundTell;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_soundTell() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundTell;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_soundTell(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundTell = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_soundAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_soundAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundAttack = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_soundOutro()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOutro;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_soundOutro() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOutro;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_soundOutro(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundOutro = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_timeMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeMult;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_timeMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeMult;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_timeMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeMult = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple_State const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackSimple_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_damageTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_damageTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_damageTrigger(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageTrigger = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_animNameString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_animNameString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_animNameString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animNameString = value;
}
constexpr ::GlobalNamespace::GameAbilityEvents*& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::GlobalNamespace::GameAbilityEvents* const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_events(::GlobalNamespace::GameAbilityEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
constexpr bool& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_adjustByAnimationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustByAnimationSpeed;
}
constexpr bool const& GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_get_adjustByAnimationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustByAnimationSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackSimple::__cordl_internal_set_adjustByAnimationSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustByAnimationSpeed = value;
}
inline void GlobalNamespace::GRAbilityAttackSimple::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityAttackSimple::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimple::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimple::PlayState(::GlobalNamespace::GRAbilityAttackSimple_State  newState, ::GlobalNamespace::AnimationData*  animData, ::GlobalNamespace::AbilitySound*  sound, bool  damageEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"PlayState", {}, {::i2c::type_of<::GlobalNamespace::GRAbilityAttackSimple_State>(), ::i2c::type_of<::GlobalNamespace::AnimationData*>(), ::i2c::type_of<::GlobalNamespace::AbilitySound*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, animData, sound, damageEnabled);
}
inline bool GlobalNamespace::GRAbilityAttackSimple::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimple::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityAttackSimple::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline ::StringW GlobalNamespace::GRAbilityAttackSimple::GetAnimName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"GetAnimName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimple::EnableList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objs, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {"EnableList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objs, enable);
}
inline bool GlobalNamespace::GRAbilityAttackSimple::IsCoolDownOver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GRAbilityAttackSimple::GetRange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimple::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimple*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityAttackSimple* GlobalNamespace::GRAbilityAttackSimple::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityAttackSimple*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackSimple::GRAbilityAttackSimple()   {
}
