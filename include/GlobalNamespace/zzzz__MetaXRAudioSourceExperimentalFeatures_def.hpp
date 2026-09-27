#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioSourceExperimentalFeatures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MetaXRAudioSourceExperimentalFeatures)
namespace GlobalNamespace {
struct MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioSourceExperimentalFeatures;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures*, "", "MetaXRAudioSourceExperimentalFeatures");
// [RequireComponent(typeof(MetaXRAudioSource))]
// Dependencies MetaXRAudioSourceExperimentalFeatures::DirectivityPatternType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioSourceExperimentalFeatures
class CORDL_TYPE MetaXRAudioSourceExperimentalFeatures : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DirectivityPatternType = ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType;

 __declspec(property(get=get_DirectSoundEnabled, put=set_DirectSoundEnabled)) bool  DirectSoundEnabled;

 __declspec(property(get=get_DirectivityIntensity, put=set_DirectivityIntensity)) float_t  DirectivityIntensity;

 __declspec(property(get=get_DirectivityPattern, put=set_DirectivityPattern)) ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType  DirectivityPattern;

 __declspec(property(get=get_EarlyReflectionsSendDb, put=set_EarlyReflectionsSendDb)) float_t  EarlyReflectionsSendDb;

 __declspec(property(get=get_HrtfIntensity, put=set_HrtfIntensity)) float_t  HrtfIntensity;

 __declspec(property(get=get_MediumAbsorption, put=set_MediumAbsorption)) bool  MediumAbsorption;

 __declspec(property(get=get_OcclusionIntensity, put=set_OcclusionIntensity)) float_t  OcclusionIntensity;

 __declspec(property(get=get_ReverbReach, put=set_ReverbReach)) float_t  ReverbReach;

 __declspec(property(get=get_VolumetricRadius, put=set_VolumetricRadius)) float_t  VolumetricRadius;

/// @brief Field directSoundEnabled, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_directSoundEnabled, put=__cordl_internal_set_directSoundEnabled)) bool  directSoundEnabled;

/// @brief Field directivityIntensity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_directivityIntensity, put=__cordl_internal_set_directivityIntensity)) float_t  directivityIntensity;

/// @brief Field directivityPattern, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_directivityPattern, put=__cordl_internal_set_directivityPattern)) ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType  directivityPattern;

/// @brief Field earlyReflectionsSendDb, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_earlyReflectionsSendDb, put=__cordl_internal_set_earlyReflectionsSendDb)) float_t  earlyReflectionsSendDb;

/// @brief Field hrtfIntensity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hrtfIntensity, put=__cordl_internal_set_hrtfIntensity)) float_t  hrtfIntensity;

/// @brief Field mediumAbsorption, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_mediumAbsorption, put=__cordl_internal_set_mediumAbsorption)) bool  mediumAbsorption;

/// @brief Field occlusionIntensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_occlusionIntensity, put=__cordl_internal_set_occlusionIntensity)) float_t  occlusionIntensity;

/// @brief Field reverbReach, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverbReach, put=__cordl_internal_set_reverbReach)) float_t  reverbReach;

/// @brief Field source_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source_, put=__cordl_internal_set_source_)) ::UnityW<::UnityEngine::AudioSource>  source_;

/// @brief Field volumetricRadius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_volumetricRadius, put=__cordl_internal_set_volumetricRadius)) float_t  volumetricRadius;

/// @brief Method Awake, addr 0x9ebe1c8, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MetaXRAudio_GetGlobalRoomReflectionValues, addr 0x9ebe420, size 0xdc, virtual false, abstract: false, final false
static inline void MetaXRAudio_GetGlobalRoomReflectionValues(::by_ref<bool>  reflOn, ::by_ref<bool>  reverbOn, ::by_ref<float_t>  width, ::by_ref<float_t>  height, ::by_ref<float_t>  length) ;

static inline ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures* New_ctor() ;

/// @brief Method OnValidate, addr 0x9ebe1b4, size 0x14, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Update, addr 0x9ebe340, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateParameters, addr 0x9ebe228, size 0x118, virtual false, abstract: false, final false
inline void UpdateParameters() ;

