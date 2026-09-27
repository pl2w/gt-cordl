#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersVoiceNoise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersVoiceNoise)
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersVoiceNoise;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersVoiceNoise*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersVoiceNoise*, "", "CrittersVoiceNoise");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersVoiceNoise
class CORDL_TYPE CrittersVoiceNoise : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxTriggerThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTriggerThreshold, put=__cordl_internal_set_maxTriggerThreshold)) float_t  maxTriggerThreshold;

/// @brief Field minTriggerThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTriggerThreshold, put=__cordl_internal_set_minTriggerThreshold)) float_t  minTriggerThreshold;

/// @brief Field noisVolumeMax, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_noisVolumeMax, put=__cordl_internal_set_noisVolumeMax)) float_t  noisVolumeMax;

/// @brief Field noiseVolumeMin, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseVolumeMin, put=__cordl_internal_set_noiseVolumeMin)) float_t  noiseVolumeMin;

/// @brief Field rig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field speaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_speaker, put=__cordl_internal_set_speaker)) ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  speaker;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GlobalNamespace::CrittersVoiceNoise* New_ctor() ;

/// @brief Method OnDisable, addr 0x56f58bc, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56f58b0, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x56f58c8, size 0x250, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x56f5858, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_maxTriggerThreshold() const;

constexpr float_t& __cordl_internal_get_maxTriggerThreshold() ;

constexpr float_t const& __cordl_internal_get_minTriggerThreshold() const;

constexpr float_t& __cordl_internal_get_minTriggerThreshold() ;

constexpr float_t const& __cordl_internal_get_noisVolumeMax() const;

constexpr float_t& __cordl_internal_get_noisVolumeMax() ;

constexpr float_t const& __cordl_internal_get_noiseVolumeMin() const;

constexpr float_t& __cordl_internal_get_noiseVolumeMin() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& __cordl_internal_get_speaker() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& __cordl_internal_get_speaker() ;

constexpr void __cordl_internal_set_maxTriggerThreshold(float_t  value) ;

constexpr void __cordl_internal_set_minTriggerThreshold(float_t  value) ;

constexpr void __cordl_internal_set_noisVolumeMax(float_t  value) ;

constexpr void __cordl_internal_set_noiseVolumeMin(float_t  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_speaker(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value) ;

/// @brief Method .ctor, addr 0x56f5b18, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersVoiceNoise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersVoiceNoise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersVoiceNoise(CrittersVoiceNoise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersVoiceNoise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersVoiceNoise(CrittersVoiceNoise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{126};

/// [SerializeField]
/// @brief Field speaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  ___speaker;

/// [SerializeField]
/// @brief Field rig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// [SerializeField]
/// @brief Field minTriggerThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___minTriggerThreshold;

/// [SerializeField]
/// @brief Field maxTriggerThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxTriggerThreshold;

/// [SerializeField]
/// @brief Field noiseVolumeMin, offset: 0x38, size: 0x4, def value: None
 float_t  ___noiseVolumeMin;

/// [SerializeField]
/// @brief Field noisVolumeMax, offset: 0x3c, size: 0x4, def value: None
 float_t  ___noisVolumeMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersVoiceNoise, ___speaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersVoiceNoise, ___rig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersVoiceNoise, ___minTriggerThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersVoiceNoise, ___maxTriggerThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersVoiceNoise, ___noiseVolumeMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersVoiceNoise, ___noisVolumeMax) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersVoiceNoise) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
