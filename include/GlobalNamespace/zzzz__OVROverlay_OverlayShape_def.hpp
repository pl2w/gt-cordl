#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay_OverlayShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlay_OverlayShape)
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlay_OverlayShape;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlay_OverlayShape);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlay_OverlayShape, "", "OVROverlay/OverlayShape");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlay/OverlayShape
struct CORDL_TYPE OVROverlay_OverlayShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlay_OverlayShape_Unwrapped
enum struct __OVROverlay_OverlayShape_Unwrapped : int32_t {
__E_Quad = static_cast<int32_t>(0x0),
__E_Cylinder = static_cast<int32_t>(0x1),
__E_Cubemap = static_cast<int32_t>(0x2),
__E_OffcenterCubemap = static_cast<int32_t>(0x4),
__E_Equirect = static_cast<int32_t>(0x5),
__E_ReconstructionPassthrough = static_cast<int32_t>(0x7),
__E_SurfaceProjectedPassthrough = static_cast<int32_t>(0x8),
__E_Fisheye = static_cast<int32_t>(0x9),
__E_KeyboardHandsPassthrough = static_cast<int32_t>(0xa),
__E_KeyboardMaskedHandsPassthrough = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlay_OverlayShape_Unwrapped () const noexcept {
return static_cast<__OVROverlay_OverlayShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlay_OverlayShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlay_OverlayShape(int32_t  value__) noexcept;

/// @brief Field Cubemap value: I32(2)
static ::GlobalNamespace::OVROverlay_OverlayShape const Cubemap;

/// @brief Field Cylinder value: I32(1)
static ::GlobalNamespace::OVROverlay_OverlayShape const Cylinder;

/// @brief Field Equirect value: I32(5)
static ::GlobalNamespace::OVROverlay_OverlayShape const Equirect;

/// @brief Field Fisheye value: I32(9)
static ::GlobalNamespace::OVROverlay_OverlayShape const Fisheye;

/// @brief Field KeyboardHandsPassthrough value: I32(10)
static ::GlobalNamespace::OVROverlay_OverlayShape const KeyboardHandsPassthrough;

/// @brief Field KeyboardMaskedHandsPassthrough value: I32(11)
static ::GlobalNamespace::OVROverlay_OverlayShape const KeyboardMaskedHandsPassthrough;

/// @brief Field OffcenterCubemap value: I32(4)
static ::GlobalNamespace::OVROverlay_OverlayShape const OffcenterCubemap;

/// @brief Field Quad value: I32(0)
static ::GlobalNamespace::OVROverlay_OverlayShape const Quad;

/// @brief Field ReconstructionPassthrough value: I32(7)
static ::GlobalNamespace::OVROverlay_OverlayShape const ReconstructionPassthrough;

/// @brief Field SurfaceProjectedPassthrough value: I32(8)
static ::GlobalNamespace::OVROverlay_OverlayShape const SurfaceProjectedPassthrough;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlay_OverlayShape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlay_OverlayShape) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
