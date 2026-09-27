#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket_MessageOpcode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket_MessageOpcode)
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket_MessageOpcode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket_MessageOpcode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket_MessageOpcode, "System.Net.WebSockets", "ManagedWebSocket/MessageOpcode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/MessageOpcode
struct CORDL_TYPE ManagedWebSocket_MessageOpcode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ManagedWebSocket_MessageOpcode_Unwrapped
enum struct __ManagedWebSocket_MessageOpcode_Unwrapped : uint8_t {
__E_Continuation = static_cast<uint8_t>(0x0u),
__E_Text = static_cast<uint8_t>(0x1u),
__E_Binary = static_cast<uint8_t>(0x2u),
__E_Close = static_cast<uint8_t>(0x8u),
__E_Ping = static_cast<uint8_t>(0x9u),
__E_Pong = static_cast<uint8_t>(0xau),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ManagedWebSocket_MessageOpcode_Unwrapped () const noexcept {
return static_cast<__ManagedWebSocket_MessageOpcode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket_MessageOpcode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket_MessageOpcode(uint8_t  value__) noexcept;

/// @brief Field Binary value: U8(2)
static ::GlobalNamespace::ManagedWebSocket_MessageOpcode const Binary;

/// @brief Field Close value: U8(8)
static ::GlobalNamespace::ManagedWebSocket_MessageOpcode const Close;

/// @brief Field Continuation value: U8(0)
static ::GlobalNamespace::ManagedWebSocket_MessageOpcode const Continuation;

/// @brief Field Ping value: U8(9)
static ::GlobalNamespace::ManagedWebSocket_MessageOpcode const Ping;

/// @brief Field Pong value: U8(10)
static ::GlobalNamespace::ManagedWebSocket_MessageOpcode const Pong;

/// @brief Field Text value: U8(1)
static ::GlobalNamespace::ManagedWebSocket_MessageOpcode const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedWebSocket_MessageOpcode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedWebSocket_MessageOpcode) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
