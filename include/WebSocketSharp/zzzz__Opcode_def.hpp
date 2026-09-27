#pragma once
// IWYU pragma private; include "WebSocketSharp/Opcode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Opcode)
// Forward declare root types
namespace WebSocketSharp {
struct Opcode;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::Opcode);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Opcode, "WebSocketSharp", "Opcode");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.Opcode
struct CORDL_TYPE Opcode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Opcode_Unwrapped
enum struct __Opcode_Unwrapped : uint8_t {
__E_Cont = static_cast<uint8_t>(0x0u),
__E_Text = static_cast<uint8_t>(0x1u),
__E_Binary = static_cast<uint8_t>(0x2u),
__E_Close = static_cast<uint8_t>(0x8u),
__E_Ping = static_cast<uint8_t>(0x9u),
__E_Pong = static_cast<uint8_t>(0xau),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Opcode_Unwrapped () const noexcept {
return static_cast<__Opcode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Opcode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Opcode(uint8_t  value__) noexcept;

/// @brief Field Binary value: U8(2)
static ::WebSocketSharp::Opcode const Binary;

/// @brief Field Close value: U8(8)
static ::WebSocketSharp::Opcode const Close;

/// @brief Field Cont value: U8(0)
static ::WebSocketSharp::Opcode const Cont;

/// @brief Field Ping value: U8(9)
static ::WebSocketSharp::Opcode const Ping;

/// @brief Field Pong value: U8(10)
static ::WebSocketSharp::Opcode const Pong;

/// @brief Field Text value: U8(1)
static ::WebSocketSharp::Opcode const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30333};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Opcode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Opcode) == 0x1, "Size mismatch!");

} // namespace end def WebSocketSharp
