#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLooper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLooper)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLooper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioLooper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioLooper*, "", "AudioLooper");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioLooper
class CORDL_TYPE AudioLooper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field interjectionClips, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_interjectionClips, put=__cordl_internal_set_interjectionClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  interjectionClips;

/// @brief Field interjectionLikelyhood, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_interjectionLikelyhood, put=__cordl_internal_set_interjectionLikelyhood)) float_t  interjectionLikelyhood;

/// @brief Field loopClip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopClip, put=__cordl_internal_set_loopClip)) ::UnityW<::UnityEngine::AudioClip>  loopClip;

/// @brief Method Awake, addr 0x5ae0ff8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioLooper* New_ctor() ;

/// @brief Method Update, addr 0x5ae1050, size 0x138, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_interjectionClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_interjectionClips() ;

constexpr float_t const& __cordl_internal_get_interjectionLikelyhood() const;

constexpr float_t& __cordl_internal_get_interjectionLikelyhood() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_loopClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_loopClip() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_interjectionClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_interjectionLikelyhood(float_t  value) ;

constexpr void __cordl_internal_set_loopClip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5ae1188, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioLooper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioLooper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLooper(AudioLooper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLooper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLooper(AudioLooper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3458};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field loopClip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___loopClip;

/// [SerializeField]
/// @brief Field interjectionClips, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___interjectionClips;

/// [SerializeField]
/// @brief Field interjectionLikelyhood, offset: 0x38, size: 0x4, def value: None
 float_t  ___interjectionLikelyhood;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLooper, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLooper, ___loopClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLooper, ___interjectionClips) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLooper, ___interjectionLikelyhood) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioLooper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
