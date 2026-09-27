#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabRotateTransformer_Axis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoGrabRotateTransformer_Axis)
// Forward declare root types
namespace GlobalNamespace {
struct TwoGrabRotateTransformer_Axis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TwoGrabRotateTransformer_Axis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TwoGrabRotateTransformer_Axis, "Oculus.Interaction", "TwoGrabRotateTransformer/Axis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TwoGrabRotateTransformer/Axis
struct CORDL_TYPE TwoGrabRotateTransformer_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TwoGrabRotateTransformer_Axis_Unwrapped
enum struct __TwoGrabRotateTransformer_Axis_Unwrapped : int32_t {
__E_Right = static_cast<int32_t>(0x0),
__E_Up = static_cast<int32_t>(0x1),
__E_Forward = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TwoGrabRotateTransformer_Axis_Unwrapped () const noexcept {
return static_cast<__TwoGrabRotateTransformer_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabRotateTransformer_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TwoGrabRotateTransformer_Axis(int32_t  value__) noexcept;

/// @brief Field Forward value: I32(2)
static ::GlobalNamespace::TwoGrabRotateTransformer_Axis const Forward;

/// @brief Field Right value: I32(0)
static ::GlobalNamespace::TwoGrabRotateTransformer_Axis const Right;

/// @brief Field Up value: I32(1)
static ::GlobalNamespace::TwoGrabRotateTransformer_Axis const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TwoGrabRotateTransformer_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TwoGrabRotateTransformer_Axis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
