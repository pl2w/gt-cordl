#pragma once
// IWYU pragma private; include "Liv/Lck/ILckVideoMixer.hpp"
#include "Liv/Lck/zzzz__ILckVideoMixer_def.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "Liv/Lck/zzzz__ILckActiveCameraConfigurer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr  Liv::Lck::ILckVideoMixer::operator ::GlobalNamespace::ILckVideoTextureProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckVideoTextureProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckVideoTextureProvider"
constexpr ::GlobalNamespace::ILckVideoTextureProvider* Liv::Lck::ILckVideoMixer::i___GlobalNamespace__ILckVideoTextureProvider() noexcept {
return static_cast<::GlobalNamespace::ILckVideoTextureProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr  Liv::Lck::ILckVideoMixer::operator ::Liv::Lck::ILckActiveCameraConfigurer*() noexcept {
return static_cast<::Liv::Lck::ILckActiveCameraConfigurer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckActiveCameraConfigurer"
constexpr ::Liv::Lck::ILckActiveCameraConfigurer* Liv::Lck::ILckVideoMixer::i___Liv__Lck__ILckActiveCameraConfigurer() noexcept {
return static_cast<::Liv::Lck::ILckActiveCameraConfigurer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckVideoMixer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckVideoMixer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
