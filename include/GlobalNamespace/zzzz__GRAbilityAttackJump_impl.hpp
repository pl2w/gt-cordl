#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackJump.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackJump_State_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackJump_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackJump_State_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackJump::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityAttackJump::Setup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x586dcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackJump::*)()>(&::GlobalNamespace::GRAbilityAttackJump::OnStart)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x586ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackJump::*)()>(&::GlobalNamespace::GRAbilityAttackJump::OnStop)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x586deac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackJump::*)()>(&::GlobalNamespace::GRAbilityAttackJump::IsDone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586df58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackJump::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackJump::OnUpdateShared)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x586df88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackJump::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityAttackJump::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x586e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackJump._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackJump::*)()>(&::GlobalNamespace::GRAbilityAttackJump::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x586e5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpTime;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_jumpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpTime = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_attackLandTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackLandTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_attackLandTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackLandTime;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_attackLandTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackLandTime = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_attackReturnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackReturnTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_attackReturnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackReturnTime;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_attackReturnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackReturnTime = value;
}
constexpr bool& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_doReturnPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doReturnPhase;
}
constexpr bool const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_doReturnPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doReturnPhase;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_doReturnPhase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doReturnPhase = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpLengthScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpLengthScale;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpLengthScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpLengthScale;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_jumpLengthScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpLengthScale = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_animName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_animName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_animName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animName = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_animSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_animSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_animSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animSpeed = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpAnimName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpAnimName;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpAnimName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpAnimName;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_jumpAnimName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpAnimName = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_jumpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSound;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_jumpSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpSound = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_damageTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_damageTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageTrigger = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackJump_State& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRAbilityAttackJump_State const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackJump_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_initialPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_initialPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_initialPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_initialVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackJump::__cordl_internal_get_initialVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialVel;
}
constexpr void GlobalNamespace::GRAbilityAttackJump::__cordl_internal_set_initialVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialVel = value;
}
inline void GlobalNamespace::GRAbilityAttackJump::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityAttackJump::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackJump::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityAttackJump::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackJump::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityAttackJump::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline void GlobalNamespace::GRAbilityAttackJump::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackJump*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityAttackJump* GlobalNamespace::GRAbilityAttackJump::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityAttackJump*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackJump::GRAbilityAttackJump()   {
}
