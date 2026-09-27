#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterCatcherShade.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcher_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcherShade_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterAction_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "GlobalNamespace/zzzz__ShadeRevealer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.get_LastTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::get_LastTargetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f2444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"get_LastTargetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.set_LastTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CosmeticCritterCatcherShade::set_LastTargetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f2450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"set_LastTargetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.GetActionTimeFrac
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::GetActionTimeFrac)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f245c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"GetActionTimeFrac", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.CreateCallLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiter* (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::CreateCallLimiter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57f2468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.GetLocalCatchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticCritterAction (::GlobalNamespace::CosmeticCritterCatcherShade::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterCatcherShade::GetLocalCatchAction)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x57f24c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.ValidateRemoteCatchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterCatcherShade::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::CosmeticCritterAction, double_t)>(&::GlobalNamespace::CosmeticCritterCatcherShade::ValidateRemoteCatchAction)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x57f2704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.OnCatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::CosmeticCritterAction, double_t)>(&::GlobalNamespace::CosmeticCritterCatcherShade::OnCatch)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x57f28f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57f2b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::LateUpdate)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x57f2c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57f2f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::OnDisable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57f2fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherShade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherShade::*)()>(&::GlobalNamespace::CosmeticCritterCatcherShade::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57f2fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_secondsToReveal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsToReveal;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_secondsToReveal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsToReveal;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_secondsToReveal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsToReveal = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_minSecondsLockedToCatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSecondsLockedToCatch;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_minSecondsLockedToCatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSecondsLockedToCatch;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_minSecondsLockedToCatch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSecondsLockedToCatch = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_catchOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_catchOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchOrigin;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_catchOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchOrigin = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_catchRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchRadius;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_catchRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchRadius;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_catchRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchRadius = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_vacuumSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_vacuumSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vacuumSpeed;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_vacuumSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vacuumSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::ShadeRevealer>& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_shadeRevealer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeRevealer;
}
constexpr ::UnityW<::GlobalNamespace::ShadeRevealer> const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_shadeRevealer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeRevealer;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_shadeRevealer(::UnityW<::GlobalNamespace::ShadeRevealer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeRevealer = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritter>& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_currentTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTarget;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritter> const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_currentTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTarget;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_currentTarget(::UnityW<::GlobalNamespace::CosmeticCritter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTarget = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_targetHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetHoldTime;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_targetHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetHoldTime;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_targetHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetHoldTime = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_maxHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHoldTime;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_maxHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHoldTime;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_maxHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHoldTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get__LastTargetPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTargetPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get__LastTargetPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTargetPosition_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set__LastTargetPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastTargetPosition_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_heartbeatCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heartbeatCooldown;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_get_heartbeatCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heartbeatCooldown;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherShade::__cordl_internal_set_heartbeatCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heartbeatCooldown = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::CosmeticCritterCatcherShade::get_LastTargetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"get_LastTargetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::set_LastTargetPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"set_LastTargetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::CosmeticCritterCatcherShade::GetActionTimeFrac()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"GetActionTimeFrac", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CosmeticCritterCatcherShade::CreateCallLimiter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiter*>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterAction GlobalNamespace::CosmeticCritterCatcherShade::GetLocalCatchAction(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticCritterAction>(this, ___internal_method, critter);
}
inline bool GlobalNamespace::CosmeticCritterCatcherShade::ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, critter, catchAction, serverTime);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::OnCatch(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, catchAction, serverTime);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterCatcherShade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherShade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterCatcherShade* GlobalNamespace::CosmeticCritterCatcherShade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterCatcherShade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterCatcherShade::CosmeticCritterCatcherShade()   {
}
