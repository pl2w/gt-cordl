#pragma once
// IWYU pragma private; include "Fusion/PriorityLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PriorityLevel)
// Forward declare root types
namespace Fusion {
struct PriorityLevel;
}
// Write type traits
MARK_VAL_T(::Fusion::PriorityLevel);
DEFINE_IL2CPP_CLASS(::Fusion::PriorityLevel, "Fusion", "PriorityLevel");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.PriorityLevel
struct CORDL_TYPE PriorityLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PriorityLevel_Unwrapped
enum struct __PriorityLevel_Unwrapped : int32_t {
__E_Player = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
__E_Medium = static_cast<int32_t>(0x3),
__E_Low = static_cast<int32_t>(0x4),
__E_Lowest = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PriorityLevel_Unwrapped () const noexcept {
return static_cast<__PriorityLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PriorityLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PriorityLevel(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::Fusion::PriorityLevel const High;

/// @brief Field Low value: I32(4)
static ::Fusion::PriorityLevel const Low;

/// @brief Field Lowest value: I32(5)
static ::Fusion::PriorityLevel const Lowest;

/// @brief Field Medium value: I32(3)
static ::Fusion::PriorityLevel const Medium;

/// @brief Field Player value: I32(1)
static ::Fusion::PriorityLevel const Player;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::PriorityLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::PriorityLevel) == 0x4, "Size mismatch!");

} // namespace end def Fusion
