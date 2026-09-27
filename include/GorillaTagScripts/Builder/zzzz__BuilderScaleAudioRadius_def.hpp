#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderScaleAudioRadius.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderScaleAudioRadius)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderScaleAudioRadius;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderScaleAudioRadius*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderScaleAudioRadius*, "GorillaTagScripts.Builder", "BuilderScaleAudioRadius");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderScaleAudioRadius
class CORDL_TYPE BuilderScaleAudioRadius : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field autoPlay, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoPlay, put=__cordl_internal_set_autoPlay)) bool  autoPlay;

/// @brief Field autoPlaySoundBank, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoPlaySoundBank, put=__cordl_internal_set_autoPlaySoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  autoPlaySoundBank;

/// @brief Field customCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_customCurve, put=__cordl_internal_set_customCurve)) ::UnityEngine::AnimationCurve*  customCurve;

/// @brief Field enableFrame, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_enableFrame, put=__cordl_internal_set_enableFrame)) int32_t  enableFrame;

/// @brief Field maxDist, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDist, put=__cordl_internal_set_maxDist)) float_t  maxDist;

/// @brief Field minDist, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDist, put=__cordl_internal_set_minDist)) float_t  minDist;

/// @brief Field scale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field scaledCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_scaledCurve, put=__cordl_internal_set_scaledCurve)) ::UnityEngine::AnimationCurve*  scaledCurve;

/// @brief Field setScaleNextFrame, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_setScaleNextFrame, put=__cordl_internal_set_setScaleNextFrame)) bool  setScaleNextFrame;

/// @brief Field shouldRevert, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldRevert, put=__cordl_internal_set_shouldRevert)) bool  shouldRevert;

/// @brief Field useLossyScaleOnEnable, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLossyScaleOnEnable, put=__cordl_internal_set_useLossyScaleOnEnable)) bool  useLossyScaleOnEnable;

/// @brief Method LateUpdate, addr 0x5c304f8, size 0x5c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTagScripts::Builder::BuilderScaleAudioRadius* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c30478, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c3044c, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlaySound, addr 0x5c30764, size 0xd8, virtual false, abstract: false, final false
inline void PlaySound() ;

/// @brief Method RevertScale, addr 0x5c30488, size 0x70, virtual false, abstract: false, final false
inline void RevertScale() ;

/// @brief Method SetScale, addr 0x5c30554, size 0x210, virtual false, abstract: false, final false
inline void SetScale(float_t  inScale) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_autoPlay() const;

constexpr bool& __cordl_internal_get_autoPlay() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_autoPlaySoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_autoPlaySoundBank() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_customCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_customCurve() ;

constexpr int32_t const& __cordl_internal_get_enableFrame() const;

constexpr int32_t& __cordl_internal_get_enableFrame() ;

constexpr float_t const& __cordl_internal_get_maxDist() const;

constexpr float_t& __cordl_internal_get_maxDist() ;

constexpr float_t const& __cordl_internal_get_minDist() const;

constexpr float_t& __cordl_internal_get_minDist() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaledCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaledCurve() ;

constexpr bool const& __cordl_internal_get_setScaleNextFrame() const;

constexpr bool& __cordl_internal_get_setScaleNextFrame() ;

constexpr bool const& __cordl_internal_get_shouldRevert() const;

constexpr bool& __cordl_internal_get_shouldRevert() ;

constexpr bool const& __cordl_internal_get_useLossyScaleOnEnable() const;

constexpr bool& __cordl_internal_get_useLossyScaleOnEnable() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_autoPlay(bool  value) ;

constexpr void __cordl_internal_set_autoPlaySoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_customCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_enableFrame(int32_t  value) ;

constexpr void __cordl_internal_set_maxDist(float_t  value) ;

constexpr void __cordl_internal_set_minDist(float_t  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_scaledCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_setScaleNextFrame(bool  value) ;

constexpr void __cordl_internal_set_shouldRevert(bool  value) ;

constexpr void __cordl_internal_set_useLossyScaleOnEnable(bool  value) ;

/// @brief Method .ctor, addr 0x5c3083c, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderScaleAudioRadius() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderScaleAudioRadius", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderScaleAudioRadius(BuilderScaleAudioRadius && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderScaleAudioRadius", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderScaleAudioRadius(BuilderScaleAudioRadius const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4172};

/// [Tooltip("Scale particles on enable using lossy scale")]
/// [SerializeField]
/// @brief Field useLossyScaleOnEnable, offset: 0x20, size: 0x1, def value: None
 bool  ___useLossyScaleOnEnable;

/// [Tooltip("Play sound after scaling")]
/// [SerializeField]
/// @brief Field autoPlay, offset: 0x21, size: 0x1, def value: None
 bool  ___autoPlay;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [FormerlySerializedAs("soundBankToPlay")]
/// [SerializeField]
/// @brief Field autoPlaySoundBank, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___autoPlaySoundBank;

/// @brief Field minDist, offset: 0x38, size: 0x4, def value: None
 float_t  ___minDist;

/// @brief Field maxDist, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxDist;

/// @brief Field customCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___customCurve;

/// @brief Field scaledCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___scaledCurve;

/// @brief Field scale, offset: 0x50, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field shouldRevert, offset: 0x54, size: 0x1, def value: None
 bool  ___shouldRevert;

/// @brief Field setScaleNextFrame, offset: 0x55, size: 0x1, def value: None
 bool  ___setScaleNextFrame;

/// @brief Field enableFrame, offset: 0x58, size: 0x4, def value: None
 int32_t  ___enableFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___useLossyScaleOnEnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___autoPlay) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___autoPlaySoundBank) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___minDist) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___maxDist) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___customCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___scaledCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___scale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___shouldRevert) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___setScaleNextFrame) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius, ___enableFrame) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderScaleAudioRadius) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
