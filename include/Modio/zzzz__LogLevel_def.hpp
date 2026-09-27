#pragma once
// IWYU pragma private; include "Modio/LogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace Modio {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::Modio::LogLevel);
DEFINE_IL2CPP_CLASS(::Modio::LogLevel, "Modio", "LogLevel");
// Dependencies 
namespace Modio {
// Is value type: true
// CS Name: Modio.LogLevel
struct CORDL_TYPE LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Error = static_cast<uint8_t>(0x1u),
__E_Warning = static_cast<uint8_t>(0x2u),
__E_Message = static_cast<uint8_t>(0x3u),
__E_Verbose = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return static_cast<__LogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr LogLevel(uint8_t  value__) noexcept;

/// @brief Field Error value: U8(1)
static ::Modio::LogLevel const Error;

/// @brief Field Message value: U8(3)
static ::Modio::LogLevel const Message;

/// @brief Field None value: U8(0)
static ::Modio::LogLevel const None;

/// @brief Field Verbose value: U8(4)
static ::Modio::LogLevel const Verbose;

/// @brief Field Warning value: U8(2)
static ::Modio::LogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::LogLevel) == 0x1, "Size mismatch!");

} // namespace end def Modio
