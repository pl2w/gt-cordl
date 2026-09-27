#pragma once
// IWYU pragma private; include "Liv/NativeAudioBridge/INativeAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(INativeAudioPlayer)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Liv::NativeAudioBridge {
class INativeAudioPlayer;
}
// Write type traits
MARK_REF_T(::Liv::NativeAudioBridge::INativeAudioPlayer*);
DEFINE_IL2CPP_CLASS(::Liv::NativeAudioBridge::INativeAudioPlayer*, "Liv.NativeAudioBridge", "INativeAudioPlayer");
// Dependencies 
namespace Liv::NativeAudioBridge {
// Is value type: false
// CS Name: Liv.NativeAudioBridge.INativeAudioPlayer
class CORDL_TYPE INativeAudioPlayer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method PlayAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PlayAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume) ;

/// @brief Method PreloadAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreloadAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload) ;

/// @brief Method StopAllAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StopAllAudio() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INativeAudioPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INativeAudioPlayer(INativeAudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33091};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::NativeAudioBridge
