#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/VoiceLipSyncMic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceLipSyncMic)
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_Marker;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Meta::WitAi::Lib {
class VoiceLipSyncMic;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Lib::VoiceLipSyncMic*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::VoiceLipSyncMic*, "Meta.WitAi.Lib", "VoiceLipSyncMic");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.VoiceLipSyncMic
class CORDL_TYPE VoiceLipSyncMic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AudioSampleRate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_AudioSampleRate, put=__cordl_internal_set_AudioSampleRate)) int32_t  AudioSampleRate;

/// @brief Field AudioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioSource, put=__cordl_internal_set_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

/// @brief Method Awake, addr 0x9e83904, size 0x21c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::Lib::VoiceLipSyncMic* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e84610, size 0x190, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e84098, size 0x1e8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMicSampleReady, addr 0x9e84564, size 0xac, virtual false, abstract: false, final false
inline void OnMicSampleReady(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker, float_t  levelMax) ;

constexpr int32_t const& __cordl_internal_get_AudioSampleRate() const;

constexpr int32_t& __cordl_internal_get_AudioSampleRate() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_AudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_AudioSource() ;

constexpr void __cordl_internal_set_AudioSampleRate(int32_t  value) ;

constexpr void __cordl_internal_set_AudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x9e84960, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLipSyncMic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLipSyncMic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLipSyncMic(VoiceLipSyncMic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLipSyncMic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLipSyncMic(VoiceLipSyncMic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25574};

/// [Tooltip("Audio desired sample size for lipsync. The mic frequency will be adjusted to match this.")]
/// @brief Field AudioSampleRate, offset: 0x20, size: 0x4, def value: None
 int32_t  ___AudioSampleRate;

/// [Tooltip("Manual specification of Audio Source. Default will use any attached to the same object.")]
/// @brief Field AudioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___AudioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::VoiceLipSyncMic, ___AudioSampleRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::VoiceLipSyncMic, ___AudioSource) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::VoiceLipSyncMic) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
