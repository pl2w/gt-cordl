#pragma once
// IWYU pragma private; include "Oculus/Interaction/Tween.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Tween.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Tween::*)()>(&::Oculus::Interaction::Tween::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa45304c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.get_StartPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Tween::*)()>(&::Oculus::Interaction::Tween::get_StartPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa453060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"get_StartPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Tween::*)()>(&::Oculus::Interaction::Tween::get_Stopped)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa453074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween::*)(::UnityEngine::Pose, float_t, float_t, ::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Tween::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4515c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.TweenToInTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Tween::TweenToInTime)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa453178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"TweenToInTime", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Tween::MoveTo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa45206c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Tween::UpdateTarget)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa452940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Tween::StopAndSetPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa451fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween::*)()>(&::Oculus::Interaction::Tween::Tick)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa4529c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>*& Oculus::Interaction::Tween::__cordl_internal_get__tweenCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tweenCurves;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>* const& Oculus::Interaction::Tween::__cordl_internal_get__tweenCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tweenCurves;
}
constexpr void Oculus::Interaction::Tween::__cordl_internal_set__tweenCurves(::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tweenCurves = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Tween::__cordl_internal_get__pose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Tween::__cordl_internal_get__pose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pose;
}
constexpr void Oculus::Interaction::Tween::__cordl_internal_set__pose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Tween::__cordl_internal_get__startPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Tween::__cordl_internal_get__startPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPose;
}
constexpr void Oculus::Interaction::Tween::__cordl_internal_set__startPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPose = value;
}
constexpr float_t& Oculus::Interaction::Tween::__cordl_internal_get__maxOverlapTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOverlapTime;
}
constexpr float_t const& Oculus::Interaction::Tween::__cordl_internal_get__maxOverlapTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOverlapTime;
}
constexpr void Oculus::Interaction::Tween::__cordl_internal_set__maxOverlapTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxOverlapTime = value;
}
constexpr float_t& Oculus::Interaction::Tween::__cordl_internal_get__tweenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tweenTime;
}
constexpr float_t const& Oculus::Interaction::Tween::__cordl_internal_get__tweenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tweenTime;
}
constexpr void Oculus::Interaction::Tween::__cordl_internal_set__tweenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tweenTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Tween::__cordl_internal_get__animationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Tween::__cordl_internal_get__animationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCurve;
}
constexpr void Oculus::Interaction::Tween::__cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationCurve = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::Tween::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Tween::get_StartPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"get_StartPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::Tween::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Tween::_ctor(::UnityEngine::Pose  start, float_t  tweenTime, float_t  maxOverlapTime, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, tweenTime, maxOverlapTime, curve);
}
inline void Oculus::Interaction::Tween::TweenToInTime(::UnityEngine::Pose  target, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"TweenToInTime", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, time);
}
inline void Oculus::Interaction::Tween::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Tween::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::Tween::StopAndSetPose(::UnityEngine::Pose  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Tween::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Tween* Oculus::Interaction::Tween::New_ctor(::UnityEngine::Pose  start, float_t  tweenTime, float_t  maxOverlapTime, ::UnityEngine::AnimationCurve*  curve)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Tween*>(start, tweenTime, maxOverlapTime, curve));
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::Tween::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::Tween::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Tween::Tween()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Tween___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween___c::*)()>(&::Oculus::Interaction::Tween___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Tween___c._get_Stopped_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Tween___c::*)(::Oculus::Interaction::Tween_TweenCurve*)>(&::Oculus::Interaction::Tween___c::_get_Stopped_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa453414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween___c*>(),
                        {"<get_Stopped>b__11_0", {}, {::i2c::type_of<::Oculus::Interaction::Tween_TweenCurve*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Tween___c::setStaticF___9(::Oculus::Interaction::Tween___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Tween___c*, "<>9", ::Oculus::Interaction::Tween___c*>(std::forward<::Oculus::Interaction::Tween___c*>(value));
}
inline ::Oculus::Interaction::Tween___c* Oculus::Interaction::Tween___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Tween___c*, "<>9", ::Oculus::Interaction::Tween___c*>();
}
inline void Oculus::Interaction::Tween___c::setStaticF___9__11_0(::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>*, "<>9__11_0", ::Oculus::Interaction::Tween___c*>(std::forward<::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>*>(value));
}
inline ::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>* Oculus::Interaction::Tween___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>*, "<>9__11_0", ::Oculus::Interaction::Tween___c*>();
}
inline void Oculus::Interaction::Tween___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Tween___c::_get_Stopped_b__11_0(::Oculus::Interaction::Tween_TweenCurve*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween___c*>(),
                        {"<get_Stopped>b__11_0", {}, {::i2c::type_of<::Oculus::Interaction::Tween_TweenCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::Oculus::Interaction::Tween___c* Oculus::Interaction::Tween___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Tween___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Tween___c::Tween___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Tween_TweenCurve._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Tween_TweenCurve::*)()>(&::Oculus::Interaction::Tween_TweenCurve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween_TweenCurve*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_Curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_Curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr void Oculus::Interaction::Tween_TweenCurve::__cordl_internal_set_Curve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Curve = value;
}
constexpr float_t& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_PrevProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevProgress;
}
constexpr float_t const& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_PrevProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevProgress;
}
constexpr void Oculus::Interaction::Tween_TweenCurve::__cordl_internal_set_PrevProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrevProgress = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_Current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Current;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_Current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Current;
}
constexpr void Oculus::Interaction::Tween_TweenCurve::__cordl_internal_set_Current(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Current = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Tween_TweenCurve::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void Oculus::Interaction::Tween_TweenCurve::__cordl_internal_set_Target(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
inline void Oculus::Interaction::Tween_TweenCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Tween_TweenCurve*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Tween_TweenCurve* Oculus::Interaction::Tween_TweenCurve::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Tween_TweenCurve*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Tween_TweenCurve::Tween_TweenCurve()   {
}
