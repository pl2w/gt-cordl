#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/NoncontrollableBroomstick.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__NoncontrollableBroomstick_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)()>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::Start)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5cee03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)()>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::FixedUpdate)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5cee190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.GorillaLocomotion_Gameplay_IGorillaGrabable_CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_CanBeGrabbed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.CanBeGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)(::GlobalNamespace::GorillaGrabber*, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cee4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cee55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)()>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cee560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.MomentaryGrabOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)()>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::MomentaryGrabOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)()>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cee574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick.GorillaLocomotion_Gameplay_IGorillaGrabable_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::*)()>(&::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_unitySpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitySpline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_unitySpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unitySpline;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_unitySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unitySpline = value;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline>& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_smoothRotationTrackingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothRotationTrackingRate;
}
constexpr float_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_smoothRotationTrackingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothRotationTrackingRate;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_smoothRotationTrackingRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothRotationTrackingRate = value;
}
constexpr bool& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_lookForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr bool const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_lookForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_lookForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookForward = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_SplineProgressOffet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineProgressOffet;
}
constexpr float_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_SplineProgressOffet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineProgressOffet;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_SplineProgressOffet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplineProgressOffet = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_smoothRotationTrackingRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothRotationTrackingRateExp;
}
constexpr float_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_smoothRotationTrackingRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothRotationTrackingRateExp;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_smoothRotationTrackingRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothRotationTrackingRateExp = value;
}
constexpr bool& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_constantVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constantVelocity;
}
constexpr bool const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_constantVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constantVelocity;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_constantVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constantVelocity = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_progressPerFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressPerFixedUpdate;
}
constexpr float_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_progressPerFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressPerFixedUpdate;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_progressPerFixedUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressPerFixedUpdate = value;
}
constexpr double_t& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_secondsToCycles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsToCycles;
}
constexpr double_t const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_secondsToCycles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsToCycles;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_secondsToCycles(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsToCycles = value;
}
constexpr ::UnityEngine::Splines::NativeSpline& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_nativeSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeSpline;
}
constexpr ::UnityEngine::Splines::NativeSpline const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_nativeSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeSpline;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_nativeSpline(::UnityEngine::Splines::NativeSpline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeSpline = value;
}
constexpr bool& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_momentaryGrabOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___momentaryGrabOnly;
}
constexpr bool const& GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_get_momentaryGrabOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___momentaryGrabOnly;
}
constexpr void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::__cordl_internal_set_momentaryGrabOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___momentaryGrabOnly = value;
}
inline void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.CanBeGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed(::GlobalNamespace::GorillaGrabber*  g, ::by_ref<::UnityEngine::Transform*>  grabbedObject, ::by_ref<::UnityEngine::Vector3>  grabbedLocalPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g, grabbedObject, grabbedLocalPosition);
}
inline void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased(::GlobalNamespace::GorillaGrabber*  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g);
}
inline void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::NoncontrollableBroomstick::MomentaryGrabOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::NoncontrollableBroomstick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaLocomotion::Gameplay::NoncontrollableBroomstick::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick* GorillaLocomotion::Gameplay::NoncontrollableBroomstick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::NoncontrollableBroomstick*>());
}
/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr  GorillaLocomotion::Gameplay::NoncontrollableBroomstick::operator ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* GorillaLocomotion::Gameplay::NoncontrollableBroomstick::i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::NoncontrollableBroomstick::NoncontrollableBroomstick()   {
}
