#pragma once
// IWYU pragma private; include "Liv/Lck/ILckPhotoCapture.hpp"
#include "Liv/Lck/zzzz__ILckPhotoCapture_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckPhotoCapture.Capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckPhotoCapture::*)()>(&::Liv::Lck::ILckPhotoCapture::Capture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckPhotoCapture*>(),
                    {::i2c::class_of<::Liv::Lck::ILckPhotoCapture*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult* Liv::Lck::ILckPhotoCapture::Capture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckPhotoCapture*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckPhotoCapture::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckPhotoCapture::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
