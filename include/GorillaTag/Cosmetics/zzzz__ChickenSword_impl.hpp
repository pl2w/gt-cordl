#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ChickenSword.hpp"
#include "GorillaTag/Cosmetics/zzzz__ChickenSword_SwordState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ChickenSword_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ChickenSword_SwordState_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)()>(&::GorillaTag::Cosmetics::ChickenSword::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d7fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)()>(&::GorillaTag::Cosmetics::ChickenSword::OnEnable)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d7fbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)()>(&::GorillaTag::Cosmetics::ChickenSword::OnDisable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d7fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)()>(&::GorillaTag::Cosmetics::ChickenSword::Update)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5d7fff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.OnHitTargetSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::ChickenSword::OnHitTargetSync)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5d80188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnHitTargetSync", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.OnReachedLastTransformationStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::ChickenSword::OnReachedLastTransformationStep)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5d80520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnReachedLastTransformationStep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)(::GlobalNamespace::ChickenSword_SwordState)>(&::GorillaTag::Cosmetics::ChickenSword::SwitchState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d80758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::ChickenSword_SwordState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ChickenSword._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ChickenSword::*)()>(&::GorillaTag::Cosmetics::ChickenSword::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d80760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_rechargeCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeCooldown;
}
constexpr float_t const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_rechargeCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeCooldown;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_rechargeCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeCooldown = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_velocityTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracker;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_velocityTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracker;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityTracker = value;
}
constexpr float_t& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_hitVelocityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitVelocityThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_hitVelocityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitVelocityThreshold;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_hitVelocityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitVelocityThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper>& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_cosmeticSwapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticSwapper;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper> const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_cosmeticSwapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticSwapper;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_cosmeticSwapper(::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticSwapper = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnDeflatedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeflatedShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnDeflatedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeflatedShared;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnDeflatedShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDeflatedShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnDeflatedLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeflatedLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnDeflatedLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeflatedLocal;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnDeflatedLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDeflatedLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnRechargedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRechargedShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnRechargedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRechargedShared;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnRechargedShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRechargedShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnRechargedLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRechargedLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnRechargedLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRechargedLocal;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnRechargedLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRechargedLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnHitTargetShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitTargetShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnHitTargetShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitTargetShared;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnHitTargetShared(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitTargetShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnHitTargetLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitTargetLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnHitTargetLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitTargetLocal;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnHitTargetLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHitTargetLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnReachedLastTransformationStepShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReachedLastTransformationStepShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_OnReachedLastTransformationStepShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReachedLastTransformationStepShared;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_OnReachedLastTransformationStepShared(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReachedLastTransformationStepShared = value;
}
constexpr float_t& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_lastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr float_t const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_lastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_lastHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitTime = value;
}
constexpr ::GlobalNamespace::ChickenSword_SwordState& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::ChickenSword_SwordState const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_currentState(::GlobalNamespace::ChickenSword_SwordState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_hitReceievd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitReceievd;
}
constexpr bool const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_hitReceievd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitReceievd;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_hitReceievd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitReceievd = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::ChickenSword::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::ChickenSword::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
inline void GorillaTag::Cosmetics::ChickenSword::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ChickenSword::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ChickenSword::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ChickenSword::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ChickenSword::OnHitTargetSync(::GlobalNamespace::VRRig*  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnHitTargetSync", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerRig);
}
inline void GorillaTag::Cosmetics::ChickenSword::OnReachedLastTransformationStep(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"OnReachedLastTransformationStep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::ChickenSword::SwitchState(::GlobalNamespace::ChickenSword_SwordState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::ChickenSword_SwordState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::ChickenSword::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ChickenSword*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ChickenSword* GorillaTag::Cosmetics::ChickenSword::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ChickenSword*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ChickenSword::ChickenSword()   {
}
