#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_DrawMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVROverlayCanvas_DrawMode)
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlayCanvas_DrawMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlayCanvas_DrawMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlayCanvas_DrawMode, "", "OVROverlayCanvas/DrawMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlayCanvas/DrawMode
struct CORDL_TYPE OVROverlayCanvas_DrawMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVROverlayCanvas_DrawMode_Unwrapped
enum struct __OVROverlayCanvas_DrawMode_Unwrapped : int32_t {
__E_Opaque = static_cast<int32_t>(0x0),
__E_OpaqueWithClip = static_cast<int32_t>(0x1),
__E_Transparent = static_cast<int32_t>(0x2),
__E_TransparentDefaultAlpha = static_cast<int32_t>(0x2),
__E_TransparentCorrectAlpha = static_cast<int32_t>(0x3),
__E_AlphaToMask = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVROverlayCanvas_DrawMode_Unwrapped () const noexcept {
return static_cast<__OVROverlayCanvas_DrawMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVROverlayCanvas_DrawMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlayCanvas_DrawMode(int32_t  value__) noexcept;

/// @brief Field AlphaToMask value: I32(4)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const AlphaToMask;

/// @brief Field Opaque value: I32(0)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const Opaque;

/// @brief Field OpaqueWithClip value: I32(1)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const OpaqueWithClip;

/// @brief Field Transparent value: I32(2)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const Transparent;

/// @brief Field TransparentCorrectAlpha value: I32(3)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const TransparentCorrectAlpha;

/// @brief Field TransparentDefaultAlpha value: I32(2)
static ::GlobalNamespace::OVROverlayCanvas_DrawMode const TransparentDefaultAlpha;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12008};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlayCanvas_DrawMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlayCanvas_DrawMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
