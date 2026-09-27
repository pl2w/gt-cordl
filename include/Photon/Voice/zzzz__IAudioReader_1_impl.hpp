#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioReader_1.hpp"
#include "Photon/Voice/zzzz__IAudioReader_1_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::Photon::Voice::IDataReader_1<T>"
template<typename T>
constexpr  Photon::Voice::IAudioReader_1<T>::operator ::Photon::Voice::IDataReader_1<T>*() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDataReader_1<T>"
template<typename T>
constexpr ::Photon::Voice::IDataReader_1<T>* Photon::Voice::IAudioReader_1<T>::i___Photon__Voice__IDataReader_1_T_() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::IAudioReader_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::IAudioReader_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr  Photon::Voice::IAudioReader_1<T>::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::IAudioReader_1<T>::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
