#pragma once
// IWYU pragma private; include "Fusion/Protocol/Join.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__JoinMessageType_def.hpp"
#include "Fusion/Protocol/zzzz__JoinRequests_def.hpp"
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_def.hpp"
#include "Fusion/Protocol/zzzz__PluginGameMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Join)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
struct JoinMessageType;
}
namespace Fusion::Protocol {
struct JoinRequests;
}
namespace Fusion::Protocol {
struct PeerMode;
}
namespace Fusion::Protocol {
struct PluginGameMode;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion::Protocol {
class Join;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::Join*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::Join*, "Fusion.Protocol", "Join");
// Dependencies Fusion.Protocol.JoinMessageType, Fusion.Protocol.JoinRequests, Fusion.Protocol.Message, Fusion.Protocol.PeerMode, Fusion.Protocol.PluginGameMode
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.Join
class CORDL_TYPE Join : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field EncryptionKey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptionKey, put=__cordl_internal_set_EncryptionKey)) ::ArrayW<uint8_t>  EncryptionKey;

/// @brief Field EncryptionKeySecret, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_EncryptionKeySecret, put=__cordl_internal_set_EncryptionKeySecret)) ::ArrayW<uint8_t>  EncryptionKeySecret;

/// @brief Field GameMode, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_GameMode, put=__cordl_internal_set_GameMode)) ::Fusion::Protocol::PluginGameMode  GameMode;

/// @brief Field JoinRequests, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_JoinRequests, put=__cordl_internal_set_JoinRequests)) ::Fusion::Protocol::JoinRequests  JoinRequests;

/// @brief Field PeerMode, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_PeerMode, put=__cordl_internal_set_PeerMode)) ::Fusion::Protocol::PeerMode  PeerMode;

/// @brief Field PlayerRef, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerRef, put=__cordl_internal_set_PlayerRef)) int32_t  PlayerRef;

/// @brief Field Type, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Fusion::Protocol::JoinMessageType  Type;

/// @brief Field UniqueId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UniqueId, put=__cordl_internal_set_UniqueId)) ::ArrayW<uint8_t>  UniqueId;

static inline ::Fusion::Protocol::Join* New_ctor() ;

static inline ::Fusion::Protocol::Join* New_ctor(::Fusion::Protocol::JoinMessageType  type, ::Fusion::Protocol::PluginGameMode  mode, ::Fusion::Protocol::PeerMode  peerMode, int32_t  playerRef, ::Fusion::Protocol::JoinRequests  joinRequests, ::ArrayW<uint8_t>  uniqueID, ::ArrayW<uint8_t>  encryptionKey, ::ArrayW<uint8_t>  encryptionKeySecret, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// @brief Method SerializeProtected, addr 0x6023de0, size 0x104, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6023ee4, size 0x484, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_EncryptionKey() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_EncryptionKey() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_EncryptionKeySecret() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_EncryptionKeySecret() ;

constexpr ::Fusion::Protocol::PluginGameMode const& __cordl_internal_get_GameMode() const;

constexpr ::Fusion::Protocol::PluginGameMode& __cordl_internal_get_GameMode() ;

constexpr ::Fusion::Protocol::JoinRequests const& __cordl_internal_get_JoinRequests() const;

constexpr ::Fusion::Protocol::JoinRequests& __cordl_internal_get_JoinRequests() ;

constexpr ::Fusion::Protocol::PeerMode const& __cordl_internal_get_PeerMode() const;

constexpr ::Fusion::Protocol::PeerMode& __cordl_internal_get_PeerMode() ;

constexpr int32_t const& __cordl_internal_get_PlayerRef() const;

constexpr int32_t& __cordl_internal_get_PlayerRef() ;

constexpr ::Fusion::Protocol::JoinMessageType const& __cordl_internal_get_Type() const;

constexpr ::Fusion::Protocol::JoinMessageType& __cordl_internal_get_Type() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_UniqueId() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_UniqueId() ;

constexpr void __cordl_internal_set_EncryptionKey(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_EncryptionKeySecret(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_GameMode(::Fusion::Protocol::PluginGameMode  value) ;

constexpr void __cordl_internal_set_JoinRequests(::Fusion::Protocol::JoinRequests  value) ;

constexpr void __cordl_internal_set_PeerMode(::Fusion::Protocol::PeerMode  value) ;

constexpr void __cordl_internal_set_PlayerRef(int32_t  value) ;

constexpr void __cordl_internal_set_Type(::Fusion::Protocol::JoinMessageType  value) ;

constexpr void __cordl_internal_set_UniqueId(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x6023d10, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x6023d1c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::JoinMessageType  type, ::Fusion::Protocol::PluginGameMode  mode, ::Fusion::Protocol::PeerMode  peerMode, int32_t  playerRef, ::Fusion::Protocol::JoinRequests  joinRequests, ::ArrayW<uint8_t>  uniqueID, ::ArrayW<uint8_t>  encryptionKey, ::ArrayW<uint8_t>  encryptionKeySecret, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Join() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Join", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Join(Join && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Join", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Join(Join const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29323};

/// @brief Field Type, offset: 0x28, size: 0x1, def value: None
 ::Fusion::Protocol::JoinMessageType  ___Type;

/// @brief Field GameMode, offset: 0x29, size: 0x1, def value: None
 ::Fusion::Protocol::PluginGameMode  ___GameMode;

/// @brief Field PeerMode, offset: 0x2a, size: 0x1, def value: None
 ::Fusion::Protocol::PeerMode  ___PeerMode;

/// @brief Field JoinRequests, offset: 0x2c, size: 0x4, def value: None
 ::Fusion::Protocol::JoinRequests  ___JoinRequests;

/// @brief Field UniqueId, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___UniqueId;

/// @brief Field PlayerRef, offset: 0x38, size: 0x4, def value: None
 int32_t  ___PlayerRef;

/// @brief Field EncryptionKey, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___EncryptionKey;

/// @brief Field EncryptionKeySecret, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___EncryptionKeySecret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::Join, ___Type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___GameMode) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___PeerMode) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___JoinRequests) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___UniqueId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___PlayerRef) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___EncryptionKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::Join, ___EncryptionKeySecret) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::Join) == 0x50, "Size mismatch!");

} // namespace end def Fusion::Protocol
