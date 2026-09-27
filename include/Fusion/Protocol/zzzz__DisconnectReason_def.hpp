#pragma once
// IWYU pragma private; include "Fusion/Protocol/DisconnectReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectReason)
// Forward declare root types
namespace Fusion::Protocol {
struct DisconnectReason;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::DisconnectReason);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::DisconnectReason, "Fusion.Protocol", "DisconnectReason");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.DisconnectReason
struct CORDL_TYPE DisconnectReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DisconnectReason_Unwrapped
enum struct __DisconnectReason_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_ServerLogic = static_cast<uint8_t>(0x1u),
__E_InvalidEventCode = static_cast<uint8_t>(0x2u),
__E_InvalidJoinMsgType = static_cast<uint8_t>(0x3u),
__E_InvalidJoinGameMode = static_cast<uint8_t>(0x4u),
__E_IncompatibleConfiguration = static_cast<uint8_t>(0x5u),
__E_ServerAlreadyInRoom = static_cast<uint8_t>(0x6u),
__E_Error = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisconnectReason_Unwrapped () const noexcept {
return static_cast<__DisconnectReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DisconnectReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr DisconnectReason(uint8_t  value__) noexcept;

/// @brief Field Error value: U8(7)
static ::Fusion::Protocol::DisconnectReason const Error;

/// @brief Field IncompatibleConfiguration value: U8(5)
static ::Fusion::Protocol::DisconnectReason const IncompatibleConfiguration;

/// @brief Field InvalidEventCode value: U8(2)
static ::Fusion::Protocol::DisconnectReason const InvalidEventCode;

/// @brief Field InvalidJoinGameMode value: U8(4)
static ::Fusion::Protocol::DisconnectReason const InvalidJoinGameMode;

/// @brief Field InvalidJoinMsgType value: U8(3)
static ::Fusion::Protocol::DisconnectReason const InvalidJoinMsgType;

/// @brief Field None value: U8(0)
static ::Fusion::Protocol::DisconnectReason const None;

/// @brief Field ServerAlreadyInRoom value: U8(6)
static ::Fusion::Protocol::DisconnectReason const ServerAlreadyInRoom;

/// @brief Field ServerLogic value: U8(1)
static ::Fusion::Protocol::DisconnectReason const ServerLogic;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::DisconnectReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::DisconnectReason) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Protocol
