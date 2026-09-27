#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaVelocityTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker___c__DisplayClass28_0_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf4250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf4258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::ResetState)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cebdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cf43b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cf43b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::OnDisable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cf4424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.SetRelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(::UnityEngine::Transform*)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::SetRelativeTo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cf4498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"SetRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::GetPosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cf434c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::Tick)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5cebf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.AddToQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(::by_ref<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>*>, ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::AddToQueue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cf451c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"AddToQueue", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>*>>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.GetAverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool, float_t, bool)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageVelocity)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5cf4624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetAverageVelocity", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.GetLatestVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(bool)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::GetLatestVelocity)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ceab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetLatestVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker.GetAverageSpeedChangeMagnitudeInDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(::UnityEngine::Vector3, bool, float_t)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageSpeedChangeMagnitudeInDirection)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5cf494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetAverageSpeedChangeMagnitudeInDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cf4aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker._ResetState_g__PopulateArray_20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker::*)(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::_ResetState_g__PopulateArray_20_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5cf4260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"<ResetState>g__PopulateArray|20_0", {}, {::i2c::type_of<::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker._GetAverageVelocity_g__AddPoint_28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*, ::by_ref<::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0>)>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker::_GetAverageVelocity_g__AddPoint_28_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cf488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"<GetAverageVelocity>g__AddPoint|28_0", {}, {::i2c::type_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_maxDataPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDataPoints;
}
constexpr int32_t const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_maxDataPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDataPoints;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_maxDataPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDataPoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeTo;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relativeTo = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_useVelocityEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useVelocityEvents;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_useVelocityEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useVelocityEvents;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_useVelocityEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useVelocityEvents = value;
}
constexpr float_t& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_latestVelocityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestVelocityThreshold;
}
constexpr float_t const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_latestVelocityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestVelocityThreshold;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_latestVelocityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestVelocityThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_OnLatestBelowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLatestBelowThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_OnLatestBelowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLatestBelowThreshold;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_OnLatestBelowThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLatestBelowThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_OnLatestAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLatestAboveThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_OnLatestAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLatestAboveThreshold;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_OnLatestAboveThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLatestAboveThreshold = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_useWorldSpaceForEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldSpaceForEvents;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_useWorldSpaceForEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldSpaceForEvents;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_useWorldSpaceForEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWorldSpaceForEvents = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_wasAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_wasAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_wasAboveThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasAboveThreshold = value;
}
constexpr int32_t& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_currentDataPointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDataPointIndex;
}
constexpr int32_t const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_currentDataPointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDataPointIndex;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_currentDataPointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDataPointIndex = value;
}
constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_localSpaceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpaceData;
}
constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*> const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_localSpaceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpaceData;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_localSpaceData(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localSpaceData = value;
}
constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_worldSpaceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldSpaceData;
}
constexpr ::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*> const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_worldSpaceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldSpaceData;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_worldSpaceData(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldSpaceData = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_trans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_trans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trans;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_trans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trans = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_lastWorldSpacePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldSpacePos;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_lastWorldSpacePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWorldSpacePos;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_lastWorldSpacePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWorldSpacePos = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_lastLocalSpacePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLocalSpacePos;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_lastLocalSpacePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLocalSpacePos;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_lastLocalSpacePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLocalSpacePos = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_isRelativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRelativeTo;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_isRelativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRelativeTo;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_isRelativeTo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRelativeTo = value;
}
constexpr int32_t& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_lastTickedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTickedFrame;
}
constexpr int32_t const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get_lastTickedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTickedFrame;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set_lastTickedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTickedFrame = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaLocomotion::Climbing::GorillaVelocityTracker::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::SetRelativeTo(::UnityEngine::Transform*  tf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"SetRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tf);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Climbing::GorillaVelocityTracker::GetPosition(bool  worldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldSpace);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::AddToQueue(::by_ref<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>*>  dataPoints, ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*  newData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"AddToQueue", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>*>>(), ::i2c::type_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataPoints, newData);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageVelocity(bool  worldSpace, float_t  maxTimeFromPast, bool  doMagnitudeCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetAverageVelocity", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldSpace, maxTimeFromPast, doMagnitudeCheck);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::Climbing::GorillaVelocityTracker::GetLatestVelocity(bool  worldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetLatestVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldSpace);
}
inline float_t GorillaLocomotion::Climbing::GorillaVelocityTracker::GetAverageSpeedChangeMagnitudeInDirection(::UnityEngine::Vector3  dir, bool  worldSpace, float_t  maxTimeFromPast)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"GetAverageSpeedChangeMagnitudeInDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, dir, worldSpace, maxTimeFromPast);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::_ResetState_g__PopulateArray_20_0(::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"<ResetState>g__PopulateArray|20_0", {}, {::i2c::type_of<::ArrayW<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker::_GetAverageVelocity_g__AddPoint_28_0(::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*  point, ::by_ref<::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>(),
                        {"<GetAverageVelocity>g__AddPoint|28_0", {}, {::i2c::type_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GorillaVelocityTracker___c__DisplayClass28_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point, _cordl_fixed_empty_name_whitespace);
}
inline ::GorillaLocomotion::Climbing::GorillaVelocityTracker* GorillaLocomotion::Climbing::GorillaVelocityTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaLocomotion::Climbing::GorillaVelocityTracker::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaLocomotion::Climbing::GorillaVelocityTracker::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Climbing::GorillaVelocityTracker::GorillaVelocityTracker()   {
}
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::*)()>(&::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cf4abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::__cordl_internal_get_delta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delta;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::__cordl_internal_get_delta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delta;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::__cordl_internal_set_delta(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delta = value;
}
constexpr float_t& GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
inline void GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint* GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Climbing::GorillaVelocityTracker_VelocityDataPoint::GorillaVelocityTracker_VelocityDataPoint()   {
}
