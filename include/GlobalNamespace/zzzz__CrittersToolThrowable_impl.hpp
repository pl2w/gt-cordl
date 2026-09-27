#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersToolThrowable.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersToolThrowable_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "GlobalNamespace/zzzz__DelayedDestroyObject_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)()>(&::GlobalNamespace::CrittersToolThrowable::Initialize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56f47f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.GrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)(::GlobalNamespace::CrittersActor*, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::CrittersToolThrowable::GrabbedBy)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56f539c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CrittersToolThrowable::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x56f53d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersToolThrowable::OnImpact)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56f561c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.OnImpactCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersToolThrowable::OnImpactCritter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56f5620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.OnPickedUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)()>(&::GlobalNamespace::CrittersToolThrowable::OnPickedUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56f5624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.ShowDebugVisualization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)(::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::CrittersToolThrowable::ShowDebugVisualization)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x56f5628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                        {"ShowDebugVisualization", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersToolThrowable::*)()>(&::GlobalNamespace::CrittersToolThrowable::ProcessLocal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56f57a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable.TogglePhysics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)(bool)>(&::GlobalNamespace::CrittersToolThrowable::TogglePhysics)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56f57e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersToolThrowable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersToolThrowable::*)()>(&::GlobalNamespace::CrittersToolThrowable::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56f502c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_requiresPlayerGrabBeforeActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiresPlayerGrabBeforeActivate;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_requiresPlayerGrabBeforeActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiresPlayerGrabBeforeActivate;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_requiresPlayerGrabBeforeActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiresPlayerGrabBeforeActivate = value;
}
constexpr float_t& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_requiredActivationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredActivationSpeed;
}
constexpr float_t const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_requiredActivationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredActivationSpeed;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_requiredActivationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredActivationSpeed = value;
}
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_onlyTriggerOnDirectCritterHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyTriggerOnDirectCritterHit;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_onlyTriggerOnDirectCritterHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyTriggerOnDirectCritterHit;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_onlyTriggerOnDirectCritterHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyTriggerOnDirectCritterHit = value;
}
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_destroyOnImpact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnImpact;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_destroyOnImpact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnImpact;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_destroyOnImpact(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyOnImpact = value;
}
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_onlyTriggerOncePerGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyTriggerOncePerGrab;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_onlyTriggerOncePerGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyTriggerOncePerGrab;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_onlyTriggerOncePerGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyTriggerOncePerGrab = value;
}
constexpr ::UnityW<::GlobalNamespace::DelayedDestroyObject>& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_debugImpactPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugImpactPrefab;
}
constexpr ::UnityW<::GlobalNamespace::DelayedDestroyObject> const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_debugImpactPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugImpactPrefab;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_debugImpactPrefab(::UnityW<::GlobalNamespace::DelayedDestroyObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugImpactPrefab = value;
}
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_hasBeenGrabbedByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenGrabbedByPlayer;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_hasBeenGrabbedByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenGrabbedByPlayer;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_hasBeenGrabbedByPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBeenGrabbedByPlayer = value;
}
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_shouldDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldDisable;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_shouldDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldDisable;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_shouldDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldDisable = value;
}
constexpr bool& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_hasTriggeredSinceLastGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggeredSinceLastGrab;
}
constexpr bool const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get_hasTriggeredSinceLastGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggeredSinceLastGrab;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set_hasTriggeredSinceLastGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasTriggeredSinceLastGrab = value;
}
constexpr float_t& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get__sqrActivationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrActivationSpeed;
}
constexpr float_t const& GlobalNamespace::CrittersToolThrowable::__cordl_internal_get__sqrActivationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sqrActivationSpeed;
}
constexpr void GlobalNamespace::CrittersToolThrowable::__cordl_internal_set__sqrActivationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sqrActivationSpeed = value;
}
inline void GlobalNamespace::CrittersToolThrowable::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersToolThrowable::GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
}
inline void GlobalNamespace::CrittersToolThrowable::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CrittersToolThrowable::OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitPosition, hitNormal);
}
inline void GlobalNamespace::CrittersToolThrowable::OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impactedCritter);
}
inline void GlobalNamespace::CrittersToolThrowable::OnPickedUp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersToolThrowable::ShowDebugVisualization(::UnityEngine::Vector3  position, float_t  scale, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                        {"ShowDebugVisualization", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, scale, duration);
}
inline bool GlobalNamespace::CrittersToolThrowable::ProcessLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersToolThrowable::TogglePhysics(bool  enable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::CrittersToolThrowable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersToolThrowable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersToolThrowable* GlobalNamespace::CrittersToolThrowable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersToolThrowable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersToolThrowable::CrittersToolThrowable()   {
}
