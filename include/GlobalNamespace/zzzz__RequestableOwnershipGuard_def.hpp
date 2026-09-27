#pragma once
// IWYU pragma private; include "GlobalNamespace/RequestableOwnershipGuard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__NetworkingState_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestableOwnershipGuard)
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
struct NetworkingState;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard__RequestTimeout_d__40;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard___c;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard___c__DisplayClass37_0;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Realtime {
class Player;
}
namespace Sirenix::OdinInspector {
class ISelfValidator;
}
namespace Sirenix::OdinInspector {
class SelfValidationResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard__RequestTimeout_d__40;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard___c;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard___c__DisplayClass37_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RequestableOwnershipGuard*);
MARK_REF_T(::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*);
MARK_REF_T(::GlobalNamespace::RequestableOwnershipGuard___c*);
MARK_REF_T(::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestableOwnershipGuard*, "", "RequestableOwnershipGuard");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*, "", "RequestableOwnershipGuard/<RequestTimeout>d__40");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestableOwnershipGuard___c*, "", "RequestableOwnershipGuard/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*, "", "RequestableOwnershipGuard/<>c__DisplayClass37_0");
// [RequireComponent(typeof(NetworkView))]
// Dependencies NetworkView, NetworkingState, Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestableOwnershipGuard
class CORDL_TYPE RequestableOwnershipGuard : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using _RequestTimeout_d__40 = ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40;

using __c = ::GlobalNamespace::RequestableOwnershipGuard___c;

using __c__DisplayClass37_0 = ::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0;

 __declspec(property(get=get_EdCurrentState)) ::GlobalNamespace::NetworkingState  EdCurrentState;

/// @brief Field actualOwner, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_actualOwner, put=__cordl_internal_set_actualOwner)) ::GlobalNamespace::NetPlayer*  actualOwner;

/// @brief Field attemptMasterAssistedTakeoverOnDeny, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_attemptMasterAssistedTakeoverOnDeny, put=__cordl_internal_set_attemptMasterAssistedTakeoverOnDeny)) bool  attemptMasterAssistedTakeoverOnDeny;

/// @brief Field autoRegister, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoRegister, put=__cordl_internal_set_autoRegister)) bool  autoRegister;

/// @brief Field callbacksList, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacksList, put=__cordl_internal_set_callbacksList)) ::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  callbacksList;

/// @brief Field creator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_creator, put=__cordl_internal_set_creator)) ::GlobalNamespace::NetPlayer*  creator;

/// @brief Field currentMasterClient, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMasterClient, put=__cordl_internal_set_currentMasterClient)) ::GlobalNamespace::NetPlayer*  currentMasterClient;

/// @brief Field currentOwner, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentOwner, put=__cordl_internal_set_currentOwner)) ::GlobalNamespace::NetPlayer*  currentOwner;

/// @brief Field currentState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::NetworkingState  currentState;

/// @brief Field fallbackOwner, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallbackOwner, put=__cordl_internal_set_fallbackOwner)) ::GlobalNamespace::NetPlayer*  fallbackOwner;

/// @brief Field giveCreatorAbsoluteAuthority, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_giveCreatorAbsoluteAuthority, put=__cordl_internal_set_giveCreatorAbsoluteAuthority)) bool  giveCreatorAbsoluteAuthority;

 __declspec(property(get=get_isMine)) bool  isMine;

/// @brief [DevInspectorShow]
 __declspec(property(get=get_isTrulyMine)) bool  isTrulyMine;

 __declspec(property(get=get_netView)) ::UnityW<::GlobalNamespace::NetworkView>  netView;

/// @brief Field netViews, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_netViews, put=__cordl_internal_set_netViews)) ::ArrayW<::UnityW<::GlobalNamespace::NetworkView>>  netViews;

/// @brief Field ownershipDenied, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownershipDenied, put=__cordl_internal_set_ownershipDenied)) ::System::Action*  ownershipDenied;

