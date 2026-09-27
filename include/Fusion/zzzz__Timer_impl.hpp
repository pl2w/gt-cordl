#pragma once
// IWYU pragma private; include "Fusion/Timer.hpp"
#include "Fusion/zzzz__Timer_def.hpp"
//  Writing Method size for method: ::Fusion::Timer.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Timer (*)()>(&::Fusion::Timer::StartNew)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3fb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"StartNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.get_ElapsedInTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Fusion::Timer::*)()>(&::Fusion::Timer::get_ElapsedInTicks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3fc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_ElapsedInTicks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.get_ElapsedInMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Timer::*)()>(&::Fusion::Timer::get_ElapsedInMilliseconds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f3fc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_ElapsedInMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.get_ElapsedInSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Timer::*)()>(&::Fusion::Timer::get_ElapsedInSeconds)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f3fd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_ElapsedInSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Timer::*)()>(&::Fusion::Timer::get_IsRunning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f3fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timer::*)()>(&::Fusion::Timer::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f3fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timer::*)()>(&::Fusion::Timer::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f3fe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timer::*)()>(&::Fusion::Timer::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3ff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Timer::*)()>(&::Fusion::Timer::Restart)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f3ff18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Restart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Timer.GetDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Fusion::Timer::*)()>(&::Fusion::Timer::GetDelta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f3ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"GetDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Timer Fusion::Timer::StartNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"StartNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Timer>(nullptr, ___internal_method);
}
inline int64_t Fusion::Timer::get_ElapsedInTicks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_ElapsedInTicks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline double_t Fusion::Timer::get_ElapsedInMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_ElapsedInMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Fusion::Timer::get_ElapsedInSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_ElapsedInSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline bool Fusion::Timer::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::Timer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Timer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Timer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Timer::Restart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"Restart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int64_t Fusion::Timer::GetDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Timer>(),
                        {"GetDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_start", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_elapsed", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_running", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Timer::Timer(int64_t  _start, int64_t  _elapsed, uint8_t  _running) noexcept  {
this->_start = _start;
this->_elapsed = _elapsed;
this->_running = _running;
}
// Ctor Parameters []
constexpr ::Fusion::Timer::Timer()   {
}
