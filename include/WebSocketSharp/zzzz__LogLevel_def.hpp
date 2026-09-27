#pragma once
// IWYU pragma private; include "WebSocketSharp/LogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace WebSocketSharp {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::LogLevel);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::LogLevel, "WebSocketSharp", "LogLevel");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.LogLevel
struct CORDL_TYPE LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : int32_t {
__E_Trace = static_cast<int32_t>(0x0),
__E_Debug = static_cast<int32_t>(0x1),
__E_Info = static_cast<int32_t>(0x2),
__E_Warn = static_cast<int32_t>(0x3),
__E_Error = static_cast<int32_t>(0x4),
__E_Fatal = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return static_cast<__LogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LogLevel(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(1)
static ::WebSocketSharp::LogLevel const Debug;

/// @brief Field Error value: I32(4)
static ::WebSocketSharp::LogLevel const Error;

/// @brief Field Fatal value: I32(5)
static ::WebSocketSharp::LogLevel const Fatal;

/// @brief Field Info value: I32(2)
static ::WebSocketSharp::LogLevel const Info;

/// @brief Field Trace value: I32(0)
static ::WebSocketSharp::LogLevel const Trace;

/// @brief Field Warn value: I32(3)
static ::WebSocketSharp::LogLevel const Warn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::LogLevel) == 0x4, "Size mismatch!");

} // namespace end def WebSocketSharp
