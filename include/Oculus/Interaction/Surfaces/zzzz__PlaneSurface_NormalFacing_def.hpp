#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/PlaneSurface_NormalFacing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlaneSurface_NormalFacing)
// Forward declare root types
namespace GlobalNamespace {
struct PlaneSurface_NormalFacing;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaneSurface_NormalFacing);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaneSurface_NormalFacing, "Oculus.Interaction.Surfaces", "PlaneSurface/NormalFacing");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Surfaces.PlaneSurface/NormalFacing
struct CORDL_TYPE PlaneSurface_NormalFacing {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlaneSurface_NormalFacing_Unwrapped
enum struct __PlaneSurface_NormalFacing_Unwrapped : int32_t {
__E_Backward = static_cast<int32_t>(0x0),
__E_Forward = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlaneSurface_NormalFacing_Unwrapped () const noexcept {
return static_cast<__PlaneSurface_NormalFacing_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlaneSurface_NormalFacing() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaneSurface_NormalFacing(int32_t  value__) noexcept;

/// @brief Field Backward value: I32(0)
static ::GlobalNamespace::PlaneSurface_NormalFacing const Backward;

/// @brief Field Forward value: I32(1)
static ::GlobalNamespace::PlaneSurface_NormalFacing const Forward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaneSurface_NormalFacing, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaneSurface_NormalFacing) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
