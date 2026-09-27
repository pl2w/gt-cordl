#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerOnSpeed.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerOnSpeed_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TriggerOnSpeed.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnSpeed::*)()>(&::GlobalNamespace::TriggerOnSpeed::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x565dcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnSpeed.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnSpeed::*)()>(&::GlobalNamespace::TriggerOnSpeed::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x565dd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnSpeed.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnSpeed::*)()>(&::GlobalNamespace::TriggerOnSpeed::Tick)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x565ddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnSpeed.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TriggerOnSpeed::*)()>(&::GlobalNamespace::TriggerOnSpeed::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565de94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnSpeed.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnSpeed::*)(bool)>(&::GlobalNamespace::TriggerOnSpeed::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565de9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnSpeed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnSpeed::*)()>(&::GlobalNamespace::TriggerOnSpeed::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565dea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_speedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedThreshold;
}
constexpr float_t const& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_speedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedThreshold;
}
constexpr void GlobalNamespace::TriggerOnSpeed::__cordl_internal_set_speedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_onFaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFaster;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_onFaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFaster;
}
constexpr void GlobalNamespace::TriggerOnSpeed::__cordl_internal_set_onFaster(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFaster = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_onSlower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSlower;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_onSlower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSlower;
}
constexpr void GlobalNamespace::TriggerOnSpeed::__cordl_internal_set_onSlower(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSlower = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::TriggerOnSpeed::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr bool& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_wasFaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasFaster;
}
constexpr bool const& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get_wasFaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasFaster;
}
constexpr void GlobalNamespace::TriggerOnSpeed::__cordl_internal_set_wasFaster(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasFaster = value;
}
constexpr bool& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::TriggerOnSpeed::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::TriggerOnSpeed::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::TriggerOnSpeed::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerOnSpeed::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerOnSpeed::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TriggerOnSpeed::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerOnSpeed::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TriggerOnSpeed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnSpeed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TriggerOnSpeed* GlobalNamespace::TriggerOnSpeed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TriggerOnSpeed*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::TriggerOnSpeed::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::TriggerOnSpeed::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerOnSpeed::TriggerOnSpeed()   {
}
