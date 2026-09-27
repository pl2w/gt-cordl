#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketHybrid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocketHybrid)
namespace Fusion::Protocol {
class ICommunicator;
}
namespace Fusion::Sockets {
class INetSocket;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace Fusion::Sockets {
class NetSocketNative;
}
namespace Fusion::Sockets {
class NetSocketRelay;
}
namespace Fusion::Sockets {
struct NetSocket;
}
// Forward declare root types
namespace Fusion::Sockets {
class NetSocketHybrid;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::NetSocketHybrid*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSocketHybrid*, "Fusion.Sockets", "NetSocketHybrid");
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.NetSocket, System.Object
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.NetSocketHybrid
class CORDL_TYPE NetSocketHybrid : public ::System::Object {
public:
// Declarations
/// @brief Field _client, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) ::Fusion::Protocol::ICommunicator*  _client;

/// @brief Field _nativeSocket, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeSocket, put=__cordl_internal_set__nativeSocket)) ::Fusion::Sockets::NetSocketNative*  _nativeSocket;

/// @brief Field _relayAddress, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__relayAddress, put=__cordl_internal_set__relayAddress)) ::Fusion::Sockets::NetAddress  _relayAddress;

/// @brief Field _relayNetSocketRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__relayNetSocketRef, put=__cordl_internal_set__relayNetSocketRef)) ::Fusion::Sockets::NetSocket  _relayNetSocketRef;

/// @brief Field _relaySocket, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__relaySocket, put=__cordl_internal_set__relaySocket)) ::Fusion::Sockets::NetSocketRelay*  _relaySocket;

/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr operator  ::Fusion::Sockets::INetSocket*() noexcept;

/// @brief Method Bind, addr 0x60344c4, size 0xec, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetAddress Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config) ;

/// @brief Method Create, addr 0x6033e5c, size 0x7c, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetSocket Create(::Fusion::Sockets::NetConfig  config) ;

/// @brief Method DeleteEncryptionKey, addr 0x6033ff4, size 0x70, virtual true, abstract: false, final true
inline void DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Destroy, addr 0x6033f98, size 0x38, virtual true, abstract: false, final true
inline void Destroy(::Fusion::Sockets::NetSocket  netSocket) ;

/// @brief Method Initialize, addr 0x6033dac, size 0x3c, virtual true, abstract: false, final true
inline void Initialize(::Fusion::Sockets::NetConfig  config) ;

static inline ::Fusion::Sockets::NetSocketHybrid* New_ctor(::Fusion::Protocol::ICommunicator*  client) ;

/// @brief Method Receive, addr 0x60347cc, size 0x128, virtual true, abstract: false, final true
inline int32_t Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Send, addr 0x6034bbc, size 0xe0, virtual true, abstract: false, final true
inline int32_t Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable) ;

/// @brief Method SetupEncryption, addr 0x6034100, size 0x20, virtual true, abstract: false, final true
inline void SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey) ;

constexpr ::Fusion::Protocol::ICommunicator* const& __cordl_internal_get__client() const;

constexpr ::Fusion::Protocol::ICommunicator*& __cordl_internal_get__client() ;

constexpr ::Fusion::Sockets::NetSocketNative* const& __cordl_internal_get__nativeSocket() const;

constexpr ::Fusion::Sockets::NetSocketNative*& __cordl_internal_get__nativeSocket() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__relayAddress() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__relayAddress() ;

constexpr ::Fusion::Sockets::NetSocket const& __cordl_internal_get__relayNetSocketRef() const;

constexpr ::Fusion::Sockets::NetSocket& __cordl_internal_get__relayNetSocketRef() ;

constexpr ::Fusion::Sockets::NetSocketRelay* const& __cordl_internal_get__relaySocket() const;

constexpr ::Fusion::Sockets::NetSocketRelay*& __cordl_internal_get__relaySocket() ;

constexpr void __cordl_internal_set__client(::Fusion::Protocol::ICommunicator*  value) ;

constexpr void __cordl_internal_set__nativeSocket(::Fusion::Sockets::NetSocketNative*  value) ;

constexpr void __cordl_internal_set__relayAddress(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set__relayNetSocketRef(::Fusion::Sockets::NetSocket  value) ;

constexpr void __cordl_internal_set__relaySocket(::Fusion::Sockets::NetSocketRelay*  value) ;

/// @brief Method .ctor, addr 0x6033c94, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::ICommunicator*  client) ;

/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* i___Fusion__Sockets__INetSocket() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSocketHybrid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSocketHybrid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSocketHybrid(NetSocketHybrid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSocketHybrid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSocketHybrid(NetSocketHybrid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29392};

/// @brief Field _relayNetSocketRef, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::NetSocket  ____relayNetSocketRef;

/// @brief Field _relayAddress, offset: 0x18, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____relayAddress;

/// @brief Field _relaySocket, offset: 0x30, size: 0x8, def value: None
 ::Fusion::Sockets::NetSocketRelay*  ____relaySocket;

/// @brief Field _nativeSocket, offset: 0x38, size: 0x8, def value: None
 ::Fusion::Sockets::NetSocketNative*  ____nativeSocket;

/// @brief Field _client, offset: 0x40, size: 0x8, def value: None
 ::Fusion::Protocol::ICommunicator*  ____client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetSocketHybrid, ____relayNetSocketRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketHybrid, ____relayAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketHybrid, ____relaySocket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketHybrid, ____nativeSocket) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketHybrid, ____client) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetSocketHybrid) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Sockets
