#pragma once
// IWYU pragma private; include "Fusion/TimerDelta.hpp"
#include "Fusion/zzzz__Timer_impl.hpp"
#include "Fusion/zzzz__TimerDelta_def.hpp"
//  Writing Method size for method: ::Fusion::TimerDelta.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TimerDelta::*)()>(&::Fusion::TimerDelta::get_IsRunning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f3ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimerDelta.Consume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimerDelta::*)()>(&::Fusion::TimerDelta::Consume)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f3fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"Consume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimerDelta.Peek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TimerDelta::*)()>(&::Fusion::TimerDelta::Peek)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f40110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"Peek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TimerDelta.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TimerDelta (*)()>(&::Fusion::TimerDelta::StartNew)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f40228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"StartNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::TimerDelta::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t Fusion::TimerDelta::Consume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"Consume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Fusion::TimerDelta::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::Fusion::TimerDelta Fusion::TimerDelta::StartNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TimerDelta>(),
                        {"StartNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TimerDelta>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_timer", ty: "::Fusion::Timer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timerLast", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TimerDelta::TimerDelta(::Fusion::Timer  _timer, double_t  _timerLast) noexcept  {
this->_timer = _timer;
this->_timerLast = _timerLast;
}
// Ctor Parameters []
constexpr ::Fusion::TimerDelta::TimerDelta()   {
}
