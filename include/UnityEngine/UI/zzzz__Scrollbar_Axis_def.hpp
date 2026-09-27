#pragma once
// IWYU pragma private; include "UnityEngine/UI/Scrollbar_Axis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scrollbar_Axis)
// Forward declare root types
namespace GlobalNamespace {
struct Scrollbar_Axis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Scrollbar_Axis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Scrollbar_Axis, "UnityEngine.UI", "Scrollbar/Axis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Scrollbar/Axis
struct CORDL_TYPE Scrollbar_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Scrollbar_Axis_Unwrapped
enum struct __Scrollbar_Axis_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Scrollbar_Axis_Unwrapped () const noexcept {
return static_cast<__Scrollbar_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Scrollbar_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Scrollbar_Axis(int32_t  value__) noexcept;

/// @brief Field Horizontal value: I32(0)
static ::GlobalNamespace::Scrollbar_Axis const Horizontal;

/// @brief Field Vertical value: I32(1)
static ::GlobalNamespace::Scrollbar_Axis const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Scrollbar_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Scrollbar_Axis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
