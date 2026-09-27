#pragma once
// IWYU pragma private; include "GlobalNamespace/MicrophoneCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneCosmetic)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MicrophoneCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MicrophoneCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicrophoneCosmetic*, "", "MicrophoneCosmetic");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: MicrophoneCosmetic
class CORDL_TYPE MicrophoneCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field mouthProximityRampRange, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouthProximityRampRange, put=__cordl_internal_set_mouthProximityRampRange)) ::UnityEngine::Vector2  mouthProximityRampRange;

/// @brief Field mouthTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouthTransform, put=__cordl_internal_set_mouthTransform)) ::UnityW<::UnityEngine::Transform>  mouthTransform;

/// @brief Field zero, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_zero, put=__cordl_internal_set_zero)) ::ArrayW<float_t>  zero;

/// @brief Method Awake, addr 0x5616184, size 0x154, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MicrophoneCosmetic* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x5616590, size 0x4, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

/// @brief Method OnDisable, addr 0x56163d0, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56162d8, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x56163e8, size 0x1a8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_mouthProximityRampRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_mouthProximityRampRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mouthTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mouthTransform() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_zero() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_zero() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_mouthProximityRampRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_mouthTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_zero(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x5616594, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneCosmetic(MicrophoneCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneCosmetic(MicrophoneCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{556};

/// [SerializeField]
/// @brief Field mouthTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mouthTransform;

/// [SerializeField]
/// @brief Field mouthProximityRampRange, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___mouthProximityRampRange;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field zero, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___zero;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MicrophoneCosmetic, ___mouthTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicrophoneCosmetic, ___mouthProximityRampRange) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicrophoneCosmetic, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicrophoneCosmetic, ___zero) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MicrophoneCosmetic) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
