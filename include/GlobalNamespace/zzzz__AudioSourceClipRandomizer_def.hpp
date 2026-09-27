#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceClipRandomizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AudioSourceClipRandomizer)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSourceClipRandomizer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSourceClipRandomizer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceClipRandomizer*, "", "AudioSourceClipRandomizer");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceClipRandomizer
class CORDL_TYPE AudioSourceClipRandomizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clips, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clips, put=__cordl_internal_set_clips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  clips;

/// @brief Field playOnAwake, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_playOnAwake, put=__cordl_internal_set_playOnAwake)) bool  playOnAwake;

/// @brief Field source, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

/// @brief Method Awake, addr 0x55e5b60, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioSourceClipRandomizer* New_ctor() ;

/// @brief Method OnEnable, addr 0x55e5d6c, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x55e5bf0, size 0x17c, virtual false, abstract: false, final false
inline void Play() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_clips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_clips() ;

constexpr bool const& __cordl_internal_get_playOnAwake() const;

constexpr bool& __cordl_internal_get_playOnAwake() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_playOnAwake(bool  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x55e5d7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceClipRandomizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceClipRandomizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceClipRandomizer(AudioSourceClipRandomizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceClipRandomizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceClipRandomizer(AudioSourceClipRandomizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18};

/// [SerializeField]
/// @brief Field clips, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___clips;

/// @brief Field source, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// @brief Field playOnAwake, offset: 0x30, size: 0x1, def value: None
 bool  ___playOnAwake;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceClipRandomizer, ___clips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceClipRandomizer, ___source) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceClipRandomizer, ___playOnAwake) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceClipRandomizer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
