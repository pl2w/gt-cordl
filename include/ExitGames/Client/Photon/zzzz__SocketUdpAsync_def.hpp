#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SocketUdpAsync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketUdpAsync)
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PhotonSocketError;
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
class SocketUdpAsync;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SocketUdpAsync*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SocketUdpAsync*, "ExitGames.Client.Photon", "SocketUdpAsync");
// Dependencies ExitGames.Client.Photon.IPhotonSocket
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SocketUdpAsync
class CORDL_TYPE SocketUdpAsync : public ::ExitGames::Client::Photon::IPhotonSocket {
public:
// Declarations
/// @brief Field sock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sock, put=__cordl_internal_set_sock)) ::System::Net::Sockets::Socket*  sock;

/// @brief Field syncer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncer, put=__cordl_internal_set_syncer)) ::System::Object*  syncer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Connect, addr 0xa6e5e68, size 0x1a8, virtual true, abstract: false, final false
inline bool Connect() ;

/// @brief Method Disconnect, addr 0xa6e6010, size 0x248, virtual true, abstract: false, final false
inline bool Disconnect() ;

/// @brief Method Dispose, addr 0xa6e5d4c, size 0x11c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DnsAndConnect, addr 0xa6e6644, size 0x568, virtual false, abstract: false, final false
inline void DnsAndConnect() ;

/// @brief Method Finalize, addr 0xa6e5cc8, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief [Preserve]
static inline ::ExitGames::Client::Photon::SocketUdpAsync* New_ctor(::ExitGames::Client::Photon::PeerBase*  npeer) ;

/// @brief Method OnReceive, addr 0xa6e6e54, size 0x9b4, virtual false, abstract: false, final false
inline void OnReceive(::System::IAsyncResult*  ar) ;

/// @brief Method Receive, addr 0xa6e6624, size 0x20, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Receive(::by_ref<::ArrayW<uint8_t>>  data) ;

/// @brief Method Send, addr 0xa6e6258, size 0x3cc, virtual true, abstract: false, final false
inline ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t>  data, int32_t  length) ;

/// @brief Method StartReceive, addr 0xa6e6bac, size 0x2a8, virtual false, abstract: false, final false
inline void StartReceive() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock() ;

constexpr ::System::Object* const& __cordl_internal_get_syncer() const;

constexpr ::System::Object*& __cordl_internal_get_syncer() ;

constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket*  value) ;

constexpr void __cordl_internal_set_syncer(::System::Object*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0xa6e5b8c, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::PeerBase*  npeer) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketUdpAsync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketUdpAsync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketUdpAsync(SocketUdpAsync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketUdpAsync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketUdpAsync(SocketUdpAsync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26475};

/// @brief Field sock, offset: 0x58, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___sock;

/// @brief Field syncer, offset: 0x60, size: 0x8, def value: None
 ::System::Object*  ___syncer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::SocketUdpAsync, ___sock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SocketUdpAsync, ___syncer) == 0x60, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::SocketUdpAsync) == 0x68, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
