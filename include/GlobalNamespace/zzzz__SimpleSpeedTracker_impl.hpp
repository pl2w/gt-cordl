#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleSpeedTracker.hpp"
#include "GlobalNamespace/zzzz__SimpleSpeedTracker_AxisFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleSpeedTracker_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SimpleSpeedTracker_AxisFilter_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.get_HasAxisFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::get_HasAxisFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x565a944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"get_HasAxisFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x565a954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x565aa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::SliceUpdate)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x565aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetPostProcessSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetPostProcessSpeed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x565b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetPostProcessSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetRawSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetRawSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565b058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetRawSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetWorldVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetWorldVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x565b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetWorldVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetLocalVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetLocalVelocity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x565b06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetLocalVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetSignedSpeedAlongForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleSpeedTracker::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedAlongForward)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x565b114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedAlongForward", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetSignedSpeedX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedX)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x565b1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetSignedSpeedY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedY)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x565b204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetSignedSpeedZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedZ)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x565b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.GetVelocityInAxisSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::GetVelocityInAxisSpace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x565b27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetVelocityInAxisSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.ResolveAxisRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::ResolveAxisRight)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x565ad34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"ResolveAxisRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.ResolveAxisUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::ResolveAxisUp)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x565ae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"ResolveAxisUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker.ResolveAxisForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::ResolveAxisForward)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x565af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"ResolveAxisForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleSpeedTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleSpeedTracker::*)()>(&::GlobalNamespace::SimpleSpeedTracker::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x565b314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_useWorldAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldAxes;
}
constexpr bool const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_useWorldAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldAxes;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_useWorldAxes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWorldAxes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_worldSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldSpace;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_worldSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldSpace;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_worldSpace(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldSpace = value;
}
constexpr bool& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_useRawSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRawSpeed;
}
constexpr bool const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_useRawSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRawSpeed;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_useRawSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRawSpeed = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_responsiveness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responsiveness;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_responsiveness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responsiveness;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_responsiveness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responsiveness = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_postprocessCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postprocessCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_postprocessCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postprocessCurve;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_postprocessCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postprocessCurve = value;
}
constexpr ::GlobalNamespace::SimpleSpeedTracker_AxisFilter& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_trackAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackAxis;
}
constexpr ::GlobalNamespace::SimpleSpeedTracker_AxisFilter const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_trackAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackAxis;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_trackAxis(::GlobalNamespace::SimpleSpeedTracker_AxisFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackAxis = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_eventThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventThreshold;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_eventThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_eventThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onSpeedUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpeedUpdated;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onSpeedUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpeedUpdated;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onSpeedUpdated(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSpeedUpdated = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onSpeedAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpeedAboveThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onSpeedAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpeedAboveThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onSpeedAboveThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSpeedAboveThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onSpeedBelowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpeedBelowThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onSpeedBelowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpeedBelowThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onSpeedBelowThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSpeedBelowThreshold = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_positiveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveThreshold;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_positiveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_positiveThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positiveThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onAbovePositiveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAbovePositiveThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onAbovePositiveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAbovePositiveThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onAbovePositiveThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAbovePositiveThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onBelowPositiveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowPositiveThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onBelowPositiveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowPositiveThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onBelowPositiveThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowPositiveThreshold = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_negativeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeThreshold;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_negativeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_negativeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___negativeThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onAboveNegativeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveNegativeThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onAboveNegativeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveNegativeThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onAboveNegativeThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAboveNegativeThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onBelowNegativeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowNegativeThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_onBelowNegativeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowNegativeThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_onBelowNegativeThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowNegativeThreshold = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_debugCurrentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentSpeed;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_debugCurrentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentSpeed;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_debugCurrentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCurrentSpeed = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpeed;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpeed;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_lastSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpeed = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastRawSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRawSpeed;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastRawSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRawSpeed;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_lastRawSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRawSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVelocity;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_lastVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPos;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_lastPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPos = value;
}
constexpr float_t& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastSliceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceTime;
}
constexpr float_t const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_lastSliceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSliceTime;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_lastSliceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSliceTime = value;
}
constexpr bool& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_wasAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr bool const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_wasAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_wasAboveThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasAboveThreshold = value;
}
constexpr bool& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_wasMovingPositive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMovingPositive;
}
constexpr bool const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_wasMovingPositive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMovingPositive;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_wasMovingPositive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasMovingPositive = value;
}
constexpr bool& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_wasMovingNegative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMovingNegative;
}
constexpr bool const& GlobalNamespace::SimpleSpeedTracker::__cordl_internal_get_wasMovingNegative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMovingNegative;
}
constexpr void GlobalNamespace::SimpleSpeedTracker::__cordl_internal_set_wasMovingNegative(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasMovingNegative = value;
}
inline bool GlobalNamespace::SimpleSpeedTracker::get_HasAxisFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"get_HasAxisFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleSpeedTracker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleSpeedTracker::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleSpeedTracker::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SimpleSpeedTracker::GetPostProcessSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetPostProcessSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SimpleSpeedTracker::GetRawSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetRawSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SimpleSpeedTracker::GetWorldVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetWorldVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SimpleSpeedTracker::GetLocalVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetLocalVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedAlongForward(::UnityEngine::Transform*  reference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedAlongForward", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, reference);
}
inline float_t GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SimpleSpeedTracker::GetSignedSpeedZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetSignedSpeedZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SimpleSpeedTracker::GetVelocityInAxisSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"GetVelocityInAxisSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SimpleSpeedTracker::ResolveAxisRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"ResolveAxisRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SimpleSpeedTracker::ResolveAxisUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"ResolveAxisUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SimpleSpeedTracker::ResolveAxisForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {"ResolveAxisForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleSpeedTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleSpeedTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleSpeedTracker* GlobalNamespace::SimpleSpeedTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleSpeedTracker*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SimpleSpeedTracker::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SimpleSpeedTracker::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleSpeedTracker::SimpleSpeedTracker()   {
}
