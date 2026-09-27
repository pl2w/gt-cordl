#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ConnectionStateValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionStateValue)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct ConnectionStateValue;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::ConnectionStateValue);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::ConnectionStateValue, "ExitGames.Client.Photon", "ConnectionStateValue");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.ConnectionStateValue
struct CORDL_TYPE ConnectionStateValue {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ConnectionStateValue_Unwrapped
enum struct __ConnectionStateValue_Unwrapped : uint8_t {
__E_Disconnected = static_cast<uint8_t>(0x0u),
__E_Connecting = static_cast<uint8_t>(0x1u),
__E_Connected = static_cast<uint8_t>(0x3u),
__E_Disconnecting = static_cast<uint8_t>(0x4u),
__E_AcknowledgingDisconnect = static_cast<uint8_t>(0x5u),
__E_Zombie = static_cast<uint8_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionStateValue_Unwrapped () const noexcept {
return static_cast<__ConnectionStateValue_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionStateValue() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ConnectionStateValue(uint8_t  value__) noexcept;

/// @brief Field AcknowledgingDisconnect value: U8(5)
static ::ExitGames::Client::Photon::ConnectionStateValue const AcknowledgingDisconnect;

/// @brief Field Connected value: U8(3)
static ::ExitGames::Client::Photon::ConnectionStateValue const Connected;

/// @brief Field Connecting value: U8(1)
static ::ExitGames::Client::Photon::ConnectionStateValue const Connecting;

/// @brief Field Disconnected value: U8(0)
static ::ExitGames::Client::Photon::ConnectionStateValue const Disconnected;

/// @brief Field Disconnecting value: U8(4)
static ::ExitGames::Client::Photon::ConnectionStateValue const Disconnecting;

/// @brief Field Zombie value: U8(6)
static ::ExitGames::Client::Photon::ConnectionStateValue const Zombie;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::ConnectionStateValue, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::ConnectionStateValue) == 0x1, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
