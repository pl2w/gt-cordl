#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionInternalRPCs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionInternalRPCs)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class NetworkSystemFusion;
}
// Forward declare root types
namespace GlobalNamespace {
class FusionInternalRPCs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FusionInternalRPCs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionInternalRPCs*, "", "FusionInternalRPCs");
// Dependencies Fusion.SimulationBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionInternalRPCs
class CORDL_TYPE FusionInternalRPCs : public ::Fusion::SimulationBehaviour {
public:
// Declarations
/// @brief Field netSys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_netSys, put=setStaticF_netSys)) ::UnityW<::GlobalNamespace::NetworkSystemFusion>  netSys;

/// @brief Method Awake, addr 0x56d65bc, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::FusionInternalRPCs* New_ctor() ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)7)]
/// @brief Method RPC_SendPlayerSyncProp, addr 0x56d66d4, size 0x364, virtual false, abstract: false, final false
static inline void RPC_SendPlayerSyncProp(::Fusion::NetworkRunner*  runner, /* [RpcTarget] */ ::Fusion::PlayerRef  player, ::Fusion::PlayerRef  playerData, ::StringW  propKey, ::StringW  propValue) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void FusionInternalRPCs::RPC_SendPlayerSyncProp(Fusion.NetworkRunner,Fusion.PlayerRef,Fusion.PlayerRef,System.String,System.String)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_SendPlayerSyncProp@Invoker, addr 0x56d6a40, size 0xcc, virtual false, abstract: false, final false
static inline void RPC_SendPlayerSyncProp@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// @brief Method .ctor, addr 0x56d6a38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::NetworkSystemFusion> getStaticF_netSys() ;

static inline void setStaticF_netSys(::UnityW<::GlobalNamespace::NetworkSystemFusion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionInternalRPCs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionInternalRPCs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionInternalRPCs(FusionInternalRPCs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionInternalRPCs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionInternalRPCs(FusionInternalRPCs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1078};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FusionInternalRPCs) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
