#pragma once
// IWYU pragma private; include "GlobalNamespace/ReplacementVoice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReplacementVoice)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class ReplacementVoice;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReplacementVoice*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReplacementVoice*, "", "ReplacementVoice");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReplacementVoice
class CORDL_TYPE ReplacementVoice : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field loudReplacementVoiceThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudReplacementVoiceThreshold, put=__cordl_internal_set_loudReplacementVoiceThreshold)) float_t  loudReplacementVoiceThreshold;

/// @brief Field loudVolume, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudVolume, put=__cordl_internal_set_loudVolume)) float_t  loudVolume;

/// @brief Field myVRRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myVRRig, put=__cordl_internal_set_myVRRig)) ::UnityW<::GlobalNamespace::VRRig>  myVRRig;

/// @brief Field normalVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalVolume, put=__cordl_internal_set_normalVolume)) float_t  normalVolume;

/// @brief Field replacementVoiceClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_replacementVoiceClips, put=__cordl_internal_set_replacementVoiceClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  replacementVoiceClips;

/// @brief Field replacementVoiceClipsLoud, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_replacementVoiceClipsLoud, put=__cordl_internal_set_replacementVoiceClipsLoud)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  replacementVoiceClipsLoud;

/// @brief Field replacementVoiceSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_replacementVoiceSource, put=__cordl_internal_set_replacementVoiceSource)) ::UnityW<::UnityEngine::AudioSource>  replacementVoiceSource;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GlobalNamespace::ReplacementVoice* New_ctor() ;

/// @brief Method OnDisable, addr 0x597ebcc, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x597ebc0, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x597ebd8, size 0x3f4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr float_t const& __cordl_internal_get_loudReplacementVoiceThreshold() const;

constexpr float_t& __cordl_internal_get_loudReplacementVoiceThreshold() ;

constexpr float_t const& __cordl_internal_get_loudVolume() const;

constexpr float_t& __cordl_internal_get_loudVolume() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myVRRig() ;

constexpr float_t const& __cordl_internal_get_normalVolume() const;

constexpr float_t& __cordl_internal_get_normalVolume() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_replacementVoiceClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_replacementVoiceClips() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_replacementVoiceClipsLoud() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_replacementVoiceClipsLoud() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_replacementVoiceSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_replacementVoiceSource() ;

constexpr void __cordl_internal_set_loudReplacementVoiceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_loudVolume(float_t  value) ;

constexpr void __cordl_internal_set_myVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_normalVolume(float_t  value) ;

constexpr void __cordl_internal_set_replacementVoiceClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_replacementVoiceClipsLoud(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_replacementVoiceSource(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x597efcc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReplacementVoice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReplacementVoice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReplacementVoice(ReplacementVoice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReplacementVoice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReplacementVoice(ReplacementVoice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2528};

/// @brief Field replacementVoiceSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___replacementVoiceSource;

/// @brief Field replacementVoiceClips, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___replacementVoiceClips;

/// @brief Field replacementVoiceClipsLoud, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___replacementVoiceClipsLoud;

/// @brief Field loudReplacementVoiceThreshold, offset: 0x38, size: 0x4, def value: None
 float_t  ___loudReplacementVoiceThreshold;

/// @brief Field myVRRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myVRRig;

/// @brief Field normalVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___normalVolume;

/// @brief Field loudVolume, offset: 0x4c, size: 0x4, def value: None
 float_t  ___loudVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___replacementVoiceSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___replacementVoiceClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___replacementVoiceClipsLoud) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___loudReplacementVoiceThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___myVRRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___normalVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplacementVoice, ___loudVolume) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReplacementVoice) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
