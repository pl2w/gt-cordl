#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__OwnershipOption_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_ObservableSearch_def.hpp"
#include "Photon/Pun/zzzz__ViewSynchronization_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonView)
namespace GlobalNamespace {
struct PhotonView_CallbackTargetChange;
}
namespace GlobalNamespace {
struct PhotonView_ObservableSearch;
}
namespace Photon::Pun {
class IOnPhotonViewControllerChange;
}
namespace Photon::Pun {
class IOnPhotonViewOwnerChange;
}
namespace Photon::Pun {
class IOnPhotonViewPreNetDestroy;
}
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
struct RpcTarget;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonView;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonView*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonView*, "Photon.Pun", "PhotonView");
// [AddComponentMenu("Photon Networking/Photon View")]
// Dependencies Photon.Pun.IPhotonViewCallback, Photon.Pun.OwnershipOption, Photon.Pun.PhotonView::ObservableSearch, Photon.Pun.ViewSynchronization, System.Object, UnityEngine.MonoBehaviour
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonView
class CORDL_TYPE PhotonView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CallbackTargetChange = ::GlobalNamespace::PhotonView_CallbackTargetChange;

using ObservableSearch = ::GlobalNamespace::PhotonView_ObservableSearch;

 __declspec(property(get=get_AmController)) bool  AmController;

 __declspec(property(get=get_AmOwner, put=set_AmOwner)) bool  AmOwner;

/// @brief Field CallbackChangeQueue, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_CallbackChangeQueue, put=__cordl_internal_set_CallbackChangeQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>*  CallbackChangeQueue;

 __declspec(property(get=get_Controller, put=set_Controller)) ::Photon::Realtime::Player*  Controller;

 __declspec(property(get=get_ControllerActorNr, put=set_ControllerActorNr)) int32_t  ControllerActorNr;

 __declspec(property(get=get_CreatorActorNr, put=set_CreatorActorNr)) int32_t  CreatorActorNr;

/// @brief Field Group, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) uint8_t  Group;

 __declspec(property(get=get_InstantiationData, put=set_InstantiationData)) ::ArrayW<::System::Object*>  InstantiationData;

/// @brief Field InstantiationId, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_InstantiationId, put=__cordl_internal_set_InstantiationId)) int32_t  InstantiationId;

 __declspec(property(get=get_IsMine, put=set_IsMine)) bool  IsMine;

 __declspec(property(get=get_IsOwnerActive)) bool  IsOwnerActive;

 __declspec(property(get=get_IsRoomView)) bool  IsRoomView;

/// @brief [Obsolete("Renamed. Use IsRoomView instead")]
 __declspec(property(get=get_IsSceneView)) bool  IsSceneView;

/// @brief Field ObservedComponents, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObservedComponents, put=__cordl_internal_set_ObservedComponents)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  ObservedComponents;

/// @brief Field OnControllerChangeCallbacks, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnControllerChangeCallbacks, put=__cordl_internal_set_OnControllerChangeCallbacks)) ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*  OnControllerChangeCallbacks;

/// @brief Field OnOwnerChangeCallbacks, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOwnerChangeCallbacks, put=__cordl_internal_set_OnOwnerChangeCallbacks)) ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*  OnOwnerChangeCallbacks;

/// @brief Field OnPreNetDestroyCallbacks, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPreNetDestroyCallbacks, put=__cordl_internal_set_OnPreNetDestroyCallbacks)) ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*  OnPreNetDestroyCallbacks;

 __declspec(property(get=get_Owner, put=set_Owner)) ::Photon::Realtime::Player*  Owner;

 __declspec(property(get=get_OwnerActorNr, put=set_OwnerActorNr)) int32_t  OwnerActorNr;

/// @brief Field OwnershipTransfer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_OwnershipTransfer, put=__cordl_internal_set_OwnershipTransfer)) ::Photon::Pun::OwnershipOption  OwnershipTransfer;

 __declspec(property(get=get_Prefix, put=set_Prefix)) int32_t  Prefix;

/// @brief Field RpcMonoBehaviours, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RpcMonoBehaviours, put=__cordl_internal_set_RpcMonoBehaviours)) ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  RpcMonoBehaviours;

