#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/SpaceLocator_SurfaceOrientation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceLocator_SurfaceOrientation)
// Forward declare root types
namespace GlobalNamespace {
struct SpaceLocator_SurfaceOrientation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpaceLocator_SurfaceOrientation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpaceLocator_SurfaceOrientation, "Meta.XR.MRUtilityKit.BuildingBlocks", "SpaceLocator/SurfaceOrientation");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator/SurfaceOrientation
struct CORDL_TYPE SpaceLocator_SurfaceOrientation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpaceLocator_SurfaceOrientation_Unwrapped
enum struct __SpaceLocator_SurfaceOrientation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Any = static_cast<int32_t>(0x1),
__E_Vertical = static_cast<int32_t>(0x2),
__E_HorizontalFaceUp = static_cast<int32_t>(0x4),
__E_HorizontalFaceDown = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpaceLocator_SurfaceOrientation_Unwrapped () const noexcept {
return static_cast<__SpaceLocator_SurfaceOrientation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpaceLocator_SurfaceOrientation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SpaceLocator_SurfaceOrientation(int32_t  value__) noexcept;

/// @brief Field Any value: I32(1)
static ::GlobalNamespace::SpaceLocator_SurfaceOrientation const Any;

/// @brief Field HorizontalFaceDown value: I32(8)
static ::GlobalNamespace::SpaceLocator_SurfaceOrientation const HorizontalFaceDown;

/// @brief Field HorizontalFaceUp value: I32(4)
static ::GlobalNamespace::SpaceLocator_SurfaceOrientation const HorizontalFaceUp;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SpaceLocator_SurfaceOrientation const None;

/// @brief Field Vertical value: I32(2)
static ::GlobalNamespace::SpaceLocator_SurfaceOrientation const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpaceLocator_SurfaceOrientation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpaceLocator_SurfaceOrientation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
