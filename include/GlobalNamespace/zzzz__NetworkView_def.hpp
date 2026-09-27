#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkView)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class IStateAuthorityChanged;
}
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
class IPunOwnershipCallbacks;
}
namespace Photon::Pun {
struct OwnershipOption;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Pun {
struct RpcTarget;
}
namespace Photon::Realtime {
class Player;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkView;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkView*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkView*, "", "NetworkView");
// [RequireComponent(typeof(Photon.Pun.PhotonView), typeof(Fusion.NetworkObject))]
// [NetworkBehaviourWeaved(0)]
// Dependencies Fusion.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkView
class CORDL_TYPE NetworkView : public ::Fusion::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_ControllerActorNr, put=set_ControllerActorNr)) int32_t  ControllerActorNr;

 __declspec(property(get=get_GetView)) ::UnityW<::Photon::Pun::PhotonView>  GetView;

 __declspec(property(get=get_HasView)) bool  HasView;

 __declspec(property(get=get_IsMine)) bool  IsMine;

 __declspec(property(get=get_IsRoomView)) bool  IsRoomView;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Owner)) ::GlobalNamespace::NetPlayer*  Owner;

 __declspec(property(get=get_OwnerActorNr, put=set_OwnerActorNr)) int32_t  OwnerActorNr;

 __declspec(property(get=get_OwnershipTransfer, put=set_OwnershipTransfer)) ::Photon::Pun::OwnershipOption  OwnershipTransfer;

 __declspec(property(get=get_ViewID)) int32_t  ViewID;

/// @brief Field _sceneObject, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__sceneObject, put=__cordl_internal_set__sceneObject)) bool  _sceneObject;

/// @brief Field _spawned, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__spawned, put=__cordl_internal_set__spawned)) bool  _spawned;

/// @brief Field changingStatAuth, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_changingStatAuth, put=__cordl_internal_set_changingStatAuth)) bool  changingStatAuth;

/// @brief Field fusionView, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_fusionView, put=__cordl_internal_set_fusionView)) ::UnityW<::Fusion::NetworkObject>  fusionView;

/// @brief Field punView, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_punView, put=__cordl_internal_set_punView)) ::UnityW<::Photon::Pun::PhotonView>  punView;

/// @brief Field reliableView, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableView, put=__cordl_internal_set_reliableView)) ::UnityW<::Photon::Pun::PhotonView>  reliableView;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Fusion::IStateAuthorityChanged"
constexpr operator  ::Fusion::IStateAuthorityChanged*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr operator  ::Photon::Pun::IPunOwnershipCallbacks*() noexcept;

/// @brief Method Awake, addr 0x56ec1f0, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56e889c, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56e88a4, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetViews, addr 0x56ec030, size 0x1c0, virtual false, abstract: false, final false
inline void GetViews() ;

static inline ::GlobalNamespace::NetworkView* New_ctor() ;

/// @brief Method OnOwnershipRequest, addr 0x56ec40c, size 0x4, virtual true, abstract: false, final false
inline void OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer) ;

/// @brief Method OnOwnershipTransferFailed, addr 0x56ec414, size 0x4, virtual true, abstract: false, final false
inline void OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest) ;

/// @brief Method OnOwnershipTransfered, addr 0x56ec410, size 0x4, virtual true, abstract: false, final false
inline void OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method ReleaseOwnership, addr 0x56ec3e8, size 0x24, virtual false, abstract: false, final false
inline void ReleaseOwnership() ;

/// @brief Method RequestOwnership, addr 0x56ec3d0, size 0x18, virtual false, abstract: false, final false
inline void RequestOwnership() ;

