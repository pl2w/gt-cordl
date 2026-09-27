#pragma once
// IWYU pragma private; include "Fusion/Sockets/INetSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(INetSocket)
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
class INetSocket;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::INetSocket*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::INetSocket*, "Fusion.Sockets", "INetSocket");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.INetSocket
class CORDL_TYPE INetSocket {
public:
// Declarations
/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::Sockets::NetAddress Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::Sockets::NetSocket Create(::Fusion::Sockets::NetConfig  config) ;

/// @brief Method DeleteEncryptionKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Destroy(::Fusion::Sockets::NetSocket  socket) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize(::Fusion::Sockets::NetConfig  config) ;

/// @brief Method Receive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable) ;

/// @brief Method SetupEncryption, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey) ;

// Ctor Parameters [CppParam { name: "", ty: "INetSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetSocket(INetSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Sockets
