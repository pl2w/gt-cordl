#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationStepper_ModeEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationStepper_ModeEnum)
// Forward declare root types
namespace GlobalNamespace {
struct RotationStepper_ModeEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RotationStepper_ModeEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotationStepper_ModeEnum, "", "RotationStepper/ModeEnum");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RotationStepper/ModeEnum
struct CORDL_TYPE RotationStepper_ModeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotationStepper_ModeEnum_Unwrapped
enum struct __RotationStepper_ModeEnum_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x0),
__E_Random = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationStepper_ModeEnum_Unwrapped () const noexcept {
return static_cast<__RotationStepper_ModeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotationStepper_ModeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RotationStepper_ModeEnum(int32_t  value__) noexcept;

/// @brief Field Fixed value: I32(0)
static ::GlobalNamespace::RotationStepper_ModeEnum const Fixed;

/// @brief Field Random value: I32(1)
static ::GlobalNamespace::RotationStepper_ModeEnum const Random;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{41};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotationStepper_ModeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotationStepper_ModeEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
