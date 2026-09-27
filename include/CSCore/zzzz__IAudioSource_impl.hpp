#pragma once
// IWYU pragma private; include "CSCore/IAudioSource.hpp"
#include "CSCore/zzzz__IAudioSource_def.hpp"
#include "CSCore/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::CSCore::IAudioSource.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CSCore::IAudioSource::*)()>(&::CSCore::IAudioSource::get_CanSeek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::IAudioSource*>(),
                    {::i2c::class_of<::CSCore::IAudioSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::IAudioSource.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CSCore::WaveFormat* (::CSCore::IAudioSource::*)()>(&::CSCore::IAudioSource::get_WaveFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::IAudioSource*>(),
                    {::i2c::class_of<::CSCore::IAudioSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::IAudioSource.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::CSCore::IAudioSource::*)()>(&::CSCore::IAudioSource::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::IAudioSource*>(),
                    {::i2c::class_of<::CSCore::IAudioSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::IAudioSource.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::IAudioSource::*)(int64_t)>(&::CSCore::IAudioSource::set_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::IAudioSource*>(),
                    {::i2c::class_of<::CSCore::IAudioSource*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::IAudioSource.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::CSCore::IAudioSource::*)()>(&::CSCore::IAudioSource::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::IAudioSource*>(),
                    {::i2c::class_of<::CSCore::IAudioSource*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool CSCore::IAudioSource::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IAudioSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::CSCore::WaveFormat* CSCore::IAudioSource::get_WaveFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IAudioSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::CSCore::WaveFormat*>(this, ___internal_method);
}
inline int64_t CSCore::IAudioSource::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IAudioSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void CSCore::IAudioSource::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IAudioSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t CSCore::IAudioSource::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IAudioSource*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  CSCore::IAudioSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* CSCore::IAudioSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
