#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/VLoggerVerbosity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VLoggerVerbosity)
// Forward declare root types
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Logging::VLoggerVerbosity);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::VLoggerVerbosity, "Meta.Voice.Logging", "VLoggerVerbosity");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: true
// CS Name: Meta.Voice.Logging.VLoggerVerbosity
struct CORDL_TYPE VLoggerVerbosity {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VLoggerVerbosity_Unwrapped
enum struct __VLoggerVerbosity_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x5),
__E_Warning = static_cast<int32_t>(0x4),
__E_Info = static_cast<int32_t>(0x3),
__E_Debug = static_cast<int32_t>(0x2),
__E_Verbose = static_cast<int32_t>(0x1),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VLoggerVerbosity_Unwrapped () const noexcept {
return static_cast<__VLoggerVerbosity_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VLoggerVerbosity() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VLoggerVerbosity(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(2)
static ::Meta::Voice::Logging::VLoggerVerbosity const Debug;

/// @brief Field Error value: I32(5)
static ::Meta::Voice::Logging::VLoggerVerbosity const Error;

/// @brief Field Info value: I32(3)
static ::Meta::Voice::Logging::VLoggerVerbosity const Info;

/// @brief Field None value: I32(0)
static ::Meta::Voice::Logging::VLoggerVerbosity const None;

/// @brief Field Verbose value: I32(1)
static ::Meta::Voice::Logging::VLoggerVerbosity const Verbose;

/// @brief Field Warning value: I32(4)
static ::Meta::Voice::Logging::VLoggerVerbosity const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::VLoggerVerbosity, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::VLoggerVerbosity) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
