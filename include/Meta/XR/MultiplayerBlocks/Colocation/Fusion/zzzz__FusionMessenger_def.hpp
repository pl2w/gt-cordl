#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionMessenger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionMessenger)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct FusionMessenger_MessageEvent;
}
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionShareAndLocalizeParams;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkMessenger;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ShareAndLocalizeParams;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
class FusionMessenger;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger*, "Meta.XR.MultiplayerBlocks.Colocation.Fusion", "FusionMessenger");
// [NetworkBehaviourWeaved(76)]
// Dependencies Fusion.NetworkBehaviour
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger
class CORDL_TYPE FusionMessenger : public ::Fusion::NetworkBehaviour {
public:
// Declarations
using MessageEvent = ::GlobalNamespace::FusionMessenger_MessageEvent;

/// @brief Field AnchorShareRequestCompleted, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorShareRequestCompleted, put=__cordl_internal_set_AnchorShareRequestCompleted)) ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  AnchorShareRequestCompleted;

/// @brief Field AnchorShareRequestReceived, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorShareRequestReceived, put=__cordl_internal_set_AnchorShareRequestReceived)) ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  AnchorShareRequestReceived;

/// @brief Field __networkIds, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get___networkIds, put=__cordl_internal_set___networkIds)) ::ArrayW<int32_t>  __networkIds;

/// @brief Field __playerIds, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get___playerIds, put=__cordl_internal_set___playerIds)) ::ArrayW<uint64_t>  __playerIds;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeaved(0, 33)]
/// @brief [NetworkedWeavedLinkedList(10, 1, typeof(Fusion.ElementReaderWriterInt32))]
 __declspec(property(get=get__networkIds)) ::Fusion::NetworkLinkedList_1<int32_t>  _networkIds;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeaved(33, 43)]
/// @brief [NetworkedWeavedLinkedList(10, 2, typeof(Fusion.ElementReaderWriterUInt64))]
 __declspec(property(get=get__playerIds)) ::Fusion::NetworkLinkedList_1<uint64_t>  _playerIds;

/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger"
constexpr operator  ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*() noexcept;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method AddPlayerIdHostRPC, addr 0x9f621d0, size 0x298, virtual false, abstract: false, final false
inline void AddPlayerIdHostRPC(uint64_t  localPlayerId, int32_t  localNetworkId) ;

/// [NetworkRpcWeavedInvoker(1, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method AddPlayerIdHostRPC@Invoker, addr 0x9f63734, size 0x98, virtual false, abstract: false, final false
static inline void AddPlayerIdHostRPC@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x9f63538, size 0x11c, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x9f63654, size 0xe0, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method FindRPCToCallServerRPC, addr 0x9f62e18, size 0x2e4, virtual false, abstract: false, final false
inline void FindRPCToCallServerRPC(::GlobalNamespace::FusionMessenger_MessageEvent  eventCode, int32_t  fusionId, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams  fusionData, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(2, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method FindRPCToCallServerRPC@Invoker, addr 0x9f637cc, size 0x12c, virtual false, abstract: false, final false
static inline void FindRPCToCallServerRPC@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)7)]
/// @brief Method HandleMessageClientRPC, addr 0x9f630fc, size 0x354, virtual false, abstract: false, final false
inline void HandleMessageClientRPC(/* [RpcTarget] */ ::Fusion::PlayerRef  playerRef, ::GlobalNamespace::FusionMessenger_MessageEvent  eventCode, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams  fusionData) ;

/// [NetworkRpcWeavedInvoker(3, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method HandleMessageClientRPC@Invoker, addr 0x9f638f8, size 0x130, virtual false, abstract: false, final false
static inline void HandleMessageClientRPC@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger* New_ctor() ;

/// @brief Method PrintIDDictionary, addr 0x9f62468, size 0x298, virtual false, abstract: false, final false
inline void PrintIDDictionary() ;

/// @brief Method RegisterLocalPlayer, addr 0x9f62058, size 0x178, virtual true, abstract: false, final true
inline void RegisterLocalPlayer(uint64_t  localPlayerId) ;

/// @brief Method SendAnchorShareCompleted, addr 0x9f62cc4, size 0x154, virtual true, abstract: false, final true
inline void SendAnchorShareCompleted(uint64_t  targetPlayerId, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams) ;

/// @brief Method SendAnchorShareRequest, addr 0x9f628d8, size 0x154, virtual true, abstract: false, final true
inline void SendAnchorShareRequest(uint64_t  targetPlayerId, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams) ;

/// @brief Method SendMessageToPlayer, addr 0x9f62af4, size 0x1d0, virtual false, abstract: false, final false
inline void SendMessageToPlayer(::GlobalNamespace::FusionMessenger_MessageEvent  eventCode, uint64_t  playerId, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams  fusionData) ;

/// @brief Method TryGetNetworkId, addr 0x9f62700, size 0x1d8, virtual false, abstract: false, final false
inline bool TryGetNetworkId(uint64_t  playerId, ::by_ref<int32_t>  networkId) ;

constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* const& __cordl_internal_get_AnchorShareRequestCompleted() const;

constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*& __cordl_internal_get_AnchorShareRequestCompleted() ;

constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>* const& __cordl_internal_get_AnchorShareRequestReceived() const;

constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*& __cordl_internal_get_AnchorShareRequestReceived() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get___networkIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get___networkIds() ;

constexpr ::ArrayW<uint64_t> const& __cordl_internal_get___playerIds() const;

constexpr ::ArrayW<uint64_t>& __cordl_internal_get___playerIds() ;

constexpr void __cordl_internal_set_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value) ;

constexpr void __cordl_internal_set_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value) ;

constexpr void __cordl_internal_set___networkIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set___playerIds(::ArrayW<uint64_t>  value) ;

/// @brief Method .ctor, addr 0x9f63530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_AnchorShareRequestCompleted, addr 0x9f61ef8, size 0xb0, virtual true, abstract: false, final true
inline void add_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_AnchorShareRequestReceived, addr 0x9f61d98, size 0xb0, virtual true, abstract: false, final true
inline void add_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value) ;

/// @brief Method get__networkIds, addr 0x9f61b50, size 0x124, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<int32_t> get__networkIds() ;

/// @brief Method get__playerIds, addr 0x9f61c74, size 0x124, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<uint64_t> get__playerIds() ;

/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger"
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* i___Meta__XR__MultiplayerBlocks__Colocation__INetworkMessenger() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_AnchorShareRequestCompleted, addr 0x9f61fa8, size 0xb0, virtual true, abstract: false, final true
inline void remove_AnchorShareRequestCompleted(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_AnchorShareRequestReceived, addr 0x9f61e48, size 0xb0, virtual true, abstract: false, final true
inline void remove_AnchorShareRequestReceived(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionMessenger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionMessenger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionMessenger(FusionMessenger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionMessenger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionMessenger(FusionMessenger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31188};

/// [WeaverGenerated]
/// [DefaultForProperty("_networkIds", 0, 33)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field __networkIds, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<int32_t>  _____networkIds;

/// [WeaverGenerated]
/// [DefaultForProperty("_playerIds", 33, 43)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field __playerIds, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint64_t>  _____playerIds;

/// [CompilerGenerated]
/// @brief Field AnchorShareRequestReceived, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  ___AnchorShareRequestReceived;

/// [CompilerGenerated]
/// @brief Field AnchorShareRequestCompleted, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>*  ___AnchorShareRequestCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger, _____networkIds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger, _____playerIds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger, ___AnchorShareRequestReceived) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger, ___AnchorShareRequestCompleted) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionMessenger) == 0xa0, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation::Fusion
