#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceEventTargets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioSourceEventTargets)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSourceEventTargets;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSourceEventTargets*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceEventTargets*, "", "AudioSourceEventTargets");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceEventTargets
class CORDL_TYPE AudioSourceEventTargets : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ExternalTriggerPlay, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExternalTriggerPlay, put=__cordl_internal_set_ExternalTriggerPlay)) bool  ExternalTriggerPlay;

/// @brief Field ExternalTriggerStop, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExternalTriggerStop, put=__cordl_internal_set_ExternalTriggerStop)) bool  ExternalTriggerStop;

/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field fadeSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeSpeed, put=__cordl_internal_set_fadeSpeed)) float_t  fadeSpeed;

/// @brief Field fadeVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeVolume, put=__cordl_internal_set_fadeVolume)) float_t  fadeVolume;

/// @brief Field lastExternalTriggerPlayMatched, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastExternalTriggerPlayMatched, put=__cordl_internal_set_lastExternalTriggerPlayMatched)) bool  lastExternalTriggerPlayMatched;

/// @brief Field lastExternalTriggerStopMatched, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastExternalTriggerStopMatched, put=__cordl_internal_set_lastExternalTriggerStopMatched)) bool  lastExternalTriggerStopMatched;

/// @brief Field lastValueWhenPlayed, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastValueWhenPlayed, put=__cordl_internal_set_lastValueWhenPlayed)) bool  lastValueWhenPlayed;

/// @brief Field lastValueWhenStopped, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastValueWhenStopped, put=__cordl_internal_set_lastValueWhenStopped)) bool  lastValueWhenStopped;

/// @brief Method Awake, addr 0x55e5d84, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioSourceEventTargets* New_ctor() ;

/// @brief Method SetFadeSpeed, addr 0x55e5dfc, size 0x14, virtual false, abstract: false, final false
inline void SetFadeSpeed(float_t  arg) ;

/// @brief Method StartFade, addr 0x55e5e10, size 0x20, virtual false, abstract: false, final false
inline void StartFade(float_t  arg) ;

/// @brief Method Update, addr 0x55e5e30, size 0x124, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_ExternalTriggerPlay() const;

constexpr bool& __cordl_internal_get_ExternalTriggerPlay() ;

constexpr bool const& __cordl_internal_get_ExternalTriggerStop() const;

constexpr bool& __cordl_internal_get_ExternalTriggerStop() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_fadeSpeed() const;

constexpr float_t& __cordl_internal_get_fadeSpeed() ;

constexpr float_t const& __cordl_internal_get_fadeVolume() const;

constexpr float_t& __cordl_internal_get_fadeVolume() ;

constexpr bool const& __cordl_internal_get_lastExternalTriggerPlayMatched() const;

constexpr bool& __cordl_internal_get_lastExternalTriggerPlayMatched() ;

constexpr bool const& __cordl_internal_get_lastExternalTriggerStopMatched() const;

constexpr bool& __cordl_internal_get_lastExternalTriggerStopMatched() ;

constexpr bool const& __cordl_internal_get_lastValueWhenPlayed() const;

constexpr bool& __cordl_internal_get_lastValueWhenPlayed() ;

constexpr bool const& __cordl_internal_get_lastValueWhenStopped() const;

constexpr bool& __cordl_internal_get_lastValueWhenStopped() ;

constexpr void __cordl_internal_set_ExternalTriggerPlay(bool  value) ;

constexpr void __cordl_internal_set_ExternalTriggerStop(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_fadeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fadeVolume(float_t  value) ;

constexpr void __cordl_internal_set_lastExternalTriggerPlayMatched(bool  value) ;

constexpr void __cordl_internal_set_lastExternalTriggerStopMatched(bool  value) ;

constexpr void __cordl_internal_set_lastValueWhenPlayed(bool  value) ;

constexpr void __cordl_internal_set_lastValueWhenStopped(bool  value) ;

/// @brief Method .ctor, addr 0x55e5f54, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceEventTargets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceEventTargets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceEventTargets(AudioSourceEventTargets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceEventTargets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceEventTargets(AudioSourceEventTargets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field fadeVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___fadeVolume;

/// @brief Field fadeSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fadeSpeed;

/// [Header("Change Value To Trigger Play (false to true and true to false both work, but value must change the frame you want it played)")]
/// @brief Field ExternalTriggerPlay, offset: 0x30, size: 0x1, def value: None
 bool  ___ExternalTriggerPlay;

/// @brief Field lastExternalTriggerPlayMatched, offset: 0x31, size: 0x1, def value: None
 bool  ___lastExternalTriggerPlayMatched;

/// @brief Field lastValueWhenPlayed, offset: 0x32, size: 0x1, def value: None
 bool  ___lastValueWhenPlayed;

/// [Header("Change Value To Trigger Stop (false to true and true to false both work, but value must change the frame you want it stopped)")]
/// @brief Field ExternalTriggerStop, offset: 0x33, size: 0x1, def value: None
 bool  ___ExternalTriggerStop;

/// @brief Field lastExternalTriggerStopMatched, offset: 0x34, size: 0x1, def value: None
 bool  ___lastExternalTriggerStopMatched;

/// @brief Field lastValueWhenStopped, offset: 0x35, size: 0x1, def value: None
 bool  ___lastValueWhenStopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___fadeVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___fadeSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___ExternalTriggerPlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___lastExternalTriggerPlayMatched) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___lastValueWhenPlayed) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___ExternalTriggerStop) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___lastExternalTriggerStopMatched) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceEventTargets, ___lastValueWhenStopped) == 0x35, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceEventTargets) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
