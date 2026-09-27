#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/RetryOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RetryOrder)
// Forward declare root types
namespace Backtrace::Unity::Types {
struct RetryOrder;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Types::RetryOrder);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Types::RetryOrder, "Backtrace.Unity.Types", "RetryOrder");
// Dependencies 
namespace Backtrace::Unity::Types {
// Is value type: true
// CS Name: Backtrace.Unity.Types.RetryOrder
struct CORDL_TYPE RetryOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RetryOrder_Unwrapped
enum struct __RetryOrder_Unwrapped : int32_t {
__E_Stack = static_cast<int32_t>(0x0),
__E_Queue = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RetryOrder_Unwrapped () const noexcept {
return static_cast<__RetryOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RetryOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RetryOrder(int32_t  value__) noexcept;

/// @brief Field Queue value: I32(1)
static ::Backtrace::Unity::Types::RetryOrder const Queue;

/// @brief Field Stack value: I32(0)
static ::Backtrace::Unity::Types::RetryOrder const Stack;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Types::RetryOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Types::RetryOrder) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Types
