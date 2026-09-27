#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PhotonClientWebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonClientWebSocket)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
}
namespace System::Net::WebSockets {
class ClientWebSocket;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class PhotonClientWebSocket;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::PhotonClientWebSocket*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PhotonClientWebSocket*, "ExitGames.Client.Photon", "PhotonClientWebSocket");
// Dependencies ExitGames.Client.Photon.IPhotonSocket
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PhotonClientWebSocket
class CORDL_TYPE PhotonClientWebSocket : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
// Declarations
/// @brief Field clientWebSocket, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientWebSocket, put=__cordl_internal_set_clientWebSocket)) ::System::Net::WebSockets::ClientWebSocket*  clientWebSocket;

/// @brief Field sendTask, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendTask, put=__cordl_internal_set_sendTask)) ::System::Threading::Tasks::Task*  sendTask;

/// @brief Method AsyncConnectAndReceive, addr 0xa6ca198, size 0x1218, virtual false, abstract: false, final false
inline void AsyncConnectAndReceive() ;

/// @brief Method Connect, addr 0xa6ca0b0, size 0xe8, virtual true, abstract: false, final false
inline bool Connect() ;

/// @brief Method Disconnect, addr 0xa6cb3b0, size 0x2d8, virtual true, abstract: false, final false
inline bool Disconnect() ;

/// @brief [Preserve]
static inline ::ExitGames::Client::Photon::PhotonClientWebSocket* New_ctor(::ExitGames::Client::Photon::PeerBase*  peerBase) ;

/// @brief Method Receive, addr 0xa6cb908, size 0x38, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Receive(::by_ref<::ArrayW<uint8_t>>  data) ;

/// @brief Method Send, addr 0xa6cb688, size 0x280, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t>  data, int32_t  length) ;

constexpr ::System::Net::WebSockets::ClientWebSocket* const& __cordl_internal_get_clientWebSocket() const;

constexpr ::System::Net::WebSockets::ClientWebSocket*& __cordl_internal_get_clientWebSocket() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_sendTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_sendTask() ;

constexpr void __cordl_internal_set_clientWebSocket(::System::Net::WebSockets::ClientWebSocket*  value) ;

constexpr void __cordl_internal_set_sendTask(::System::Threading::Tasks::Task*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0xa6ca02c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::PeerBase*  peerBase) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonClientWebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonClientWebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonClientWebSocket(PhotonClientWebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonClientWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonClientWebSocket(PhotonClientWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26448};

/// @brief Field clientWebSocket, offset: 0x58, size: 0x8, def value: None
 ::System::Net::WebSockets::ClientWebSocket*  ___clientWebSocket;

/// @brief Field sendTask, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___sendTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PhotonClientWebSocket, ___clientWebSocket) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonClientWebSocket, ___sendTask) == 0x60, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PhotonClientWebSocket) == 0x68, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
