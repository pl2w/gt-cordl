#pragma once
// IWYU pragma private; include "WebSocketSharp/ByteOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ByteOrder)
// Forward declare root types
namespace WebSocketSharp {
struct ByteOrder;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::ByteOrder);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::ByteOrder, "WebSocketSharp", "ByteOrder");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.ByteOrder
struct CORDL_TYPE ByteOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ByteOrder_Unwrapped
enum struct __ByteOrder_Unwrapped : int32_t {
__E_Little = static_cast<int32_t>(0x0),
__E_Big = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ByteOrder_Unwrapped () const noexcept {
return static_cast<__ByteOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ByteOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ByteOrder(int32_t  value__) noexcept;

/// @brief Field Big value: I32(1)
static ::WebSocketSharp::ByteOrder const Big;

/// @brief Field Little value: I32(0)
static ::WebSocketSharp::ByteOrder const Little;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::ByteOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::ByteOrder) == 0x4, "Size mismatch!");

} // namespace end def WebSocketSharp
