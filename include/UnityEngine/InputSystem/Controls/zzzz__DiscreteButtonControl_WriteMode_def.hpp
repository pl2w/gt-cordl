#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DiscreteButtonControl_WriteMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscreteButtonControl_WriteMode)
// Forward declare root types
namespace GlobalNamespace {
struct DiscreteButtonControl_WriteMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DiscreteButtonControl_WriteMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DiscreteButtonControl_WriteMode, "UnityEngine.InputSystem.Controls", "DiscreteButtonControl/WriteMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Controls.DiscreteButtonControl/WriteMode
struct CORDL_TYPE DiscreteButtonControl_WriteMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DiscreteButtonControl_WriteMode_Unwrapped
enum struct __DiscreteButtonControl_WriteMode_Unwrapped : int32_t {
__E_WriteDisabled = static_cast<int32_t>(0x0),
__E_WriteNullAndMaxValue = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DiscreteButtonControl_WriteMode_Unwrapped () const noexcept {
return static_cast<__DiscreteButtonControl_WriteMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DiscreteButtonControl_WriteMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DiscreteButtonControl_WriteMode(int32_t  value__) noexcept;

/// @brief Field WriteDisabled value: I32(0)
static ::GlobalNamespace::DiscreteButtonControl_WriteMode const WriteDisabled;

/// @brief Field WriteNullAndMaxValue value: I32(1)
static ::GlobalNamespace::DiscreteButtonControl_WriteMode const WriteNullAndMaxValue;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13855};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiscreteButtonControl_WriteMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DiscreteButtonControl_WriteMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
