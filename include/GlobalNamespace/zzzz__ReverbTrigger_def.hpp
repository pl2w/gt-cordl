#pragma once
// IWYU pragma private; include "GlobalNamespace/ReverbTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReverbTrigger)
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class ReverbTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReverbTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReverbTrigger*, "", "ReverbTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReverbTrigger
class CORDL_TYPE ReverbTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field mixer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixer, put=__cordl_internal_set_mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  mixer;

/// @brief Field normalSnapshot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalSnapshot, put=__cordl_internal_set_normalSnapshot)) ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  normalSnapshot;

/// @brief Field reverbTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_reverbTrigger, put=__cordl_internal_set_reverbTrigger)) ::UnityW<::UnityEngine::Collider>  reverbTrigger;

/// @brief Field targetSnapshot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetSnapshot, put=__cordl_internal_set_targetSnapshot)) ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  targetSnapshot;

/// @brief Field transitionTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionTime, put=__cordl_internal_set_transitionTime)) float_t  transitionTime;

static inline ::GlobalNamespace::ReverbTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5740754, size 0x50, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57407a4, size 0x50, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_mixer() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_normalSnapshot() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_normalSnapshot() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_reverbTrigger() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_reverbTrigger() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_targetSnapshot() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_targetSnapshot() ;

constexpr float_t const& __cordl_internal_get_transitionTime() const;

constexpr float_t& __cordl_internal_get_transitionTime() ;

constexpr void __cordl_internal_set_mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_normalSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value) ;

constexpr void __cordl_internal_set_reverbTrigger(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_targetSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value) ;

constexpr void __cordl_internal_set_transitionTime(float_t  value) ;

/// @brief Method .ctor, addr 0x57407f4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReverbTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReverbTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReverbTrigger(ReverbTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReverbTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReverbTrigger(ReverbTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1244};

/// [SerializeField]
/// @brief Field mixer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___mixer;

/// [SerializeField]
/// @brief Field targetSnapshot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  ___targetSnapshot;

/// [SerializeField]
/// @brief Field normalSnapshot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  ___normalSnapshot;

/// [SerializeField]
/// @brief Field reverbTrigger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___reverbTrigger;

/// [SerializeField]
/// @brief Field transitionTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___transitionTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReverbTrigger, ___mixer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbTrigger, ___targetSnapshot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbTrigger, ___normalSnapshot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbTrigger, ___reverbTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReverbTrigger, ___transitionTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReverbTrigger) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
