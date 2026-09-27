#pragma once
// IWYU pragma private; include "GlobalNamespace/MoonController_Placement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MoonController_Placement)
// Forward declare root types
namespace GlobalNamespace {
struct MoonController_Placement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MoonController_Placement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoonController_Placement, "", "MoonController/Placement");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: MoonController/Placement
struct CORDL_TYPE MoonController_Placement {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MoonController_Placement() ;

// Ctor Parameters [CppParam { name: "radiusRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "restAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MoonController_Placement(::UnityEngine::Vector2  radiusRange, ::UnityEngine::Vector2  heightRange, ::UnityEngine::Vector2  scaleRange, float_t  restAngle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{563};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field radiusRange, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  radiusRange;

/// @brief Field heightRange, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  heightRange;

/// @brief Field scaleRange, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleRange;

/// @brief Field restAngle, offset: 0x18, size: 0x4, def value: None
 float_t  restAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoonController_Placement, radiusRange) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController_Placement, heightRange) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController_Placement, scaleRange) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController_Placement, restAngle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoonController_Placement) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
