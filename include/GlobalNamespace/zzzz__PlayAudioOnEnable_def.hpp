#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayAudioOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PlayAudioOnEnable)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayAudioOnEnable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayAudioOnEnable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayAudioOnEnable*, "", "PlayAudioOnEnable");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayAudioOnEnable
class CORDL_TYPE PlayAudioOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

static inline ::GlobalNamespace::PlayAudioOnEnable* New_ctor() ;

/// @brief Method OnEnable, addr 0x59d9960, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x59d99cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayAudioOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayAudioOnEnable(PlayAudioOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayAudioOnEnable(PlayAudioOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{311};

/// [SerializeField]
/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field audioClips, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayAudioOnEnable, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnEnable, ___audioClips) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayAudioOnEnable) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
