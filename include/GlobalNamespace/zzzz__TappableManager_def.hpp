#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TappableManager)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class Tappable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TappableManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TappableManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableManager*, "", "TappableManager");
// Dependencies NetworkSceneObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableManager
class CORDL_TYPE TappableManager : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
/// @brief Field gManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gManager, put=setStaticF_gManager)) ::UnityW<::GlobalNamespace::TappableManager>  gManager;

/// @brief Field gRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gRegistry, put=setStaticF_gRegistry)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>*  gRegistry;

/// @brief Field idSet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_idSet, put=__cordl_internal_set_idSet)) ::System::Collections::Generic::HashSet_1<int32_t>*  idSet;

/// @brief Field tappables, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tappables, put=__cordl_internal_set_tappables)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>*  tappables;

/// @brief Method Awake, addr 0x595fb78, size 0x31c, virtual false, abstract: false, final false
inline void Awake() ;

/// [Conditional("QATESTING")]
/// @brief Method DebugTestTap, addr 0x5960124, size 0x190, virtual false, abstract: false, final false
inline void DebugTestTap() ;

static inline ::GlobalNamespace::TappableManager* New_ctor() ;

/// [Rpc]
/// @brief Method RPC_SendOnGrab, addr 0x59608d4, size 0x228, virtual false, abstract: false, final false
static inline void RPC_SendOnGrab(::Fusion::NetworkRunner*  runner, int32_t  key, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void TappableManager::RPC_SendOnGrab(Fusion.NetworkRunner,System.Int32,Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_SendOnGrab@Invoker, addr 0x5961130, size 0xcc, virtual false, abstract: false, final false
static inline void RPC_SendOnGrab@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// [Rpc]
/// @brief Method RPC_SendOnRelease, addr 0x5960cc0, size 0x228, virtual false, abstract: false, final false
static inline void RPC_SendOnRelease(::Fusion::NetworkRunner*  runner, int32_t  key, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void TappableManager::RPC_SendOnRelease(Fusion.NetworkRunner,System.Int32,Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_SendOnRelease@Invoker, addr 0x59611fc, size 0xcc, virtual false, abstract: false, final false
static inline void RPC_SendOnRelease@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// [Rpc]
/// @brief Method RPC_SendOnTap, addr 0x59604cc, size 0x23c, virtual false, abstract: false, final false
static inline void RPC_SendOnTap(::Fusion::NetworkRunner*  runner, int32_t  key, float_t  tapStrength, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void TappableManager::RPC_SendOnTap(Fusion.NetworkRunner,System.Int32,System.Single,Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_SendOnTap@Invoker, addr 0x5961054, size 0xdc, virtual false, abstract: false, final false
static inline void RPC_SendOnTap@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// @brief Method Register, addr 0x595f694, size 0x104, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::Tappable*  t) ;

/// @brief Method RegisterInstance, addr 0x595fe94, size 0x1a8, virtual false, abstract: false, final false
inline void RegisterInstance(::GlobalNamespace::Tappable*  t) ;

/// [PunRPC]
/// @brief Method SendOnGrabRPC, addr 0x5960708, size 0x70, virtual false, abstract: false, final false
inline void SendOnGrabRPC(int32_t  key, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendOnGrabShared, addr 0x5960778, size 0x15c, virtual false, abstract: false, final false
inline void SendOnGrabShared(int32_t  key, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method SendOnReleaseRPC, addr 0x5960afc, size 0x70, virtual false, abstract: false, final false
inline void SendOnReleaseRPC(int32_t  key, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendOnReleaseShared, addr 0x5960b6c, size 0x154, virtual false, abstract: false, final false
inline void SendOnReleaseShared(int32_t  key, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method SendOnTapRPC, addr 0x59602b4, size 0x80, virtual false, abstract: false, final false
inline void SendOnTapRPC(int32_t  key, float_t  tapStrength, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendOnTapShared, addr 0x5960334, size 0x198, virtual false, abstract: false, final false
inline void SendOnTapShared(int32_t  key, float_t  tapStrength, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Unregister, addr 0x595f7ec, size 0x104, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::Tappable*  t) ;

/// @brief Method UnregisterInstance, addr 0x596003c, size 0xe8, virtual false, abstract: false, final false
inline void UnregisterInstance(::GlobalNamespace::Tappable*  t) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_idSet() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_idSet() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>* const& __cordl_internal_get_tappables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>*& __cordl_internal_get_tappables() ;

constexpr void __cordl_internal_set_idSet(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_tappables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>*  value) ;

/// @brief Method .ctor, addr 0x5960ee8, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::TappableManager> getStaticF_gManager() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>* getStaticF_gRegistry() ;

static inline void setStaticF_gManager(::UnityW<::GlobalNamespace::TappableManager>  value) ;

static inline void setStaticF_gRegistry(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableManager(TappableManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableManager(TappableManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2356};

/// [SerializeField]
/// @brief Field tappables, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>*  ___tappables;

/// @brief Field idSet, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___idSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableManager, ___tappables) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableManager, ___idSet) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableManager) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
