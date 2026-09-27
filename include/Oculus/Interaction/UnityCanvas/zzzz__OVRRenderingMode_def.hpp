#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/OVRRenderingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRenderingMode)
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
struct OVRRenderingMode;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::UnityCanvas::OVRRenderingMode);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::OVRRenderingMode, "Oculus.Interaction.UnityCanvas", "OVRRenderingMode");
// Dependencies 
namespace Oculus::Interaction::UnityCanvas {
// Is value type: true
// CS Name: Oculus.Interaction.UnityCanvas.OVRRenderingMode
struct CORDL_TYPE OVRRenderingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRRenderingMode_Unwrapped
enum struct __OVRRenderingMode_Unwrapped : int32_t {
__E_AlphaBlended = static_cast<int32_t>(0x0),
__E_AlphaCutout = static_cast<int32_t>(0x1),
__E_Opaque = static_cast<int32_t>(0x2),
__E_Overlay = static_cast<int32_t>(0x64),
__E_Underlay = static_cast<int32_t>(0x65),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRRenderingMode_Unwrapped () const noexcept {
return static_cast<__OVRRenderingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRRenderingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRRenderingMode(int32_t  value__) noexcept;

/// @brief Field AlphaBlended value: I32(0)
static ::Oculus::Interaction::UnityCanvas::OVRRenderingMode const AlphaBlended;

/// @brief Field AlphaCutout value: I32(1)
static ::Oculus::Interaction::UnityCanvas::OVRRenderingMode const AlphaCutout;

/// @brief Field Opaque value: I32(2)
static ::Oculus::Interaction::UnityCanvas::OVRRenderingMode const Opaque;

/// @brief Field Overlay value: I32(100)
static ::Oculus::Interaction::UnityCanvas::OVRRenderingMode const Overlay;

/// @brief Field Underlay value: I32(101)
static ::Oculus::Interaction::UnityCanvas::OVRRenderingMode const Underlay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::OVRRenderingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::OVRRenderingMode) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
