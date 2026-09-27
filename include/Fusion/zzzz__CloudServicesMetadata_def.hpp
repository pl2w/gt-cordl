#pragma once
// IWYU pragma private; include "Fusion/CloudServicesMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "Fusion/zzzz__JoinProcessStage_def.hpp"
#include "Fusion/zzzz__NATPunchStage_def.hpp"
#include "Fusion/zzzz__NetworkRunnerInitializeArgs_def.hpp"
#include "Fusion/zzzz__ScheduledRequests_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudServicesMetadata)
namespace Fusion::Encryption {
class EncryptionToken;
}
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
namespace Fusion::Protocol {
class Disconnect;
}
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
namespace Fusion::Protocol {
class ReflexiveInfo;
}
namespace Fusion::Sockets::Stun {
class StunResult;
}
namespace Fusion {
struct JoinProcessStage;
}
namespace Fusion {
struct NATPunchStage;
}
namespace Fusion {
struct NetworkRunnerInitializeArgs;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Fusion {
class CloudServicesMetadata;
}
// Write type traits
MARK_REF_T(::Fusion::CloudServicesMetadata*);
DEFINE_IL2CPP_CLASS(::Fusion::CloudServicesMetadata*, "Fusion", "CloudServicesMetadata");
// Dependencies Fusion.JoinProcessStage, Fusion.NATPunchStage, Fusion.NetworkRunnerInitializeArgs, Fusion.Protocol.ProtocolMessageVersion, Fusion.ScheduledRequests, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudServicesMetadata
class CORDL_TYPE CloudServicesMetadata : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentJoinStage, put=set_CurrentJoinStage)) ::Fusion::JoinProcessStage  CurrentJoinStage;

 __declspec(property(get=get_CurrentProtocolMessageVersion, put=set_CurrentProtocolMessageVersion)) ::Fusion::Protocol::ProtocolMessageVersion  CurrentProtocolMessageVersion;

 __declspec(property(get=get_CurrentPunchStage, put=set_CurrentPunchStage)) ::Fusion::NATPunchStage  CurrentPunchStage;

 __declspec(property(get=get_EncryptionToken, put=set_EncryptionToken)) ::Fusion::Encryption::EncryptionToken*  EncryptionToken;

/// @brief Field LastDisconnectMsg, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastDisconnectMsg, put=__cordl_internal_set_LastDisconnectMsg)) ::Fusion::Protocol::Disconnect*  LastDisconnectMsg;

/// @brief Field LobbyClientServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LobbyClientServer, put=setStaticF_LobbyClientServer)) ::Fusion::Photon::Realtime::TypedLobby*  LobbyClientServer;

/// @brief Field LobbyShared, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LobbyShared, put=setStaticF_LobbyShared)) ::Fusion::Photon::Realtime::TypedLobby*  LobbyShared;

 __declspec(property(get=get_LocalReflexiveInfo, put=set_LocalReflexiveInfo)) ::Fusion::Sockets::Stun::StunResult*  LocalReflexiveInfo;

 __declspec(property(get=get_PlayerRef, put=set_PlayerRef)) int32_t  PlayerRef;

 __declspec(property(get=get_RemoteReflexiveInfo, put=set_RemoteReflexiveInfo)) ::Fusion::Protocol::ReflexiveInfo*  RemoteReflexiveInfo;

 __declspec(property(get=get_RunnerInitializeArgs, put=set_RunnerInitializeArgs)) ::Fusion::NetworkRunnerInitializeArgs  RunnerInitializeArgs;

/// @brief Field ScheduledRequests, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScheduledRequests, put=__cordl_internal_set_ScheduledRequests)) ::Fusion::ScheduledRequests  ScheduledRequests;

 __declspec(property(get=get_UniqueId, put=set_UniqueId)) ::ArrayW<uint8_t>  UniqueId;

/// @brief Field UniqueIdToReflexiveInfoTable, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_UniqueIdToReflexiveInfoTable, put=__cordl_internal_set_UniqueIdToReflexiveInfoTable)) ::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>*  UniqueIdToReflexiveInfoTable;

