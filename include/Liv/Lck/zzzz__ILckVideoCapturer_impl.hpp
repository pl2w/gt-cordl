#pragma once
// IWYU pragma private; include "Liv/Lck/ILckVideoCapturer.hpp"
#include "Liv/Lck/zzzz__ILckVideoCapturer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckVideoCapturer.get_ForceCaptureAllFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ILckVideoCapturer::*)()>(&::Liv::Lck::ILckVideoCapturer::get_ForceCaptureAllFrames)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckVideoCapturer.set_ForceCaptureAllFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckVideoCapturer::*)(bool)>(&::Liv::Lck::ILckVideoCapturer::set_ForceCaptureAllFrames)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckVideoCapturer.get_IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ILckVideoCapturer::*)()>(&::Liv::Lck::ILckVideoCapturer::get_IsCapturing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckVideoCapturer.StartCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckVideoCapturer::*)()>(&::Liv::Lck::ILckVideoCapturer::StartCapturing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckVideoCapturer.StopCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckVideoCapturer::*)()>(&::Liv::Lck::ILckVideoCapturer::StopCapturing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckVideoCapturer.HasCurrentFrameBeenCaptured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ILckVideoCapturer::*)()>(&::Liv::Lck::ILckVideoCapturer::HasCurrentFrameBeenCaptured)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 5}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::ILckVideoCapturer::get_ForceCaptureAllFrames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::ILckVideoCapturer::set_ForceCaptureAllFrames(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::ILckVideoCapturer::get_IsCapturing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::ILckVideoCapturer::StartCapturing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::ILckVideoCapturer::StopCapturing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::ILckVideoCapturer::HasCurrentFrameBeenCaptured()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckVideoCapturer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckVideoCapturer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckVideoCapturer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
