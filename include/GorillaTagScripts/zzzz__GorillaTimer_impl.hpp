#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaTimer.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaTimer_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaTimer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.StartTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::StartTimer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bcab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"StartTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.DelayedReStartTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::GorillaTimer::*)(float_t)>(&::GorillaTagScripts::GorillaTimer::DelayedReStartTimer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bcabb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"DelayedReStartTimer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.StopTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::StopTimer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bcac58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"StopTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.ResetTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::ResetTimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcab48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"ResetTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.RestartTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::RestartTimer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bcacb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"RestartTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.SetTimerDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)(float_t)>(&::GorillaTagScripts::GorillaTimer::SetTimerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcace8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"SetTimerDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::InvokeUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bcacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.GetPassedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::GetPassedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"GetPassedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.SetPassedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)(float_t)>(&::GorillaTagScripts::GorillaTimer::SetPassedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcad4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"SetPassedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.GetRemainingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::GetRemainingTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bcad54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"GetRemainingTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bcad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bcaf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer::*)()>(&::GorillaTagScripts::GorillaTimer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcb060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::GorillaTimer::__cordl_internal_get_timerDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerDuration;
}
constexpr float_t const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_timerDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerDuration;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_timerDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerDuration = value;
}
constexpr bool& GorillaTagScripts::GorillaTimer::__cordl_internal_get_useRandomDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRandomDuration;
}
constexpr bool const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_useRandomDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRandomDuration;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_useRandomDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRandomDuration = value;
}
constexpr float_t& GorillaTagScripts::GorillaTimer::__cordl_internal_get_randTimeMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randTimeMin;
}
constexpr float_t const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_randTimeMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randTimeMin;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_randTimeMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randTimeMin = value;
}
constexpr float_t& GorillaTagScripts::GorillaTimer::__cordl_internal_get_randTimeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randTimeMax;
}
constexpr float_t const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_randTimeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randTimeMax;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_randTimeMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randTimeMax = value;
}
constexpr float_t& GorillaTagScripts::GorillaTimer::__cordl_internal_get_passedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passedTime;
}
constexpr float_t const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_passedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passedTime;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_passedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passedTime = value;
}
constexpr bool& GorillaTagScripts::GorillaTimer::__cordl_internal_get_startTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTimer;
}
constexpr bool const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_startTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTimer;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_startTimer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTimer = value;
}
constexpr bool& GorillaTagScripts::GorillaTimer::__cordl_internal_get_resetTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetTimer;
}
constexpr bool const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_resetTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetTimer;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_resetTimer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetTimer = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*& GorillaTagScripts::GorillaTimer::__cordl_internal_get_onTimerStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStarted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>* const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_onTimerStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStarted;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_onTimerStarted(::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerStarted = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*& GorillaTagScripts::GorillaTimer::__cordl_internal_get_onTimerStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStopped;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>* const& GorillaTagScripts::GorillaTimer::__cordl_internal_get_onTimerStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStopped;
}
constexpr void GorillaTagScripts::GorillaTimer::__cordl_internal_set_onTimerStopped(::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::GorillaTimer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerStopped = value;
}
inline void GorillaTagScripts::GorillaTimer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::StartTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"StartTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::GorillaTimer::DelayedReStartTimer(float_t  delayTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"DelayedReStartTimer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, delayTime);
}
inline void GorillaTagScripts::GorillaTimer::StopTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"StopTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::ResetTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"ResetTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::RestartTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"RestartTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::SetTimerDuration(float_t  timer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"SetTimerDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timer);
}
inline void GorillaTagScripts::GorillaTimer::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaTagScripts::GorillaTimer::GetPassedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"GetPassedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::SetPassedTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"SetPassedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline float_t GorillaTagScripts::GorillaTimer::GetRemainingTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"GetRemainingTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaTimer* GorillaTagScripts::GorillaTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaTimer*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaTimer::GorillaTimer()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::*)(int32_t)>(&::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bcac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::*)()>(&::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bcb068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::*)()>(&::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::MoveNext)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bcb06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::*)()>(&::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcb124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::*)()>(&::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bcb12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::*)()>(&::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get_delayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTime;
}
constexpr float_t const& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get_delayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTime;
}
constexpr void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_set_delayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayTime = value;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaTimer>& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaTimer> const& GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GorillaTimer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11* GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaTimer__DelayedReStartTimer_d__11::GorillaTimer__DelayedReStartTimer_d__11()   {
}
