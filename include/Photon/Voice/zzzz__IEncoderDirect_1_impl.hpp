#pragma once
// IWYU pragma private; include "Photon/Voice/IEncoderDirect_1.hpp"
#include "Photon/Voice/zzzz__IEncoderDirect_1_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename B>
inline void Photon::Voice::IEncoderDirect_1<B>::Input(B  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IEncoderDirect_1<B>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
/// @brief Convert operator to "::Photon::Voice::IEncoder"
template<typename B>
constexpr  Photon::Voice::IEncoderDirect_1<B>::operator ::Photon::Voice::IEncoder*() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IEncoder"
template<typename B>
constexpr ::Photon::Voice::IEncoder* Photon::Voice::IEncoderDirect_1<B>::i___Photon__Voice__IEncoder() noexcept {
return static_cast<::Photon::Voice::IEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename B>
constexpr  Photon::Voice::IEncoderDirect_1<B>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename B>
constexpr ::System::IDisposable* Photon::Voice::IEncoderDirect_1<B>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
