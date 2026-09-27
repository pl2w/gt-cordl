#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketNull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocketNull)
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
class NetSocketNull;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::NetSocketNull*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSocketNull*, "Fusion.Sockets", "NetSocketNull");
// Dependencies System.Object
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.NetSocketNull
class CORDL_TYPE NetSocketNull : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr operator  ::Fusion::Sockets::INetSocket*() noexcept;

/// @brief Method Bind, addr 0x6035e80, size 0xc, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetAddress Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config) ;

/// @brief Method Create, addr 0x6035e78, size 0x8, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetSocket Create(::Fusion::Sockets::NetConfig  config) ;

/// @brief Method DeleteEncryptionKey, addr 0x6035ea0, size 0x4, virtual true, abstract: false, final true
inline void DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Destroy, addr 0x6035e9c, size 0x4, virtual true, abstract: false, final true
inline void Destroy(::Fusion::Sockets::NetSocket  netSocket) ;

/// @brief Method Initialize, addr 0x6035e74, size 0x4, virtual true, abstract: false, final true
inline void Initialize(::Fusion::Sockets::NetConfig  config) ;

static inline ::Fusion::Sockets::NetSocketNull* New_ctor() ;

/// @brief Method Receive, addr 0x6035e8c, size 0x8, virtual true, abstract: false, final true
inline int32_t Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Send, addr 0x6035e94, size 0x8, virtual true, abstract: false, final true
inline int32_t Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable) ;

/// @brief Method SetupEncryption, addr 0x6035ea4, size 0x4, virtual true, abstract: false, final true
inline void SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey) ;

/// @brief Method .ctor, addr 0x6035ea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* i___Fusion__Sockets__INetSocket() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSocketNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSocketNull", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSocketNull(NetSocketNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSocketNull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSocketNull(NetSocketNull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetSocketNull) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets
