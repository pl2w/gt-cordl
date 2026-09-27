#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasScaler_Unit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasScaler_Unit)
// Forward declare root types
namespace GlobalNamespace {
struct CanvasScaler_Unit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CanvasScaler_Unit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CanvasScaler_Unit, "UnityEngine.UI", "CanvasScaler/Unit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.CanvasScaler/Unit
struct CORDL_TYPE CanvasScaler_Unit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CanvasScaler_Unit_Unwrapped
enum struct __CanvasScaler_Unit_Unwrapped : int32_t {
__E_Centimeters = static_cast<int32_t>(0x0),
__E_Millimeters = static_cast<int32_t>(0x1),
__E_Inches = static_cast<int32_t>(0x2),
__E_Points = static_cast<int32_t>(0x3),
__E_Picas = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CanvasScaler_Unit_Unwrapped () const noexcept {
return static_cast<__CanvasScaler_Unit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CanvasScaler_Unit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CanvasScaler_Unit(int32_t  value__) noexcept;

/// @brief Field Centimeters value: I32(0)
static ::GlobalNamespace::CanvasScaler_Unit const Centimeters;

/// @brief Field Inches value: I32(2)
static ::GlobalNamespace::CanvasScaler_Unit const Inches;

/// @brief Field Millimeters value: I32(1)
static ::GlobalNamespace::CanvasScaler_Unit const Millimeters;

/// @brief Field Picas value: I32(4)
static ::GlobalNamespace::CanvasScaler_Unit const Picas;

/// @brief Field Points value: I32(3)
static ::GlobalNamespace::CanvasScaler_Unit const Points;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasScaler_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CanvasScaler_Unit) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
