#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_DamageOverlayValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GRPlayer_DamageOverlayValues)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_DamageOverlayValues;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_DamageOverlayValues);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_DamageOverlayValues, "", "GRPlayer/DamageOverlayValues");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/DamageOverlayValues
struct CORDL_TYPE GRPlayer_DamageOverlayValues {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_DamageOverlayValues() ;

// Ctor Parameters [CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "effectDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "effectCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_DamageOverlayValues(::UnityEngine::Color  tint, float_t  effectDuration, ::UnityEngine::AnimationCurve*  effectCurve) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2002};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field tint, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  tint;

/// @brief Field effectDuration, offset: 0x10, size: 0x4, def value: None
 float_t  effectDuration;

/// @brief Field effectCurve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  effectCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_DamageOverlayValues, tint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_DamageOverlayValues, effectDuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_DamageOverlayValues, effectCurve) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_DamageOverlayValues) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
