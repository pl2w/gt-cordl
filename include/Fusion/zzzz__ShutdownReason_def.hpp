#pragma once
// IWYU pragma private; include "Fusion/ShutdownReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShutdownReason)
// Forward declare root types
namespace Fusion {
struct ShutdownReason;
}
// Write type traits
MARK_VAL_T(::Fusion::ShutdownReason);
DEFINE_IL2CPP_CLASS(::Fusion::ShutdownReason, "Fusion", "ShutdownReason");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ShutdownReason
struct CORDL_TYPE ShutdownReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShutdownReason_Unwrapped
enum struct __ShutdownReason_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_IncompatibleConfiguration = static_cast<int32_t>(0x2),
__E_ServerInRoom = static_cast<int32_t>(0x3),
__E_DisconnectedByPluginLogic = static_cast<int32_t>(0x4),
__E_GameClosed = static_cast<int32_t>(0x5),
__E_GameNotFound = static_cast<int32_t>(0x6),
__E_MaxCcuReached = static_cast<int32_t>(0x7),
__E_InvalidRegion = static_cast<int32_t>(0x8),
__E_GameIdAlreadyExists = static_cast<int32_t>(0x9),
__E_GameIsFull = static_cast<int32_t>(0xa),
__E_InvalidAuthentication = static_cast<int32_t>(0xb),
__E_CustomAuthenticationFailed = static_cast<int32_t>(0xc),
__E_AuthenticationTicketExpired = static_cast<int32_t>(0xd),
__E_PhotonCloudTimeout = static_cast<int32_t>(0xe),
__E_AlreadyRunning = static_cast<int32_t>(0xf),
__E_InvalidArguments = static_cast<int32_t>(0x10),
__E_HostMigration = static_cast<int32_t>(0x11),
__E_ConnectionTimeout = static_cast<int32_t>(0x12),
__E_ConnectionRefused = static_cast<int32_t>(0x13),
__E_OperationTimeout = static_cast<int32_t>(0x14),
__E_OperationCanceled = static_cast<int32_t>(0x15),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShutdownReason_Unwrapped () const noexcept {
return static_cast<__ShutdownReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShutdownReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ShutdownReason(int32_t  value__) noexcept;

/// @brief Field AlreadyRunning value: I32(15)
static ::Fusion::ShutdownReason const AlreadyRunning;

/// @brief Field AuthenticationTicketExpired value: I32(13)
static ::Fusion::ShutdownReason const AuthenticationTicketExpired;

/// @brief Field ConnectionRefused value: I32(19)
static ::Fusion::ShutdownReason const ConnectionRefused;

/// @brief Field ConnectionTimeout value: I32(18)
static ::Fusion::ShutdownReason const ConnectionTimeout;

/// @brief Field CustomAuthenticationFailed value: I32(12)
static ::Fusion::ShutdownReason const CustomAuthenticationFailed;

/// @brief Field DisconnectedByPluginLogic value: I32(4)
static ::Fusion::ShutdownReason const DisconnectedByPluginLogic;

/// @brief Field Error value: I32(1)
static ::Fusion::ShutdownReason const Error;

/// @brief Field GameClosed value: I32(5)
static ::Fusion::ShutdownReason const GameClosed;

/// @brief Field GameIdAlreadyExists value: I32(9)
static ::Fusion::ShutdownReason const GameIdAlreadyExists;

/// @brief Field GameIsFull value: I32(10)
static ::Fusion::ShutdownReason const GameIsFull;

/// @brief Field GameNotFound value: I32(6)
static ::Fusion::ShutdownReason const GameNotFound;

/// @brief Field HostMigration value: I32(17)
static ::Fusion::ShutdownReason const HostMigration;

/// @brief Field IncompatibleConfiguration value: I32(2)
static ::Fusion::ShutdownReason const IncompatibleConfiguration;

/// @brief Field InvalidArguments value: I32(16)
static ::Fusion::ShutdownReason const InvalidArguments;

/// @brief Field InvalidAuthentication value: I32(11)
static ::Fusion::ShutdownReason const InvalidAuthentication;

/// @brief Field InvalidRegion value: I32(8)
static ::Fusion::ShutdownReason const InvalidRegion;

/// @brief Field MaxCcuReached value: I32(7)
static ::Fusion::ShutdownReason const MaxCcuReached;

/// @brief Field Ok value: I32(0)
static ::Fusion::ShutdownReason const Ok;

/// @brief Field OperationCanceled value: I32(21)
static ::Fusion::ShutdownReason const OperationCanceled;

/// @brief Field OperationTimeout value: I32(20)
static ::Fusion::ShutdownReason const OperationTimeout;

/// @brief Field PhotonCloudTimeout value: I32(14)
static ::Fusion::ShutdownReason const PhotonCloudTimeout;

/// @brief Field ServerInRoom value: I32(3)
static ::Fusion::ShutdownReason const ServerInRoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19263};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ShutdownReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::ShutdownReason) == 0x4, "Size mismatch!");

} // namespace end def Fusion
