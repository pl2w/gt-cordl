#pragma once
// IWYU pragma private; include "Fusion/RpcSendMessageResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcSendMessageResult)
// Forward declare root types
namespace Fusion {
struct RpcSendMessageResult;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcSendMessageResult);
DEFINE_IL2CPP_CLASS(::Fusion::RpcSendMessageResult, "Fusion", "RpcSendMessageResult");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcSendMessageResult
struct CORDL_TYPE RpcSendMessageResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcSendMessageResult_Unwrapped
enum struct __RpcSendMessageResult_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SentToServerForForwarding = static_cast<int32_t>(0x101),
__E_SentToTargetClient = static_cast<int32_t>(0x102),
__E_SentBroadcast = static_cast<int32_t>(0x503),
__E_NotSentTargetObjectNotConfirmed = static_cast<int32_t>(0xa04),
__E_NotSentTargetObjectNotInPlayerInterest = static_cast<int32_t>(0xa05),
__E_NotSentTargetClientNotAvailable = static_cast<int32_t>(0x206),
__E_NotSentBroadcastNoActiveConnections = static_cast<int32_t>(0x607),
__E_NotSentBroadcastNoConfirmedNorInterestedClients = static_cast<int32_t>(0xe08),
__E_MaskSent = static_cast<int32_t>(0x100),
__E_MaskNotSent = static_cast<int32_t>(0x200),
__E_MaskBroadcast = static_cast<int32_t>(0x400),
__E_MaskCulled = static_cast<int32_t>(0x800),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcSendMessageResult_Unwrapped () const noexcept {
return static_cast<__RpcSendMessageResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcSendMessageResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcSendMessageResult(int32_t  value__) noexcept;

/// @brief Field MaskBroadcast value: I32(1024)
static ::Fusion::RpcSendMessageResult const MaskBroadcast;

/// @brief Field MaskCulled value: I32(2048)
static ::Fusion::RpcSendMessageResult const MaskCulled;

/// @brief Field MaskNotSent value: I32(512)
static ::Fusion::RpcSendMessageResult const MaskNotSent;

/// @brief Field MaskSent value: I32(256)
static ::Fusion::RpcSendMessageResult const MaskSent;

/// @brief Field None value: I32(0)
static ::Fusion::RpcSendMessageResult const None;

/// @brief Field NotSentBroadcastNoActiveConnections value: I32(1543)
static ::Fusion::RpcSendMessageResult const NotSentBroadcastNoActiveConnections;

/// @brief Field NotSentBroadcastNoConfirmedNorInterestedClients value: I32(3592)
static ::Fusion::RpcSendMessageResult const NotSentBroadcastNoConfirmedNorInterestedClients;

/// @brief Field NotSentTargetClientNotAvailable value: I32(518)
static ::Fusion::RpcSendMessageResult const NotSentTargetClientNotAvailable;

/// @brief Field NotSentTargetObjectNotConfirmed value: I32(2564)
static ::Fusion::RpcSendMessageResult const NotSentTargetObjectNotConfirmed;

/// @brief Field NotSentTargetObjectNotInPlayerInterest value: I32(2565)
static ::Fusion::RpcSendMessageResult const NotSentTargetObjectNotInPlayerInterest;

/// @brief Field SentBroadcast value: I32(1283)
static ::Fusion::RpcSendMessageResult const SentBroadcast;

/// @brief Field SentToServerForForwarding value: I32(257)
static ::Fusion::RpcSendMessageResult const SentToServerForForwarding;

/// @brief Field SentToTargetClient value: I32(258)
static ::Fusion::RpcSendMessageResult const SentToTargetClient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcSendMessageResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcSendMessageResult) == 0x4, "Size mismatch!");

} // namespace end def Fusion
