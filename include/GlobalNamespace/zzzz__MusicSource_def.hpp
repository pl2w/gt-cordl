#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MusicSource)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicSource;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicSource*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicSource*, "", "MusicSource");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// Dependencies System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicSource
class CORDL_TYPE MusicSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

 __declspec(property(get=get_DefaultVolume)) float_t  DefaultVolume;

 __declspec(property(get=get_VolumeOverridden)) bool  VolumeOverridden;

/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field defaultVolume, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultVolume, put=__cordl_internal_set_defaultVolume)) float_t  defaultVolume;

/// @brief Field setDefaultVolumeFromAudioSourceOnAwake, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_setDefaultVolumeFromAudioSourceOnAwake, put=__cordl_internal_set_setDefaultVolumeFromAudioSourceOnAwake)) bool  setDefaultVolumeFromAudioSourceOnAwake;

/// @brief Field volumeOverride, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_volumeOverride, put=__cordl_internal_set_volumeOverride)) ::System::Nullable_1<float_t>  volumeOverride;

/// @brief Method Awake, addr 0x596df68, size 0xbc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MusicSource* New_ctor() ;

/// @brief Method OnDisable, addr 0x596e0e4, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x596e024, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetVolumeOverride, addr 0x596d4e4, size 0xb0, virtual false, abstract: false, final false
inline void SetVolumeOverride(float_t  volume) ;

/// @brief Method UnsetVolumeOverride, addr 0x596d444, size 0x24, virtual false, abstract: false, final false
inline void UnsetVolumeOverride() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_defaultVolume() const;

constexpr float_t& __cordl_internal_get_defaultVolume() ;

constexpr bool const& __cordl_internal_get_setDefaultVolumeFromAudioSourceOnAwake() const;

constexpr bool& __cordl_internal_get_setDefaultVolumeFromAudioSourceOnAwake() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_volumeOverride() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_volumeOverride() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_defaultVolume(float_t  value) ;

constexpr void __cordl_internal_set_setDefaultVolumeFromAudioSourceOnAwake(bool  value) ;

constexpr void __cordl_internal_set_volumeOverride(::System::Nullable_1<float_t>  value) ;

/// @brief Method .ctor, addr 0x596e1a4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioSource, addr 0x596df1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_AudioSource() ;

/// @brief Method get_DefaultVolume, addr 0x596df24, size 0x8, virtual false, abstract: false, final false
inline float_t get_DefaultVolume() ;

/// @brief Method get_VolumeOverridden, addr 0x596df2c, size 0x3c, virtual false, abstract: false, final false
inline bool get_VolumeOverridden() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicSource(MusicSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicSource(MusicSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2396};

/// [SerializeField]
/// @brief Field defaultVolume, offset: 0x20, size: 0x4, def value: None
 float_t  ___defaultVolume;

/// [SerializeField]
/// @brief Field setDefaultVolumeFromAudioSourceOnAwake, offset: 0x24, size: 0x1, def value: None
 bool  ___setDefaultVolumeFromAudioSourceOnAwake;

/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field volumeOverride, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___volumeOverride;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicSource, ___defaultVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicSource, ___setDefaultVolumeFromAudioSourceOnAwake) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicSource, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicSource, ___volumeOverride) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicSource) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
