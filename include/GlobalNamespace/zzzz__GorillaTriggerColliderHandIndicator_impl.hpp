#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerColliderHandIndicator.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowableController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerColliderHandIndicator.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerColliderHandIndicator::*)()>(&::GlobalNamespace::GorillaTriggerColliderHandIndicator::Tick)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59a22c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerColliderHandIndicator.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerColliderHandIndicator::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaTriggerColliderHandIndicator::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59a2340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerColliderHandIndicator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerColliderHandIndicator::*)()>(&::GlobalNamespace::GorillaTriggerColliderHandIndicator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59a23c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr void GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr bool& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaThrowableController>& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_throwableController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableController;
}
constexpr ::UnityW<::GlobalNamespace::GorillaThrowableController> const& GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_get_throwableController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableController;
}
constexpr void GlobalNamespace::GorillaTriggerColliderHandIndicator::__cordl_internal_set_throwableController(::UnityW<::GlobalNamespace::GorillaThrowableController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwableController = value;
}
inline void GlobalNamespace::GorillaTriggerColliderHandIndicator::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerColliderHandIndicator::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaTriggerColliderHandIndicator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTriggerColliderHandIndicator* GlobalNamespace::GorillaTriggerColliderHandIndicator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTriggerColliderHandIndicator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTriggerColliderHandIndicator::GorillaTriggerColliderHandIndicator()   {
}