/// @brief Field <CurrentJoinStage>k__BackingField, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentJoinStage_k__BackingField, put=__cordl_internal_set__CurrentJoinStage_k__BackingField)) ::Fusion::JoinProcessStage  _CurrentJoinStage_k__BackingField;

/// @brief Field <CurrentProtocolMessageVersion>k__BackingField, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__CurrentProtocolMessageVersion_k__BackingField, put=__cordl_internal_set__CurrentProtocolMessageVersion_k__BackingField)) ::Fusion::Protocol::ProtocolMessageVersion  _CurrentProtocolMessageVersion_k__BackingField;

/// @brief Field <CurrentPunchStage>k__BackingField, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentPunchStage_k__BackingField, put=__cordl_internal_set__CurrentPunchStage_k__BackingField)) ::Fusion::NATPunchStage  _CurrentPunchStage_k__BackingField;

/// @brief Field <EncryptionToken>k__BackingField, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__EncryptionToken_k__BackingField, put=__cordl_internal_set__EncryptionToken_k__BackingField)) ::Fusion::Encryption::EncryptionToken*  _EncryptionToken_k__BackingField;

/// @brief Field <PlayerRef>k__BackingField, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlayerRef_k__BackingField, put=__cordl_internal_set__PlayerRef_k__BackingField)) int32_t  _PlayerRef_k__BackingField;

/// @brief Field <RemoteReflexiveInfo>k__BackingField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__RemoteReflexiveInfo_k__BackingField, put=__cordl_internal_set__RemoteReflexiveInfo_k__BackingField)) ::Fusion::Protocol::ReflexiveInfo*  _RemoteReflexiveInfo_k__BackingField;

/// @brief Field <RunnerInitializeArgs>k__BackingField, offset 0x10, size 0xe0 
 __declspec(property(get=__cordl_internal_get__RunnerInitializeArgs_k__BackingField, put=__cordl_internal_set__RunnerInitializeArgs_k__BackingField)) ::Fusion::NetworkRunnerInitializeArgs  _RunnerInitializeArgs_k__BackingField;

/// @brief Field <UniqueId>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__UniqueId_k__BackingField, put=__cordl_internal_set__UniqueId_k__BackingField)) ::ArrayW<uint8_t>  _UniqueId_k__BackingField;

/// @brief Field _localStunResult, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__localStunResult, put=__cordl_internal_set__localStunResult)) ::Fusion::Sockets::Stun::StunResult*  _localStunResult;

static inline ::Fusion::CloudServicesMetadata* New_ctor() ;

constexpr ::Fusion::Protocol::Disconnect* const& __cordl_internal_get_LastDisconnectMsg() const;

constexpr ::Fusion::Protocol::Disconnect*& __cordl_internal_get_LastDisconnectMsg() ;

constexpr ::Fusion::ScheduledRequests const& __cordl_internal_get_ScheduledRequests() const;

constexpr ::Fusion::ScheduledRequests& __cordl_internal_get_ScheduledRequests() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>* const& __cordl_internal_get_UniqueIdToReflexiveInfoTable() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>*& __cordl_internal_get_UniqueIdToReflexiveInfoTable() ;

constexpr ::Fusion::JoinProcessStage const& __cordl_internal_get__CurrentJoinStage_k__BackingField() const;

constexpr ::Fusion::JoinProcessStage& __cordl_internal_get__CurrentJoinStage_k__BackingField() ;

constexpr ::Fusion::Protocol::ProtocolMessageVersion const& __cordl_internal_get__CurrentProtocolMessageVersion_k__BackingField() const;

constexpr ::Fusion::Protocol::ProtocolMessageVersion& __cordl_internal_get__CurrentProtocolMessageVersion_k__BackingField() ;

constexpr ::Fusion::NATPunchStage const& __cordl_internal_get__CurrentPunchStage_k__BackingField() const;

constexpr ::Fusion::NATPunchStage& __cordl_internal_get__CurrentPunchStage_k__BackingField() ;

constexpr ::Fusion::Encryption::EncryptionToken* const& __cordl_internal_get__EncryptionToken_k__BackingField() const;

constexpr ::Fusion::Encryption::EncryptionToken*& __cordl_internal_get__EncryptionToken_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PlayerRef_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PlayerRef_k__BackingField() ;

