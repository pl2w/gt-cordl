#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/MatchMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchMethod)
// Forward declare root types
namespace Meta::WitAi::CallbackHandlers {
struct MatchMethod;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::CallbackHandlers::MatchMethod);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CallbackHandlers::MatchMethod, "Meta.WitAi.CallbackHandlers", "MatchMethod");
// Dependencies 
namespace Meta::WitAi::CallbackHandlers {
// Is value type: true
// CS Name: Meta.WitAi.CallbackHandlers.MatchMethod
struct CORDL_TYPE MatchMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MatchMethod_Unwrapped
enum struct __MatchMethod_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Text = static_cast<int32_t>(0x1),
__E_RegularExpression = static_cast<int32_t>(0x2),
__E_IntegerComparison = static_cast<int32_t>(0x3),
__E_FloatComparison = static_cast<int32_t>(0x4),
__E_DoubleComparison = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchMethod_Unwrapped () const noexcept {
return static_cast<__MatchMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MatchMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MatchMethod(int32_t  value__) noexcept;

/// @brief Field DoubleComparison value: I32(5)
static ::Meta::WitAi::CallbackHandlers::MatchMethod const DoubleComparison;

/// @brief Field FloatComparison value: I32(4)
static ::Meta::WitAi::CallbackHandlers::MatchMethod const FloatComparison;

/// @brief Field IntegerComparison value: I32(3)
static ::Meta::WitAi::CallbackHandlers::MatchMethod const IntegerComparison;

/// @brief Field None value: I32(0)
static ::Meta::WitAi::CallbackHandlers::MatchMethod const None;

/// @brief Field RegularExpression value: I32(2)
static ::Meta::WitAi::CallbackHandlers::MatchMethod const RegularExpression;

/// @brief Field Text value: I32(1)
static ::Meta::WitAi::CallbackHandlers::MatchMethod const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CallbackHandlers::MatchMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CallbackHandlers::MatchMethod) == 0x4, "Size mismatch!");

} // namespace end def Meta::WitAi::CallbackHandlers
