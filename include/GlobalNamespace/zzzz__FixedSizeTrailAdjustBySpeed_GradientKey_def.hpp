#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeTrailAdjustBySpeed_GradientKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FixedSizeTrailAdjustBySpeed_GradientKey)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct FixedSizeTrailAdjustBySpeed_GradientKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey, "", "FixedSizeTrailAdjustBySpeed/GradientKey");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: FixedSizeTrailAdjustBySpeed/GradientKey
struct CORDL_TYPE FixedSizeTrailAdjustBySpeed_GradientKey {
public:
// Declarations
/// @brief Method .ctor, addr 0x5806254, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  color, float_t  time) ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedSizeTrailAdjustBySpeed_GradientKey() ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr FixedSizeTrailAdjustBySpeed_GradientKey(::UnityEngine::Color  color, float_t  time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1693};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field color, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field time, offset: 0x10, size: 0x4, def value: None
 float_t  time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey, time) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FixedSizeTrailAdjustBySpeed_GradientKey) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
