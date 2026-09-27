#pragma once
// IWYU pragma private; include "GlobalNamespace/HeightVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeightVolume)
namespace GlobalNamespace {
class MusicSource;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HeightVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HeightVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeightVolume*, "", "HeightVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HeightVolume
class CORDL_TYPE HeightVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field baseVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseVolume, put=__cordl_internal_set_baseVolume)) float_t  baseVolume;

/// @brief Field heightBottom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightBottom, put=__cordl_internal_set_heightBottom)) ::UnityW<::UnityEngine::Transform>  heightBottom;

/// @brief Field heightTop, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightTop, put=__cordl_internal_set_heightTop)) ::UnityW<::UnityEngine::Transform>  heightTop;

/// @brief Field invertHeightVol, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertHeightVol, put=__cordl_internal_set_invertHeightVol)) bool  invertHeightVol;

/// @brief Field minVolume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVolume, put=__cordl_internal_set_minVolume)) float_t  minVolume;

/// @brief Field musicSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicSource, put=__cordl_internal_set_musicSource)) ::UnityW<::GlobalNamespace::MusicSource>  musicSource;

/// @brief Field targetTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

/// @brief Method Awake, addr 0x5951be4, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HeightVolume* New_ctor() ;

/// @brief Method Update, addr 0x5951cb4, size 0x1fc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_baseVolume() const;

constexpr float_t& __cordl_internal_get_baseVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_heightBottom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_heightBottom() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_heightTop() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_heightTop() ;

constexpr bool const& __cordl_internal_get_invertHeightVol() const;

constexpr bool& __cordl_internal_get_invertHeightVol() ;

constexpr float_t const& __cordl_internal_get_minVolume() const;

constexpr float_t& __cordl_internal_get_minVolume() ;

constexpr ::UnityW<::GlobalNamespace::MusicSource> const& __cordl_internal_get_musicSource() const;

constexpr ::UnityW<::GlobalNamespace::MusicSource>& __cordl_internal_get_musicSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_baseVolume(float_t  value) ;

constexpr void __cordl_internal_set_heightBottom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_heightTop(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_invertHeightVol(bool  value) ;

constexpr void __cordl_internal_set_minVolume(float_t  value) ;

constexpr void __cordl_internal_set_musicSource(::UnityW<::GlobalNamespace::MusicSource>  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5951eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeightVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeightVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeightVolume(HeightVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeightVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeightVolume(HeightVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2305};

/// @brief Field heightTop, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___heightTop;

/// @brief Field heightBottom, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___heightBottom;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field baseVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___baseVolume;

/// @brief Field minVolume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___minVolume;

/// @brief Field targetTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

/// @brief Field invertHeightVol, offset: 0x48, size: 0x1, def value: None
 bool  ___invertHeightVol;

/// @brief Field musicSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicSource>  ___musicSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeightVolume, ___heightTop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___heightBottom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___baseVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___minVolume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___targetTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___invertHeightVol) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeightVolume, ___musicSource) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeightVolume) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
