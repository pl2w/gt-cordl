#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsAttackBehaviour.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AttackType_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAttackBehaviour_State_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAttackBehaviour_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAIBehaviourController_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAttackBehaviour_State_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)(::GlobalNamespace::CustomMapsAIBehaviourController*, ::GT_CustomMapSupportRuntime::AIAgent*)>(&::GlobalNamespace::CustomMapsAttackBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59c1408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(), ::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.CanExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::CanExecute)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59c1518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.IsTargetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::IsTargetVisible)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59c171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"IsTargetVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.IsTargetInAttackRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAttackBehaviour::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::CustomMapsAttackBehaviour::IsTargetInAttackRange)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59c15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"IsTargetInAttackRange", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.CanContinueExecuting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::CanContinueExecuting)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59c1c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59c2014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.NetExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::NetExecute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59c21b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.ResetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::ResetBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c2788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.FaceTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)()>(&::GlobalNamespace::CustomMapsAttackBehaviour::FaceTarget)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59c20e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"FaceTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CustomMapsAttackBehaviour::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59c2790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsAttackBehaviour.TriggerAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsAttackBehaviour::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::CustomMapsAttackBehaviour::TriggerAttack)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x59c230c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"TriggerAttack", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_controller(::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controller = value;
}
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_state(::GlobalNamespace::CustomMapsAttackBehaviour_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::GT_CustomMapSupportRuntime::AttackType& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackType;
}
constexpr ::GT_CustomMapSupportRuntime::AttackType const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackType;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_attackType(::GT_CustomMapSupportRuntime::AttackType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackType = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDist;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDist;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_attackDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDist = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackDistSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDistSq;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackDistSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDistSq;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_attackDistSq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDistSq = value;
}
constexpr bool& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_stopMovingToAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopMovingToAttack;
}
constexpr bool const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_stopMovingToAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopMovingToAttack;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_stopMovingToAttack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopMovingToAttack = value;
}
constexpr bool& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_useColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColliders;
}
constexpr bool const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_useColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColliders;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_useColliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useColliders = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_damageAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageAmount;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_damageAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageAmount;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_damageAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageAmount = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_sightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_sightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightOffset;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_sightOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightOffset = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_sightFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_sightFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_sightFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightFOV = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_sightMinDot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightMinDot;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_sightMinDot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightMinDot;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_sightMinDot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightMinDot = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackAnimName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAnimName;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_attackAnimName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAnimName;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_attackAnimName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackAnimName = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_timeBetweenAttacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenAttacks;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_timeBetweenAttacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenAttacks;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_timeBetweenAttacks(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBetweenAttacks = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_damageDelayAfterPlayingAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageDelayAfterPlayingAnimation;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_damageDelayAfterPlayingAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageDelayAfterPlayingAnimation;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_damageDelayAfterPlayingAnimation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageDelayAfterPlayingAnimation = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_animBlendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animBlendTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_animBlendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animBlendTime;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_animBlendTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animBlendTime = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr float_t& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_lastAttackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAttackTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_get_lastAttackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAttackTime;
}
constexpr void GlobalNamespace::CustomMapsAttackBehaviour::__cordl_internal_set_lastAttackTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAttackTime = value;
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsAIBehaviourController*>(), ::i2c::type_of<::GT_CustomMapSupportRuntime::AIAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, AIController, agentSettings);
}
inline bool GlobalNamespace::CustomMapsAttackBehaviour::CanExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsAttackBehaviour::IsTargetVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"IsTargetVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsAttackBehaviour::IsTargetInAttackRange(::GlobalNamespace::GRPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"IsTargetInAttackRange", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline bool GlobalNamespace::CustomMapsAttackBehaviour::CanContinueExecuting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::NetExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::ResetBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::FaceTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"FaceTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::OnTriggerEnter(::UnityEngine::Collider*  otherCollider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCollider);
}
inline void GlobalNamespace::CustomMapsAttackBehaviour::TriggerAttack(::GlobalNamespace::GRPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsAttackBehaviour*>(),
                        {"TriggerAttack", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline ::GlobalNamespace::CustomMapsAttackBehaviour* GlobalNamespace::CustomMapsAttackBehaviour::New_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsAttackBehaviour*>(AIController, agentSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsAttackBehaviour::CustomMapsAttackBehaviour()   {
}
