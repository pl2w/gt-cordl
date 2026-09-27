#pragma once
// IWYU pragma private; include "WebSocketSharp/CompressionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionMethod)
// Forward declare root types
namespace WebSocketSharp {
struct CompressionMethod;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::CompressionMethod);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::CompressionMethod, "WebSocketSharp", "CompressionMethod");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.CompressionMethod
struct CORDL_TYPE CompressionMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __CompressionMethod_Unwrapped
enum struct __CompressionMethod_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Deflate = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionMethod_Unwrapped () const noexcept {
return static_cast<__CompressionMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr CompressionMethod(uint8_t  value__) noexcept;

/// @brief Field Deflate value: U8(1)
static ::WebSocketSharp::CompressionMethod const Deflate;

/// @brief Field None value: U8(0)
static ::WebSocketSharp::CompressionMethod const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::CompressionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::CompressionMethod) == 0x1, "Size mismatch!");

} // namespace end def WebSocketSharp
