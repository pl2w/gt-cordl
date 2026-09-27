#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSwipe.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSwipe_State_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSwipe_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSwipe_State_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSwipe::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityAttackSwipe::Setup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x586c89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSwipe::*)()>(&::GlobalNamespace::GRAbilityAttackSwipe::OnStart)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x586c994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSwipe::*)()>(&::GlobalNamespace::GRAbilityAttackSwipe::OnStop)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x586cb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackSwipe::*)()>(&::GlobalNamespace::GRAbilityAttackSwipe::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSwipe::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackSwipe::OnUpdateShared)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x586cc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSwipe::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityAttackSwipe::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x586cfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.GetAnimName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRAbilityAttackSwipe::*)()>(&::GlobalNamespace::GRAbilityAttackSwipe::GetAnimName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586d0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                        {"GetAnimName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe.IsCoolDownOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackSwipe::*)()>(&::GlobalNamespace::GRAbilityAttackSwipe::IsCoolDownOver)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x586d0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSwipe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSwipe::*)()>(&::GlobalNamespace::GRAbilityAttackSwipe::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586d134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_tellDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellDuration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_tellDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellDuration;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_tellDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellDuration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_attackDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDuration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_attackDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDuration;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_attackDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDuration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_attackMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackMoveSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_attackMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackMoveSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_attackMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackMoveSpeed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_animData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_animData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animData = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_soundAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_soundAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundAttack = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRAbilityAttackSwipe_State const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackSwipe_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_damageTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_damageTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageTrigger = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_animNameString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_animNameString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_animNameString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animNameString = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_lastAnimIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr int32_t const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_lastAnimIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_lastAnimIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAnimIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_initialPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_initialPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_initialPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_initialVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_get_initialVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialVel;
}
constexpr void GlobalNamespace::GRAbilityAttackSwipe::__cordl_internal_set_initialVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialVel = value;
}
inline void GlobalNamespace::GRAbilityAttackSwipe::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityAttackSwipe::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSwipe::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityAttackSwipe::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSwipe::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityAttackSwipe::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline ::StringW GlobalNamespace::GRAbilityAttackSwipe::GetAnimName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                        {"GetAnimName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityAttackSwipe::IsCoolDownOver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSwipe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSwipe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityAttackSwipe* GlobalNamespace::GRAbilityAttackSwipe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityAttackSwipe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackSwipe::GRAbilityAttackSwipe()   {
}
