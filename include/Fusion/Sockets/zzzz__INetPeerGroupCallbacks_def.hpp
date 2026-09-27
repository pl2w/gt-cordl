#pragma once
// IWYU pragma private; include "Fusion/Sockets/INetPeerGroupCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetPeerGroupCallbacks)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion::Sockets {
struct NetConnection;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion::Sockets {
struct NetSendEnvelope;
}
namespace Fusion::Sockets {
struct OnConnectionRequestReply;
}
namespace Fusion::Sockets {
struct ReliableId;
}
// Forward declare root types
namespace Fusion::Sockets {
class INetPeerGroupCallbacks;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::INetPeerGroupCallbacks*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::INetPeerGroupCallbacks*, "Fusion.Sockets", "INetPeerGroupCallbacks");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.INetPeerGroupCallbacks
class CORDL_TYPE INetPeerGroupCallbacks {
public:
// Declarations
/// @brief Method OnConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnected(::Fusion::Sockets::NetConnection*  connection) ;

/// @brief Method OnConnectionAttempt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectionAttempt(::Fusion::Sockets::NetConnection*  connection, int32_t  attempts, int32_t  totalConnectAttempts) ;

/// @brief Method OnConnectionFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnectionFailed(::Fusion::Sockets::NetAddress  address, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method OnConnectionRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::Sockets::OnConnectionRequestReply OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddress, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method OnDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnNotifyData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnNotifyData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method OnNotifyDelivered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnNotifyDelivered(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope) ;

/// @brief Method OnNotifyDispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnNotifyDispose(::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope) ;

/// @brief Method OnNotifyLost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnNotifyLost(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope) ;

/// @brief Method OnReliableData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::ReliableId  id, uint8_t*  data) ;

/// @brief Method OnUnconnectedData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnconnectedData(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method OnUnreliableData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnreliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "INetPeerGroupCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetPeerGroupCallbacks(INetPeerGroupCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Sockets
