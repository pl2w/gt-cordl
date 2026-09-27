#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLabReliableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostLabData_def.hpp"
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GhostLabReliableState)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct GhostLabData;
}
namespace GlobalNamespace {
struct GhostLab_EntranceDoorsState;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostLabReliableState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostLabReliableState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostLabReliableState*, "", "GhostLabReliableState");
// [NetworkBehaviourWeaved(21)]
// Dependencies GhostLab::EntranceDoorsState, GhostLabData, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostLabReliableState
class CORDL_TYPE GhostLabReliableState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 21)]
 __declspec(property(get=get_NetData, put=set_NetData)) ::GlobalNamespace::GhostLabData  NetData;

/// @brief Field _NetData, offset 0xb0, size 0x54 
 __declspec(property(get=__cordl_internal_get__NetData, put=__cordl_internal_set__NetData)) ::GlobalNamespace::GhostLabData  _NetData;

/// @brief Field doorState, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorState, put=__cordl_internal_set_doorState)) ::GlobalNamespace::GhostLab_EntranceDoorsState  doorState;

/// @brief Field singleDoorCount, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_singleDoorCount, put=__cordl_internal_set_singleDoorCount)) int32_t  singleDoorCount;

/// @brief Field singleDoorOpen, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleDoorOpen, put=__cordl_internal_set_singleDoorOpen)) ::ArrayW<bool>  singleDoorOpen;

/// @brief Method Awake, addr 0x5d0b428, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5d0bfbc, size 0x64, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5d0c020, size 0x64, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::GhostLabReliableState* New_ctor() ;

/// @brief Method OnOwnerChange, addr 0x5d0b48c, size 0x78, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_RemoteEntranceDoorState, addr 0x5d0b918, size 0x25c, virtual false, abstract: false, final false
inline void RPC_RemoteEntranceDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState  newState, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_RemoteEntranceDoorState@Invoker, addr 0x5d0c084, size 0xb8, virtual false, abstract: false, final false
static inline void RPC_RemoteEntranceDoorState@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_RemoteSingleDoorState, addr 0x5d0bb74, size 0x28c, virtual false, abstract: false, final false
inline void RPC_RemoteSingleDoorState(int32_t  doorIndex, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(2, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_RemoteSingleDoorState@Invoker, addr 0x5d0c13c, size 0xb8, virtual false, abstract: false, final false
static inline void RPC_RemoteSingleDoorState@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method ReadDataFusion, addr 0x5d0b588, size 0x168, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5d0b7f0, size 0x128, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteEntranceDoorState, addr 0x5d0be00, size 0xc0, virtual false, abstract: false, final false
inline void RemoteEntranceDoorState(::GlobalNamespace::GhostLab_EntranceDoorsState  newState, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteSingleDoorState, addr 0x5d0bec0, size 0xf4, virtual false, abstract: false, final false
inline void RemoteSingleDoorState(int32_t  doorIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method UpdateEntranceDoorsState, addr 0x5d0a908, size 0x1dc, virtual false, abstract: false, final false
inline void UpdateEntranceDoorsState(::GlobalNamespace::GhostLab_EntranceDoorsState  newState) ;

/// @brief Method UpdateSingleDoorState, addr 0x5d0a718, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateSingleDoorState(int32_t  singleDoorIndex) ;

/// @brief Method WriteDataFusion, addr 0x5d0b504, size 0x84, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5d0b6f0, size 0x100, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::GhostLabData const& __cordl_internal_get__NetData() const;

constexpr ::GlobalNamespace::GhostLabData& __cordl_internal_get__NetData() ;

constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState const& __cordl_internal_get_doorState() const;

constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState& __cordl_internal_get_doorState() ;

constexpr int32_t const& __cordl_internal_get_singleDoorCount() const;

constexpr int32_t& __cordl_internal_get_singleDoorCount() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_singleDoorOpen() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_singleDoorOpen() ;

constexpr void __cordl_internal_set__NetData(::GlobalNamespace::GhostLabData  value) ;

constexpr void __cordl_internal_set_doorState(::GlobalNamespace::GhostLab_EntranceDoorsState  value) ;

constexpr void __cordl_internal_set_singleDoorCount(int32_t  value) ;

constexpr void __cordl_internal_set_singleDoorOpen(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x5d0bfb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetData, addr 0x5d0b36c, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::GhostLabData get_NetData() ;

/// @brief Method set_NetData, addr 0x5d0b3cc, size 0x5c, virtual false, abstract: false, final false
inline void set_NetData(::GlobalNamespace::GhostLabData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostLabReliableState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostLabReliableState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostLabReliableState(GhostLabReliableState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostLabReliableState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostLabReliableState(GhostLabReliableState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{460};

/// @brief Field doorState, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::GhostLab_EntranceDoorsState  ___doorState;

/// @brief Field singleDoorCount, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___singleDoorCount;

/// @brief Field singleDoorOpen, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<bool>  ___singleDoorOpen;

/// [WeaverGenerated]
/// [DefaultForProperty("NetData", 0, 21)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _NetData, offset: 0xb0, size: 0x54, def value: None
 ::GlobalNamespace::GhostLabData  ____NetData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostLabReliableState, ___doorState) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLabReliableState, ___singleDoorCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLabReliableState, ___singleDoorOpen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLabReliableState, ____NetData) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostLabReliableState) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
