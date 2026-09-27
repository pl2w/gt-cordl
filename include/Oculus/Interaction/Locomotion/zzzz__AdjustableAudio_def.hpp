#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/AdjustableAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableAudio)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class AdjustableAudio;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::AdjustableAudio*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::AdjustableAudio*, "Oculus.Interaction.Locomotion", "AdjustableAudio");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.AdjustableAudio
class CORDL_TYPE AdjustableAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AudioClip, put=set_AudioClip)) ::UnityW<::UnityEngine::AudioClip>  AudioClip;

 __declspec(property(get=get_PitchCurve, put=set_PitchCurve)) ::UnityEngine::AnimationCurve*  PitchCurve;

 __declspec(property(get=get_VolumeCurve, put=set_VolumeCurve)) ::UnityEngine::AnimationCurve*  VolumeCurve;

 __declspec(property(get=get_VolumeFactor, put=set_VolumeFactor)) float_t  VolumeFactor;

/// @brief Field _audioClip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioClip, put=__cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip>  _audioClip;

/// @brief Field _audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _pitchCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitchCurve, put=__cordl_internal_set__pitchCurve)) ::UnityEngine::AnimationCurve*  _pitchCurve;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _volumeCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeCurve, put=__cordl_internal_set__volumeCurve)) ::UnityEngine::AnimationCurve*  _volumeCurve;

/// @brief Field _volumeFactor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__volumeFactor, put=__cordl_internal_set__volumeFactor)) float_t  _volumeFactor;

/// @brief Method InjectAllAdjustableAudio, addr 0xa42ded4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllAdjustableAudio(::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method InjectAudioSource, addr 0xa42dedc, size 0x8, virtual false, abstract: false, final false
inline void InjectAudioSource(::UnityEngine::AudioSource*  audioSource) ;

static inline ::Oculus::Interaction::Locomotion::AdjustableAudio* New_ctor() ;

/// @brief Method PlayAudio, addr 0xa42ddf8, size 0xdc, virtual false, abstract: false, final false
inline void PlayAudio(float_t  volumeT, float_t  pitchT, float_t  pan) ;

/// @brief Method Reset, addr 0xa42dd40, size 0x8c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa42ddcc, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__pitchCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__pitchCurve() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__volumeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__volumeCurve() ;

constexpr float_t const& __cordl_internal_get__volumeFactor() const;

constexpr float_t& __cordl_internal_get__volumeFactor() ;

constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__pitchCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__volumeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__volumeFactor(float_t  value) ;

/// @brief Method .ctor, addr 0xa42dee4, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioClip, addr 0xa42dd00, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_AudioClip() ;

/// @brief Method get_PitchCurve, addr 0xa42dd30, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_PitchCurve() ;

/// @brief Method get_VolumeCurve, addr 0xa42dd20, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_VolumeCurve() ;

/// @brief Method get_VolumeFactor, addr 0xa42dd10, size 0x8, virtual false, abstract: false, final false
inline float_t get_VolumeFactor() ;

/// @brief Method set_AudioClip, addr 0xa42dd08, size 0x8, virtual false, abstract: false, final false
inline void set_AudioClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_PitchCurve, addr 0xa42dd38, size 0x8, virtual false, abstract: false, final false
inline void set_PitchCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_VolumeCurve, addr 0xa42dd28, size 0x8, virtual false, abstract: false, final false
inline void set_VolumeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_VolumeFactor, addr 0xa42dd18, size 0x8, virtual false, abstract: false, final false
inline void set_VolumeFactor(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableAudio", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableAudio(AdjustableAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableAudio(AdjustableAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28266};

/// [SerializeField]
/// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [SerializeField]
/// @brief Field _audioClip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____audioClip;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _volumeFactor, offset: 0x30, size: 0x4, def value: None
 float_t  ____volumeFactor;

/// [SerializeField]
/// @brief Field _volumeCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____volumeCurve;

/// [SerializeField]
/// @brief Field _pitchCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____pitchCurve;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::AdjustableAudio, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AdjustableAudio, ____audioClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AdjustableAudio, ____volumeFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AdjustableAudio, ____volumeCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AdjustableAudio, ____pitchCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::AdjustableAudio, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::AdjustableAudio) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
