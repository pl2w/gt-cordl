#pragma once
// IWYU pragma private; include "Fusion/Protocol/NetworkConfigSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__SyncType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkConfigSync)
namespace Fusion::Protocol {
class BitStream;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace Fusion::Protocol {
struct SyncType;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Fusion::Protocol {
class NetworkConfigSync;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::NetworkConfigSync*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::NetworkConfigSync*, "Fusion.Protocol", "NetworkConfigSync");
// Dependencies Fusion.Protocol.Message, Fusion.Protocol.SyncType
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.NetworkConfigSync
class CORDL_TYPE NetworkConfigSync : public ::Fusion::Protocol::Message {
public:
// Declarations
/// @brief Field NetworkConfig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkConfig, put=__cordl_internal_set_NetworkConfig)) ::StringW  NetworkConfig;

/// @brief Field Type, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Fusion::Protocol::SyncType  Type;

static inline ::Fusion::Protocol::NetworkConfigSync* New_ctor() ;

static inline ::Fusion::Protocol::NetworkConfigSync* New_ctor(::Fusion::Protocol::SyncType  type, ::StringW  serializedNetworkConfig, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

/// @brief Method SerializeProtected, addr 0x60243b0, size 0x4c, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x60243fc, size 0x240, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_NetworkConfig() const;

constexpr ::StringW& __cordl_internal_get_NetworkConfig() ;

constexpr ::Fusion::Protocol::SyncType const& __cordl_internal_get_Type() const;

constexpr ::Fusion::Protocol::SyncType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_NetworkConfig(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::Fusion::Protocol::SyncType  value) ;

/// @brief Method .ctor, addr 0x6024368, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x6024374, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Protocol::SyncType  type, ::StringW  serializedNetworkConfig, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkConfigSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConfigSync(NetworkConfigSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfigSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConfigSync(NetworkConfigSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29325};

/// @brief Field Type, offset: 0x28, size: 0x1, def value: None
 ::Fusion::Protocol::SyncType  ___Type;

/// @brief Field NetworkConfig, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___NetworkConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::NetworkConfigSync, ___Type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::NetworkConfigSync, ___NetworkConfig) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::NetworkConfigSync) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Protocol
