#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaZipline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaZipline_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbableRef_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaZiplineSettings_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.get_currentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::get_currentSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ced354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"get_currentSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.set_currentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)(float_t)>(&::GorillaLocomotion::Gameplay::GorillaZipline::set_currentSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ced35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"set_currentSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.FindTFromDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)(::by_ref<float_t>, float_t, int32_t)>(&::GorillaLocomotion::Gameplay::GorillaZipline::FindTFromDistance)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ced364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"FindTFromDistance", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.FindSlideHelperSpot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Gameplay::GorillaZipline::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::Gameplay::GorillaZipline::FindSlideHelperSpot)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ced4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"FindSlideHelperSpot", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::Start)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ced5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ced6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.GetCurrentDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::GetCurrentDirection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ced77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"GetCurrentDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.OnBeforeClimb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)(::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*)>(&::GorillaLocomotion::Gameplay::GorillaZipline::OnBeforeClimb)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5ced79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::Update)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x5cedaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::Stop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cedf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZipline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZipline::*)()>(&::GorillaLocomotion::Gameplay::GorillaZipline::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cedfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_segmentsRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentsRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_segmentsRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentsRoot;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_segmentsRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentsRoot = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_segmentPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_segmentPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentPrefab;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_segmentPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentPrefab = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_slideHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideHelper;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_slideHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideHelper;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_slideHelper(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideHelper = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_audioSlide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSlide;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_audioSlide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSlide;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_audioSlide(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSlide = value;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_climbOffsetHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbOffsetHelper;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_climbOffsetHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbOffsetHelper;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_climbOffsetHelper(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climbOffsetHelper = value;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_settings(::UnityW<::GorillaLocomotion::Gameplay::GorillaZiplineSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get__currentSpeed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeed_k__BackingField;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get__currentSpeed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeed_k__BackingField;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set__currentSpeed_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSpeed_k__BackingField = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_ziplineDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineDistance;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_ziplineDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineDistance;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_ziplineDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineDistance = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_segmentDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentDistance;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_segmentDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentDistance;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_segmentDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentDistance = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_currentClimber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClimber;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_currentClimber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentClimber;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_currentClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentClimber = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_currentT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentT;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_currentT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentT;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_currentT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentT = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_currentInheritVelocityMulti()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentInheritVelocityMulti;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_get_currentInheritVelocityMulti() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentInheritVelocityMulti;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZipline::__cordl_internal_set_currentInheritVelocityMulti(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentInheritVelocityMulti = value;
}
inline float_t GorillaLocomotion::Gameplay::GorillaZipline::get_currentSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"get_currentSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::set_currentSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"set_currentSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::FindTFromDistance(::by_ref<float_t>  t, float_t  distance, int32_t  steps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"FindTFromDistance", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, distance, steps);
}
inline float_t GorillaLocomotion::Gameplay::GorillaZipline::FindSlideHelperSpot(::UnityEngine::Vector3  grabPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"FindSlideHelperSpot", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, grabPoint);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Gameplay::GorillaZipline::GetCurrentDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"GetCurrentDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::OnBeforeClimb(::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef*  climbRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, climbRef);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::GorillaZipline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZipline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::GorillaZipline* GorillaLocomotion::Gameplay::GorillaZipline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::GorillaZipline*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::GorillaZipline::GorillaZipline()   {
}
