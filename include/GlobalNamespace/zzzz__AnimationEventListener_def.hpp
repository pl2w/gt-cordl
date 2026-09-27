#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationEventListener)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationEventListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationEventListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationEventListener*, "", "AnimationEventListener");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationEventListener
class CORDL_TYPE AnimationEventListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioClips, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field particles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Field targetObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetObject, put=__cordl_internal_set_targetObject)) ::UnityW<::UnityEngine::GameObject>  targetObject;

/// @brief Method ActivateObject, addr 0x579f970, size 0x88, virtual false, abstract: false, final false
inline void ActivateObject() ;

/// @brief Method DeactivateObject, addr 0x579f9f8, size 0x88, virtual false, abstract: false, final false
inline void DeactivateObject() ;

static inline ::GlobalNamespace::AnimationEventListener* New_ctor() ;

/// @brief Method PlayParticles, addr 0x579fb1c, size 0x98, virtual false, abstract: false, final false
inline void PlayParticles() ;

/// @brief Method PlaySoundAtIndex, addr 0x579f7c4, size 0x114, virtual false, abstract: false, final false
inline void PlaySoundAtIndex(int32_t  index) ;

/// @brief Method StopAudio, addr 0x579f8d8, size 0x98, virtual false, abstract: false, final false
inline void StopAudio() ;

/// @brief Method StopParticles, addr 0x579fbb4, size 0x98, virtual false, abstract: false, final false
inline void StopParticles() ;

/// @brief Method ToggleObject, addr 0x579fa80, size 0x9c, virtual false, abstract: false, final false
inline void ToggleObject() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetObject() ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x579fc4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationEventListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationEventListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationEventListener(AnimationEventListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationEventListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationEventListener(AnimationEventListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1524};

/// [Tooltip("Set this if calling ActivateObject, DeactivateObject, or ToggleObject")]
/// [SerializeField]
/// @brief Field targetObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetObject;

/// [Tooltip("Set this if calling PlayParticles or StopParticles")]
/// [SerializeField]
/// @brief Field particles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// [Tooltip("Set this if calling PlaySoundAtIndex or StopAudio")]
/// [SerializeField]
/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Tooltip("Set this if calling PlaySoundAtIndex")]
/// [SerializeField]
/// @brief Field audioClips, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationEventListener, ___targetObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationEventListener, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationEventListener, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationEventListener, ___audioClips) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationEventListener) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
