#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/AlarmClocks/AlarmClock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Subscription/AlarmClocks/zzzz__AlarmClock_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaTagScripts/Subscription/AlarmClocks/zzzz__AlarmClock_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0f0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0f0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)(bool)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.get_IsVIMOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_IsVIMOnly)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c0f0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_IsVIMOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.get_ShouldBePressable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_ShouldBePressable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c0f1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_ShouldBePressable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnEnable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c0f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.ActivateCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::ActivateCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c0f3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"ActivateCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnDisable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c0f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.OnButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnButtonPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c0f584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.ToggleAlarmClock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::ToggleAlarmClock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0f5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"ToggleAlarmClock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.OnActivateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnActivateCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c0f638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnActivateCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock.OnDeactivateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnDeactivateCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c0f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnDeactivateCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c0f710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__button(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__VIMLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VIMLabel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__VIMLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VIMLabel;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__VIMLabel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VIMLabel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__alarmClockOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmClockOff;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__alarmClockOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alarmClockOff;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__alarmClockOff(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alarmClockOff = value;
}
constexpr float_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__onTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTime;
}
constexpr float_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__onTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTime;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__onTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTime = value;
}
constexpr float_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__offTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offTime;
}
constexpr float_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__offTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offTime;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__offTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get_OnActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnActivate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get_OnActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnActivate;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set_OnActivate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnActivate = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get_OnDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeactivate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get_OnDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDeactivate;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set_OnDeactivate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDeactivate = value;
}
constexpr float_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__lastTouchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTouchTime;
}
constexpr float_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__lastTouchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTouchTime;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__lastTouchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTouchTime = value;
}
constexpr bool& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__isVIMOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVIMOnly;
}
constexpr bool const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__isVIMOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVIMOnly;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__isVIMOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVIMOnly = value;
}
constexpr bool& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__vim_only_fetched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vim_only_fetched;
}
constexpr bool const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__vim_only_fetched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vim_only_fetched;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__vim_only_fetched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vim_only_fetched = value;
}
constexpr bool& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
inline ::StringW GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_IsVIMOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_IsVIMOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::get_ShouldBePressable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"get_ShouldBePressable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::ActivateCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"ActivateCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::ToggleAlarmClock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"ToggleAlarmClock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnActivateCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnActivateCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::OnDeactivateCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {"OnDeactivateCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock::AlarmClock()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::*)(int32_t)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c0f428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0f72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5c0f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0f93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c0f944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0f97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock__ActivateCoroutine_d__23::AlarmClock__ActivateCoroutine_d__23()   {
}
