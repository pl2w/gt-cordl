#pragma once
// IWYU pragma private; include "UnityEngine/UI/AspectRatioFitter_AspectMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AspectRatioFitter_AspectMode)
// Forward declare root types
namespace GlobalNamespace {
struct AspectRatioFitter_AspectMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AspectRatioFitter_AspectMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AspectRatioFitter_AspectMode, "UnityEngine.UI", "AspectRatioFitter/AspectMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.AspectRatioFitter/AspectMode
struct CORDL_TYPE AspectRatioFitter_AspectMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AspectRatioFitter_AspectMode_Unwrapped
enum struct __AspectRatioFitter_AspectMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WidthControlsHeight = static_cast<int32_t>(0x1),
__E_HeightControlsWidth = static_cast<int32_t>(0x2),
__E_FitInParent = static_cast<int32_t>(0x3),
__E_EnvelopeParent = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AspectRatioFitter_AspectMode_Unwrapped () const noexcept {
return static_cast<__AspectRatioFitter_AspectMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AspectRatioFitter_AspectMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AspectRatioFitter_AspectMode(int32_t  value__) noexcept;

/// @brief Field EnvelopeParent value: I32(4)
static ::GlobalNamespace::AspectRatioFitter_AspectMode const EnvelopeParent;

/// @brief Field FitInParent value: I32(3)
static ::GlobalNamespace::AspectRatioFitter_AspectMode const FitInParent;

/// @brief Field HeightControlsWidth value: I32(2)
static ::GlobalNamespace::AspectRatioFitter_AspectMode const HeightControlsWidth;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::AspectRatioFitter_AspectMode const None;

/// @brief Field WidthControlsHeight value: I32(1)
static ::GlobalNamespace::AspectRatioFitter_AspectMode const WidthControlsHeight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AspectRatioFitter_AspectMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AspectRatioFitter_AspectMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
