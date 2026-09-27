#pragma once
// IWYU pragma private; include "GlobalNamespace/MonoBehaviourTick.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourTick.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonoBehaviourTick::*)()>(&::GlobalNamespace::MonoBehaviourTick::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourTick.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourTick::*)(bool)>(&::GlobalNamespace::MonoBehaviourTick::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourTick.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourTick::*)()>(&::GlobalNamespace::MonoBehaviourTick::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adc1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourTick.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourTick::*)()>(&::GlobalNamespace::MonoBehaviourTick::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adc224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourTick.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourTick::*)()>(&::GlobalNamespace::MonoBehaviourTick::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                    {::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonoBehaviourTick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonoBehaviourTick::*)()>(&::GlobalNamespace::MonoBehaviourTick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MonoBehaviourTick::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::MonoBehaviourTick::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::MonoBehaviourTick::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::MonoBehaviourTick::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourTick::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonoBehaviourTick::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourTick::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourTick::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonoBehaviourTick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonoBehaviourTick*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonoBehaviourTick* GlobalNamespace::MonoBehaviourTick::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonoBehaviourTick*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::MonoBehaviourTick::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::MonoBehaviourTick::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonoBehaviourTick::MonoBehaviourTick()   {
}
