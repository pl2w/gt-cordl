#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioFader)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioFader;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioFader*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioFader*, "", "AudioFader");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioFader
class CORDL_TYPE AudioFader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioToFade, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioToFade, put=__cordl_internal_set_audioToFade)) ::UnityW<::UnityEngine::AudioSource>  audioToFade;

/// @brief Field currentFadeSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFadeSpeed, put=__cordl_internal_set_currentFadeSpeed)) float_t  currentFadeSpeed;

/// @brief Field currentVolume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentVolume, put=__cordl_internal_set_currentVolume)) float_t  currentVolume;

/// @brief Field fadeInDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeInDuration, put=__cordl_internal_set_fadeInDuration)) float_t  fadeInDuration;

/// @brief Field fadeInSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeInSpeed, put=__cordl_internal_set_fadeInSpeed)) float_t  fadeInSpeed;

/// @brief Field fadeOutDuration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutDuration, put=__cordl_internal_set_fadeOutDuration)) float_t  fadeOutDuration;

/// @brief Field fadeOutSpeed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutSpeed, put=__cordl_internal_set_fadeOutSpeed)) float_t  fadeOutSpeed;

/// @brief Field maxVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field outro, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outro, put=__cordl_internal_set_outro)) ::UnityW<::UnityEngine::AudioSource>  outro;

/// @brief Field targetVolume, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetVolume, put=__cordl_internal_set_targetVolume)) float_t  targetVolume;

/// @brief Method FadeIn, addr 0x5647714, size 0x84, virtual false, abstract: false, final false
inline void FadeIn() ;

/// @brief Method FadeOut, addr 0x5647798, size 0xf4, virtual false, abstract: false, final false
inline void FadeOut() ;

static inline ::GlobalNamespace::AudioFader* New_ctor() ;

/// @brief Method Start, addr 0x56476fc, size 0x18, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x564788c, size 0xc4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioToFade() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioToFade() ;

constexpr float_t const& __cordl_internal_get_currentFadeSpeed() const;

constexpr float_t& __cordl_internal_get_currentFadeSpeed() ;

constexpr float_t const& __cordl_internal_get_currentVolume() const;

constexpr float_t& __cordl_internal_get_currentVolume() ;

constexpr float_t const& __cordl_internal_get_fadeInDuration() const;

constexpr float_t& __cordl_internal_get_fadeInDuration() ;

constexpr float_t const& __cordl_internal_get_fadeInSpeed() const;

constexpr float_t& __cordl_internal_get_fadeInSpeed() ;

constexpr float_t const& __cordl_internal_get_fadeOutDuration() const;

constexpr float_t& __cordl_internal_get_fadeOutDuration() ;

constexpr float_t const& __cordl_internal_get_fadeOutSpeed() const;

constexpr float_t& __cordl_internal_get_fadeOutSpeed() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_outro() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_outro() ;

constexpr float_t const& __cordl_internal_get_targetVolume() const;

constexpr float_t& __cordl_internal_get_targetVolume() ;

constexpr void __cordl_internal_set_audioToFade(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentFadeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_currentVolume(float_t  value) ;

constexpr void __cordl_internal_set_fadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set_fadeInSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_fadeOutSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_outro(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_targetVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x5647950, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioFader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioFader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioFader(AudioFader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioFader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioFader(AudioFader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{692};

/// [SerializeField]
/// @brief Field audioToFade, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioToFade;

/// [SerializeField]
/// @brief Field outro, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___outro;

/// [SerializeField]
/// @brief Field fadeInDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___fadeInDuration;

/// [SerializeField]
/// @brief Field fadeOutDuration, offset: 0x34, size: 0x4, def value: None
 float_t  ___fadeOutDuration;

/// [SerializeField]
/// @brief Field maxVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxVolume;

/// @brief Field currentVolume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___currentVolume;

/// @brief Field targetVolume, offset: 0x40, size: 0x4, def value: None
 float_t  ___targetVolume;

/// @brief Field currentFadeSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___currentFadeSpeed;

/// @brief Field fadeInSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ___fadeInSpeed;

/// @brief Field fadeOutSpeed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___fadeOutSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioFader, ___audioToFade) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___outro) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___fadeInDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___fadeOutDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___maxVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___currentVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___targetVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___currentFadeSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___fadeInSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFader, ___fadeOutSpeed) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioFader) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
