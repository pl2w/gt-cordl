#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSocketNative)
namespace Fusion::Encryption {
class DataEncryptor;
}
namespace Fusion::Encryption {
template<typename THandler,typename TEncryption>
class EncryptionManager_2;
}
namespace Fusion::Encryption {
class EncryptionToken;
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
class NetSocketNative___c;
}
namespace Fusion::Sockets {
struct NetSocket;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Fusion::Sockets {
class NetSocketNative;
}
namespace Fusion::Sockets {
class NetSocketNative___c;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::NetSocketNative*);
MARK_REF_T(::Fusion::Sockets::NetSocketNative___c*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSocketNative*, "Fusion.Sockets", "NetSocketNative");
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSocketNative___c*, "Fusion.Sockets", "NetSocketNative/<>c");
// Dependencies Fusion.Sockets.NetAddress, System.Object
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.NetSocketNative
class CORDL_TYPE NetSocketNative : public ::System::Object {
public:
// Declarations
using __c = ::Fusion::Sockets::NetSocketNative___c;

/// @brief Field _encryptionBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptionBuffer, put=__cordl_internal_set__encryptionBuffer)) uint8_t*  _encryptionBuffer;

/// @brief Field _encryptionManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptionManager, put=__cordl_internal_set__encryptionManager)) ::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>*  _encryptionManager;

/// @brief Field _encryptionToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptionToken, put=__cordl_internal_set__encryptionToken)) ::Fusion::Encryption::EncryptionToken*  _encryptionToken;

/// @brief Field _remoteEncryptionHandler, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get__remoteEncryptionHandler, put=__cordl_internal_set__remoteEncryptionHandler)) ::Fusion::Sockets::NetAddress  _remoteEncryptionHandler;

/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr operator  ::Fusion::Sockets::INetSocket*() noexcept;

/// @brief Method Bind, addr 0x6034624, size 0x1a8, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetAddress Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config) ;

/// @brief Method Create, addr 0x6033ee0, size 0xb8, virtual true, abstract: false, final true
inline ::Fusion::Sockets::NetSocket Create(::Fusion::Sockets::NetConfig  config) ;

/// @brief Method DeleteEncryptionKey, addr 0x6034068, size 0x98, virtual true, abstract: false, final true
inline void DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Destroy, addr 0x6033fd8, size 0x1c, virtual true, abstract: false, final true
inline void Destroy(::Fusion::Sockets::NetSocket  netSocket) ;

/// @brief Method HandleEncryptionIngoing, addr 0x6035440, size 0x4b8, virtual false, abstract: false, final false
inline bool HandleEncryptionIngoing(::Fusion::Sockets::NetAddress*  address, ::by_ref<uint8_t*>  buffer, int32_t  bufferLength, ::by_ref<int32_t>  received) ;

/// @brief Method HandleEncryptionOutgoing, addr 0x60358f8, size 0x40c, virtual false, abstract: false, final false
inline bool HandleEncryptionOutgoing(::Fusion::Sockets::NetAddress*  address, ::by_ref<uint8_t*>  buffer, ::by_ref<int32_t>  bufferLength) ;

/// @brief Method Initialize, addr 0x6033e08, size 0x54, virtual true, abstract: false, final true
inline void Initialize(::Fusion::Sockets::NetConfig  config) ;

static inline ::Fusion::Sockets::NetSocketNative* New_ctor() ;

/// @brief Method Receive, addr 0x60348f4, size 0x124, virtual true, abstract: false, final true
inline int32_t Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method ResetEncryption, addr 0x6035d04, size 0xec, virtual false, abstract: false, final false
inline void ResetEncryption() ;

/// @brief Method Send, addr 0x6034e20, size 0xb8, virtual true, abstract: false, final true
inline int32_t Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable) ;

/// @brief Method SetupEncryption, addr 0x6034124, size 0x3a0, virtual true, abstract: false, final true
inline void SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey) ;

constexpr uint8_t* const& __cordl_internal_get__encryptionBuffer() const;

constexpr uint8_t*& __cordl_internal_get__encryptionBuffer() ;

constexpr ::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>* const& __cordl_internal_get__encryptionManager() const;

constexpr ::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>*& __cordl_internal_get__encryptionManager() ;

constexpr ::Fusion::Encryption::EncryptionToken* const& __cordl_internal_get__encryptionToken() const;

constexpr ::Fusion::Encryption::EncryptionToken*& __cordl_internal_get__encryptionToken() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__remoteEncryptionHandler() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__remoteEncryptionHandler() ;

constexpr void __cordl_internal_set__encryptionBuffer(uint8_t*  value) ;

constexpr void __cordl_internal_set__encryptionManager(::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>*  value) ;

constexpr void __cordl_internal_set__encryptionToken(::Fusion::Encryption::EncryptionToken*  value) ;

constexpr void __cordl_internal_set__remoteEncryptionHandler(::Fusion::Sockets::NetAddress  value) ;

/// @brief Method .ctor, addr 0x6033da0, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* i___Fusion__Sockets__INetSocket() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSocketNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSocketNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSocketNative(NetSocketNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSocketNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSocketNative(NetSocketNative const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29394};

/// @brief Field _encryptionManager, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>*  ____encryptionManager;

/// @brief Field _encryptionToken, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Encryption::EncryptionToken*  ____encryptionToken;

/// @brief Field _remoteEncryptionHandler, offset: 0x20, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____remoteEncryptionHandler;

/// @brief Field _encryptionBuffer, offset: 0x38, size: 0x8, def value: None
 uint8_t*  ____encryptionBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetSocketNative, ____encryptionManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketNative, ____encryptionToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketNative, ____remoteEncryptionHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSocketNative, ____encryptionBuffer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetSocketNative) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Sockets
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Sockets {
// Is value type: false
// CS Name: Fusion.Sockets.NetSocketNative/<>c
class CORDL_TYPE NetSocketNative___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::Sockets::NetSocketNative___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Predicate_1<uint8_t>*  __9__15_0;

static inline ::Fusion::Sockets::NetSocketNative___c* New_ctor() ;

/// @brief Method <SetupEncryption>b__15_0, addr 0x6035e68, size 0xc, virtual false, abstract: false, final false
inline bool _SetupEncryption_b__15_0(uint8_t  b) ;

/// @brief Method .ctor, addr 0x6035e60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::Sockets::NetSocketNative___c* getStaticF___9() ;

static inline ::System::Predicate_1<uint8_t>* getStaticF___9__15_0() ;

static inline void setStaticF___9(::Fusion::Sockets::NetSocketNative___c*  value) ;

static inline void setStaticF___9__15_0(::System::Predicate_1<uint8_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSocketNative___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSocketNative___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSocketNative___c(NetSocketNative___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSocketNative___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSocketNative___c(NetSocketNative___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetSocketNative___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets
