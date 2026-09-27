#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ConnectionProtocol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionProtocol)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::ConnectionProtocol);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::ConnectionProtocol, "ExitGames.Client.Photon", "ConnectionProtocol");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.ConnectionProtocol
struct CORDL_TYPE ConnectionProtocol {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ConnectionProtocol_Unwrapped
enum struct __ConnectionProtocol_Unwrapped : uint8_t {
__E_Udp = static_cast<uint8_t>(0x0u),
__E_Tcp = static_cast<uint8_t>(0x1u),
__E_WebSocket = static_cast<uint8_t>(0x4u),
__E_WebSocketSecure = static_cast<uint8_t>(0x5u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionProtocol_Unwrapped () const noexcept {
return static_cast<__ConnectionProtocol_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectionProtocol() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ConnectionProtocol(uint8_t  value__) noexcept;

/// @brief Field Tcp value: U8(1)
static ::ExitGames::Client::Photon::ConnectionProtocol const Tcp;

/// @brief Field Udp value: U8(0)
static ::ExitGames::Client::Photon::ConnectionProtocol const Udp;

/// @brief Field WebSocket value: U8(4)
static ::ExitGames::Client::Photon::ConnectionProtocol const WebSocket;

/// @brief Field WebSocketSecure value: U8(5)
static ::ExitGames::Client::Photon::ConnectionProtocol const WebSocketSecure;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::ConnectionProtocol, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::ConnectionProtocol) == 0x1, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
