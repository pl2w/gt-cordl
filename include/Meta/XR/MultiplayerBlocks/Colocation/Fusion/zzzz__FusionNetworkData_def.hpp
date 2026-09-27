#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionNetworkData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionPlayer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionNetworkData)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
namespace Fusion {
struct SimulationMessage;
}
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionPlayer;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Anchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkData;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
class FusionNetworkData;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData*, "Meta.XR.MultiplayerBlocks.Colocation.Fusion", "FusionNetworkData");
// [NetworkBehaviourWeaved(797)]
// Dependencies Fusion.NetworkBehaviour, Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionAnchor, Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionPlayer
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionNetworkData
class CORDL_TYPE FusionNetworkData : public ::Fusion::NetworkBehaviour {
public:
// Declarations
/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeaved(1, 723)]
/// @brief [NetworkedWeavedLinkedList(10, 70, typeof(Fusion.CodeGen.ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor))]
 __declspec(property(get=get_AnchorList)) ::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>  AnchorList;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_ColocationGroupCount, put=set_ColocationGroupCount)) uint32_t  ColocationGroupCount;

/// [Networked]
/// [Capacity(10)]
/// [NetworkedWeaved(724, 73)]
/// @brief [NetworkedWeavedLinkedList(10, 5, typeof(Fusion.CodeGen.ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer))]
 __declspec(property(get=get_PlayerList)) ::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>  PlayerList;

/// @brief Field _AnchorList, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnchorList, put=__cordl_internal_set__AnchorList)) ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>  _AnchorList;

/// @brief Field _ColocationGroupCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__ColocationGroupCount, put=__cordl_internal_set__ColocationGroupCount)) uint32_t  _ColocationGroupCount;

/// @brief Field _PlayerList, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerList, put=__cordl_internal_set__PlayerList)) ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>  _PlayerList;

/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkData"
constexpr operator  ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*() noexcept;

/// @brief Method AddAnchor, addr 0x9f647c0, size 0xf0, virtual true, abstract: false, final true
inline void AddAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method AddAnchorRpc, addr 0x9f65604, size 0x218, virtual false, abstract: false, final false
inline void AddAnchorRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor) ;

/// [NetworkRpcWeavedInvoker(3, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method AddAnchorRpc@Invoker, addr 0x9f65f4c, size 0x104, virtual false, abstract: false, final false
static inline void AddAnchorRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method AddFusionAnchor, addr 0x9f65510, size 0xf4, virtual false, abstract: false, final false
inline void AddFusionAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor) ;

/// @brief Method AddFusionPlayer, addr 0x9f63db8, size 0xf4, virtual false, abstract: false, final false
inline void AddFusionPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player) ;

/// @brief Method AddPlayer, addr 0x9f63d50, size 0x4c, virtual true, abstract: false, final true
inline void AddPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Player  player) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method AddPlayerRpc, addr 0x9f650e0, size 0x218, virtual false, abstract: false, final false
inline void AddPlayerRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player) ;

/// [NetworkRpcWeavedInvoker(1, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method AddPlayerRpc@Invoker, addr 0x9f65d44, size 0x104, virtual false, abstract: false, final false
static inline void AddPlayerRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x9f65b30, size 0x128, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x9f65c58, size 0xec, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetAllAnchors, addr 0x9f64c28, size 0x2e4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* GetAllAnchors() ;

/// @brief Method GetAllPlayers, addr 0x9f64500, size 0x2c0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* GetAllPlayers() ;

/// @brief Method GetAnchor, addr 0x9f649a0, size 0x288, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> GetAnchor(uint64_t  ownerOculusId) ;

/// @brief Method GetColocationGroupCount, addr 0x9f64f0c, size 0x4, virtual true, abstract: false, final true
inline uint32_t GetColocationGroupCount() ;

/// @brief Method GetPlayerWithOculusId, addr 0x9f64284, size 0x27c, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> GetPlayerWithOculusId(uint64_t  oculusId) ;

/// @brief Method GetPlayerWithPlayerId, addr 0x9f63fec, size 0x27c, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> GetPlayerWithPlayerId(uint64_t  playerId) ;

