#pragma once
// IWYU pragma private; include "GlobalNamespace/Oscillator_WaveTypeEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Oscillator_WaveTypeEnum)
// Forward declare root types
namespace GlobalNamespace {
struct Oscillator_WaveTypeEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Oscillator_WaveTypeEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Oscillator_WaveTypeEnum, "", "Oscillator/WaveTypeEnum");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oscillator/WaveTypeEnum
struct CORDL_TYPE Oscillator_WaveTypeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Oscillator_WaveTypeEnum_Unwrapped
enum struct __Oscillator_WaveTypeEnum_Unwrapped : int32_t {
__E_Sine = static_cast<int32_t>(0x0),
__E_Square = static_cast<int32_t>(0x1),
__E_Triangle = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Oscillator_WaveTypeEnum_Unwrapped () const noexcept {
return static_cast<__Oscillator_WaveTypeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Oscillator_WaveTypeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Oscillator_WaveTypeEnum(int32_t  value__) noexcept;

/// @brief Field Sine value: I32(0)
static ::GlobalNamespace::Oscillator_WaveTypeEnum const Sine;

/// @brief Field Square value: I32(1)
static ::GlobalNamespace::Oscillator_WaveTypeEnum const Square;

/// @brief Field Triangle value: I32(2)
static ::GlobalNamespace::Oscillator_WaveTypeEnum const Triangle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{39};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Oscillator_WaveTypeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Oscillator_WaveTypeEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
