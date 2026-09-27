#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Delay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Delay)
// Forward declare root types
namespace POpusCodec::Enums {
struct Delay;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::Delay);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::Delay, "POpusCodec.Enums", "Delay");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.Delay
struct CORDL_TYPE Delay {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Delay_Unwrapped
enum struct __Delay_Unwrapped : int32_t {
__E_Delay2dot5ms = static_cast<int32_t>(0x5),
__E_Delay5ms = static_cast<int32_t>(0xa),
__E_Delay10ms = static_cast<int32_t>(0x14),
__E_Delay20ms = static_cast<int32_t>(0x28),
__E_Delay40ms = static_cast<int32_t>(0x50),
__E_Delay60ms = static_cast<int32_t>(0x78),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Delay_Unwrapped () const noexcept {
return static_cast<__Delay_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Delay() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Delay(int32_t  value__) noexcept;

/// @brief Field Delay10ms value: I32(20)
static ::POpusCodec::Enums::Delay const Delay10ms;

/// @brief Field Delay20ms value: I32(40)
static ::POpusCodec::Enums::Delay const Delay20ms;

/// @brief Field Delay2dot5ms value: I32(5)
static ::POpusCodec::Enums::Delay const Delay2dot5ms;

/// @brief Field Delay40ms value: I32(80)
static ::POpusCodec::Enums::Delay const Delay40ms;

/// @brief Field Delay5ms value: I32(10)
static ::POpusCodec::Enums::Delay const Delay5ms;

/// @brief Field Delay60ms value: I32(120)
static ::POpusCodec::Enums::Delay const Delay60ms;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::Delay, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::Delay) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums
