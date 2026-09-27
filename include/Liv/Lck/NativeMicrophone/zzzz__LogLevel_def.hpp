#pragma once
// IWYU pragma private; include "Liv/Lck/NativeMicrophone/LogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace Liv::Lck::NativeMicrophone {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::NativeMicrophone::LogLevel);
DEFINE_IL2CPP_CLASS(::Liv::Lck::NativeMicrophone::LogLevel, "Liv.Lck.NativeMicrophone", "LogLevel");
// Dependencies 
namespace Liv::Lck::NativeMicrophone {
// Is value type: true
// CS Name: Liv.Lck.NativeMicrophone.LogLevel
struct CORDL_TYPE LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : uint32_t {
__E_Off = static_cast<uint32_t>(0x0u),
__E_Error = static_cast<uint32_t>(0x1u),
__E_Warn = static_cast<uint32_t>(0x2u),
__E_Info = static_cast<uint32_t>(0x3u),
__E_Debug = static_cast<uint32_t>(0x4u),
__E_Trace = static_cast<uint32_t>(0x5u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogLevel_Unwrapped () const noexcept {
return static_cast<__LogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr LogLevel(uint32_t  value__) noexcept;

/// @brief Field Debug value: U32(4)
static ::Liv::Lck::NativeMicrophone::LogLevel const Debug;

/// @brief Field Error value: U32(1)
static ::Liv::Lck::NativeMicrophone::LogLevel const Error;

/// @brief Field Info value: U32(3)
static ::Liv::Lck::NativeMicrophone::LogLevel const Info;

/// @brief Field Off value: U32(0)
static ::Liv::Lck::NativeMicrophone::LogLevel const Off;

/// @brief Field Trace value: U32(5)
static ::Liv::Lck::NativeMicrophone::LogLevel const Trace;

/// @brief Field Warn value: U32(2)
static ::Liv::Lck::NativeMicrophone::LogLevel const Warn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::NativeMicrophone::LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::NativeMicrophone::LogLevel) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::NativeMicrophone
