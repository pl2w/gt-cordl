#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/ILckCaptureErrorDispatcher.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__ILckCaptureErrorDispatcher_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher.PushError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher::*)(::Liv::Lck::ErrorHandling::LckCaptureError)>(&::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher::PushError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(),
                    {::i2c::class_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher::PushError(::Liv::Lck::ErrorHandling::LckCaptureError  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
