#pragma once
// IWYU pragma private; include "WebSocketSharp/Mask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mask)
// Forward declare root types
namespace WebSocketSharp {
struct Mask;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::Mask);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Mask, "WebSocketSharp", "Mask");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.Mask
struct CORDL_TYPE Mask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Mask_Unwrapped
enum struct __Mask_Unwrapped : uint8_t {
__E_Off = static_cast<uint8_t>(0x0u),
__E_On = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mask_Unwrapped () const noexcept {
return static_cast<__Mask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Mask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Mask(uint8_t  value__) noexcept;

/// @brief Field Off value: U8(0)
static ::WebSocketSharp::Mask const Off;

/// @brief Field On value: U8(1)
static ::WebSocketSharp::Mask const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Mask, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Mask) == 0x1, "Size mismatch!");

} // namespace end def WebSocketSharp
