#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UnityAudioOut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__AudioOutDelayControl_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAudioOut)
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
namespace Photon::Voice {
class ILogger;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class UnityAudioOut;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UnityAudioOut*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UnityAudioOut*, "Photon.Voice.Unity", "UnityAudioOut");
// Dependencies Photon.Voice.AudioOutDelayControl`1<T>
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.UnityAudioOut
class CORDL_TYPE UnityAudioOut : public ::Photon::Voice::AudioOutDelayControl_1<float_t> {
public:
// Declarations
 __declspec(property(get=get_OutPos)) int32_t  OutPos;

/// @brief Field clip, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

/// @brief Field source, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

static inline ::Photon::Voice::Unity::UnityAudioOut* New_ctor(::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method OutCreate, addr 0xa75f774, size 0x134, virtual true, abstract: false, final false
inline void OutCreate(int32_t  frequency, int32_t  channels, int32_t  bufferSamples) ;

/// @brief Method OutStart, addr 0xa75f8a8, size 0x98, virtual true, abstract: false, final false
inline void OutStart() ;

/// @brief Method OutWrite, addr 0xa75f940, size 0x18, virtual true, abstract: false, final false
inline void OutWrite(::ArrayW<float_t>  data, int32_t  offsetSamples) ;

/// @brief Method Stop, addr 0xa75f958, size 0xe8, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method ToggleAudioSource, addr 0xa75fa40, size 0x5c, virtual true, abstract: false, final false
inline void ToggleAudioSource(bool  toggle) ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_clip() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0xa75f5c8, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method get_OutPos, addr 0xa75f6dc, size 0x98, virtual true, abstract: false, final false
inline int32_t get_OutPos() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAudioOut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAudioOut", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAudioOut(UnityAudioOut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAudioOut", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAudioOut(UnityAudioOut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28518};

/// @brief Field source, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// @brief Field clip, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___clip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UnityAudioOut, ___source) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UnityAudioOut, ___clip) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UnityAudioOut) == 0xb8, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
