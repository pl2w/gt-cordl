#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ParticleModifierCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ParticleSettingsSO_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleModifierCosmetic)
namespace GorillaTag::Cosmetics {
class ParticleSettingsSO;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ParticleModifierCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ParticleModifierCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ParticleModifierCosmetic*, "GorillaTag.Cosmetics", "ParticleModifierCosmetic");
// Dependencies GorillaTag.Cosmetics.ParticleSettingsSO, System.Nullable`1<T>, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ParticleModifierCosmetic
class CORDL_TYPE ParticleModifierCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field originalStartColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_originalStartColor, put=__cordl_internal_set_originalStartColor)) ::UnityEngine::Color  originalStartColor;

/// @brief Field originalStartSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalStartSize, put=__cordl_internal_set_originalStartSize)) float_t  originalStartSize;

/// @brief Field particleSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSettings, put=__cordl_internal_set_particleSettings)) ::ArrayW<::UnityW<::GorillaTag::Cosmetics::ParticleSettingsSO>>  particleSettings;

/// @brief Field ps, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps, put=__cordl_internal_set_ps)) ::UnityW<::UnityEngine::ParticleSystem>  ps;

/// @brief Field targetColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetColor, put=__cordl_internal_set_targetColor)) ::System::Nullable_1<::UnityEngine::Color>  targetColor;

/// @brief Field targetSize, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetSize, put=__cordl_internal_set_targetSize)) ::System::Nullable_1<float_t>  targetSize;

/// @brief Field transitionSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionSpeed, put=__cordl_internal_set_transitionSpeed)) float_t  transitionSpeed;

/// @brief Method ApplySetting, addr 0x5d9cecc, size 0x38, virtual false, abstract: false, final false
inline void ApplySetting(::GorillaTag::Cosmetics::ParticleSettingsSO*  setting) ;

/// @brief Method ApplySettingLerp, addr 0x5d9d0c4, size 0x38, virtual false, abstract: false, final false
inline void ApplySettingLerp(::GorillaTag::Cosmetics::ParticleSettingsSO*  setting) ;

/// @brief Method Awake, addr 0x5d9cc88, size 0x1c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IncreaseStartSize, addr 0x5d9d45c, size 0xf0, virtual false, abstract: false, final false
inline void IncreaseStartSize(float_t  delta) ;

/// @brief Method IsColorApproximatelyEqual, addr 0x5d9d54c, size 0x3c, virtual false, abstract: false, final false
inline bool IsColorApproximatelyEqual(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  threshold) ;

/// @brief Method LerpStartColor, addr 0x5d9d204, size 0x174, virtual false, abstract: false, final false
inline void LerpStartColor(::UnityEngine::Color  color) ;

/// @brief Method LerpStartSize, addr 0x5d9d0fc, size 0x108, virtual false, abstract: false, final false
inline void LerpStartSize(float_t  size) ;

/// @brief Method LerpStartValues, addr 0x5d9d5d0, size 0x48, virtual false, abstract: false, final false
inline void LerpStartValues(float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method MoveToNextSetting, addr 0x5d9d378, size 0x3c, virtual false, abstract: false, final false
inline void MoveToNextSetting() ;

/// @brief Method MoveToNextSettingLerp, addr 0x5d9d3b4, size 0x3c, virtual false, abstract: false, final false
inline void MoveToNextSettingLerp() ;

/// @brief Method MoveToSettingIndex, addr 0x5d9d3fc, size 0x30, virtual false, abstract: false, final false
inline void MoveToSettingIndex(int32_t  index) ;

/// @brief Method MoveToSettingIndexLerp, addr 0x5d9d42c, size 0x30, virtual false, abstract: false, final false
inline void MoveToSettingIndexLerp(int32_t  index) ;

static inline ::GorillaTag::Cosmetics::ParticleModifierCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d9cdc0, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d9cdbc, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x5d9cdb8, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ResetSettings, addr 0x5d9d3f0, size 0xc, virtual false, abstract: false, final false
inline void ResetSettings() ;

/// [ContextMenu("Reset To Original")]
/// @brief Method ResetToOriginal, addr 0x5d9cdc4, size 0x108, virtual false, abstract: false, final false
inline void ResetToOriginal() ;

/// @brief Method SetStartColor, addr 0x5d9cfc8, size 0xfc, virtual false, abstract: false, final false
inline void SetStartColor(::UnityEngine::Color  color) ;

/// @brief Method SetStartSize, addr 0x5d9cf04, size 0xc4, virtual false, abstract: false, final false
inline void SetStartSize(float_t  size) ;

/// @brief Method SetStartValues, addr 0x5d9d588, size 0x48, virtual false, abstract: false, final false
inline void SetStartValues(float_t  size, ::UnityEngine::Color  color) ;

/// @brief Method StoreOriginalValues, addr 0x5d9cca4, size 0x114, virtual false, abstract: false, final false
inline void StoreOriginalValues() ;

/// @brief Method Update, addr 0x5d9d618, size 0x398, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_originalStartColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_originalStartColor() ;

constexpr float_t const& __cordl_internal_get_originalStartSize() const;

constexpr float_t& __cordl_internal_get_originalStartSize() ;

constexpr ::ArrayW<::UnityW<::GorillaTag::Cosmetics::ParticleSettingsSO>> const& __cordl_internal_get_particleSettings() const;

constexpr ::ArrayW<::UnityW<::GorillaTag::Cosmetics::ParticleSettingsSO>>& __cordl_internal_get_particleSettings() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_ps() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_ps() ;

constexpr ::System::Nullable_1<::UnityEngine::Color> const& __cordl_internal_get_targetColor() const;

constexpr ::System::Nullable_1<::UnityEngine::Color>& __cordl_internal_get_targetColor() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_targetSize() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_targetSize() ;

constexpr float_t const& __cordl_internal_get_transitionSpeed() const;

constexpr float_t& __cordl_internal_get_transitionSpeed() ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_originalStartColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_originalStartSize(float_t  value) ;

constexpr void __cordl_internal_set_particleSettings(::ArrayW<::UnityW<::GorillaTag::Cosmetics::ParticleSettingsSO>>  value) ;

constexpr void __cordl_internal_set_ps(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_targetColor(::System::Nullable_1<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_targetSize(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_transitionSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5d9d9b0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleModifierCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleModifierCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleModifierCosmetic(ParticleModifierCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleModifierCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleModifierCosmetic(ParticleModifierCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4960};

/// [SerializeField]
/// @brief Field ps, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___ps;

/// [Tooltip("For calling gradual functions only")]
/// [SerializeField]
/// @brief Field transitionSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___transitionSpeed;

/// @brief Field particleSettings, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTag::Cosmetics::ParticleSettingsSO>>  ___particleSettings;

/// @brief Field originalStartSize, offset: 0x38, size: 0x4, def value: None
 float_t  ___originalStartSize;

/// @brief Field originalStartColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___originalStartColor;

/// @brief Field targetSize, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___targetSize;

/// @brief Field targetColor, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Color>  ___targetColor;

/// @brief Field currentIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Size padding 0x70 - 0x78 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___ps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___transitionSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___particleSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___originalStartSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___originalStartColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___targetSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___targetColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ParticleModifierCosmetic, ___currentIndex) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ParticleModifierCosmetic) == 0x70, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
