#pragma once
// IWYU pragma private; include "Fusion/Units.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Units)
// Forward declare root types
namespace Fusion {
struct Units;
}
// Write type traits
MARK_VAL_T(::Fusion::Units);
DEFINE_IL2CPP_CLASS(::Fusion::Units, "Fusion", "Units");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Units
struct CORDL_TYPE Units {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Units_Unwrapped
enum struct __Units_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Ticks = static_cast<int32_t>(0x1),
__E_Seconds = static_cast<int32_t>(0x2),
__E_MilliSecs = static_cast<int32_t>(0x3),
__E_Kilobytes = static_cast<int32_t>(0x4),
__E_Megabytes = static_cast<int32_t>(0x5),
__E_Normalized = static_cast<int32_t>(0x6),
__E_Multiplier = static_cast<int32_t>(0x7),
__E_Percentage = static_cast<int32_t>(0x8),
__E_NormalizedPercentage = static_cast<int32_t>(0x9),
__E_Degrees = static_cast<int32_t>(0xa),
__E_PerSecond = static_cast<int32_t>(0xb),
__E_DegreesPerSecond = static_cast<int32_t>(0xc),
__E_Radians = static_cast<int32_t>(0xd),
__E_RadiansPerSecond = static_cast<int32_t>(0xe),
__E_TicksPerSecond = static_cast<int32_t>(0xf),
__E_Units = static_cast<int32_t>(0x10),
__E_Bytes = static_cast<int32_t>(0x11),
__E_Count = static_cast<int32_t>(0x12),
__E_Packets = static_cast<int32_t>(0x13),
__E_Frames = static_cast<int32_t>(0x14),
__E_FramesPerSecond = static_cast<int32_t>(0x15),
__E_SquareMagnitude = static_cast<int32_t>(0x16),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Units_Unwrapped () const noexcept {
return static_cast<__Units_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Units() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Units(int32_t  value__) noexcept;

/// @brief Field Bytes value: I32(17)
static ::Fusion::Units const Bytes;

/// @brief Field Count value: I32(18)
static ::Fusion::Units const Count;

/// @brief Field Degrees value: I32(10)
static ::Fusion::Units const Degrees;

/// @brief Field DegreesPerSecond value: I32(12)
static ::Fusion::Units const DegreesPerSecond;

/// @brief Field Frames value: I32(20)
static ::Fusion::Units const Frames;

/// @brief Field FramesPerSecond value: I32(21)
static ::Fusion::Units const FramesPerSecond;

/// @brief Field Kilobytes value: I32(4)
static ::Fusion::Units const Kilobytes;

/// @brief Field Megabytes value: I32(5)
static ::Fusion::Units const Megabytes;

/// @brief Field MilliSecs value: I32(3)
static ::Fusion::Units const MilliSecs;

/// @brief Field Multiplier value: I32(7)
static ::Fusion::Units const Multiplier;

/// @brief Field None value: I32(0)
static ::Fusion::Units const None;

/// @brief Field Normalized value: I32(6)
static ::Fusion::Units const Normalized;

/// @brief Field NormalizedPercentage value: I32(9)
static ::Fusion::Units const NormalizedPercentage;

/// @brief Field Packets value: I32(19)
static ::Fusion::Units const Packets;

/// @brief Field PerSecond value: I32(11)
static ::Fusion::Units const PerSecond;

/// @brief Field Percentage value: I32(8)
static ::Fusion::Units const Percentage;

/// @brief Field Radians value: I32(13)
static ::Fusion::Units const Radians;

/// @brief Field RadiansPerSecond value: I32(14)
static ::Fusion::Units const RadiansPerSecond;

/// @brief Field Seconds value: I32(2)
static ::Fusion::Units const Seconds;

/// @brief Field SquareMagnitude value: I32(22)
static ::Fusion::Units const SquareMagnitude;

/// @brief Field Ticks value: I32(1)
static ::Fusion::Units const Ticks;

/// @brief Field TicksPerSecond value: I32(15)
static ::Fusion::Units const TicksPerSecond;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Units value: I32(16)
static ::Fusion::Units const _cordl_Units;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Units, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Units) == 0x4, "Size mismatch!");

} // namespace end def Fusion
