#pragma once
// IWYU pragma private; include "Fusion/TickAccumulator.hpp"
#include "Fusion/zzzz__TickAccumulator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Fusion::TickAccumulator.get_Pending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TickAccumulator::*)()>(&::Fusion::TickAccumulator::get_Pending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_Pending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.get_Remainder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TickAccumulator::*)()>(&::Fusion::TickAccumulator::get_Remainder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_Remainder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.get_Running
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TickAccumulator::*)()>(&::Fusion::TickAccumulator::get_Running)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_Running", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.get_TimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::TickAccumulator::*)()>(&::Fusion::TickAccumulator::get_TimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_TimeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.set_TimeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TickAccumulator::*)(double_t)>(&::Fusion::TickAccumulator::set_TimeScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fa4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"set_TimeScale", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.Alpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::TickAccumulator::*)(double_t)>(&::Fusion::TickAccumulator::Alpha)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fa4b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"Alpha", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.AddTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TickAccumulator::*)(int32_t)>(&::Fusion::TickAccumulator::AddTicks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa4be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"AddTicks", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.AddTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TickAccumulator::*)(double_t, double_t, ::System::Nullable_1<int32_t>)>(&::Fusion::TickAccumulator::AddTime)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fa4bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"AddTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TickAccumulator::*)()>(&::Fusion::TickAccumulator::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TickAccumulator::*)()>(&::Fusion::TickAccumulator::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa4d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.ConsumeTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TickAccumulator::*)(::by_ref<bool>)>(&::Fusion::TickAccumulator::ConsumeTick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fa4d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"ConsumeTick", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickAccumulator.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TickAccumulator (*)()>(&::Fusion::TickAccumulator::StartNew)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fa4d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"StartNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::TickAccumulator::get_Pending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_Pending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline double_t Fusion::TickAccumulator::get_Remainder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_Remainder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline bool Fusion::TickAccumulator::get_Running()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_Running", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t Fusion::TickAccumulator::get_TimeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"get_TimeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Fusion::TickAccumulator::set_TimeScale(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"set_TimeScale", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::TickAccumulator::Alpha(double_t  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"Alpha", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, step);
}
inline void Fusion::TickAccumulator::AddTicks(int32_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"AddTicks", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticks);
}
inline void Fusion::TickAccumulator::AddTime(double_t  dt, double_t  step, ::System::Nullable_1<int32_t>  maxTicks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"AddTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dt, step, maxTicks);
}
inline void Fusion::TickAccumulator::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::TickAccumulator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::TickAccumulator::ConsumeTick(::by_ref<bool>  last)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"ConsumeTick", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, last);
}
inline ::Fusion::TickAccumulator Fusion::TickAccumulator::StartNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickAccumulator>(),
                        {"StartNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TickAccumulator>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scale", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ticks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_running", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TickAccumulator::TickAccumulator(double_t  _time, double_t  _scale, int32_t  _ticks, bool  _running) noexcept  {
this->_time = _time;
this->_scale = _scale;
this->_ticks = _ticks;
this->_running = _running;
}
// Ctor Parameters []
constexpr ::Fusion::TickAccumulator::TickAccumulator()   {
}
