#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EnvironmentProximityReactorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentProximityReactorManager)
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
struct EnvironmentProximityReactorManager_PendingProximityEvent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaTag::Cosmetics {
class CosmeticsProximityReactor;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactorManager___c__DisplayClass22_0;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactorManager___c__DisplayClass31_0;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactor;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactorManager;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactorManager___c__DisplayClass22_0;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactorManager___c__DisplayClass31_0;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*);
MARK_REF_T(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*);
MARK_REF_T(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*, "GorillaTag.Cosmetics", "EnvironmentProximityReactorManager");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0*, "GorillaTag.Cosmetics", "EnvironmentProximityReactorManager/<>c__DisplayClass22_0");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0*, "GorillaTag.Cosmetics", "EnvironmentProximityReactorManager/<>c__DisplayClass31_0");
// Dependencies NetworkSceneObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EnvironmentProximityReactorManager
class CORDL_TYPE EnvironmentProximityReactorManager : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
using PendingProximityEvent = ::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent;

using __c__DisplayClass22_0 = ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0;

using __c__DisplayClass31_0 = ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0;

/// @brief Field distanceBuffer, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceBuffer, put=__cordl_internal_set_distanceBuffer)) float_t  distanceBuffer;

/// @brief Field idSet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_idSet, put=__cordl_internal_set_idSet)) ::System::Collections::Generic::HashSet_1<int32_t>*  idSet;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>  instance;

/// @brief Field m_maxCachedEvents, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxCachedEvents, put=__cordl_internal_set_m_maxCachedEvents)) int32_t  m_maxCachedEvents;

/// @brief Field pendingEvents, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingEvents, put=__cordl_internal_set_pendingEvents)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>*  pendingEvents;

/// @brief Field reactors, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactors, put=__cordl_internal_set_reactors)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  reactors;

/// @brief Field registry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registry, put=setStaticF_registry)) ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  registry;

/// @brief Method ApplyProximityEventToReactor, addr 0x5d92f84, size 0x120, virtual false, abstract: false, final false
inline void ApplyProximityEventToReactor(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, int32_t  senderActorNumber) ;

