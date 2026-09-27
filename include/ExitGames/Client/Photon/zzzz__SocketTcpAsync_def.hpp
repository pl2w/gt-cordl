#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SocketTcpAsync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketTcpAsync)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace ExitGames::Client::Photon {
class SocketTcpAsync_ReceiveContext;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SocketTcpAsync;
}
namespace ExitGames::Client::Photon {
class SocketTcpAsync_ReceiveContext;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SocketTcpAsync*);
MARK_REF_T(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SocketTcpAsync*, "ExitGames.Client.Photon", "SocketTcpAsync");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*, "ExitGames.Client.Photon", "SocketTcpAsync/ReceiveContext");
// Dependencies ExitGames.Client.Photon.IPhotonSocket
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SocketTcpAsync
class CORDL_TYPE SocketTcpAsync : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
// Declarations
using ReceiveContext = ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext;

/// @brief Field sock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sock, put=__cordl_internal_set_sock)) ::System::Net::Sockets::Socket*  sock;

/// @brief Field syncer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncer, put=__cordl_internal_set_syncer)) ::System::Object*  syncer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Connect, addr 0xa6e2824, size 0x1a8, virtual true, abstract: false, final false
inline bool Connect() ;

/// @brief Method Disconnect, addr 0xa6e29cc, size 0x248, virtual true, abstract: false, final false
inline bool Disconnect() ;

/// @brief Method Dispose, addr 0xa6e2708, size 0x11c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DnsAndConnect, addr 0xa6e2fc4, size 0x6a8, virtual false, abstract: false, final false
inline void DnsAndConnect() ;

/// @brief Method Finalize, addr 0xa6e2684, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief [Preserve]
static inline ::ExitGames::Client::Photon::SocketTcpAsync* New_ctor(::ExitGames::Client::Photon::PeerBase*  npeer) ;

/// @brief Method Receive, addr 0xa6e2fa4, size 0x20, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Receive(::by_ref<::ArrayW<uint8_t>>  data) ;

/// @brief Method ReceiveAsync, addr 0xa6e3a48, size 0x6e8, virtual false, abstract: false, final false
inline void ReceiveAsync(::System::IAsyncResult*  ar) ;

/// @brief Method ReceiveAsync, addr 0xa6e366c, size 0x330, virtual false, abstract: false, final false
inline void ReceiveAsync(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext*  context) ;

/// @brief Method Send, addr 0xa6e2c14, size 0x390, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t>  data, int32_t  length) ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock() ;

constexpr ::System::Object* const& __cordl_internal_get_syncer() const;

constexpr ::System::Object*& __cordl_internal_get_syncer() ;

constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket*  value) ;

constexpr void __cordl_internal_set_syncer(::System::Object*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0xa6e2548, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::PeerBase*  npeer) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketTcpAsync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketTcpAsync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketTcpAsync(SocketTcpAsync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketTcpAsync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketTcpAsync(SocketTcpAsync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26473};

/// @brief Field sock, offset: 0x58, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___sock;

/// @brief Field syncer, offset: 0x60, size: 0x8, def value: None
 ::System::Object*  ___syncer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync, ___sock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync, ___syncer) == 0x60, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::SocketTcpAsync) == 0x68, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext
class CORDL_TYPE SocketTcpAsync_ReceiveContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentBuffer)) ::ArrayW<uint8_t>  CurrentBuffer;

 __declspec(property(get=get_CurrentExpected)) int32_t  CurrentExpected;

 __declspec(property(get=get_CurrentOffset)) int32_t  CurrentOffset;

/// @brief Field ExpectedMessageBytes, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpectedMessageBytes, put=__cordl_internal_set_ExpectedMessageBytes)) int32_t  ExpectedMessageBytes;

/// @brief Field HeaderBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeaderBuffer, put=__cordl_internal_set_HeaderBuffer)) ::ArrayW<uint8_t>  HeaderBuffer;

/// @brief Field MessageBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessageBuffer, put=__cordl_internal_set_MessageBuffer)) ::ArrayW<uint8_t>  MessageBuffer;

 __declspec(property(get=get_ReadingHeader)) bool  ReadingHeader;

 __declspec(property(get=get_ReadingMessage)) bool  ReadingMessage;

/// @brief Field ReceivedHeaderBytes, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceivedHeaderBytes, put=__cordl_internal_set_ReceivedHeaderBytes)) int32_t  ReceivedHeaderBytes;

/// @brief Field ReceivedMessageBytes, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceivedMessageBytes, put=__cordl_internal_set_ReceivedMessageBytes)) int32_t  ReceivedMessageBytes;

/// @brief Field workSocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_workSocket, put=__cordl_internal_set_workSocket)) ::System::Net::Sockets::Socket*  workSocket;

static inline ::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext* New_ctor(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  headerBuffer, ::ArrayW<uint8_t>  messageBuffer) ;

/// @brief Method Reset, addr 0xa6e4140, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_ExpectedMessageBytes() const;

constexpr int32_t& __cordl_internal_get_ExpectedMessageBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_HeaderBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_HeaderBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_MessageBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_MessageBuffer() ;

constexpr int32_t const& __cordl_internal_get_ReceivedHeaderBytes() const;

constexpr int32_t& __cordl_internal_get_ReceivedHeaderBytes() ;

constexpr int32_t const& __cordl_internal_get_ReceivedMessageBytes() const;

constexpr int32_t& __cordl_internal_get_ReceivedMessageBytes() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_workSocket() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_workSocket() ;

constexpr void __cordl_internal_set_ExpectedMessageBytes(int32_t  value) ;

constexpr void __cordl_internal_set_HeaderBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_MessageBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_ReceivedHeaderBytes(int32_t  value) ;

constexpr void __cordl_internal_set_ReceivedMessageBytes(int32_t  value) ;

constexpr void __cordl_internal_set_workSocket(::System::Net::Sockets::Socket*  value) ;

/// @brief Method .ctor, addr 0xa6e399c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  headerBuffer, ::ArrayW<uint8_t>  messageBuffer) ;

/// @brief Method get_CurrentBuffer, addr 0xa6e39fc, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_CurrentBuffer() ;

/// @brief Method get_CurrentExpected, addr 0xa6e3a34, size 0x14, virtual false, abstract: false, final false
inline int32_t get_CurrentExpected() ;

/// @brief Method get_CurrentOffset, addr 0xa6e3a18, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_CurrentOffset() ;

/// @brief Method get_ReadingHeader, addr 0xa6e4130, size 0x10, virtual false, abstract: false, final false
inline bool get_ReadingHeader() ;

/// @brief Method get_ReadingMessage, addr 0xa6e414c, size 0x10, virtual false, abstract: false, final false
inline bool get_ReadingMessage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketTcpAsync_ReceiveContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketTcpAsync_ReceiveContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketTcpAsync_ReceiveContext(SocketTcpAsync_ReceiveContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketTcpAsync_ReceiveContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketTcpAsync_ReceiveContext(SocketTcpAsync_ReceiveContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26472};

/// @brief Field workSocket, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___workSocket;

/// @brief Field ReceivedHeaderBytes, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ReceivedHeaderBytes;

/// @brief Field HeaderBuffer, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___HeaderBuffer;

/// @brief Field ExpectedMessageBytes, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ExpectedMessageBytes;

/// @brief Field ReceivedMessageBytes, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___ReceivedMessageBytes;

/// @brief Field MessageBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___MessageBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext, ___workSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext, ___ReceivedHeaderBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext, ___HeaderBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext, ___ExpectedMessageBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext, ___ReceivedMessageBytes) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext, ___MessageBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::SocketTcpAsync_ReceiveContext) == 0x38, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
