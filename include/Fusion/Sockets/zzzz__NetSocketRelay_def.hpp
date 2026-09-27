#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketRelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocketRelay)
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
struct NetSocket;
}
// Forward declare root types
namespace Fusion::Sockets {
class NetSocketRelay;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::NetSocketRelay*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSocketRelay*, "Fusion.Sockets", "NetSocketRelay");
// Dependencies System.Object
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.NetSocketRelay
class CORDL_TYPE NetSocketRelay : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LocalAddress)) ::Fusion::Sockets::NetAddress  LocalAddress;

/// @brief Field _communicator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__communicator, put=__cordl_internal_set__communicator)) ::Fusion::Protocol::ICommunicator*  _communicator;

/// @brief Field _handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__handle, put=__cordl_internal_set__handle)) int64_t  _handle;

/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr operator  ::Fusion::Sockets::INetSocket*() noexcept;

/// @brief Method Bind, addr 0x60345b0, size 0x74, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetAddress Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config) ;

/// @brief Method Create, addr 0x6033ed8, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetSocket Create(::Fusion::Sockets::NetConfig  config) ;

/// @brief Method DeleteEncryptionKey, addr 0x6034064, size 0x4, virtual true, abstract: false, final true
inline void DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Destroy, addr 0x6033fd0, size 0x8, virtual true, abstract: false, final true
inline void Destroy(::Fusion::Sockets::NetSocket  netSocket) ;

/// @brief Method Initialize, addr 0x6033de8, size 0x20, virtual true, abstract: false, final true
inline void Initialize(::Fusion::Sockets::NetConfig  config) ;

static inline ::Fusion::Sockets::NetSocketRelay* New_ctor(::Fusion::Protocol::ICommunicator*  communicator) ;

/// @brief Method Receive, addr 0x6034a18, size 0x1a4, virtual true, abstract: false, final true
inline int32_t Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Send, addr 0x6034c9c, size 0x184, virtual true, abstract: false, final true
inline int32_t Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable) ;

/// @brief Method SetupEncryption, addr 0x6034120, size 0x4, virtual true, abstract: false, final true
inline void SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey) ;

constexpr ::Fusion::Protocol::ICommunicator* const& __cordl_internal_get__communicator() const;

constexpr ::Fusion::Protocol::ICommunicator*& __cordl_internal_get__communicator() ;

constexpr int64_t const& __cordl_internal_get__handle() const;

constexpr int64_t& __cordl_internal_get__handle() ;

constexpr void __cordl_internal_set__communicator(::Fusion::Protocol::ICommunicator*  value) ;

constexpr void __cordl_internal_set__handle(int64_t  value) ;

/// @brief Method .ctor, addr 0x6033d70, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::ICommunicator*  communicator) ;

/// @brief Method get_LocalAddress, addr 0x6035eb0, size 0x134, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_LocalAddress() ;

/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* i___Fusion__Sockets__INetSocket() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSocketRelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSocketRelay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSocketRelay(NetSocketRelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSocketRelay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSocketRelay(NetSocketRelay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29396};

/// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
 int64_t  ____handle;

/// @brief Field _communicator, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Protocol::ICommunicator*  ____communicator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetSocketRelay, ____handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketRelay, ____communicator) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetSocketRelay) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Sockets
