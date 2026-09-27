#pragma once
// IWYU pragma private; include "Liv/Lck/ILckAudioMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ILckAudioMixer)
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckAudioMixer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckAudioMixer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckAudioMixer*, "Liv.Lck", "ILckAudioMixer");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckAudioMixer
class CORDL_TYPE ILckAudioMixer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GetGameOutputLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetGameOutputLevel() ;

/// @brief Method GetMicrophoneCaptureActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* GetMicrophoneCaptureActive() ;

/// @brief Method GetMicrophoneOutputLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetMicrophoneOutputLevel() ;

/// @brief Method GetMixedAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::Collections::AudioBuffer* GetMixedAudio(float_t  recordingTime) ;

/// @brief Method IsGameAudioMute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsGameAudioMute() ;

/// @brief Method ReadAvailableAudioData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReadAvailableAudioData() ;

/// @brief Method SetGameAudioGain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetGameAudioGain(float_t  gain) ;

/// @brief Method SetGameAudioMute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetGameAudioMute(bool  isMute) ;

/// @brief Method SetMicrophoneCaptureActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetMicrophoneCaptureActive(bool  isOpen) ;

/// @brief Method SetMicrophoneGain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetMicrophoneGain(float_t  gain) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckAudioMixer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckAudioMixer(ILckAudioMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
