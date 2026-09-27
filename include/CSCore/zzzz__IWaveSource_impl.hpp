#pragma once
// IWYU pragma private; include "CSCore/IWaveSource.hpp"
#include "CSCore/zzzz__IWaveSource_def.hpp"
#include "CSCore/zzzz__IAudioSource_def.hpp"
#include "CSCore/zzzz__IReadableAudioSource_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::CSCore::IReadableAudioSource_1<uint8_t>"
constexpr  CSCore::IWaveSource::operator ::CSCore::IReadableAudioSource_1<uint8_t>*() noexcept {
return static_cast<::CSCore::IReadableAudioSource_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::CSCore::IReadableAudioSource_1<uint8_t>"
constexpr ::CSCore::IReadableAudioSource_1<uint8_t>* CSCore::IWaveSource::i___CSCore__IReadableAudioSource_1_uint8_t_() noexcept {
return static_cast<::CSCore::IReadableAudioSource_1<uint8_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::CSCore::IAudioSource"
constexpr  CSCore::IWaveSource::operator ::CSCore::IAudioSource*() noexcept {
return static_cast<::CSCore::IAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::CSCore::IAudioSource"
constexpr ::CSCore::IAudioSource* CSCore::IWaveSource::i___CSCore__IAudioSource() noexcept {
return static_cast<::CSCore::IAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  CSCore::IWaveSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* CSCore::IWaveSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
