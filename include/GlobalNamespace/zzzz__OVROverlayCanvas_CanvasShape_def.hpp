#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_CanvasShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayCanvas_CanvasShape)
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayCanvas_CanvasShape;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayCanvas_CanvasShape);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvas_CanvasShape, "", "OVROverlayCanvas/CanvasShape");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayCanvas/CanvasShape
struct CORDL_TYPE OVROverlayCanvas_CanvasShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlayCanvas_CanvasShape_Unwrapped
enum struct __OVROverlayCanvas_CanvasShape_Unwrapped : int32_t {
__E_Flat = static_cast<int32_t>(0x0),
__E_Curved = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlayCanvas_CanvasShape_Unwrapped () const noexcept {
return static_cast<__OVROverlayCanvas_CanvasShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas_CanvasShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlayCanvas_CanvasShape(int32_t  value__) noexcept;

/// @brief Field Curved value: I32(1)
static ::GlobalNamespace::OVROverlayCanvas_CanvasShape const Curved;

/// @brief Field Flat value: I32(0)
static ::GlobalNamespace::OVROverlayCanvas_CanvasShape const Flat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas_CanvasShape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvas_CanvasShape) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
