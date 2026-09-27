#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioInChangeNotifier.hpp"
#include "Photon/Voice/zzzz__IAudioInChangeNotifier_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IAudioInChangeNotifier.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::IAudioInChangeNotifier::*)()>(&::Photon::Voice::IAudioInChangeNotifier::get_IsSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IAudioInChangeNotifier*>(),
                    {::i2c::class_of<::Photon::Voice::IAudioInChangeNotifier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IAudioInChangeNotifier.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IAudioInChangeNotifier::*)()>(&::Photon::Voice::IAudioInChangeNotifier::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IAudioInChangeNotifier*>(),
                    {::i2c::class_of<::Photon::Voice::IAudioInChangeNotifier*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Photon::Voice::IAudioInChangeNotifier::get_IsSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IAudioInChangeNotifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Photon::Voice::IAudioInChangeNotifier::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IAudioInChangeNotifier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::IAudioInChangeNotifier::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::IAudioInChangeNotifier::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
