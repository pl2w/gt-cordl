#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaPlayerTimerCountDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaPlayerTimerCountDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bca26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bca4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.TryInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::TryInit)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5bca270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"TryInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnDisable)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5bca4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.OnLocalTimerStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnLocalTimerStarted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bca6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnLocalTimerStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.OnTimerStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)(int32_t, int32_t)>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnTimerStopped)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5bca734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnTimerStopped", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.UpdateLatestTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::UpdateLatestTime)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bca8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"UpdateLatestTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)(bool)>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bcab34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaPlayerTimerCountDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaPlayerTimerCountDisplay::*)()>(&::GorillaTagScripts::GorillaPlayerTimerCountDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcab38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_get_displayText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_get_displayText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayText;
}
constexpr void GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_set_displayText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayText = value;
}
constexpr bool& GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr bool& GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTagScripts::GorillaPlayerTimerCountDisplay::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::TryInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"TryInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnLocalTimerStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnLocalTimerStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::OnTimerStopped(int32_t  actorNum, int32_t  timeDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"OnTimerStopped", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNum, timeDelta);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::UpdateLatestTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"UpdateLatestTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GorillaPlayerTimerCountDisplay::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaPlayerTimerCountDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaPlayerTimerCountDisplay* GorillaTagScripts::GorillaPlayerTimerCountDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaPlayerTimerCountDisplay*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTagScripts::GorillaPlayerTimerCountDisplay::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTagScripts::GorillaPlayerTimerCountDisplay::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaPlayerTimerCountDisplay::GorillaPlayerTimerCountDisplay()   {
}