constexpr bool const& __cordl_internal_get_directSoundEnabled() const;

constexpr bool& __cordl_internal_get_directSoundEnabled() ;

constexpr float_t const& __cordl_internal_get_directivityIntensity() const;

constexpr float_t& __cordl_internal_get_directivityIntensity() ;

constexpr ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType const& __cordl_internal_get_directivityPattern() const;

constexpr ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType& __cordl_internal_get_directivityPattern() ;

constexpr float_t const& __cordl_internal_get_earlyReflectionsSendDb() const;

constexpr float_t& __cordl_internal_get_earlyReflectionsSendDb() ;

constexpr float_t const& __cordl_internal_get_hrtfIntensity() const;

constexpr float_t& __cordl_internal_get_hrtfIntensity() ;

constexpr bool const& __cordl_internal_get_mediumAbsorption() const;

constexpr bool& __cordl_internal_get_mediumAbsorption() ;

constexpr float_t const& __cordl_internal_get_occlusionIntensity() const;

constexpr float_t& __cordl_internal_get_occlusionIntensity() ;

constexpr float_t const& __cordl_internal_get_reverbReach() const;

constexpr float_t& __cordl_internal_get_reverbReach() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source_() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source_() ;

constexpr float_t const& __cordl_internal_get_volumetricRadius() const;

constexpr float_t& __cordl_internal_get_volumetricRadius() ;

constexpr void __cordl_internal_set_directSoundEnabled(bool  value) ;

constexpr void __cordl_internal_set_directivityIntensity(float_t  value) ;

constexpr void __cordl_internal_set_directivityPattern(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType  value) ;

constexpr void __cordl_internal_set_earlyReflectionsSendDb(float_t  value) ;

constexpr void __cordl_internal_set_hrtfIntensity(float_t  value) ;

constexpr void __cordl_internal_set_mediumAbsorption(bool  value) ;

constexpr void __cordl_internal_set_occlusionIntensity(float_t  value) ;

constexpr void __cordl_internal_set_reverbReach(float_t  value) ;

