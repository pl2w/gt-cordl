#pragma once
// IWYU pragma private; include "GameObjectScheduling/GameObjectSchedulerEventDispatcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GameObjectScheduling/zzzz__GameObjectSchedulerEventDispatcher_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedulerEventDispatcher.get_OnScheduledActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::GameObjectScheduling::GameObjectSchedulerEventDispatcher::*)()>(&::GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de0d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>(),
                        {"get_OnScheduledActivation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedulerEventDispatcher.get_OnScheduledDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::GameObjectScheduling::GameObjectSchedulerEventDispatcher::*)()>(&::GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledDeactivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de0d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>(),
                        {"get_OnScheduledDeactivation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectSchedulerEventDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectSchedulerEventDispatcher::*)()>(&::GameObjectScheduling::GameObjectSchedulerEventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de0d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GameObjectScheduling::GameObjectSchedulerEventDispatcher::__cordl_internal_get_onScheduledActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScheduledActivation;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GameObjectScheduling::GameObjectSchedulerEventDispatcher::__cordl_internal_get_onScheduledActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScheduledActivation;
}
constexpr void GameObjectScheduling::GameObjectSchedulerEventDispatcher::__cordl_internal_set_onScheduledActivation(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onScheduledActivation = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GameObjectScheduling::GameObjectSchedulerEventDispatcher::__cordl_internal_get_onScheduledDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScheduledDeactivation;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GameObjectScheduling::GameObjectSchedulerEventDispatcher::__cordl_internal_get_onScheduledDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onScheduledDeactivation;
}
constexpr void GameObjectScheduling::GameObjectSchedulerEventDispatcher::__cordl_internal_set_onScheduledDeactivation(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onScheduledDeactivation = value;
}
inline ::UnityEngine::Events::UnityEvent* GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledActivation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>(),
                        {"get_OnScheduledActivation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* GameObjectScheduling::GameObjectSchedulerEventDispatcher::get_OnScheduledDeactivation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>(),
                        {"get_OnScheduledDeactivation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectSchedulerEventDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::GameObjectSchedulerEventDispatcher* GameObjectScheduling::GameObjectSchedulerEventDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::GameObjectSchedulerEventDispatcher*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::GameObjectSchedulerEventDispatcher::GameObjectSchedulerEventDispatcher()   {
}
