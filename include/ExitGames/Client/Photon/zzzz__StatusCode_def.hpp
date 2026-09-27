#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StatusCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StatusCode)
// Forward declare root types
namespace ExitGames::Client::Photon {
struct StatusCode;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::StatusCode);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::StatusCode, "ExitGames.Client.Photon", "StatusCode");
// Dependencies 
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ExitGames.Client.Photon.StatusCode
struct CORDL_TYPE StatusCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StatusCode_Unwrapped
enum struct __StatusCode_Unwrapped : int32_t {
__E_Connect = static_cast<int32_t>(0x400),
__E_Disconnect = static_cast<int32_t>(0x401),
__E_Exception = static_cast<int32_t>(0x402),
__E_ExceptionOnConnect = static_cast<int32_t>(0x3ff),
__E_ServerAddressInvalid = static_cast<int32_t>(0x41a),
__E_DnsExceptionOnConnect = static_cast<int32_t>(0x41b),
__E_SecurityExceptionOnConnect = static_cast<int32_t>(0x3fe),
__E_SendError = static_cast<int32_t>(0x406),
__E_ExceptionOnReceive = static_cast<int32_t>(0x40f),
__E_TimeoutDisconnect = static_cast<int32_t>(0x410),
__E_DisconnectByServerTimeout = static_cast<int32_t>(0x411),
__E_DisconnectByServerUserLimit = static_cast<int32_t>(0x412),
__E_DisconnectByServerLogic = static_cast<int32_t>(0x413),
__E_DisconnectByServerReasonUnknown = static_cast<int32_t>(0x414),
__E_EncryptionEstablished = static_cast<int32_t>(0x418),
__E_EncryptionFailedToEstablish = static_cast<int32_t>(0x419),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StatusCode_Unwrapped () const noexcept {
return static_cast<__StatusCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StatusCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StatusCode(int32_t  value__) noexcept;

/// @brief Field Connect value: I32(1024)
static ::ExitGames::Client::Photon::StatusCode const Connect;

/// @brief Field Disconnect value: I32(1025)
static ::ExitGames::Client::Photon::StatusCode const Disconnect;

/// @brief Field DisconnectByServerLogic value: I32(1043)
static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerLogic;

/// @brief Field DisconnectByServerReasonUnknown value: I32(1044)
static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerReasonUnknown;

/// @brief Field DisconnectByServerTimeout value: I32(1041)
static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerTimeout;

/// @brief Field DisconnectByServerUserLimit value: I32(1042)
static ::ExitGames::Client::Photon::StatusCode const DisconnectByServerUserLimit;

/// @brief Field DnsExceptionOnConnect value: I32(1051)
static ::ExitGames::Client::Photon::StatusCode const DnsExceptionOnConnect;

/// @brief Field EncryptionEstablished value: I32(1048)
static ::ExitGames::Client::Photon::StatusCode const EncryptionEstablished;

/// @brief Field EncryptionFailedToEstablish value: I32(1049)
static ::ExitGames::Client::Photon::StatusCode const EncryptionFailedToEstablish;

/// @brief Field Exception value: I32(1026)
static ::ExitGames::Client::Photon::StatusCode const Exception;

/// @brief Field ExceptionOnConnect value: I32(1023)
static ::ExitGames::Client::Photon::StatusCode const ExceptionOnConnect;

/// @brief Field ExceptionOnReceive value: I32(1039)
static ::ExitGames::Client::Photon::StatusCode const ExceptionOnReceive;

/// @brief Field SecurityExceptionOnConnect value: I32(1022)
static ::ExitGames::Client::Photon::StatusCode const SecurityExceptionOnConnect;

/// @brief Field SendError value: I32(1030)
static ::ExitGames::Client::Photon::StatusCode const SendError;

/// @brief Field ServerAddressInvalid value: I32(1050)
static ::ExitGames::Client::Photon::StatusCode const ServerAddressInvalid;

/// @brief Field TimeoutDisconnect value: I32(1040)
static ::ExitGames::Client::Photon::StatusCode const TimeoutDisconnect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26423};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::StatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::StatusCode) == 0x4, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
