#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeletonSynchValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_GhostState_def.hpp"
#include "GlobalNamespace/zzzz__SkeletonNetData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecondLookSkeletonSynchValues)
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
class NetPlayer;
}
namespace GlobalNamespace {
class SecondLookSkeleton;
}
namespace GlobalNamespace {
struct SkeletonNetData;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class SecondLookSkeletonSynchValues;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SecondLookSkeletonSynchValues*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SecondLookSkeletonSynchValues*, "", "SecondLookSkeletonSynchValues");
// [NetworkBehaviourWeaved(11)]
// Dependencies NetworkComponent, SecondLookSkeleton::GhostState, SkeletonNetData, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SecondLookSkeletonSynchValues
class CORDL_TYPE SecondLookSkeletonSynchValues : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 11)]
 __declspec(property(get=get_NetData, put=set_NetData)) ::GlobalNamespace::SkeletonNetData  NetData;

/// @brief Field _NetData, offset 0xd4, size 0x2c 
 __declspec(property(get=__cordl_internal_get__NetData, put=__cordl_internal_set__NetData)) ::GlobalNamespace::SkeletonNetData  _NetData;

/// @brief Field angerPoint, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_angerPoint, put=__cordl_internal_set_angerPoint)) int32_t  angerPoint;

/// @brief Field currentNode, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentNode, put=__cordl_internal_set_currentNode)) int32_t  currentNode;

/// @brief Field currentState, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SecondLookSkeleton_GhostState  currentState;

/// @brief Field mySkeleton, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySkeleton, put=__cordl_internal_set_mySkeleton)) ::UnityW<::GlobalNamespace::SecondLookSkeleton>  mySkeleton;

/// @brief Field nextNode, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) int32_t  nextNode;

/// @brief Field position, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5d11a98, size 0x68, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5d11b00, size 0x6c, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::SecondLookSkeletonSynchValues* New_ctor() ;

/// @brief Method OnOwnerSwitched, addr 0x5d1069c, size 0x70, virtual true, abstract: false, final false
inline void OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_RemoteActiveGhost, addr 0x5d10fdc, size 0x24c, virtual false, abstract: false, final false
inline void RPC_RemoteActiveGhost(::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_RemoteActiveGhost@Invoker, addr 0x5d11b6c, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_RemoteActiveGhost@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_RemotePlayerCaught, addr 0x5d114d8, size 0x2a0, virtual false, abstract: false, final false
inline void RPC_RemotePlayerCaught(::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(3, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_RemotePlayerCaught@Invoker, addr 0x5d11ccc, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_RemotePlayerCaught@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)7)]
/// @brief Method RPC_RemotePlayerSeen, addr 0x5d11228, size 0x2b0, virtual false, abstract: false, final false
inline void RPC_RemotePlayerSeen(::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(2, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_RemotePlayerSeen@Invoker, addr 0x5d11c1c, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_RemotePlayerSeen@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method ReadDataFusion, addr 0x5d107e8, size 0x2a8, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5d10c6c, size 0x370, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteActivateGhost, addr 0x5d11778, size 0xc8, virtual false, abstract: false, final false
inline void RemoteActivateGhost(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemotePlayerCaught, addr 0x5d11974, size 0x11c, virtual false, abstract: false, final false
inline void RemotePlayerCaught(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemotePlayerSeen, addr 0x5d11840, size 0x134, virtual false, abstract: false, final false
inline void RemotePlayerSeen(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x5d1070c, size 0xdc, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5d10a90, size 0x1dc, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::SkeletonNetData const& __cordl_internal_get__NetData() const;

constexpr ::GlobalNamespace::SkeletonNetData& __cordl_internal_get__NetData() ;

constexpr int32_t const& __cordl_internal_get_angerPoint() const;

constexpr int32_t& __cordl_internal_get_angerPoint() ;

constexpr int32_t const& __cordl_internal_get_currentNode() const;

constexpr int32_t& __cordl_internal_get_currentNode() ;

constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton> const& __cordl_internal_get_mySkeleton() const;

constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton>& __cordl_internal_get_mySkeleton() ;

constexpr int32_t const& __cordl_internal_get_nextNode() const;

constexpr int32_t& __cordl_internal_get_nextNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr void __cordl_internal_set__NetData(::GlobalNamespace::SkeletonNetData  value) ;

constexpr void __cordl_internal_set_angerPoint(int32_t  value) ;

constexpr void __cordl_internal_set_currentNode(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SecondLookSkeleton_GhostState  value) ;

constexpr void __cordl_internal_set_mySkeleton(::UnityW<::GlobalNamespace::SecondLookSkeleton>  value) ;

constexpr void __cordl_internal_set_nextNode(int32_t  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x5d11a90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetData, addr 0x5d105c4, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::SkeletonNetData get_NetData() ;

/// @brief Method set_NetData, addr 0x5d1062c, size 0x70, virtual false, abstract: false, final false
inline void set_NetData(::GlobalNamespace::SkeletonNetData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecondLookSkeletonSynchValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecondLookSkeletonSynchValues", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecondLookSkeletonSynchValues(SecondLookSkeletonSynchValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecondLookSkeletonSynchValues", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecondLookSkeletonSynchValues(SecondLookSkeletonSynchValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{468};

/// @brief Field currentState, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::SecondLookSkeleton_GhostState  ___currentState;

/// @brief Field position, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field mySkeleton, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SecondLookSkeleton>  ___mySkeleton;

/// @brief Field currentNode, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___currentNode;

/// @brief Field nextNode, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___nextNode;

/// @brief Field angerPoint, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___angerPoint;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("NetData", 0, 11)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _NetData, offset: 0xd4, size: 0x2c, def value: None
 ::GlobalNamespace::SkeletonNetData  ____NetData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___currentState) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___position) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___rotation) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___mySkeleton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___currentNode) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___nextNode) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ___angerPoint) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeletonSynchValues, ____NetData) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SecondLookSkeletonSynchValues) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
