#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSourceLoudness)
namespace GlobalNamespace {
class ISpeakerLoudness;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSourceLoudness;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSourceLoudness*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceLoudness*, "", "AudioSourceLoudness");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceLoudness
class CORDL_TYPE AudioSourceLoudness : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsMicEnabled)) bool  IsMicEnabled;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Loudness)) float_t  Loudness;

/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field loudness, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudness, put=__cordl_internal_set_loudness)) float_t  loudness;

/// @brief Field sampleBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleBuffer, put=__cordl_internal_set_sampleBuffer)) ::ArrayW<float_t>  sampleBuffer;

/// @brief Field sampleWindow, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleWindow, put=__cordl_internal_set_sampleWindow)) int32_t  sampleWindow;

/// @brief Convert operator to "::GlobalNamespace::ISpeakerLoudness"
constexpr operator  ::GlobalNamespace::ISpeakerLoudness*() noexcept;

/// @brief Method Awake, addr 0x57a066c, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioSourceLoudness* New_ctor() ;

/// @brief Method Update, addr 0x57a0744, size 0xf4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_loudness() const;

constexpr float_t& __cordl_internal_get_loudness() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_sampleBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_sampleBuffer() ;

constexpr int32_t const& __cordl_internal_get_sampleWindow() const;

constexpr int32_t& __cordl_internal_get_sampleWindow() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loudness(float_t  value) ;

constexpr void __cordl_internal_set_sampleBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_sampleWindow(int32_t  value) ;

/// @brief Method .ctor, addr 0x57a0838, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsMicEnabled, addr 0x57a0664, size 0x8, virtual true, abstract: false, final true
inline bool get_IsMicEnabled() ;

/// @brief Method get_IsSpeaking, addr 0x57a05d4, size 0x88, virtual true, abstract: false, final true
inline bool get_IsSpeaking() ;

/// @brief Method get_Loudness, addr 0x57a065c, size 0x8, virtual true, abstract: false, final true
inline float_t get_Loudness() ;

/// @brief Convert to "::GlobalNamespace::ISpeakerLoudness"
constexpr ::GlobalNamespace::ISpeakerLoudness* i___GlobalNamespace__ISpeakerLoudness() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceLoudness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceLoudness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceLoudness(AudioSourceLoudness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceLoudness(AudioSourceLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1530};

/// [SerializeField]
/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Tooltip("Number of output samples averaged per frame to compute loudness.")]
/// [SerializeField]
/// @brief Field sampleWindow, offset: 0x28, size: 0x4, def value: None
 int32_t  ___sampleWindow;

/// @brief Field loudness, offset: 0x2c, size: 0x4, def value: None
 float_t  ___loudness;

/// @brief Field sampleBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___sampleBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceLoudness, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceLoudness, ___sampleWindow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceLoudness, ___loudness) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceLoudness, ___sampleBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceLoudness) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
