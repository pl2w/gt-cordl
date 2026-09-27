#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioPusher_1.hpp"
#include "Photon/Voice/zzzz__IAudioPusher_1_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__ObjectFactory_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void Photon::Voice::IAudioPusher_1<T>::SetCallback(::System::Action_1<::ArrayW<T>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  bufferFactory)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IAudioPusher_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, bufferFactory);
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr  Photon::Voice::IAudioPusher_1<T>::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::IAudioPusher_1<T>::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::IAudioPusher_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::IAudioPusher_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