constexpr void __cordl_internal_set_source_(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_volumetricRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x9ebe4fc, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DirectSoundEnabled, addr 0x9ebe194, size 0x8, virtual false, abstract: false, final false
inline bool get_DirectSoundEnabled() ;

/// @brief Method get_DirectivityIntensity, addr 0x9ebe15c, size 0x8, virtual false, abstract: false, final false
inline float_t get_DirectivityIntensity() ;

/// @brief Method get_DirectivityPattern, addr 0x9ebe184, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType get_DirectivityPattern() ;

/// @brief Method get_EarlyReflectionsSendDb, addr 0x9ebe0e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_EarlyReflectionsSendDb() ;

/// @brief Method get_HrtfIntensity, addr 0x9ebe0a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_HrtfIntensity() ;

/// @brief Method get_MediumAbsorption, addr 0x9ebe1a4, size 0x8, virtual false, abstract: false, final false
inline bool get_MediumAbsorption() ;

/// @brief Method get_OcclusionIntensity, addr 0x9ebe134, size 0x8, virtual false, abstract: false, final false
inline float_t get_OcclusionIntensity() ;

/// @brief Method get_ReverbReach, addr 0x9ebe10c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReverbReach() ;

/// @brief Method get_VolumetricRadius, addr 0x9ebe0c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_VolumetricRadius() ;

/// @brief Method set_DirectSoundEnabled, addr 0x9ebe19c, size 0x8, virtual false, abstract: false, final false
inline void set_DirectSoundEnabled(bool  value) ;

/// @brief Method set_DirectivityIntensity, addr 0x9ebe164, size 0x20, virtual false, abstract: false, final false
inline void set_DirectivityIntensity(float_t  value) ;

/// @brief Method set_DirectivityPattern, addr 0x9ebe18c, size 0x8, virtual false, abstract: false, final false
inline void set_DirectivityPattern(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType  value) ;

/// @brief Method set_EarlyReflectionsSendDb, addr 0x9ebe0e8, size 0x24, virtual false, abstract: false, final false
inline void set_EarlyReflectionsSendDb(float_t  value) ;

/// @brief Method set_HrtfIntensity, addr 0x9ebe0a8, size 0x20, virtual false, abstract: false, final false
inline void set_HrtfIntensity(float_t  value) ;

/// @brief Method set_MediumAbsorption, addr 0x9ebe1ac, size 0x8, virtual false, abstract: false, final false
inline void set_MediumAbsorption(bool  value) ;

/// @brief Method set_OcclusionIntensity, addr 0x9ebe13c, size 0x20, virtual false, abstract: false, final false
inline void set_OcclusionIntensity(float_t  value) ;

/// @brief Method set_ReverbReach, addr 0x9ebe114, size 0x20, virtual false, abstract: false, final false
inline void set_ReverbReach(float_t  value) ;

/// @brief Method set_VolumetricRadius, addr 0x9ebe0d0, size 0x10, virtual false, abstract: false, final false
inline void set_VolumetricRadius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioSourceExperimentalFeatures() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioSourceExperimentalFeatures", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioSourceExperimentalFeatures(MetaXRAudioSourceExperimentalFeatures && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioSourceExperimentalFeatures", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioSourceExperimentalFeatures(MetaXRAudioSourceExperimentalFeatures const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29957};

/// @brief Field source_, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source_;

/// [SerializeField]
/// [Tooltip("How much of the HRTF EQ is applied to the sound. Interaural time delay (ITD) and interaural level differences (ILD) are kept the same.")]
/// [Range(0, 1)]
/// @brief Field hrtfIntensity, offset: 0x28, size: 0x4, def value: None
 float_t  ___hrtfIntensity;

/// [SerializeField]
/// [Tooltip("Used to increase the spatial audio emitter radius. Useful for sounds that come from a large area rather than a precise point. If increased too large, users may end up inside the radius if the sound source is too close.")]
/// @brief Field volumetricRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___volumetricRadius;

/// [SerializeField]
/// [Tooltip("Additional gain applied to early reflections for this audio source only")]
/// [Range(-60, 20)]
/// @brief Field earlyReflectionsSendDb, offset: 0x30, size: 0x4, def value: None
 float_t  ___earlyReflectionsSendDb;

/// [SerializeField]
/// [Tooltip("Adjust how much the direct-to-reverberant ratio increases with distance")]
/// [Range(0, 1)]
/// @brief Field reverbReach, offset: 0x34, size: 0x4, def value: None
 float_t  ___reverbReach;

/// [SerializeField]
/// [Tooltip("Adjust how much the direct-to-reverberant ratio increases with distance")]
/// [Range(0, 1)]
/// @brief Field occlusionIntensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___occlusionIntensity;

/// [SerializeField]
/// [Tooltip("Intensity controller for Directvity , Value of 1 will apply full directivity")]
/// [Range(0, 1)]
/// @brief Field directivityIntensity, offset: 0x3c, size: 0x4, def value: None
 float_t  ___directivityIntensity;

/// [SerializeField]
/// [Tooltip("Option for human voice directivity pattern that makes this sound more muffled when the source is facing away from listener")]
/// @brief Field directivityPattern, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures_DirectivityPatternType  ___directivityPattern;

/// [SerializeField]
/// [Tooltip("This switch can disable direct sound propagation, so only late reverberations is heard from this source")]
/// @brief Field directSoundEnabled, offset: 0x44, size: 0x1, def value: None
 bool  ___directSoundEnabled;

/// [SerializeField]
/// [Tooltip("This switch can disable direct sound propagation, so only late reverberations is heard from this source")]
/// @brief Field mediumAbsorption, offset: 0x45, size: 0x1, def value: None
 bool  ___mediumAbsorption;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___source_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___hrtfIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___volumetricRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___earlyReflectionsSendDb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___reverbReach) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___occlusionIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___directivityIntensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___directivityPattern) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___directSoundEnabled) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures, ___mediumAbsorption) == 0x45, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioSourceExperimentalFeatures) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
