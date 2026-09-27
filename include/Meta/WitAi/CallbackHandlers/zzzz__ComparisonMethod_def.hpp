#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/ComparisonMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComparisonMethod)
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
struct ComparisonMethod;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::CallbackHandlers::ComparisonMethod);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::ComparisonMethod, "Meta.WitAi.CallbackHandlers", "ComparisonMethod");
// Dependencies 
namespace Meta::WitAi::CallbackHandlers {
// Is value type: true
// CS Name: Meta.WitAi.CallbackHandlers.ComparisonMethod
struct CORDL_TYPE ComparisonMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ComparisonMethod_Unwrapped
enum struct __ComparisonMethod_Unwrapped : int32_t {
__E_Equals = static_cast<int32_t>(0x0),
__E_NotEquals = static_cast<int32_t>(0x1),
__E_Greater = static_cast<int32_t>(0x2),
__E_GreaterThanOrEqualTo = static_cast<int32_t>(0x3),
__E_Less = static_cast<int32_t>(0x4),
__E_LessThanOrEqualTo = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ComparisonMethod_Unwrapped () const noexcept {
return static_cast<__ComparisonMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ComparisonMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ComparisonMethod(int32_t  value__) noexcept;

/// @brief Field Equals value: I32(0)
static ::Meta::WitAi::CallbackHandlers::ComparisonMethod const Equals;

/// @brief Field Greater value: I32(2)
static ::Meta::WitAi::CallbackHandlers::ComparisonMethod const Greater;

/// @brief Field GreaterThanOrEqualTo value: I32(3)
static ::Meta::WitAi::CallbackHandlers::ComparisonMethod const GreaterThanOrEqualTo;

/// @brief Field Less value: I32(4)
static ::Meta::WitAi::CallbackHandlers::ComparisonMethod const Less;

/// @brief Field LessThanOrEqualTo value: I32(5)
static ::Meta::WitAi::CallbackHandlers::ComparisonMethod const LessThanOrEqualTo;

/// @brief Field NotEquals value: I32(1)
static ::Meta::WitAi::CallbackHandlers::ComparisonMethod const NotEquals;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25736};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::ComparisonMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::ComparisonMethod) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