/// @brief Method IncrementColocationGroupCount, addr 0x9f64f10, size 0x4c, virtual true, abstract: false, final true
inline void IncrementColocationGroupCount() ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method IncrementColocationGroupCountRpc, addr 0x9f64f5c, size 0x184, virtual false, abstract: false, final false
inline void IncrementColocationGroupCountRpc() ;

/// [NetworkRpcWeavedInvoker(5, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method IncrementColocationGroupCountRpc@Invoker, addr 0x9f66154, size 0x88, virtual false, abstract: false, final false
static inline void IncrementColocationGroupCountRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData* New_ctor() ;

/// @brief Method RemoveAnchor, addr 0x9f648b0, size 0xf0, virtual true, abstract: false, final true
inline void RemoveAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RemoveAnchorRpc, addr 0x9f65910, size 0x218, virtual false, abstract: false, final false
inline void RemoveAnchorRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor) ;

/// [NetworkRpcWeavedInvoker(4, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RemoveAnchorRpc@Invoker, addr 0x9f66050, size 0x104, virtual false, abstract: false, final false
static inline void RemoveAnchorRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method RemoveFusionAnchor, addr 0x9f6581c, size 0xf4, virtual false, abstract: false, final false
inline void RemoveFusionAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  anchor) ;

/// @brief Method RemoveFusionPlayer, addr 0x9f63ef8, size 0xf4, virtual false, abstract: false, final false
inline void RemoveFusionPlayer(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player) ;

/// @brief Method RemovePlayer, addr 0x9f63eac, size 0x4c, virtual true, abstract: false, final true
inline void RemovePlayer(::Meta::XR::MultiplayerBlocks::Colocation::Player  player) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RemovePlayerRpc, addr 0x9f652f8, size 0x218, virtual false, abstract: false, final false
inline void RemovePlayerRpc(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  player) ;

/// [NetworkRpcWeavedInvoker(2, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RemovePlayerRpc@Invoker, addr 0x9f65e48, size 0x104, virtual false, abstract: false, final false
static inline void RemovePlayerRpc@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> const& __cordl_internal_get__AnchorList() const;

constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>& __cordl_internal_get__AnchorList() ;

constexpr uint32_t const& __cordl_internal_get__ColocationGroupCount() const;

constexpr uint32_t& __cordl_internal_get__ColocationGroupCount() ;

constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> const& __cordl_internal_get__PlayerList() const;

constexpr ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>& __cordl_internal_get__PlayerList() ;

constexpr void __cordl_internal_set__AnchorList(::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>  value) ;

constexpr void __cordl_internal_set__ColocationGroupCount(uint32_t  value) ;

constexpr void __cordl_internal_set__PlayerList(::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>  value) ;

/// @brief Method .ctor, addr 0x9f65b28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AnchorList, addr 0x9f63ae0, size 0xb4, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> get_AnchorList() ;

/// @brief Method get_ColocationGroupCount, addr 0x9f63a28, size 0x5c, virtual false, abstract: false, final false
inline uint32_t get_ColocationGroupCount() ;

/// @brief Method get_PlayerList, addr 0x9f63c18, size 0xb4, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> get_PlayerList() ;

/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Colocation::INetworkData"
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* i___Meta__XR__MultiplayerBlocks__Colocation__INetworkData() noexcept;

/// @brief Method set_ColocationGroupCount, addr 0x9f63a84, size 0x5c, virtual false, abstract: false, final false
inline void set_ColocationGroupCount(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionNetworkData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionNetworkData(FusionNetworkData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionNetworkData(FusionNetworkData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31189};

/// [WeaverGenerated]
/// [DefaultForProperty("ColocationGroupCount", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _ColocationGroupCount, offset: 0x80, size: 0x4, def value: None
 uint32_t  ____ColocationGroupCount;

/// [WeaverGenerated]
/// [DefaultForProperty("AnchorList", 1, 723)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _AnchorList, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>  ____AnchorList;

/// [WeaverGenerated]
/// [DefaultForProperty("PlayerList", 724, 73)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _PlayerList, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>  ____PlayerList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData, ____ColocationGroupCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData, ____AnchorList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData, ____PlayerList) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionNetworkData) == 0x98, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation::Fusion
