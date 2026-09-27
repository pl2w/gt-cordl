#pragma once
// IWYU pragma private; include "Fusion/CompareOperator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompareOperator)
// Forward declare root types
namespace Fusion {
struct CompareOperator;
}
// Write type traits
MARK_VAL_T(::Fusion::CompareOperator);
DEFINE_IL2CPP_CLASS(::Fusion::CompareOperator, "Fusion", "CompareOperator");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.CompareOperator
struct CORDL_TYPE CompareOperator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompareOperator_Unwrapped
enum struct __CompareOperator_Unwrapped : int32_t {
__E_Equal = static_cast<int32_t>(0x0),
__E_NotEqual = static_cast<int32_t>(0x1),
__E_Less = static_cast<int32_t>(0x2),
__E_LessOrEqual = static_cast<int32_t>(0x3),
__E_GreaterOrEqual = static_cast<int32_t>(0x4),
__E_Greater = static_cast<int32_t>(0x5),
__E_NotZero = static_cast<int32_t>(0x6),
__E_IsZero = static_cast<int32_t>(0x7),
__E_BitwiseAndNotEqualZero = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompareOperator_Unwrapped () const noexcept {
return static_cast<__CompareOperator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompareOperator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompareOperator(int32_t  value__) noexcept;

/// @brief Field BitwiseAndNotEqualZero value: I32(8)
static ::Fusion::CompareOperator const BitwiseAndNotEqualZero;

/// @brief Field Equal value: I32(0)
static ::Fusion::CompareOperator const Equal;

/// @brief Field Greater value: I32(5)
static ::Fusion::CompareOperator const Greater;

/// @brief Field GreaterOrEqual value: I32(4)
static ::Fusion::CompareOperator const GreaterOrEqual;

/// @brief Field IsZero value: I32(7)
static ::Fusion::CompareOperator const IsZero;

/// @brief Field Less value: I32(2)
static ::Fusion::CompareOperator const Less;

/// @brief Field LessOrEqual value: I32(3)
static ::Fusion::CompareOperator const LessOrEqual;

/// @brief Field NotEqual value: I32(1)
static ::Fusion::CompareOperator const NotEqual;

/// @brief Field NotZero value: I32(6)
static ::Fusion::CompareOperator const NotZero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CompareOperator, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::CompareOperator) == 0x4, "Size mismatch!");

} // namespace end def Fusion