/// @brief Field ownershipRequestAccepted, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownershipRequestAccepted, put=__cordl_internal_set_ownershipRequestAccepted)) ::System::Action*  ownershipRequestAccepted;

/// @brief Field ownershipRequestNonce, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownershipRequestNonce, put=__cordl_internal_set_ownershipRequestNonce)) ::StringW  ownershipRequestNonce;

/// @brief Convert operator to "::Sirenix::OdinInspector::ISelfValidator"
constexpr operator  ::Sirenix::OdinInspector::ISelfValidator*() noexcept;

/// @brief Method AddCallbackTarget, addr 0x56ac8b8, size 0x160, virtual false, abstract: false, final false
inline void AddCallbackTarget(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callbackObject) ;

/// @brief Method BindNetworkViews, addr 0x56a8c10, size 0x58, virtual false, abstract: false, final false
inline void BindNetworkViews() ;

/// @brief Method GetAuthoritativePlayer, addr 0x56ab8e0, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetAuthoritativePlayer() ;

/// @brief Method JoinedRoom, addr 0x56a9c04, size 0x118, virtual false, abstract: false, final false
inline void JoinedRoom() ;

/// @brief Method MasterClientSwitch, addr 0x56aa2e0, size 0x158, virtual false, abstract: false, final false
inline void MasterClientSwitch(::GlobalNamespace::NetPlayer*  newMaster) ;

static inline ::GlobalNamespace::RequestableOwnershipGuard* New_ctor() ;

/// @brief Method OnDisable, addr 0x56a8c68, size 0x2e4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56a8f4c, size 0x538, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPreLeavingRoom, addr 0x56a99fc, size 0x208, virtual true, abstract: false, final false
inline void OnPreLeavingRoom() ;

