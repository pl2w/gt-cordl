#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAudioSource)
namespace GlobalNamespace {
struct MetaXRAudioSource_NativeParameterIndex;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioSource;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioSource*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioSource*, "", "MetaXRAudioSource");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioSource
class CORDL_TYPE MetaXRAudioSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NativeParameterIndex = ::GlobalNamespace::MetaXRAudioSource_NativeParameterIndex;

 __declspec(property(get=get_EnableAcoustics, put=set_EnableAcoustics)) bool  EnableAcoustics;

 __declspec(property(get=get_EnableSpatialization, put=set_EnableSpatialization)) bool  EnableSpatialization;

 __declspec(property(get=get_GainBoostDb, put=set_GainBoostDb)) float_t  GainBoostDb;

 __declspec(property(get=get_ReverbSendDb, put=set_ReverbSendDb)) float_t  ReverbSendDb;

/// @brief Field enableAcoustics, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableAcoustics, put=__cordl_internal_set_enableAcoustics)) bool  enableAcoustics;

/// @brief Field enableSpatialization, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableSpatialization, put=__cordl_internal_set_enableSpatialization)) bool  enableSpatialization;

/// @brief Field gainBoostDb, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gainBoostDb, put=__cordl_internal_set_gainBoostDb)) float_t  gainBoostDb;

/// @brief Field reverbSendDb, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverbSendDb, put=__cordl_internal_set_reverbSendDb)) float_t  reverbSendDb;

/// @brief Field source_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source_, put=__cordl_internal_set_source_)) ::UnityW<::UnityEngine::AudioSource>  source_;

/// @brief Field wasPlaying_, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasPlaying_, put=__cordl_internal_set_wasPlaying_)) bool  wasPlaying_;

/// @brief Method Awake, addr 0x9ebdec0, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MetaXRAudio_SetGlobalVoiceLimit, addr 0x9ebddd0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t MetaXRAudio_SetGlobalVoiceLimit(int32_t  VoiceLimit) ;

static inline ::GlobalNamespace::MetaXRAudioSource* New_ctor() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method OnBeforeSceneLoadRuntimeMethod, addr 0x9ebdd10, size 0xc0, virtual false, abstract: false, final false
static inline void OnBeforeSceneLoadRuntimeMethod() ;

/// @brief Method Update, addr 0x9ebdf9c, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateParameters, addr 0x9ebdf20, size 0x7c, virtual false, abstract: false, final false
inline void UpdateParameters() ;

constexpr bool const& __cordl_internal_get_enableAcoustics() const;

constexpr bool& __cordl_internal_get_enableAcoustics() ;

constexpr bool const& __cordl_internal_get_enableSpatialization() const;

constexpr bool& __cordl_internal_get_enableSpatialization() ;

constexpr float_t const& __cordl_internal_get_gainBoostDb() const;

constexpr float_t& __cordl_internal_get_gainBoostDb() ;

constexpr float_t const& __cordl_internal_get_reverbSendDb() const;

constexpr float_t& __cordl_internal_get_reverbSendDb() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source_() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source_() ;

constexpr bool const& __cordl_internal_get_wasPlaying_() const;

constexpr bool& __cordl_internal_get_wasPlaying_() ;

constexpr void __cordl_internal_set_enableAcoustics(bool  value) ;

constexpr void __cordl_internal_set_enableSpatialization(bool  value) ;

constexpr void __cordl_internal_set_gainBoostDb(float_t  value) ;

constexpr void __cordl_internal_set_reverbSendDb(float_t  value) ;

constexpr void __cordl_internal_set_source_(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_wasPlaying_(bool  value) ;

/// @brief Method .ctor, addr 0x9ebe08c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EnableAcoustics, addr 0x9ebde84, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableAcoustics() ;

/// @brief Method get_EnableSpatialization, addr 0x9ebde4c, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableSpatialization() ;

/// @brief Method get_GainBoostDb, addr 0x9ebde5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_GainBoostDb() ;

/// @brief Method get_ReverbSendDb, addr 0x9ebde94, size 0x8, virtual false, abstract: false, final false
inline float_t get_ReverbSendDb() ;

/// @brief Method set_EnableAcoustics, addr 0x9ebde8c, size 0x8, virtual false, abstract: false, final false
inline void set_EnableAcoustics(bool  value) ;

/// @brief Method set_EnableSpatialization, addr 0x9ebde54, size 0x8, virtual false, abstract: false, final false
inline void set_EnableSpatialization(bool  value) ;

/// @brief Method set_GainBoostDb, addr 0x9ebde64, size 0x20, virtual false, abstract: false, final false
inline void set_GainBoostDb(float_t  value) ;

/// @brief Method set_ReverbSendDb, addr 0x9ebde9c, size 0x24, virtual false, abstract: false, final false
inline void set_ReverbSendDb(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioSource(MetaXRAudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioSource(MetaXRAudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29955};

/// @brief Field source_, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source_;

/// @brief Field wasPlaying_, offset: 0x28, size: 0x1, def value: None
 bool  ___wasPlaying_;

/// [SerializeField]
/// [Tooltip("Enables HRTF Spatialization.")]
/// @brief Field enableSpatialization, offset: 0x29, size: 0x1, def value: None
 bool  ___enableSpatialization;

/// [SerializeField]
/// [Tooltip("Additional gain beyond 0dB")]
/// [Range(0, 20)]
/// @brief Field gainBoostDb, offset: 0x2c, size: 0x4, def value: None
 float_t  ___gainBoostDb;

/// [SerializeField]
/// [Tooltip("Enables room acoustics simulation (early reflections and reverberation) for this audio source only")]
/// @brief Field enableAcoustics, offset: 0x30, size: 0x1, def value: None
 bool  ___enableAcoustics;

/// [SerializeField]
/// [Tooltip("Additional gain applied to reverb send for this audio source only")]
/// [Range(-60, 20)]
/// @brief Field reverbSendDb, offset: 0x34, size: 0x4, def value: None
 float_t  ___reverbSendDb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource, ___source_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource, ___wasPlaying_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource, ___enableSpatialization) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource, ___gainBoostDb) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource, ___enableAcoustics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAudioSource, ___reverbSendDb) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAudioSource) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
