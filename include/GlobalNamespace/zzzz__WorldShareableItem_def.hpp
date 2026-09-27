#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldShareableItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WorldShareableItem)
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace GlobalNamespace {
struct TransferrableObject_ItemStates;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class TransformViewTeleportSerializer;
}
namespace GlobalNamespace {
struct WorldShareableItem_CachedData;
}
namespace GlobalNamespace {
class WorldShareableItem_Delegate;
}
namespace GlobalNamespace {
class WorldShareableItem_OnOwnerChangeDelegate;
}
namespace GlobalNamespace {
class WorldTargetItem;
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
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WorldShareableItem;
}
namespace GlobalNamespace {
class WorldShareableItem_Delegate;
}
namespace GlobalNamespace {
class WorldShareableItem_OnOwnerChangeDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WorldShareableItem*);
MARK_REF_T(::GlobalNamespace::WorldShareableItem_Delegate*);
MARK_REF_T(::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldShareableItem*, "", "WorldShareableItem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldShareableItem_Delegate*, "", "WorldShareableItem/Delegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*, "", "WorldShareableItem/OnOwnerChangeDelegate");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent, TransferrableObject::ItemStates, TransferrableObject::PositionState
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldShareableItem
class CORDL_TYPE WorldShareableItem : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using CachedData = ::GlobalNamespace::WorldShareableItem_CachedData;

using Delegate = ::GlobalNamespace::WorldShareableItem_Delegate;

using OnOwnerChangeDelegate = ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate;

/// @brief [DevInspectorShow]
 __declspec(property(get=get_EnableRemoteSync, put=set_EnableRemoteSync)) bool  EnableRemoteSync;

/// @brief Field _target, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::GlobalNamespace::WorldTargetItem*  _target;

/// @brief Field <transferableObjectItemStateNetworked>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__transferableObjectItemStateNetworked_k__BackingField, put=__cordl_internal_set__transferableObjectItemStateNetworked_k__BackingField)) ::GlobalNamespace::TransferrableObject_ItemStates  _transferableObjectItemStateNetworked_k__BackingField;

/// @brief Field <transferableObjectItemState>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__transferableObjectItemState_k__BackingField, put=__cordl_internal_set__transferableObjectItemState_k__BackingField)) ::GlobalNamespace::TransferrableObject_ItemStates  _transferableObjectItemState_k__BackingField;

/// @brief Field <transferableObjectStateNetworked>k__BackingField, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__transferableObjectStateNetworked_k__BackingField, put=__cordl_internal_set__transferableObjectStateNetworked_k__BackingField)) ::GlobalNamespace::TransferrableObject_PositionState  _transferableObjectStateNetworked_k__BackingField;

/// @brief Field <transferableObjectState>k__BackingField, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__transferableObjectState_k__BackingField, put=__cordl_internal_set__transferableObjectState_k__BackingField)) ::GlobalNamespace::TransferrableObject_PositionState  _transferableObjectState_k__BackingField;

/// @brief Field cachedDatas, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedDatas, put=__cordl_internal_set_cachedDatas)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>*  cachedDatas;

/// @brief Field enableRemoteSync, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableRemoteSync, put=__cordl_internal_set_enableRemoteSync)) bool  enableRemoteSync;

/// @brief Field guard, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_guard, put=__cordl_internal_set_guard)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  guard;

/// @brief Field onOwnerChangeCb, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOwnerChangeCb, put=__cordl_internal_set_onOwnerChangeCb)) ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*  onOwnerChangeCb;

/// @brief Field rpcCallBack, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rpcCallBack, put=__cordl_internal_set_rpcCallBack)) ::System::Action*  rpcCallBack;

/// @brief [DevInspectorShow]
 __declspec(property(get=get_target, put=set_target)) ::GlobalNamespace::WorldTargetItem*  target;

/// @brief Field teleportSerializer, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportSerializer, put=__cordl_internal_set_teleportSerializer)) ::UnityW<::GlobalNamespace::TransformViewTeleportSerializer>  teleportSerializer;

 __declspec(property(get=get_transferableObjectItemState, put=set_transferableObjectItemState)) ::GlobalNamespace::TransferrableObject_ItemStates  transferableObjectItemState;

 __declspec(property(get=get_transferableObjectItemStateNetworked, put=set_transferableObjectItemStateNetworked)) ::GlobalNamespace::TransferrableObject_ItemStates  transferableObjectItemStateNetworked;

/// @brief [DevInspectorShow]
 __declspec(property(get=get_transferableObjectState, put=set_transferableObjectState)) ::GlobalNamespace::TransferrableObject_PositionState  transferableObjectState;

 __declspec(property(get=get_transferableObjectStateNetworked, put=set_transferableObjectStateNetworked)) ::GlobalNamespace::TransferrableObject_PositionState  transferableObjectStateNetworked;

