#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/RenderingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingMode)
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
struct RenderingMode;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::UnityCanvas::RenderingMode);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::RenderingMode, "Oculus.Interaction.UnityCanvas", "RenderingMode");
// Dependencies 
namespace Oculus::Interaction::UnityCanvas {
// Is value type: true
// CS Name: Oculus.Interaction.UnityCanvas.RenderingMode
struct CORDL_TYPE RenderingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderingMode_Unwrapped
enum struct __RenderingMode_Unwrapped : int32_t {
__E_AlphaBlended = static_cast<int32_t>(0x0),
__E_AlphaCutout = static_cast<int32_t>(0x1),
__E_Opaque = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingMode_Unwrapped () const noexcept {
return static_cast<__RenderingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderingMode(int32_t  value__) noexcept;

/// @brief Field AlphaBlended value: I32(0)
static ::Oculus::Interaction::UnityCanvas::RenderingMode const AlphaBlended;

/// @brief Field AlphaCutout value: I32(1)
static ::Oculus::Interaction::UnityCanvas::RenderingMode const AlphaCutout;

/// @brief Field Opaque value: I32(2)
static ::Oculus::Interaction::UnityCanvas::RenderingMode const Opaque;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UnityCanvas::RenderingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UnityCanvas::RenderingMode) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
