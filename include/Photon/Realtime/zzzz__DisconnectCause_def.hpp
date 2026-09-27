#pragma once
// IWYU pragma private; include "Photon/Realtime/DisconnectCause.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectCause)
// Forward declare root types
namespace Photon::Realtime {
struct DisconnectCause;
}
// Write type traits
MARK_VAL_T(::Photon::Realtime::DisconnectCause);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::DisconnectCause, "Photon.Realtime", "DisconnectCause");
// Dependencies 
namespace Photon::Realtime {
// Is value type: true
// CS Name: Photon.Realtime.DisconnectCause
struct CORDL_TYPE DisconnectCause {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DisconnectCause_Unwrapped
enum struct __DisconnectCause_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ExceptionOnConnect = static_cast<int32_t>(0x1),
__E_DnsExceptionOnConnect = static_cast<int32_t>(0x2),
__E_ServerAddressInvalid = static_cast<int32_t>(0x3),
__E_Exception = static_cast<int32_t>(0x4),
__E_ServerTimeout = static_cast<int32_t>(0x5),
__E_ClientTimeout = static_cast<int32_t>(0x6),
__E_DisconnectByServerLogic = static_cast<int32_t>(0x7),
__E_DisconnectByServerReasonUnknown = static_cast<int32_t>(0x8),
__E_InvalidAuthentication = static_cast<int32_t>(0x9),
__E_CustomAuthenticationFailed = static_cast<int32_t>(0xa),
__E_AuthenticationTicketExpired = static_cast<int32_t>(0xb),
__E_MaxCcuReached = static_cast<int32_t>(0xc),
__E_InvalidRegion = static_cast<int32_t>(0xd),
__E_OperationNotAllowedInCurrentState = static_cast<int32_t>(0xe),
__E_DisconnectByClientLogic = static_cast<int32_t>(0xf),
__E_DisconnectByOperationLimit = static_cast<int32_t>(0x10),
__E_DisconnectByDisconnectMessage = static_cast<int32_t>(0x11),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisconnectCause_Unwrapped () const noexcept {
return static_cast<__DisconnectCause_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DisconnectCause() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DisconnectCause(int32_t  value__) noexcept;

/// @brief Field AuthenticationTicketExpired value: I32(11)
static ::Photon::Realtime::DisconnectCause const AuthenticationTicketExpired;

/// @brief Field ClientTimeout value: I32(6)
static ::Photon::Realtime::DisconnectCause const ClientTimeout;

/// @brief Field CustomAuthenticationFailed value: I32(10)
static ::Photon::Realtime::DisconnectCause const CustomAuthenticationFailed;

/// @brief Field DisconnectByClientLogic value: I32(15)
static ::Photon::Realtime::DisconnectCause const DisconnectByClientLogic;

/// @brief Field DisconnectByDisconnectMessage value: I32(17)
static ::Photon::Realtime::DisconnectCause const DisconnectByDisconnectMessage;

/// @brief Field DisconnectByOperationLimit value: I32(16)
static ::Photon::Realtime::DisconnectCause const DisconnectByOperationLimit;

/// @brief Field DisconnectByServerLogic value: I32(7)
static ::Photon::Realtime::DisconnectCause const DisconnectByServerLogic;

/// @brief Field DisconnectByServerReasonUnknown value: I32(8)
static ::Photon::Realtime::DisconnectCause const DisconnectByServerReasonUnknown;

/// @brief Field DnsExceptionOnConnect value: I32(2)
static ::Photon::Realtime::DisconnectCause const DnsExceptionOnConnect;

/// @brief Field Exception value: I32(4)
static ::Photon::Realtime::DisconnectCause const Exception;

/// @brief Field ExceptionOnConnect value: I32(1)
static ::Photon::Realtime::DisconnectCause const ExceptionOnConnect;

/// @brief Field InvalidAuthentication value: I32(9)
static ::Photon::Realtime::DisconnectCause const InvalidAuthentication;

/// @brief Field InvalidRegion value: I32(13)
static ::Photon::Realtime::DisconnectCause const InvalidRegion;

/// @brief Field MaxCcuReached value: I32(12)
static ::Photon::Realtime::DisconnectCause const MaxCcuReached;

/// @brief Field None value: I32(0)
static ::Photon::Realtime::DisconnectCause const None;

/// @brief Field OperationNotAllowedInCurrentState value: I32(14)
static ::Photon::Realtime::DisconnectCause const OperationNotAllowedInCurrentState;

/// @brief Field ServerAddressInvalid value: I32(3)
static ::Photon::Realtime::DisconnectCause const ServerAddressInvalid;

/// @brief Field ServerTimeout value: I32(5)
static ::Photon::Realtime::DisconnectCause const ServerTimeout;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::DisconnectCause, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::DisconnectCause) == 0x4, "Size mismatch!");

} // namespace end def Photon::Realtime
