#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LevelFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelFilter)
// Forward declare root types
namespace Liv::Lck::Core {
struct LevelFilter;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::LevelFilter);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LevelFilter, "Liv.Lck.Core", "LevelFilter");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.LevelFilter
struct CORDL_TYPE LevelFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LevelFilter_Unwrapped
enum struct __LevelFilter_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Warn = static_cast<int32_t>(0x2),
__E_Info = static_cast<int32_t>(0x3),
__E_Debug = static_cast<int32_t>(0x4),
__E_Trace = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LevelFilter_Unwrapped () const noexcept {
return static_cast<__LevelFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LevelFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LevelFilter(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(4)
static ::Liv::Lck::Core::LevelFilter const Debug;

/// @brief Field Error value: I32(1)
static ::Liv::Lck::Core::LevelFilter const Error;

/// @brief Field Info value: I32(3)
static ::Liv::Lck::Core::LevelFilter const Info;

/// @brief Field Off value: I32(0)
static ::Liv::Lck::Core::LevelFilter const Off;

/// @brief Field Trace value: I32(5)
static ::Liv::Lck::Core::LevelFilter const Trace;

/// @brief Field Warn value: I32(2)
static ::Liv::Lck::Core::LevelFilter const Warn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LevelFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LevelFilter) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Core
