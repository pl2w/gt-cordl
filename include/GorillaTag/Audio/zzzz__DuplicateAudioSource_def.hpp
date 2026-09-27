#pragma once
// IWYU pragma private; include "GorillaTag/Audio/DuplicateAudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DuplicateAudioSource)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTag::Audio {
class DuplicateAudioSource;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::DuplicateAudioSource*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::DuplicateAudioSource*, "GorillaTag.Audio", "DuplicateAudioSource");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.DuplicateAudioSource
class CORDL_TYPE DuplicateAudioSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TargetAudioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetAudioSource, put=__cordl_internal_set_TargetAudioSource)) ::UnityW<::UnityEngine::AudioSource>  TargetAudioSource;

/// @brief Field _audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _isDuplicating, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDuplicating, put=__cordl_internal_set__isDuplicating)) bool  _isDuplicating;

/// @brief Method LateUpdate, addr 0x5d4fee0, size 0x94, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Audio::DuplicateAudioSource* New_ctor() ;

/// @brief Method SetTargetAudioSource, addr 0x5d4fe04, size 0x1c, virtual false, abstract: false, final false
inline void SetTargetAudioSource(::UnityEngine::AudioSource*  target) ;

/// [ContextMenu("Start Duplicating")]
/// @brief Method StartDuplicating, addr 0x5d4fe20, size 0xa0, virtual false, abstract: false, final false
inline void StartDuplicating() ;

/// [ContextMenu("Stop Duplicating")]
/// @brief Method StopDuplicating, addr 0x5d4fec0, size 0x20, virtual false, abstract: false, final false
inline void StopDuplicating() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_TargetAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_TargetAudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr bool const& __cordl_internal_get__isDuplicating() const;

constexpr bool& __cordl_internal_get__isDuplicating() ;

constexpr void __cordl_internal_set_TargetAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__isDuplicating(bool  value) ;

/// @brief Method .ctor, addr 0x5d4ff74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DuplicateAudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DuplicateAudioSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DuplicateAudioSource(DuplicateAudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DuplicateAudioSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DuplicateAudioSource(DuplicateAudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4787};

/// @brief Field TargetAudioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___TargetAudioSource;

/// [SerializeField]
/// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [SerializeField]
/// @brief Field _isDuplicating, offset: 0x30, size: 0x1, def value: None
 bool  ____isDuplicating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::DuplicateAudioSource, ___TargetAudioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::DuplicateAudioSource, ____audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::DuplicateAudioSource, ____isDuplicating) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::DuplicateAudioSource) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::Audio