/// @brief Method SendRPC, addr 0x56ec294, size 0x18, virtual false, abstract: false, final false
inline void SendRPC(::StringW  method, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method SendRPC, addr 0x56ec2ac, size 0x104, virtual false, abstract: false, final false
inline void SendRPC(::StringW  method, int32_t  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method SendRPC, addr 0x56ec1f4, size 0xa0, virtual false, abstract: false, final false
inline void SendRPC(::StringW  method, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Spawned, addr 0x56ec3b0, size 0x20, virtual true, abstract: false, final false
inline void Spawned() ;

/// @brief Method Start, addr 0x56e8214, size 0x8c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StateAuthorityChanged, addr 0x56e863c, size 0x10, virtual true, abstract: false, final false
inline void StateAuthorityChanged() ;

constexpr bool const& __cordl_internal_get__sceneObject() const;

constexpr bool& __cordl_internal_get__sceneObject() ;

constexpr bool const& __cordl_internal_get__spawned() const;

constexpr bool& __cordl_internal_get__spawned() ;

constexpr bool const& __cordl_internal_get_changingStatAuth() const;

constexpr bool& __cordl_internal_get_changingStatAuth() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_fusionView() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_fusionView() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_punView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_punView() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_reliableView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_reliableView() ;

constexpr void __cordl_internal_set__sceneObject(bool  value) ;

constexpr void __cordl_internal_set__spawned(bool  value) ;

constexpr void __cordl_internal_set_changingStatAuth(bool  value) ;

constexpr void __cordl_internal_set_fusionView(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set_punView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_reliableView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x56e8890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ControllerActorNr, addr 0x56ebf78, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ControllerActorNr() ;

/// @brief Method get_GetView, addr 0x56ebd90, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Pun::PhotonView> get_GetView() ;

/// @brief Method get_HasView, addr 0x56ebd18, size 0x60, virtual false, abstract: false, final false
inline bool get_HasView() ;

/// @brief Method get_IsMine, addr 0x56e8674, size 0x88, virtual false, abstract: false, final false
inline bool get_IsMine() ;

/// @brief Method get_IsRoomView, addr 0x56ebd78, size 0x18, virtual false, abstract: false, final false
inline bool get_IsRoomView() ;

/// @brief Method get_IsValid, addr 0x56ebcb8, size 0x60, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Owner, addr 0x56ebd98, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_Owner() ;

/// @brief Method get_OwnerActorNr, addr 0x56ebec0, size 0x18, virtual false, abstract: false, final false
inline int32_t get_OwnerActorNr() ;

/// @brief Method get_OwnershipTransfer, addr 0x56ebe20, size 0x18, virtual false, abstract: false, final false
inline ::Photon::Pun::OwnershipOption get_OwnershipTransfer() ;

/// @brief Method get_ViewID, addr 0x56ebe08, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ViewID() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Fusion::IStateAuthorityChanged"
constexpr ::Fusion::IStateAuthorityChanged* i___Fusion__IStateAuthorityChanged() noexcept;

/// @brief Convert to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr ::Photon::Pun::IPunOwnershipCallbacks* i___Photon__Pun__IPunOwnershipCallbacks() noexcept;

/// @brief Method set_ControllerActorNr, addr 0x56ebf90, size 0xa0, virtual false, abstract: false, final false
inline void set_ControllerActorNr(int32_t  value) ;

/// @brief Method set_OwnerActorNr, addr 0x56ebed8, size 0xa0, virtual false, abstract: false, final false
inline void set_OwnerActorNr(int32_t  value) ;

/// @brief Method set_OwnershipTransfer, addr 0x56ebe38, size 0x88, virtual false, abstract: false, final false
inline void set_OwnershipTransfer(::Photon::Pun::OwnershipOption  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkView(NetworkView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkView(NetworkView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1135};

/// [SerializeField]
/// @brief Field punView, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___punView;

/// [SerializeField]
/// @brief Field reliableView, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___reliableView;

/// [SerializeField]
/// @brief Field fusionView, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___fusionView;

/// [SerializeField]
/// @brief Field _sceneObject, offset: 0x98, size: 0x1, def value: None
 bool  ____sceneObject;

/// @brief Field _spawned, offset: 0x99, size: 0x1, def value: None
 bool  ____spawned;

/// @brief Field changingStatAuth, offset: 0x9a, size: 0x1, def value: None
 bool  ___changingStatAuth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkView, ___punView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkView, ___reliableView) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkView, ___fusionView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkView, ____sceneObject) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkView, ____spawned) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkView, ___changingStatAuth) == 0x9a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkView) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
