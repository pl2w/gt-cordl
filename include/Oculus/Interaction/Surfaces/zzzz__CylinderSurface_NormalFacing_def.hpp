#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CylinderSurface_NormalFacing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CylinderSurface_NormalFacing)
// Forward declare root types
namespace GlobalNamespace {
struct CylinderSurface_NormalFacing;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CylinderSurface_NormalFacing);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CylinderSurface_NormalFacing, "Oculus.Interaction.Surfaces", "CylinderSurface/NormalFacing");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Surfaces.CylinderSurface/NormalFacing
struct CORDL_TYPE CylinderSurface_NormalFacing {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CylinderSurface_NormalFacing_Unwrapped
enum struct __CylinderSurface_NormalFacing_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_In = static_cast<int32_t>(0x1),
__E_Out = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CylinderSurface_NormalFacing_Unwrapped () const noexcept {
return static_cast<__CylinderSurface_NormalFacing_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CylinderSurface_NormalFacing() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CylinderSurface_NormalFacing(int32_t  value__) noexcept;

/// @brief Field Any value: I32(0)
static ::GlobalNamespace::CylinderSurface_NormalFacing const Any;

/// @brief Field In value: I32(1)
static ::GlobalNamespace::CylinderSurface_NormalFacing const In;

/// @brief Field Out value: I32(2)
static ::GlobalNamespace::CylinderSurface_NormalFacing const Out;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CylinderSurface_NormalFacing, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CylinderSurface_NormalFacing) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