/// [PunRPC]
/// @brief Method OwnershipRequestDenied, addr 0x56aba64, size 0x2e4, virtual false, abstract: false, final false
inline void OwnershipRequestDenied(::StringW  nonce, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method OwnershipRequested, addr 0x56ab0b4, size 0x468, virtual false, abstract: false, final false
inline void OwnershipRequested(::StringW  nonce, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerEnteredRoom, addr 0x56a9770, size 0x28c, virtual false, abstract: false, final false
inline void PlayerEnteredRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlayerHasAuthority, addr 0x56a9660, size 0x1c, virtual false, abstract: false, final false
inline bool PlayerHasAuthority(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlayerLeftRoom, addr 0x56a9d1c, size 0x5c4, virtual false, abstract: false, final false
inline void PlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method RemoveCallbackTarget, addr 0x56aca18, size 0x110, virtual false, abstract: false, final false
inline void RemoveCallbackTarget(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callbackObject) ;

/// [PunRPC]
/// @brief Method RequestCurrentOwnerFromAuthorityRPC, addr 0x56aa438, size 0x2ac, virtual false, abstract: false, final false
inline void RequestCurrentOwnerFromAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestOwnership, addr 0x56abddc, size 0x30c, virtual false, abstract: false, final false
inline void RequestOwnership(::System::Action*  onRequestSuccess, ::System::Action*  onRequestFailed) ;

/// @brief Method RequestOwnershipImmediately, addr 0x56ac0e8, size 0x494, virtual false, abstract: false, final false
inline void RequestOwnershipImmediately(::System::Action*  onRequestFailed) ;

/// @brief Method RequestOwnershipImmediatelyWithGuaranteedAuthority, addr 0x56ac57c, size 0x33c, virtual false, abstract: false, final false
inline void RequestOwnershipImmediatelyWithGuaranteedAuthority() ;

/// @brief Method RequestTheCurrentOwnerFromAuthority, addr 0x56a967c, size 0xf4, virtual false, abstract: false, final false
inline void RequestTheCurrentOwnerFromAuthority() ;

/// [IteratorStateMachine(typeof(RequestableOwnershipGuard::<RequestTimeout>d__40))]
/// @brief Method RequestTimeout, addr 0x56abd48, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RequestTimeout() ;

/// @brief Method SetCreator, addr 0x56acb28, size 0x8, virtual false, abstract: false, final false
inline void SetCreator(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetCurrentOwner, addr 0x56ab964, size 0xf8, virtual false, abstract: false, final false
inline void SetCurrentOwner(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetOwnership, addr 0x56a9484, size 0x1dc, virtual false, abstract: false, final false
inline void SetOwnership(::GlobalNamespace::NetPlayer*  player, bool  isLocalOnly, bool  dontPropigate) ;

/// @brief Method SetOwnershipFromMasterClient, addr 0x56aac78, size 0x43c, virtual false, abstract: false, final false
inline void SetOwnershipFromMasterClient(/* [CanBeNull] */ ::GlobalNamespace::NetPlayer*  nextMaster, ::GlobalNamespace::NetPlayer*  sender) ;

/// [PunRPC]
/// @brief Method SetOwnershipFromMasterClient, addr 0x56aab50, size 0x128, virtual false, abstract: false, final false
inline void SetOwnershipFromMasterClient(/* [CanBeNull] */ ::Photon::Realtime::Player*  nextMaster, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetViewToRequest, addr 0x56a8a90, size 0x5c, virtual false, abstract: false, final false
inline void SetViewToRequest() ;

/// @brief Method TransferOwnership, addr 0x56ab51c, size 0x320, virtual false, abstract: false, final false
inline void TransferOwnership(::GlobalNamespace::NetPlayer*  player, ::StringW  Nonce) ;

/// [PunRPC]
/// @brief Method TransferOwnershipFromToRPC, addr 0x56aa6e4, size 0x46c, virtual false, abstract: false, final false
inline void TransferOwnershipFromToRPC(/* [CanBeNull] */ ::Photon::Realtime::Player*  nextplayer, ::StringW  nonce, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method TransferOwnershipWithID, addr 0x56ab83c, size 0xa4, virtual false, abstract: false, final false
inline void TransferOwnershipWithID(int32_t  id) ;

/// @brief Method Validate, addr 0x56acb38, size 0x4, virtual true, abstract: false, final true
inline void Validate(::Sirenix::OdinInspector::SelfValidationResult*  result) ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__22_0, addr 0x56acbcc, size 0x7c, virtual false, abstract: false, final false
inline void _OnEnable_b__22_0() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_actualOwner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_actualOwner() ;

constexpr bool const& __cordl_internal_get_attemptMasterAssistedTakeoverOnDeny() const;

constexpr bool& __cordl_internal_get_attemptMasterAssistedTakeoverOnDeny() ;

constexpr bool const& __cordl_internal_get_autoRegister() const;

constexpr bool& __cordl_internal_get_autoRegister() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* const& __cordl_internal_get_callbacksList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*& __cordl_internal_get_callbacksList() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_creator() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_creator() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_currentMasterClient() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_currentMasterClient() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_currentOwner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_currentOwner() ;

constexpr ::GlobalNamespace::NetworkingState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::NetworkingState& __cordl_internal_get_currentState() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_fallbackOwner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_fallbackOwner() ;

constexpr bool const& __cordl_internal_get_giveCreatorAbsoluteAuthority() const;

constexpr bool& __cordl_internal_get_giveCreatorAbsoluteAuthority() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::NetworkView>> const& __cordl_internal_get_netViews() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::NetworkView>>& __cordl_internal_get_netViews() ;

constexpr ::System::Action* const& __cordl_internal_get_ownershipDenied() const;

constexpr ::System::Action*& __cordl_internal_get_ownershipDenied() ;

constexpr ::System::Action* const& __cordl_internal_get_ownershipRequestAccepted() const;

constexpr ::System::Action*& __cordl_internal_get_ownershipRequestAccepted() ;

constexpr ::StringW const& __cordl_internal_get_ownershipRequestNonce() const;

constexpr ::StringW& __cordl_internal_get_ownershipRequestNonce() ;

constexpr void __cordl_internal_set_actualOwner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_attemptMasterAssistedTakeoverOnDeny(bool  value) ;

constexpr void __cordl_internal_set_autoRegister(bool  value) ;

constexpr void __cordl_internal_set_callbacksList(::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value) ;

constexpr void __cordl_internal_set_creator(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_currentMasterClient(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_currentOwner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::NetworkingState  value) ;

constexpr void __cordl_internal_set_fallbackOwner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_giveCreatorAbsoluteAuthority(bool  value) ;

constexpr void __cordl_internal_set_netViews(::ArrayW<::UnityW<::GlobalNamespace::NetworkView>>  value) ;

constexpr void __cordl_internal_set_ownershipDenied(::System::Action*  value) ;

constexpr void __cordl_internal_set_ownershipRequestAccepted(::System::Action*  value) ;

constexpr void __cordl_internal_set_ownershipRequestNonce(::StringW  value) ;

/// @brief Method .ctor, addr 0x56acb3c, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EdCurrentState, addr 0x56acb30, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkingState get_EdCurrentState() ;

/// @brief Method get_isMine, addr 0x56a8b94, size 0x7c, virtual false, abstract: false, final false
inline bool get_isMine() ;

/// @brief Method get_isTrulyMine, addr 0x56a8b18, size 0x7c, virtual false, abstract: false, final false
inline bool get_isTrulyMine() ;

/// @brief Method get_netView, addr 0x56a8aec, size 0x2c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NetworkView> get_netView() ;

/// @brief Convert to "::Sirenix::OdinInspector::ISelfValidator"
constexpr ::Sirenix::OdinInspector::ISelfValidator* i___Sirenix__OdinInspector__ISelfValidator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestableOwnershipGuard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestableOwnershipGuard(RequestableOwnershipGuard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestableOwnershipGuard(RequestableOwnershipGuard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{923};

/// [DevInspectorShow]
/// [DevInspectorColor("#ff5")]
/// @brief Field currentState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::NetworkingState  ___currentState;

/// [FormerlySerializedAs("NetworkView")]
/// [SerializeField]
/// @brief Field netViews, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::NetworkView>>  ___netViews;

/// [DevInspectorHide]
/// [SerializeField]
/// @brief Field autoRegister, offset: 0x38, size: 0x1, def value: None
 bool  ___autoRegister;

/// [DevInspectorShow]
/// [CanBeNull]
/// [SerializeField]
/// [SerializeReference]
/// @brief Field currentOwner, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___currentOwner;

/// [CanBeNull]
/// [SerializeField]
/// [SerializeReference]
/// @brief Field currentMasterClient, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___currentMasterClient;

/// [CanBeNull]
/// [SerializeField]
/// [SerializeReference]
/// @brief Field fallbackOwner, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___fallbackOwner;

/// [CanBeNull]
/// [SerializeField]
/// [SerializeReference]
/// @brief Field creator, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___creator;

/// @brief Field giveCreatorAbsoluteAuthority, offset: 0x60, size: 0x1, def value: None
 bool  ___giveCreatorAbsoluteAuthority;

/// @brief Field attemptMasterAssistedTakeoverOnDeny, offset: 0x61, size: 0x1, def value: None
 bool  ___attemptMasterAssistedTakeoverOnDeny;

/// @brief Field ownershipDenied, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___ownershipDenied;

/// @brief Field ownershipRequestAccepted, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___ownershipRequestAccepted;

/// [CanBeNull]
/// [SerializeField]
/// [SerializeReference]
/// [DevInspectorShow]
/// @brief Field actualOwner, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___actualOwner;

/// @brief Field ownershipRequestNonce, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___ownershipRequestNonce;

/// @brief Field callbacksList, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  ___callbacksList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___currentState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___netViews) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___autoRegister) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___currentOwner) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___currentMasterClient) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___fallbackOwner) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___creator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___giveCreatorAbsoluteAuthority) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___attemptMasterAssistedTakeoverOnDeny) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___ownershipDenied) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___ownershipRequestAccepted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___actualOwner) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___ownershipRequestNonce) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard, ___callbacksList) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RequestableOwnershipGuard) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestableOwnershipGuard/<RequestTimeout>d__40
class CORDL_TYPE RequestableOwnershipGuard__RequestTimeout_d__40 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56ad094, size 0x2ec, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56ad380, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56ad388, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56ad3c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56ad090, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56abdb4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestableOwnershipGuard__RequestTimeout_d__40() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard__RequestTimeout_d__40", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestableOwnershipGuard__RequestTimeout_d__40(RequestableOwnershipGuard__RequestTimeout_d__40 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard__RequestTimeout_d__40", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestableOwnershipGuard__RequestTimeout_d__40(RequestableOwnershipGuard__RequestTimeout_d__40 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{922};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestableOwnershipGuard/<>c__DisplayClass37_0
class CORDL_TYPE RequestableOwnershipGuard___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  __4__this;

/// @brief Field player, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

static inline ::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <SetOwnership>b__0, addr 0x56acfd8, size 0xb8, virtual false, abstract: false, final false
inline void _SetOwnership_b__0(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  actualOwner) ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x56aba5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestableOwnershipGuard___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestableOwnershipGuard___c__DisplayClass37_0(RequestableOwnershipGuard___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestableOwnershipGuard___c__DisplayClass37_0(RequestableOwnershipGuard___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{921};

/// @brief Field player, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0, ___player) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RequestableOwnershipGuard/<>c
class CORDL_TYPE RequestableOwnershipGuard___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RequestableOwnershipGuard___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  __9__24_0;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  __9__26_0;

/// @brief Field <>9__26_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_1, put=setStaticF___9__26_1)) ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  __9__26_1;

/// @brief Field <>9__26_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_2, put=setStaticF___9__26_2)) ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  __9__26_2;

/// @brief Field <>9__26_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_3, put=setStaticF___9__26_3)) ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  __9__26_3;

static inline ::GlobalNamespace::RequestableOwnershipGuard___c* New_ctor() ;

/// @brief Method <OnPreLeavingRoom>b__24_0, addr 0x56accb8, size 0xa0, virtual false, abstract: false, final false
inline void _OnPreLeavingRoom_b__24_0(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback) ;

/// @brief Method <PlayerLeftRoom>b__26_0, addr 0x56acd58, size 0xa0, virtual false, abstract: false, final false
inline void _PlayerLeftRoom_b__26_0(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback) ;

/// @brief Method <PlayerLeftRoom>b__26_1, addr 0x56acdf8, size 0xa0, virtual false, abstract: false, final false
inline void _PlayerLeftRoom_b__26_1(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback) ;

/// @brief Method <PlayerLeftRoom>b__26_2, addr 0x56ace98, size 0xa0, virtual false, abstract: false, final false
inline void _PlayerLeftRoom_b__26_2(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback) ;

/// @brief Method <PlayerLeftRoom>b__26_3, addr 0x56acf38, size 0xa0, virtual false, abstract: false, final false
inline void _PlayerLeftRoom_b__26_3(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback) ;

/// @brief Method .ctor, addr 0x56accb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RequestableOwnershipGuard___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* getStaticF___9__24_0() ;

static inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* getStaticF___9__26_0() ;

static inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* getStaticF___9__26_1() ;

static inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* getStaticF___9__26_2() ;

static inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* getStaticF___9__26_3() ;

static inline void setStaticF___9(::GlobalNamespace::RequestableOwnershipGuard___c*  value) ;

static inline void setStaticF___9__24_0(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value) ;

static inline void setStaticF___9__26_0(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value) ;

static inline void setStaticF___9__26_1(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value) ;

static inline void setStaticF___9__26_2(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value) ;

static inline void setStaticF___9__26_3(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestableOwnershipGuard___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestableOwnershipGuard___c(RequestableOwnershipGuard___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestableOwnershipGuard___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestableOwnershipGuard___c(RequestableOwnershipGuard___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RequestableOwnershipGuard___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
