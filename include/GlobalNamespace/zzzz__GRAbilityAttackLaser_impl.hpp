#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackLaser.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackLaser_State_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackLaser_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackLaser_State_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__Monkeye_LazerFX_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackLaser::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityAttackLaser::Setup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x586e5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::OnStart)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x586e6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::OnStop)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x586e8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586e9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackLaser::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackLaser::OnUpdateShared)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x586e9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackLaser::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityAttackLaser::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x586f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.GetAnimName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::GetAnimName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                        {"GetAnimName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.IsCoolDownOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::IsCoolDownOver)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x586f224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser.GetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::GetRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackLaser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackLaser::*)()>(&::GlobalNamespace::GRAbilityAttackLaser::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_tellDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellDuration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_tellDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellDuration;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_tellDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellDuration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_attackDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDuration;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_attackDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDuration;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_attackDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDuration = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_attackMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackMoveSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_attackMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackMoveSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_attackMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackMoveSpeed = value;
}
constexpr bool& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_doNotFaceTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotFaceTarget;
}
constexpr bool const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_doNotFaceTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotFaceTarget;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_doNotFaceTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doNotFaceTarget = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_animData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_animData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animData = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_soundAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_soundAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundAttack = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_maxLaserRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLaserRange;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_maxLaserRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLaserRange;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_maxLaserRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLaserRange = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_laserOrigins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserOrigins;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_laserOrigins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserOrigins;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_laserOrigins(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserOrigins = value;
}
constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX>& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_tellLaserFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellLaserFx;
}
constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX> const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_tellLaserFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellLaserFx;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_tellLaserFx(::UnityW<::GlobalNamespace::Monkeye_LazerFX>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellLaserFx = value;
}
constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX>& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_laserFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserFx;
}
constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX> const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_laserFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserFx;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_laserFx(::UnityW<::GlobalNamespace::Monkeye_LazerFX>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserFx = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackLaser_State& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRAbilityAttackLaser_State const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_state(::GlobalNamespace::GRAbilityAttackLaser_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_damageTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_damageTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageTrigger;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_damageTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageTrigger = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_damageCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_damageCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageCollider;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_damageCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageCollider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_animNameString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_animNameString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_animNameString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animNameString = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_lastAnimIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr int32_t const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_lastAnimIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_lastAnimIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAnimIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_initialPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_initialPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPos;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_initialPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_initialVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_get_initialVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialVel;
}
constexpr void GlobalNamespace::GRAbilityAttackLaser::__cordl_internal_set_initialVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialVel = value;
}
inline void GlobalNamespace::GRAbilityAttackLaser::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityAttackLaser::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackLaser::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityAttackLaser::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackLaser::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityAttackLaser::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline ::StringW GlobalNamespace::GRAbilityAttackLaser::GetAnimName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                        {"GetAnimName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityAttackLaser::IsCoolDownOver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GRAbilityAttackLaser::GetRange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackLaser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackLaser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityAttackLaser* GlobalNamespace::GRAbilityAttackLaser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityAttackLaser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackLaser::GRAbilityAttackLaser()   {
}