/// @brief Field Synchronization, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_Synchronization, put=__cordl_internal_set_Synchronization)) ::Photon::Pun::ViewSynchronization  Synchronization;

 __declspec(property(get=get_ViewID, put=set_ViewID)) int32_t  ViewID;

/// @brief Field <AmOwner>k__BackingField, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__AmOwner_k__BackingField, put=__cordl_internal_set__AmOwner_k__BackingField)) bool  _AmOwner_k__BackingField;

/// @brief Field <Controller>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Photon::Realtime::Player*  _Controller_k__BackingField;

/// @brief Field <CreatorActorNr>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__CreatorActorNr_k__BackingField, put=__cordl_internal_set__CreatorActorNr_k__BackingField)) int32_t  _CreatorActorNr_k__BackingField;

/// @brief Field <IsMine>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMine_k__BackingField, put=__cordl_internal_set__IsMine_k__BackingField)) bool  _IsMine_k__BackingField;

/// @brief Field <Owner>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Owner_k__BackingField, put=__cordl_internal_set__Owner_k__BackingField)) ::Photon::Realtime::Player*  _Owner_k__BackingField;

/// @brief Field controllerActorNr, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_controllerActorNr, put=__cordl_internal_set_controllerActorNr)) int32_t  controllerActorNr;

/// @brief Field instantiationDataField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_instantiationDataField, put=__cordl_internal_set_instantiationDataField)) ::ArrayW<::System::Object*>  instantiationDataField;

/// @brief Field isRuntimeInstantiated, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRuntimeInstantiated, put=__cordl_internal_set_isRuntimeInstantiated)) bool  isRuntimeInstantiated;

/// @brief Field lastOnSerializeDataReceived, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastOnSerializeDataReceived, put=__cordl_internal_set_lastOnSerializeDataReceived)) ::ArrayW<::System::Object*>  lastOnSerializeDataReceived;

/// @brief Field lastOnSerializeDataSent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastOnSerializeDataSent, put=__cordl_internal_set_lastOnSerializeDataSent)) ::System::Collections::Generic::List_1<::System::Object*>*  lastOnSerializeDataSent;

/// @brief Field mixedModeIsReliable, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_mixedModeIsReliable, put=__cordl_internal_set_mixedModeIsReliable)) bool  mixedModeIsReliable;

/// @brief Field observableSearch, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_observableSearch, put=__cordl_internal_set_observableSearch)) ::GlobalNamespace::PhotonView_ObservableSearch  observableSearch;

/// @brief Field ownerActorNr, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_ownerActorNr, put=__cordl_internal_set_ownerActorNr)) int32_t  ownerActorNr;

/// @brief Field prefixField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_prefixField, put=__cordl_internal_set_prefixField)) int32_t  prefixField;

/// @brief Field removedFromLocalViewList, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_removedFromLocalViewList, put=__cordl_internal_set_removedFromLocalViewList)) bool  removedFromLocalViewList;

/// @brief Field sceneViewId, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneViewId, put=__cordl_internal_set_sceneViewId)) int32_t  sceneViewId;

/// @brief Field syncValues, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncValues, put=__cordl_internal_set_syncValues)) ::System::Collections::Generic::List_1<::System::Object*>*  syncValues;

/// @brief Field viewIdField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_viewIdField, put=__cordl_internal_set_viewIdField)) int32_t  viewIdField;

/// @brief Method AddCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void AddCallback(::Photon::Pun::IPhotonViewCallback*  obj) ;

/// @brief Method AddCallbackTarget, addr 0xa72b1d4, size 0xa8, virtual false, abstract: false, final false
inline void AddCallbackTarget(::Photon::Pun::IPhotonViewCallback*  obj) ;

