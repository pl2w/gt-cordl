#pragma once
// IWYU pragma private; include "Photon/Voice/IDecoderDirect_1.hpp"
#include "Photon/Voice/zzzz__IDecoderDirect_1_def.hpp"
#include "Photon/Voice/zzzz__IDecoder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename B>
inline ::System::Action_1<B>* Photon::Voice::IDecoderDirect_1<B>::get_Output()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDecoderDirect_1<B>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<B>*>(this, ___internal_method);
}
template<typename B>
inline void Photon::Voice::IDecoderDirect_1<B>::set_Output(::System::Action_1<B>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDecoderDirect_1<B>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Photon::Voice::IDecoder"
template<typename B>
constexpr  Photon::Voice::IDecoderDirect_1<B>::operator ::Photon::Voice::IDecoder*() noexcept {
return static_cast<::Photon::Voice::IDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDecoder"
template<typename B>
constexpr ::Photon::Voice::IDecoder* Photon::Voice::IDecoderDirect_1<B>::i___Photon__Voice__IDecoder() noexcept {
return static_cast<::Photon::Voice::IDecoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename B>
constexpr  Photon::Voice::IDecoderDirect_1<B>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename B>
constexpr ::System::IDisposable* Photon::Voice::IDecoderDirect_1<B>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
