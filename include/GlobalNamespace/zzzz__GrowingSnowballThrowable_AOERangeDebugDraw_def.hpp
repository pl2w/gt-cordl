#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowingSnowballThrowable_AOERangeDebugDraw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GrowingSnowballThrowable_AOERangeDebugDraw)
// Forward declare root types
namespace GlobalNamespace {
struct GrowingSnowballThrowable_AOERangeDebugDraw;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw, "", "GrowingSnowballThrowable/AOERangeDebugDraw");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GrowingSnowballThrowable/AOERangeDebugDraw
struct CORDL_TYPE GrowingSnowballThrowable_AOERangeDebugDraw {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GrowingSnowballThrowable_AOERangeDebugDraw() ;

// Ctor Parameters [CppParam { name: "impactTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "innerRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "outerRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GrowingSnowballThrowable_AOERangeDebugDraw(float_t  impactTime, ::UnityEngine::Vector3  position, float_t  innerRadius, float_t  outerRadius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{517};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field impactTime, offset: 0x0, size: 0x4, def value: None
 float_t  impactTime;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field innerRadius, offset: 0x10, size: 0x4, def value: None
 float_t  innerRadius;

/// @brief Field outerRadius, offset: 0x14, size: 0x4, def value: None
 float_t  outerRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw, impactTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw, innerRadius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw, outerRadius) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