/// @brief Method Awake, addr 0xa72a7d8, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeComponent, addr 0xa72ac94, size 0x1d4, virtual false, abstract: false, final false
inline void DeserializeComponent(::UnityEngine::Component*  component, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method DeserializeView, addr 0xa728460, size 0x10c, virtual false, abstract: false, final false
inline void DeserializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Find, addr 0xa72b180, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonView> Find(int32_t  viewID) ;

/// @brief Method FindObservables, addr 0xa72a80c, size 0x154, virtual false, abstract: false, final false
inline void FindObservables(bool  force) ;

/// @brief Method Get, addr 0xa72b070, size 0x88, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonView> Get(::UnityEngine::Component*  component) ;

/// @brief Method Get, addr 0xa72b0f8, size 0x88, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonView> Get(::UnityEngine::GameObject*  gameObj) ;

static inline ::Photon::Pun::PhotonView* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa72a960, size 0x154, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPreNetDestroy, addr 0xa724db0, size 0x11c, virtual false, abstract: false, final false
inline void OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView) ;

/// @brief Method RPC, addr 0xa72ae68, size 0x80, virtual false, abstract: false, final false
inline void RPC(::StringW  methodName, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method RPC, addr 0xa72af6c, size 0x80, virtual false, abstract: false, final false
inline void RPC(::StringW  methodName, ::Photon::Realtime::Player*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method RebuildControllerCache, addr 0xa714b88, size 0xa8, virtual false, abstract: false, final false
inline void RebuildControllerCache(bool  ownerHasChanged) ;

/// @brief Method RefreshRpcMonoBehaviourCache, addr 0xa724530, size 0x58, virtual false, abstract: false, final false
inline void RefreshRpcMonoBehaviourCache() ;

/// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void RegisterCallback(T  obj, ::by_ref<::System::Collections::Generic::List_1<T>*>  list, bool  add) ;

/// @brief Method RemoveCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void RemoveCallback(::Photon::Pun::IPhotonViewCallback*  obj) ;

/// @brief Method RemoveCallbackTarget, addr 0xa72b2b8, size 0xa4, virtual false, abstract: false, final false
inline void RemoveCallbackTarget(::Photon::Pun::IPhotonViewCallback*  obj) ;

/// [Obsolete("Use RequestableOwnershipGuard")]
/// @brief Method RequestOwnership, addr 0xa72aab4, size 0x4, virtual false, abstract: false, final false
inline void RequestOwnership() ;

/// @brief Method ResetPhotonView, addr 0xa723270, size 0xc, virtual false, abstract: false, final false
inline void ResetPhotonView(bool  resetOwner) ;

/// @brief Method RpcSecure, addr 0xa72aee8, size 0x84, virtual false, abstract: false, final false
inline void RpcSecure(::StringW  methodName, ::Photon::Pun::RpcTarget  target, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method RpcSecure, addr 0xa72afec, size 0x84, virtual false, abstract: false, final false
inline void RpcSecure(::StringW  methodName, ::Photon::Realtime::Player*  targetPlayer, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method SerializeComponent, addr 0xa72aac0, size 0x1d4, virtual false, abstract: false, final false
inline void SerializeComponent(::UnityEngine::Component*  component, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SerializeView, addr 0xa727b84, size 0x120, virtual false, abstract: false, final false
inline void SerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ToString, addr 0xa72b35c, size 0x2b8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [Obsolete("Use RequestableOwnershipGuard")]
/// @brief Method TransferOwnership, addr 0xa72aab8, size 0x4, virtual false, abstract: false, final false
inline void TransferOwnership(::Photon::Realtime::Player*  newOwner) ;

/// [Obsolete("Use RequestableOwnershipGuard")]
/// @brief Method TransferOwnership, addr 0xa72aabc, size 0x4, virtual false, abstract: false, final false
inline void TransferOwnership(int32_t  newOwnerId) ;

/// @brief Method TryRegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Photon::Pun::IPhotonViewCallback*> && ::cordl_internals::reference_type_constraint<T>)
inline void TryRegisterCallback(::Photon::Pun::IPhotonViewCallback*  obj, ::by_ref<::System::Collections::Generic::List_1<T>*>  list, bool  add) ;

/// @brief Method UpdateCallbackLists, addr 0xa72a4c8, size 0x300, virtual false, abstract: false, final false
inline void UpdateCallbackLists() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>* const& __cordl_internal_get_CallbackChangeQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>*& __cordl_internal_get_CallbackChangeQueue() ;

constexpr uint8_t const& __cordl_internal_get_Group() const;

constexpr uint8_t& __cordl_internal_get_Group() ;

constexpr int32_t const& __cordl_internal_get_InstantiationId() const;

constexpr int32_t& __cordl_internal_get_InstantiationId() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* const& __cordl_internal_get_ObservedComponents() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& __cordl_internal_get_ObservedComponents() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>* const& __cordl_internal_get_OnControllerChangeCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*& __cordl_internal_get_OnControllerChangeCallbacks() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>* const& __cordl_internal_get_OnOwnerChangeCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*& __cordl_internal_get_OnOwnerChangeCallbacks() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>* const& __cordl_internal_get_OnPreNetDestroyCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*& __cordl_internal_get_OnPreNetDestroyCallbacks() ;

constexpr ::Photon::Pun::OwnershipOption const& __cordl_internal_get_OwnershipTransfer() const;

constexpr ::Photon::Pun::OwnershipOption& __cordl_internal_get_OwnershipTransfer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& __cordl_internal_get_RpcMonoBehaviours() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& __cordl_internal_get_RpcMonoBehaviours() ;

constexpr ::Photon::Pun::ViewSynchronization const& __cordl_internal_get_Synchronization() const;

constexpr ::Photon::Pun::ViewSynchronization& __cordl_internal_get_Synchronization() ;

constexpr bool const& __cordl_internal_get__AmOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__AmOwner_k__BackingField() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CreatorActorNr_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CreatorActorNr_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMine_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMine_k__BackingField() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get__Owner_k__BackingField() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get__Owner_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_controllerActorNr() const;

constexpr int32_t& __cordl_internal_get_controllerActorNr() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_instantiationDataField() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_instantiationDataField() ;

constexpr bool const& __cordl_internal_get_isRuntimeInstantiated() const;

constexpr bool& __cordl_internal_get_isRuntimeInstantiated() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_lastOnSerializeDataReceived() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_lastOnSerializeDataReceived() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_lastOnSerializeDataSent() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_lastOnSerializeDataSent() ;

constexpr bool const& __cordl_internal_get_mixedModeIsReliable() const;

constexpr bool& __cordl_internal_get_mixedModeIsReliable() ;

constexpr ::GlobalNamespace::PhotonView_ObservableSearch const& __cordl_internal_get_observableSearch() const;

constexpr ::GlobalNamespace::PhotonView_ObservableSearch& __cordl_internal_get_observableSearch() ;

constexpr int32_t const& __cordl_internal_get_ownerActorNr() const;

constexpr int32_t& __cordl_internal_get_ownerActorNr() ;

constexpr int32_t const& __cordl_internal_get_prefixField() const;

constexpr int32_t& __cordl_internal_get_prefixField() ;

constexpr bool const& __cordl_internal_get_removedFromLocalViewList() const;

constexpr bool& __cordl_internal_get_removedFromLocalViewList() ;

constexpr int32_t const& __cordl_internal_get_sceneViewId() const;

constexpr int32_t& __cordl_internal_get_sceneViewId() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_syncValues() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_syncValues() ;

constexpr int32_t const& __cordl_internal_get_viewIdField() const;

constexpr int32_t& __cordl_internal_get_viewIdField() ;

constexpr void __cordl_internal_set_CallbackChangeQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>*  value) ;

constexpr void __cordl_internal_set_Group(uint8_t  value) ;

constexpr void __cordl_internal_set_InstantiationId(int32_t  value) ;

constexpr void __cordl_internal_set_ObservedComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value) ;

constexpr void __cordl_internal_set_OnControllerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*  value) ;

constexpr void __cordl_internal_set_OnOwnerChangeCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*  value) ;

constexpr void __cordl_internal_set_OnPreNetDestroyCallbacks(::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*  value) ;

constexpr void __cordl_internal_set_OwnershipTransfer(::Photon::Pun::OwnershipOption  value) ;

constexpr void __cordl_internal_set_RpcMonoBehaviours(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value) ;

constexpr void __cordl_internal_set_Synchronization(::Photon::Pun::ViewSynchronization  value) ;

constexpr void __cordl_internal_set__AmOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set__CreatorActorNr_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsMine_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Owner_k__BackingField(::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set_controllerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_instantiationDataField(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set_isRuntimeInstantiated(bool  value) ;

constexpr void __cordl_internal_set_lastOnSerializeDataReceived(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set_lastOnSerializeDataSent(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_mixedModeIsReliable(bool  value) ;

constexpr void __cordl_internal_set_observableSearch(::GlobalNamespace::PhotonView_ObservableSearch  value) ;

constexpr void __cordl_internal_set_ownerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set_prefixField(int32_t  value) ;

constexpr void __cordl_internal_set_removedFromLocalViewList(bool  value) ;

constexpr void __cordl_internal_set_sceneViewId(int32_t  value) ;

constexpr void __cordl_internal_set_syncValues(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_viewIdField(int32_t  value) ;

/// @brief Method .ctor, addr 0xa72b614, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AmController, addr 0xa72a478, size 0x8, virtual false, abstract: false, final false
inline bool get_AmController() ;

/// [CompilerGenerated]
/// @brief Method get_AmOwner, addr 0xa72a4a0, size 0x8, virtual false, abstract: false, final false
inline bool get_AmOwner() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa72a480, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* get_Controller() ;

/// @brief Method get_ControllerActorNr, addr 0xa72a7c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ControllerActorNr() ;

/// [CompilerGenerated]
/// @brief Method get_CreatorActorNr, addr 0xa72a490, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CreatorActorNr() ;

/// @brief Method get_InstantiationData, addr 0xa72a428, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> get_InstantiationData() ;

/// [CompilerGenerated]
/// @brief Method get_IsMine, addr 0xa72a468, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMine() ;

/// @brief Method get_IsOwnerActive, addr 0xa72a448, size 0x20, virtual false, abstract: false, final false
inline bool get_IsOwnerActive() ;

/// @brief Method get_IsRoomView, addr 0xa71451c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRoomView() ;

/// @brief Method get_IsSceneView, addr 0xa72a438, size 0x10, virtual false, abstract: false, final false
inline bool get_IsSceneView() ;

/// [CompilerGenerated]
/// @brief Method get_Owner, addr 0xa72a4b0, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* get_Owner() ;

/// @brief Method get_OwnerActorNr, addr 0xa72a4c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OwnerActorNr() ;

/// @brief Method get_Prefix, addr 0xa7244a0, size 0x90, virtual false, abstract: false, final false
inline int32_t get_Prefix() ;

/// @brief Method get_ViewID, addr 0xa72a7d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ViewID() ;

/// [CompilerGenerated]
/// @brief Method set_AmOwner, addr 0xa72a4a8, size 0x8, virtual false, abstract: false, final false
inline void set_AmOwner(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa72a488, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Photon::Realtime::Player*  value) ;

/// @brief Method set_ControllerActorNr, addr 0xa71473c, size 0x240, virtual false, abstract: false, final false
inline void set_ControllerActorNr(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CreatorActorNr, addr 0xa72a498, size 0x8, virtual false, abstract: false, final false
inline void set_CreatorActorNr(int32_t  value) ;

/// @brief Method set_InstantiationData, addr 0xa72a430, size 0x8, virtual false, abstract: false, final false
inline void set_InstantiationData(::ArrayW<::System::Object*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMine, addr 0xa72a470, size 0x8, virtual false, abstract: false, final false
inline void set_IsMine(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Owner, addr 0xa72a4b8, size 0x8, virtual false, abstract: false, final false
inline void set_Owner(::Photon::Realtime::Player*  value) ;

/// @brief Method set_OwnerActorNr, addr 0xa71452c, size 0x210, virtual false, abstract: false, final false
inline void set_OwnerActorNr(int32_t  value) ;

/// @brief Method set_Prefix, addr 0xa72a420, size 0x8, virtual false, abstract: false, final false
inline void set_Prefix(int32_t  value) ;

/// @brief Method set_ViewID, addr 0xa71df24, size 0x14c, virtual false, abstract: false, final false
inline void set_ViewID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonView(PhotonView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonView(PhotonView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29711};

/// [FormerlySerializedAs("group")]
/// @brief Field Group, offset: 0x20, size: 0x1, def value: None
 uint8_t  ___Group;

/// [FormerlySerializedAs("prefixBackup")]
/// @brief Field prefixField, offset: 0x24, size: 0x4, def value: None
 int32_t  ___prefixField;

/// @brief Field instantiationDataField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___instantiationDataField;

/// @brief Field lastOnSerializeDataSent, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___lastOnSerializeDataSent;

/// @brief Field syncValues, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___syncValues;

/// @brief Field lastOnSerializeDataReceived, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___lastOnSerializeDataReceived;

/// [FormerlySerializedAs("synchronization")]
/// @brief Field Synchronization, offset: 0x48, size: 0x4, def value: None
 ::Photon::Pun::ViewSynchronization  ___Synchronization;

/// @brief Field mixedModeIsReliable, offset: 0x4c, size: 0x1, def value: None
 bool  ___mixedModeIsReliable;

/// [FormerlySerializedAs("ownershipTransfer")]
/// @brief Field OwnershipTransfer, offset: 0x50, size: 0x4, def value: None
 ::Photon::Pun::OwnershipOption  ___OwnershipTransfer;

/// @brief Field observableSearch, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::PhotonView_ObservableSearch  ___observableSearch;

/// @brief Field ObservedComponents, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  ___ObservedComponents;

/// @brief Field RpcMonoBehaviours, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  ___RpcMonoBehaviours;

/// [CompilerGenerated]
/// @brief Field <IsMine>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____IsMine_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ____Controller_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CreatorActorNr>k__BackingField, offset: 0x78, size: 0x4, def value: None
 int32_t  ____CreatorActorNr_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AmOwner>k__BackingField, offset: 0x7c, size: 0x1, def value: None
 bool  ____AmOwner_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Owner>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ____Owner_k__BackingField;

/// @brief Field ownerActorNr, offset: 0x88, size: 0x4, def value: None
 int32_t  ___ownerActorNr;

/// @brief Field controllerActorNr, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___controllerActorNr;

/// [SerializeField]
/// [FormerlySerializedAs("viewIdField")]
/// [HideInInspector]
/// @brief Field sceneViewId, offset: 0x90, size: 0x4, def value: None
 int32_t  ___sceneViewId;

/// @brief Field viewIdField, offset: 0x94, size: 0x4, def value: None
 int32_t  ___viewIdField;

/// [FormerlySerializedAs("instantiationId")]
/// @brief Field InstantiationId, offset: 0x98, size: 0x4, def value: None
 int32_t  ___InstantiationId;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field isRuntimeInstantiated, offset: 0x9c, size: 0x1, def value: None
 bool  ___isRuntimeInstantiated;

/// @brief Field removedFromLocalViewList, offset: 0x9d, size: 0x1, def value: None
 bool  ___removedFromLocalViewList;

/// @brief Field CallbackChangeQueue, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::PhotonView_CallbackTargetChange>*  ___CallbackChangeQueue;

/// @brief Field OnPreNetDestroyCallbacks, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewPreNetDestroy*>*  ___OnPreNetDestroyCallbacks;

/// @brief Field OnOwnerChangeCallbacks, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewOwnerChange*>*  ___OnOwnerChangeCallbacks;

/// @brief Field OnControllerChangeCallbacks, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::IOnPhotonViewControllerChange*>*  ___OnControllerChangeCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonView, ___Group) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___prefixField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___instantiationDataField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___lastOnSerializeDataSent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___syncValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___lastOnSerializeDataReceived) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___Synchronization) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___mixedModeIsReliable) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OwnershipTransfer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___observableSearch) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___ObservedComponents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___RpcMonoBehaviours) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____IsMine_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____Controller_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____CreatorActorNr_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____AmOwner_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ____Owner_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___ownerActorNr) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___controllerActorNr) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___sceneViewId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___viewIdField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___InstantiationId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___isRuntimeInstantiated) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___removedFromLocalViewList) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___CallbackChangeQueue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OnPreNetDestroyCallbacks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OnOwnerChangeCallbacks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonView, ___OnControllerChangeCallbacks) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonView) == 0xc0, "Size mismatch!");

} // namespace end def Photon::Pun
