#pragma once
// IWYU pragma private; include "Unity/Cinemachine/FillRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FillRule)
// Forward declare root types
namespace Unity::Cinemachine {
struct FillRule;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::FillRule);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::FillRule, "Unity.Cinemachine", "FillRule");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.FillRule
struct CORDL_TYPE FillRule {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FillRule_Unwrapped
enum struct __FillRule_Unwrapped : int32_t {
__E_EvenOdd = static_cast<int32_t>(0x0),
__E_NonZero = static_cast<int32_t>(0x1),
__E_Positive = static_cast<int32_t>(0x2),
__E_Negative = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FillRule_Unwrapped () const noexcept {
return static_cast<__FillRule_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FillRule() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FillRule(int32_t  value__) noexcept;

/// @brief Field EvenOdd value: I32(0)
static ::Unity::Cinemachine::FillRule const EvenOdd;

/// @brief Field Negative value: I32(3)
static ::Unity::Cinemachine::FillRule const Negative;

/// @brief Field NonZero value: I32(1)
static ::Unity::Cinemachine::FillRule const NonZero;

/// @brief Field Positive value: I32(2)
static ::Unity::Cinemachine::FillRule const Positive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::FillRule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::FillRule) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine
