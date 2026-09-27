#pragma once
// IWYU pragma private; include "Fusion/Protocol/ReflexiveInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflexiveInfo)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace Fusion::Sockets::Stun {
struct NATType;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion::Protocol {
class ReflexiveInfo;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::ReflexiveInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::ReflexiveInfo*, "Fusion.Protocol", "ReflexiveInfo");
// Dependencies Fusion.Protocol.Message, Fusion.Sockets.NetAddress, Fusion.Sockets.Stun.NATType
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.ReflexiveInfo
class CORDL_TYPE ReflexiveInfo : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field ActorNr, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActorNr, put=__cordl_internal_set_ActorNr)) int32_t  ActorNr;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field NatType, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_NatType, put=__cordl_internal_set_NatType)) ::Fusion::Sockets::Stun::NATType  NatType;

/// @brief Field PrivateAddr, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_PrivateAddr, put=__cordl_internal_set_PrivateAddr)) ::Fusion::Sockets::NetAddress  PrivateAddr;

/// @brief Field PublicAddr, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_PublicAddr, put=__cordl_internal_set_PublicAddr)) ::Fusion::Sockets::NetAddress  PublicAddr;

/// @brief Field UniqueId, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_UniqueId, put=__cordl_internal_set_UniqueId)) ::ArrayW<uint8_t>  UniqueId;

static inline ::Fusion::Protocol::ReflexiveInfo* New_ctor() ;

static inline ::Fusion::Protocol::ReflexiveInfo* New_ctor(int32_t  actorNr, ::Fusion::Sockets::NetAddress  publicAddr, ::Fusion::Sockets::NetAddress  privateAddr, ::Fusion::Sockets::Stun::NATType  stunNatType, ::ArrayW<uint8_t>  uniqueID, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// @brief Method SerializeProtected, addr 0x6024b98, size 0xe8, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x6024cc4, size 0x4e4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_ActorNr() const;

constexpr int32_t& __cordl_internal_get_ActorNr() ;

constexpr ::Fusion::Sockets::Stun::NATType const& __cordl_internal_get_NatType() const;

constexpr ::Fusion::Sockets::Stun::NATType& __cordl_internal_get_NatType() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get_PrivateAddr() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get_PrivateAddr() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get_PublicAddr() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get_PublicAddr() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_UniqueId() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_UniqueId() ;

constexpr void __cordl_internal_set_ActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_NatType(::Fusion::Sockets::Stun::NATType  value) ;

constexpr void __cordl_internal_set_PrivateAddr(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set_PublicAddr(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set_UniqueId(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x6024b10, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x6024b1c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  actorNr, ::Fusion::Sockets::NetAddress  publicAddr, ::Fusion::Sockets::NetAddress  privateAddr, ::Fusion::Sockets::Stun::NATType  stunNatType, ::ArrayW<uint8_t>  uniqueID, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// @brief Method get_IsValid, addr 0x60249a8, size 0x8c, virtual true, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflexiveInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflexiveInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflexiveInfo(ReflexiveInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflexiveInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflexiveInfo(ReflexiveInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29327};

/// @brief Field ActorNr, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ActorNr;

/// @brief Field PublicAddr, offset: 0x30, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ___PublicAddr;

/// @brief Field PrivateAddr, offset: 0x48, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ___PrivateAddr;

/// @brief Field NatType, offset: 0x60, size: 0x1, def value: None
 ::Fusion::Sockets::Stun::NATType  ___NatType;

/// @brief Field UniqueId, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___UniqueId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::ReflexiveInfo, ___ActorNr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ReflexiveInfo, ___PublicAddr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ReflexiveInfo, ___PrivateAddr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ReflexiveInfo, ___NatType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::ReflexiveInfo, ___UniqueId) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::ReflexiveInfo) == 0x70, "Size mismatch!");

} // namespace end def Fusion::Protocol
