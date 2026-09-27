#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Length_Unit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Length_Unit)
// Forward declare root types
namespace GlobalNamespace {
struct Length_Unit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Length_Unit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Length_Unit, "UnityEngine.UIElements", "Length/Unit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Length/Unit
struct CORDL_TYPE Length_Unit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Length_Unit_Unwrapped
enum struct __Length_Unit_Unwrapped : int32_t {
__E_Pixel = static_cast<int32_t>(0x0),
__E_Percent = static_cast<int32_t>(0x1),
__E_Auto = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Length_Unit_Unwrapped () const noexcept {
return static_cast<__Length_Unit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Length_Unit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Length_Unit(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(2)
static ::GlobalNamespace::Length_Unit const Auto;

/// @brief Field None value: I32(3)
static ::GlobalNamespace::Length_Unit const None;

/// @brief Field Percent value: I32(1)
static ::GlobalNamespace::Length_Unit const Percent;

/// @brief Field Pixel value: I32(0)
static ::GlobalNamespace::Length_Unit const Pixel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Length_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Length_Unit) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