constexpr ::Fusion::Protocol::ReflexiveInfo* const& __cordl_internal_get__RemoteReflexiveInfo_k__BackingField() const;

constexpr ::Fusion::Protocol::ReflexiveInfo*& __cordl_internal_get__RemoteReflexiveInfo_k__BackingField() ;

constexpr ::Fusion::NetworkRunnerInitializeArgs const& __cordl_internal_get__RunnerInitializeArgs_k__BackingField() const;

constexpr ::Fusion::NetworkRunnerInitializeArgs& __cordl_internal_get__RunnerInitializeArgs_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__UniqueId_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__UniqueId_k__BackingField() ;

constexpr ::Fusion::Sockets::Stun::StunResult* const& __cordl_internal_get__localStunResult() const;

constexpr ::Fusion::Sockets::Stun::StunResult*& __cordl_internal_get__localStunResult() ;

constexpr void __cordl_internal_set_LastDisconnectMsg(::Fusion::Protocol::Disconnect*  value) ;

constexpr void __cordl_internal_set_ScheduledRequests(::Fusion::ScheduledRequests  value) ;

constexpr void __cordl_internal_set_UniqueIdToReflexiveInfoTable(::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>*  value) ;

constexpr void __cordl_internal_set__CurrentJoinStage_k__BackingField(::Fusion::JoinProcessStage  value) ;

constexpr void __cordl_internal_set__CurrentProtocolMessageVersion_k__BackingField(::Fusion::Protocol::ProtocolMessageVersion  value) ;

constexpr void __cordl_internal_set__CurrentPunchStage_k__BackingField(::Fusion::NATPunchStage  value) ;

constexpr void __cordl_internal_set__EncryptionToken_k__BackingField(::Fusion::Encryption::EncryptionToken*  value) ;

constexpr void __cordl_internal_set__PlayerRef_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RemoteReflexiveInfo_k__BackingField(::Fusion::Protocol::ReflexiveInfo*  value) ;

constexpr void __cordl_internal_set__RunnerInitializeArgs_k__BackingField(::Fusion::NetworkRunnerInitializeArgs  value) ;

constexpr void __cordl_internal_set__UniqueId_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__localStunResult(::Fusion::Sockets::Stun::StunResult*  value) ;

/// @brief Method .ctor, addr 0x5f725a8, size 0xec, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::Photon::Realtime::TypedLobby* getStaticF_LobbyClientServer() ;

static inline ::Fusion::Photon::Realtime::TypedLobby* getStaticF_LobbyShared() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentJoinStage, addr 0x5f7a47c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::JoinProcessStage get_CurrentJoinStage() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentProtocolMessageVersion, addr 0x5f7a48c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Protocol::ProtocolMessageVersion get_CurrentProtocolMessageVersion() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentPunchStage, addr 0x5f7a46c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NATPunchStage get_CurrentPunchStage() ;

/// [CompilerGenerated]
/// @brief Method get_EncryptionToken, addr 0x5f7a4dc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Encryption::EncryptionToken* get_EncryptionToken() ;

/// @brief Method get_LocalReflexiveInfo, addr 0x5f71e18, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::Stun::StunResult* get_LocalReflexiveInfo() ;

/// [CompilerGenerated]
/// @brief Method get_PlayerRef, addr 0x5f7a4cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayerRef() ;

/// [CompilerGenerated]
/// @brief Method get_RemoteReflexiveInfo, addr 0x5f7a49c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Protocol::ReflexiveInfo* get_RemoteReflexiveInfo() ;

/// [CompilerGenerated]
/// @brief Method get_RunnerInitializeArgs, addr 0x5f7a438, size 0x10, virtual false, abstract: false, final false
inline ::Fusion::NetworkRunnerInitializeArgs get_RunnerInitializeArgs() ;

/// [CompilerGenerated]
/// @brief Method get_UniqueId, addr 0x5f7a4b4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_UniqueId() ;

static inline void setStaticF_LobbyClientServer(::Fusion::Photon::Realtime::TypedLobby*  value) ;

