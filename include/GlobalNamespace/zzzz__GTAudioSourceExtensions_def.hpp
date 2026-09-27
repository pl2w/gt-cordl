#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAudioSourceExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTAudioSourceExtensions)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTAudioSourceExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTAudioSourceExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAudioSourceExtensions*, "", "GTAudioSourceExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTAudioSourceExtensions
class CORDL_TYPE GTAudioSourceExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GTPause, addr 0x5673988, size 0x14, virtual false, abstract: false, final false
static inline void GTPause(::UnityEngine::AudioSource*  audioSource) ;

/// [Extension]
/// @brief Method GTPlay, addr 0x5673960, size 0x14, virtual false, abstract: false, final false
static inline void GTPlay(::UnityEngine::AudioSource*  audioSource) ;

/// [Extension]
/// @brief Method GTPlay, addr 0x5673974, size 0x14, virtual false, abstract: false, final false
static inline void GTPlay(::UnityEngine::AudioSource*  audioSource, uint64_t  delay) ;

/// @brief Method GTPlayClipAtPoint, addr 0x56739ec, size 0x8, virtual false, abstract: false, final false
static inline void GTPlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position) ;

/// @brief Method GTPlayClipAtPoint, addr 0x56739f4, size 0x8, virtual false, abstract: false, final false
static inline void GTPlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, float_t  volume) ;

/// [Extension]
/// @brief Method GTPlayDelayed, addr 0x56739c4, size 0x14, virtual false, abstract: false, final false
static inline void GTPlayDelayed(::UnityEngine::AudioSource*  audioSource, float_t  delay) ;

/// [Extension]
/// @brief Method GTPlayOneShot, addr 0x567394c, size 0x14, virtual false, abstract: false, final false
static inline void GTPlayOneShot(::UnityEngine::AudioSource*  audioSource, ::UnityEngine::AudioClip*  clip, float_t  volumeScale) ;

/// [Extension]
/// @brief Method GTPlayOneShot, addr 0x5673804, size 0x148, virtual false, abstract: false, final false
static inline void GTPlayOneShot(::UnityEngine::AudioSource*  audioSource, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AudioClip>>*  clips, float_t  volumeScale) ;

/// [Extension]
/// @brief Method GTPlayScheduled, addr 0x56739d8, size 0x14, virtual false, abstract: false, final false
static inline void GTPlayScheduled(::UnityEngine::AudioSource*  audioSource, double_t  time) ;

/// [Extension]
/// @brief Method GTStop, addr 0x56739b0, size 0x14, virtual false, abstract: false, final false
static inline void GTStop(::UnityEngine::AudioSource*  audioSource) ;

/// [Extension]
/// @brief Method GTUnPause, addr 0x567399c, size 0x14, virtual false, abstract: false, final false
static inline void GTUnPause(::UnityEngine::AudioSource*  audioSource) ;

/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method _BetaLogIfAudioSourceIsNotActiveAndEnabled, addr 0x56739fc, size 0x4, virtual false, abstract: false, final false
static inline void _BetaLogIfAudioSourceIsNotActiveAndEnabled(::UnityEngine::AudioSource*  audioSource) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAudioSourceExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAudioSourceExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAudioSourceExtensions(GTAudioSourceExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAudioSourceExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAudioSourceExtensions(GTAudioSourceExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTAudioSourceExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