/// @brief Field validShareable, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_validShareable, put=__cordl_internal_set_validShareable)) bool  validShareable;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Method Awake, addr 0x573e814, size 0xf0, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x573ff20, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x573ff28, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method Invalidate, addr 0x573f6e8, size 0x2c, virtual false, abstract: false, final false
inline void Invalidate() ;

/// @brief Method IsTargetValid, addr 0x573f928, size 0x10, virtual false, abstract: false, final false
inline bool IsTargetValid() ;

static inline ::GlobalNamespace::WorldShareableItem* New_ctor() ;

/// @brief Method OnDestroy, addr 0x573ef4c, size 0xf4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x573ec38, size 0x1dc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x573e904, size 0x1a8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x573fe5c, size 0x8, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x573fe64, size 0x4, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x573fe70, size 0x4, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnOwnerChange, addr 0x573f744, size 0xd8, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method OnOwnershipRequest, addr 0x573fe68, size 0x8, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x573f9b4, size 0xa4, virtual true, abstract: false, final true
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnPhotonInstantiate, addr 0x573f714, size 0x30, virtual true, abstract: false, final false
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPCWorldShareable, addr 0x573fd58, size 0x104, virtual false, abstract: false, final false
inline void RPCWorldShareable(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataFusion, addr 0x573fa64, size 0xc, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x573fb20, size 0x238, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetViews, addr 0x573f178, size 0xd8, virtual false, abstract: false, final false
inline void ResetViews() ;

/// @brief Method SetWillTeleport, addr 0x573fe74, size 0x18, virtual false, abstract: false, final false
inline void SetWillTeleport() ;

/// @brief Method SetupSceneObjectOnNetwork, addr 0x573f994, size 0x20, virtual false, abstract: false, final false
inline void SetupSceneObjectOnNetwork(::GlobalNamespace::NetPlayer*  owner) ;

/// @brief Method SetupSharableObject, addr 0x573f250, size 0x498, virtual false, abstract: false, final false
inline void SetupSharableObject(int32_t  itemIDx, ::GlobalNamespace::NetPlayer*  owner, ::UnityEngine::Transform*  targetXform) ;

/// @brief Method SetupSharableViewIDs, addr 0x573f040, size 0x138, virtual false, abstract: false, final false
inline void SetupSharableViewIDs(::GlobalNamespace::NetPlayer*  player, int32_t  slotID) ;

/// @brief Method SyncToSceneObject, addr 0x573f938, size 0x5c, virtual false, abstract: false, final false
inline void SyncToSceneObject(::GlobalNamespace::TransferrableObject*  transferrableObject) ;

/// @brief Method TriggeredUpdate, addr 0x573f82c, size 0xfc, virtual false, abstract: false, final false
inline void TriggeredUpdate() ;

/// @brief Method WriteDataFusion, addr 0x573fa58, size 0xc, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x573fa70, size 0xb0, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::WorldTargetItem* const& __cordl_internal_get__target() const;

constexpr ::GlobalNamespace::WorldTargetItem*& __cordl_internal_get__target() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get__transferableObjectItemStateNetworked_k__BackingField() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get__transferableObjectItemStateNetworked_k__BackingField() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get__transferableObjectItemState_k__BackingField() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get__transferableObjectItemState_k__BackingField() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get__transferableObjectStateNetworked_k__BackingField() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get__transferableObjectStateNetworked_k__BackingField() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get__transferableObjectState_k__BackingField() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get__transferableObjectState_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>* const& __cordl_internal_get_cachedDatas() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>*& __cordl_internal_get_cachedDatas() ;

constexpr bool const& __cordl_internal_get_enableRemoteSync() const;

constexpr bool& __cordl_internal_get_enableRemoteSync() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_guard() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_guard() ;

constexpr ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate* const& __cordl_internal_get_onOwnerChangeCb() const;

constexpr ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*& __cordl_internal_get_onOwnerChangeCb() ;

constexpr ::System::Action* const& __cordl_internal_get_rpcCallBack() const;

constexpr ::System::Action*& __cordl_internal_get_rpcCallBack() ;

constexpr ::UnityW<::GlobalNamespace::TransformViewTeleportSerializer> const& __cordl_internal_get_teleportSerializer() const;

constexpr ::UnityW<::GlobalNamespace::TransformViewTeleportSerializer>& __cordl_internal_get_teleportSerializer() ;

constexpr bool const& __cordl_internal_get_validShareable() const;

constexpr bool& __cordl_internal_get_validShareable() ;

constexpr void __cordl_internal_set__target(::GlobalNamespace::WorldTargetItem*  value) ;

constexpr void __cordl_internal_set__transferableObjectItemStateNetworked_k__BackingField(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set__transferableObjectItemState_k__BackingField(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set__transferableObjectStateNetworked_k__BackingField(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set__transferableObjectState_k__BackingField(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_cachedDatas(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>*  value) ;

constexpr void __cordl_internal_set_enableRemoteSync(bool  value) ;

constexpr void __cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_onOwnerChangeCb(::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*  value) ;

constexpr void __cordl_internal_set_rpcCallBack(::System::Action*  value) ;

constexpr void __cordl_internal_set_teleportSerializer(::UnityW<::GlobalNamespace::TransformViewTeleportSerializer>  value) ;

constexpr void __cordl_internal_set_validShareable(bool  value) ;

/// @brief Method .ctor, addr 0x573fe8c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EnableRemoteSync, addr 0x573f81c, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableRemoteSync() ;

/// @brief Method get_target, addr 0x573e804, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::WorldTargetItem* get_target() ;

/// [CompilerGenerated]
/// @brief Method get_transferableObjectItemState, addr 0x573e7d4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_ItemStates get_transferableObjectItemState() ;

/// [CompilerGenerated]
/// @brief Method get_transferableObjectItemStateNetworked, addr 0x573e7f4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_ItemStates get_transferableObjectItemStateNetworked() ;

/// [CompilerGenerated]
/// @brief Method get_transferableObjectState, addr 0x573e7c4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_PositionState get_transferableObjectState() ;

/// [CompilerGenerated]
/// @brief Method get_transferableObjectStateNetworked, addr 0x573e7e4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TransferrableObject_PositionState get_transferableObjectStateNetworked() ;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Method set_EnableRemoteSync, addr 0x573f824, size 0x8, virtual false, abstract: false, final false
inline void set_EnableRemoteSync(bool  value) ;

/// @brief Method set_target, addr 0x573e80c, size 0x8, virtual false, abstract: false, final false
inline void set_target(::GlobalNamespace::WorldTargetItem*  value) ;

/// [CompilerGenerated]
/// @brief Method set_transferableObjectItemState, addr 0x573e7dc, size 0x8, virtual false, abstract: false, final false
inline void set_transferableObjectItemState(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

/// [CompilerGenerated]
/// @brief Method set_transferableObjectItemStateNetworked, addr 0x573e7fc, size 0x8, virtual false, abstract: false, final false
inline void set_transferableObjectItemStateNetworked(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

/// [CompilerGenerated]
/// @brief Method set_transferableObjectState, addr 0x573e7cc, size 0x8, virtual false, abstract: false, final false
inline void set_transferableObjectState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

/// [CompilerGenerated]
/// @brief Method set_transferableObjectStateNetworked, addr 0x573e7ec, size 0x8, virtual false, abstract: false, final false
inline void set_transferableObjectStateNetworked(::GlobalNamespace::TransferrableObject_PositionState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldShareableItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldShareableItem(WorldShareableItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldShareableItem(WorldShareableItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1242};

/// [CompilerGenerated]
/// @brief Field <transferableObjectState>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ____transferableObjectState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <transferableObjectItemState>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ____transferableObjectItemState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <transferableObjectStateNetworked>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ____transferableObjectStateNetworked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <transferableObjectItemStateNetworked>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ____transferableObjectItemStateNetworked_k__BackingField;

/// @brief Field validShareable, offset: 0xac, size: 0x1, def value: None
 bool  ___validShareable;

/// @brief Field guard, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___guard;

/// @brief Field teleportSerializer, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransformViewTeleportSerializer>  ___teleportSerializer;

/// [DevInspectorShow]
/// [CanBeNull]
/// @brief Field _target, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::WorldTargetItem*  ____target;

/// @brief Field onOwnerChangeCb, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate*  ___onOwnerChangeCb;

/// @brief Field rpcCallBack, offset: 0xd0, size: 0x8, def value: None
 ::System::Action*  ___rpcCallBack;

/// @brief Field enableRemoteSync, offset: 0xd8, size: 0x1, def value: None
 bool  ___enableRemoteSync;

/// @brief Field cachedDatas, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::WorldShareableItem_CachedData>*  ___cachedDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ____transferableObjectState_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ____transferableObjectItemState_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ____transferableObjectStateNetworked_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ____transferableObjectItemStateNetworked_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___validShareable) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___guard) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___teleportSerializer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ____target) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___onOwnerChangeCb) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___rpcCallBack) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___enableRemoteSync) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem, ___cachedDatas) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldShareableItem) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldShareableItem/OnOwnerChangeDelegate
class CORDL_TYPE WorldShareableItem_OnOwnerChangeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5740128, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5740150, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5740114, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner) ;

static inline ::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5740008, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldShareableItem_OnOwnerChangeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItem_OnOwnerChangeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldShareableItem_OnOwnerChangeDelegate(WorldShareableItem_OnOwnerChangeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItem_OnOwnerChangeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldShareableItem_OnOwnerChangeDelegate(WorldShareableItem_OnOwnerChangeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WorldShareableItem_OnOwnerChangeDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldShareableItem/Delegate
class CORDL_TYPE WorldShareableItem_Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x573ffe0, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x573fffc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x573ffcc, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::WorldShareableItem_Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x573ff30, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldShareableItem_Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItem_Delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldShareableItem_Delegate(WorldShareableItem_Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItem_Delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldShareableItem_Delegate(WorldShareableItem_Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WorldShareableItem_Delegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