static inline void setStaticF_LobbyShared(::Fusion::Photon::Realtime::TypedLobby*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentJoinStage, addr 0x5f7a484, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentJoinStage(::Fusion::JoinProcessStage  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentProtocolMessageVersion, addr 0x5f7a494, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentProtocolMessageVersion(::Fusion::Protocol::ProtocolMessageVersion  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentPunchStage, addr 0x5f7a474, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentPunchStage(::Fusion::NATPunchStage  value) ;

/// [CompilerGenerated]
/// @brief Method set_EncryptionToken, addr 0x5f7a4e4, size 0x10, virtual false, abstract: false, final false
inline void set_EncryptionToken(::Fusion::Encryption::EncryptionToken*  value) ;

/// @brief Method set_LocalReflexiveInfo, addr 0x5f78de8, size 0xb4, virtual false, abstract: false, final false
inline void set_LocalReflexiveInfo(::Fusion::Sockets::Stun::StunResult*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayerRef, addr 0x5f7a4d4, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerRef(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RemoteReflexiveInfo, addr 0x5f7a4a4, size 0x10, virtual false, abstract: false, final false
inline void set_RemoteReflexiveInfo(::Fusion::Protocol::ReflexiveInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RunnerInitializeArgs, addr 0x5f7a448, size 0x24, virtual false, abstract: false, final false
inline void set_RunnerInitializeArgs(::Fusion::NetworkRunnerInitializeArgs  value) ;

/// [CompilerGenerated]
/// @brief Method set_UniqueId, addr 0x5f7a4bc, size 0x10, virtual false, abstract: false, final false
inline void set_UniqueId(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudServicesMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudServicesMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudServicesMetadata(CloudServicesMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudServicesMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudServicesMetadata(CloudServicesMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18849};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RunnerInitializeArgs>k__BackingField, offset: 0x10, size: 0xe0, def value: None
 ::Fusion::NetworkRunnerInitializeArgs  ____RunnerInitializeArgs_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CurrentPunchStage>k__BackingField, offset: 0xf0, size: 0x4, def value: None
 ::Fusion::NATPunchStage  ____CurrentPunchStage_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CurrentJoinStage>k__BackingField, offset: 0xf4, size: 0x4, def value: None
 ::Fusion::JoinProcessStage  ____CurrentJoinStage_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CurrentProtocolMessageVersion>k__BackingField, offset: 0xf8, size: 0x1, def value: None
 ::Fusion::Protocol::ProtocolMessageVersion  ____CurrentProtocolMessageVersion_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RemoteReflexiveInfo>k__BackingField, offset: 0x100, size: 0x8, def value: None
 ::Fusion::Protocol::ReflexiveInfo*  ____RemoteReflexiveInfo_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UniqueId>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____UniqueId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PlayerRef>k__BackingField, offset: 0x110, size: 0x4, def value: None
 int32_t  ____PlayerRef_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <EncryptionToken>k__BackingField, offset: 0x118, size: 0x8, def value: None
 ::Fusion::Encryption::EncryptionToken*  ____EncryptionToken_k__BackingField;

/// @brief Field ScheduledRequests, offset: 0x120, size: 0x4, def value: None
 ::Fusion::ScheduledRequests  ___ScheduledRequests;

/// @brief Field LastDisconnectMsg, offset: 0x128, size: 0x8, def value: None
 ::Fusion::Protocol::Disconnect*  ___LastDisconnectMsg;

/// @brief Field UniqueIdToReflexiveInfoTable, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::Fusion::Protocol::ReflexiveInfo*>*  ___UniqueIdToReflexiveInfoTable;

/// @brief Field _localStunResult, offset: 0x138, size: 0x8, def value: None
 ::Fusion::Sockets::Stun::StunResult*  ____localStunResult;

/// @brief Size padding 0x158 - 0x140 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudServicesMetadata, ____RunnerInitializeArgs_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____CurrentPunchStage_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____CurrentJoinStage_k__BackingField) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____CurrentProtocolMessageVersion_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____RemoteReflexiveInfo_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____UniqueId_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____PlayerRef_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____EncryptionToken_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ___ScheduledRequests) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ___LastDisconnectMsg) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ___UniqueIdToReflexiveInfoTable) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudServicesMetadata, ____localStunResult) == 0x138, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudServicesMetadata) == 0x158, "Size mismatch!");

} // namespace end def Fusion
