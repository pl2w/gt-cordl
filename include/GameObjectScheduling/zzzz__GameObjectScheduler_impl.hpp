#pragma once
// IWYU pragma private; include "GameObjectScheduling/GameObjectScheduler.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GameObjectScheduling/zzzz__GameObjectScheduler_def.hpp"
#include "GameObjectScheduling/zzzz__GameObjectSchedule_def.hpp"
#include "GameObjectScheduling/zzzz__GameObjectSchedulerEventDispatcher_def.hpp"
#include "GameObjectScheduling/zzzz__GameObjectScheduler__Start_d__8_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5de0100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.SetInitialState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::SetInitialState)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5de01a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"SetInitialState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5de05a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5de05d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.getActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)(::by_ref<bool>, ::by_ref<double_t>)>(&::GameObjectScheduling::GameObjectScheduler::getActiveState)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5de0388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"getActiveState", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.getServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::getServerTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5de0534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"getServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.changeActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)(bool)>(&::GameObjectScheduling::GameObjectScheduler::changeActiveState)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5de05dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"changeActiveState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::SliceUpdate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5de0744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::GameObjectScheduler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::GameObjectScheduler::*)()>(&::GameObjectScheduling::GameObjectScheduler::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5de0838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedule>& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_schedule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedule> const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_schedule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_schedule(::UnityW<::GameObjectScheduling::GameObjectSchedule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schedule = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_scheduledGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledGameObject;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_scheduledGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledGameObject;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_scheduledGameObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledGameObject = value;
}
constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher>& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_dispatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispatcher;
}
constexpr ::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher> const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_dispatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispatcher;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_dispatcher(::UnityW<::GameObjectScheduling::GameObjectSchedulerEventDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispatcher = value;
}
constexpr int32_t& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_currentNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNodeIndex;
}
constexpr int32_t const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_currentNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNodeIndex;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_currentNodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNodeIndex = value;
}
constexpr bool& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_ready()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ready;
}
constexpr bool const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_ready() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ready;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_ready(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ready = value;
}
constexpr bool& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_previousState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr bool const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_previousState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_previousState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousState = value;
}
constexpr int32_t& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_lastMinuteCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMinuteCheck;
}
constexpr int32_t const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_lastMinuteCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMinuteCheck;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_lastMinuteCheck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMinuteCheck = value;
}
constexpr bool& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_useSecondsFidelity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSecondsFidelity;
}
constexpr bool const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_useSecondsFidelity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSecondsFidelity;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_useSecondsFidelity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSecondsFidelity = value;
}
constexpr bool& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_debugTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTime;
}
constexpr bool const& GameObjectScheduling::GameObjectScheduler::__cordl_internal_get_debugTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTime;
}
constexpr void GameObjectScheduling::GameObjectScheduler::__cordl_internal_set_debugTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugTime = value;
}
inline void GameObjectScheduling::GameObjectScheduler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectScheduler::SetInitialState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"SetInitialState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectScheduler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectScheduler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectScheduler::getActiveState(::by_ref<bool>  state, ::by_ref<double_t>  totalSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"getActiveState", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, totalSeconds);
}
inline ::System::DateTime GameObjectScheduling::GameObjectScheduler::getServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"getServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectScheduler::changeActiveState(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"changeActiveState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GameObjectScheduling::GameObjectScheduler::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::GameObjectScheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::GameObjectScheduler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::GameObjectScheduler* GameObjectScheduling::GameObjectScheduler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::GameObjectScheduler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GameObjectScheduling::GameObjectScheduler::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GameObjectScheduling::GameObjectScheduler::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::GameObjectScheduler::GameObjectScheduler()   {
}
