#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/PlaneSurface___c__DisplayClass16_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlaneSurface___c__DisplayClass16_0)
// Forward declare root types
namespace GlobalNamespace {
struct PlaneSurface___c__DisplayClass16_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaneSurface___c__DisplayClass16_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaneSurface___c__DisplayClass16_0, "Oculus.Interaction.Surfaces", "PlaneSurface/<>c__DisplayClass16_0");
// [CompilerGenerated]
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Surfaces.PlaneSurface/<>c__DisplayClass16_0
struct CORDL_TYPE PlaneSurface___c__DisplayClass16_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaneSurface___c__DisplayClass16_0() ;

// Ctor Parameters [CppParam { name: "planeNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "originDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaneSurface___c__DisplayClass16_0(::UnityEngine::Vector3  planeNormal, float_t  originDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field planeNormal, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  planeNormal;

/// @brief Field originDistance, offset: 0xc, size: 0x4, def value: None
 float_t  originDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaneSurface___c__DisplayClass16_0, planeNormal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaneSurface___c__DisplayClass16_0, originDistance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaneSurface___c__DisplayClass16_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
