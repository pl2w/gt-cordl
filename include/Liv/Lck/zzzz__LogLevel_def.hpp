#pragma once
// IWYU pragma private; include "Liv/Lck/LogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogLevel)
// Forward declare root types
namespace Liv::Lck {
struct LogLevel;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::LogLevel);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LogLevel, "Liv.Lck", "LogLevel");
// Dependencies 
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.LogLevel
struct CORDL_TYPE LogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LogLevel_Unwrapped
enum struct __LogLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Info = static_cast<int32_t>(0x3),
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

/// @brief Field Error value: I32(1)
static ::Liv::Lck::LogLevel const Error;

/// @brief Field Info value: I32(3)
static ::Liv::Lck::LogLevel const Info;

/// @brief Field None value: I32(0)
static ::Liv::Lck::LogLevel const None;

/// @brief Field Warning value: I32(2)
static ::Liv::Lck::LogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24772};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LogLevel) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck
