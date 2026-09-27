#pragma once
// IWYU pragma private; include "GorillaTagScripts/UnMuteAudioSourceOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnMuteAudioSourceOnEnable)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTagScripts {
class UnMuteAudioSourceOnEnable;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::UnMuteAudioSourceOnEnable*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::UnMuteAudioSourceOnEnable*, "GorillaTagScripts", "UnMuteAudioSourceOnEnable");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.UnMuteAudioSourceOnEnable
class CORDL_TYPE UnMuteAudioSourceOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field originalVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalVolume, put=__cordl_internal_set_originalVolume)) float_t  originalVolume;

/// @brief Method Awake, addr 0x5bd40e0, size 0x28, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::UnMuteAudioSourceOnEnable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bd4128, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bd4108, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_originalVolume() const;

constexpr float_t& __cordl_internal_get_originalVolume() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_originalVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x5bd4144, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnMuteAudioSourceOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnMuteAudioSourceOnEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnMuteAudioSourceOnEnable(UnMuteAudioSourceOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnMuteAudioSourceOnEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnMuteAudioSourceOnEnable(UnMuteAudioSourceOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4013};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field originalVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___originalVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::UnMuteAudioSourceOnEnable, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UnMuteAudioSourceOnEnable, ___originalVolume) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::UnMuteAudioSourceOnEnable) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