/// @brief Method ApplyProximityStateShared, addr 0x5d937f0, size 0x3bc, virtual false, abstract: false, final false
inline void ApplyProximityStateShared(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Awake, addr 0x5d917e8, size 0x53c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastProximityState, addr 0x5d90c54, size 0x1e8, virtual false, abstract: false, final false
inline void BroadcastProximityState(int32_t  reactorId, int32_t  blockIndex, bool  isBelow) ;

/// @brief Method BroadcastProximityStateTo, addr 0x5d90ef4, size 0x23c, virtual false, abstract: false, final false
inline void BroadcastProximityStateTo(::GlobalNamespace::NetPlayer*  target, int32_t  reactorId, int32_t  blockIndex, bool  isBelow) ;

/// @brief Method CheckPlayerRateLimit, addr 0x5d92528, size 0x118, virtual false, abstract: false, final false
inline bool CheckPlayerRateLimit(::GlobalNamespace::NetPlayer*  sender) ;

static inline ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager* New_ctor() ;

/// @brief Method OnCosmeticRegistered, addr 0x5d92cac, size 0x2d8, virtual false, abstract: false, final false
inline void OnCosmeticRegistered(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic) ;

/// @brief Method OnDestroy, addr 0x5d91e54, size 0x3e0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLeftRoom, addr 0x5d92324, size 0xac, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerJoined, addr 0x5d923d0, size 0x158, virtual false, abstract: false, final false
inline void OnPlayerJoined(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeft, addr 0x5d92234, size 0xf0, virtual false, abstract: false, final false
inline void OnPlayerLeft(::GlobalNamespace::NetPlayer*  player) ;

/// [PunRPC]
/// @brief Method ProximityStateRPC, addr 0x5d93768, size 0x88, virtual false, abstract: false, final false
inline void ProximityStateRPC(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [Rpc]
/// @brief Method RPC_ProximityState, addr 0x5d93bac, size 0x2a0, virtual false, abstract: false, final false
static inline void RPC_ProximityState(::Fusion::NetworkRunner*  runner, int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void GorillaTag.Cosmetics.EnvironmentProximityReactorManager::RPC_ProximityState(Fusion.NetworkRunner,System.Int32,System.Int32,System.Boolean,Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_ProximityState@Invoker, addr 0x5d94020, size 0xe4, virtual false, abstract: false, final false
static inline void RPC_ProximityState@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// @brief Method Register, addr 0x5d8fbac, size 0x104, virtual false, abstract: false, final false
static inline void Register(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor) ;

/// @brief Method RegisterInstance, addr 0x5d91d24, size 0x130, virtual false, abstract: false, final false
inline void RegisterInstance(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor) ;

/// @brief Method SenderHasValidCosmetic, addr 0x5d92640, size 0x408, virtual false, abstract: false, final false
inline bool SenderHasValidCosmetic(int32_t  reactorId, int32_t  blockIndex, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SenderIsInRange, addr 0x5d92a48, size 0x264, virtual false, abstract: false, final false
inline bool SenderIsInRange(int32_t  reactorId, int32_t  blockIndex, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method TryCacheProximityEvent, addr 0x5d933a8, size 0x2e0, virtual false, abstract: false, final false
inline void TryCacheProximityEvent(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Unregister, addr 0x5d8fd0c, size 0x104, virtual false, abstract: false, final false
static inline void Unregister(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor) ;

/// @brief Method UnregisterInstance, addr 0x5d93690, size 0xd8, virtual false, abstract: false, final false
inline void UnregisterInstance(::GorillaTag::Cosmetics::EnvironmentProximityReactor*  reactor) ;

/// @brief Method Update, addr 0x5d930a4, size 0x304, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_distanceBuffer() const;

constexpr float_t& __cordl_internal_get_distanceBuffer() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_idSet() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_idSet() ;

constexpr int32_t const& __cordl_internal_get_m_maxCachedEvents() const;

constexpr int32_t& __cordl_internal_get_m_maxCachedEvents() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>* const& __cordl_internal_get_pendingEvents() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>*& __cordl_internal_get_pendingEvents() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>* const& __cordl_internal_get_reactors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*& __cordl_internal_get_reactors() ;

constexpr void __cordl_internal_set_distanceBuffer(float_t  value) ;

constexpr void __cordl_internal_set_idSet(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_maxCachedEvents(int32_t  value) ;

constexpr void __cordl_internal_set_pendingEvents(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>*  value) ;

constexpr void __cordl_internal_set_reactors(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  value) ;

/// @brief Method .ctor, addr 0x5d93e54, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>* getStaticF_registry() ;

/// @brief Method get_Instance, addr 0x5d91790, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager> get_Instance() ;

static inline void setStaticF_instance(::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactorManager>  value) ;

static inline void setStaticF_registry(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentProximityReactorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentProximityReactorManager(EnvironmentProximityReactorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentProximityReactorManager(EnvironmentProximityReactorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4923};

/// @brief Field cosmeticSyncTimeout offset 0xffffffff size 0x4
static constexpr float_t  cosmeticSyncTimeout{static_cast<float_t>(10.0f)};

/// [SerializeField]
/// @brief Field reactors, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Cosmetics::EnvironmentProximityReactor>>*  ___reactors;

/// @brief Field idSet, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___idSet;

/// @brief Field pendingEvents, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent>*>*  ___pendingEvents;

/// @brief Field distanceBuffer, offset: 0x68, size: 0x4, def value: None
 float_t  ___distanceBuffer;

/// [SerializeField]
/// @brief Field m_maxCachedEvents, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___m_maxCachedEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager, ___reactors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager, ___idSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager, ___pendingEvents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager, ___distanceBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager, ___m_maxCachedEvents) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager) == 0x70, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EnvironmentProximityReactorManager/<>c__DisplayClass31_0
class CORDL_TYPE EnvironmentProximityReactorManager___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field blockIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockIndex, put=__cordl_internal_set_blockIndex)) int32_t  blockIndex;

/// @brief Field reactorId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_reactorId, put=__cordl_internal_set_reactorId)) int32_t  reactorId;

static inline ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <ApplyProximityStateShared>b__0, addr 0x5d94130, size 0x2c, virtual false, abstract: false, final false
inline bool _ApplyProximityStateShared_b__0(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent  e) ;

constexpr int32_t const& __cordl_internal_get_blockIndex() const;

constexpr int32_t& __cordl_internal_get_blockIndex() ;

constexpr int32_t const& __cordl_internal_get_reactorId() const;

constexpr int32_t& __cordl_internal_get_reactorId() ;

constexpr void __cordl_internal_set_blockIndex(int32_t  value) ;

constexpr void __cordl_internal_set_reactorId(int32_t  value) ;

/// @brief Method .ctor, addr 0x5d93e4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentProximityReactorManager___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactorManager___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentProximityReactorManager___c__DisplayClass31_0(EnvironmentProximityReactorManager___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactorManager___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentProximityReactorManager___c__DisplayClass31_0(EnvironmentProximityReactorManager___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4922};

/// @brief Field reactorId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___reactorId;

/// @brief Field blockIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___blockIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0, ___reactorId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0, ___blockIndex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass31_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EnvironmentProximityReactorManager/<>c__DisplayClass22_0
class CORDL_TYPE EnvironmentProximityReactorManager___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field blockIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockIndex, put=__cordl_internal_set_blockIndex)) int32_t  blockIndex;

/// @brief Field reactorId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_reactorId, put=__cordl_internal_set_reactorId)) int32_t  reactorId;

static inline ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <TryCacheProximityEvent>b__0, addr 0x5d94104, size 0x2c, virtual false, abstract: false, final false
inline bool _TryCacheProximityEvent_b__0(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent  e) ;

constexpr int32_t const& __cordl_internal_get_blockIndex() const;

constexpr int32_t& __cordl_internal_get_blockIndex() ;

constexpr int32_t const& __cordl_internal_get_reactorId() const;

constexpr int32_t& __cordl_internal_get_reactorId() ;

constexpr void __cordl_internal_set_blockIndex(int32_t  value) ;

constexpr void __cordl_internal_set_reactorId(int32_t  value) ;

/// @brief Method .ctor, addr 0x5d93688, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentProximityReactorManager___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactorManager___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentProximityReactorManager___c__DisplayClass22_0(EnvironmentProximityReactorManager___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactorManager___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentProximityReactorManager___c__DisplayClass22_0(EnvironmentProximityReactorManager___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4921};

/// @brief Field reactorId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___reactorId;

/// @brief Field blockIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___blockIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0, ___reactorId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0, ___blockIndex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EnvironmentProximityReactorManager___c__DisplayClass22_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
