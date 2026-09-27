#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkComponent)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class IStateAuthorityChanged;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
class IOnPhotonViewOwnerChange;
}
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkComponent*, "", "NetworkComponent");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkView
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkComponent
class CORDL_TYPE NetworkComponent : public ::GlobalNamespace::NetworkView {
public:
// Declarations
 __declspec(property(get=get_IsLocallyOwned)) bool  IsLocallyOwned;

 __declspec(property(get=get_OwnerID)) int32_t  OwnerID;

 __declspec(property(get=get_ShouldUpdateobject)) bool  ShouldUpdateobject;

 __declspec(property(get=get_ShouldWriteObjectData)) bool  ShouldWriteObjectData;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Fusion::IStateAuthorityChanged"
constexpr operator  ::Fusion::IStateAuthorityChanged*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IOnPhotonViewOwnerChange"
constexpr operator  ::Photon::Pun::IOnPhotonViewOwnerChange*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr operator  ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Method AddToNetwork, addr 0x56e80ac, size 0x58, virtual false, abstract: false, final false
inline void AddToNetwork() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56e8898, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56e88a0, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FixedUpdateNetwork, addr 0x56e8334, size 0x10, virtual true, abstract: false, final false
inline void FixedUpdateNetwork() ;

static inline ::GlobalNamespace::NetworkComponent* New_ctor() ;

/// @brief Method OnDisable, addr 0x56e8104, size 0xf8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56e7fdc, size 0xd0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientSwitch, addr 0x56e864c, size 0x10, virtual false, abstract: false, final false
inline void OnMasterClientSwitch(::GlobalNamespace::NetPlayer*  newMaster) ;

/// @brief Method OnOwnerChange, addr 0x56e866c, size 0x4, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method OnOwnerSwitched, addr 0x56e8430, size 0x4, virtual true, abstract: false, final false
inline void OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer) ;

/// @brief Method OnPhotonInstantiate, addr 0x56e8388, size 0x10, virtual true, abstract: false, final false
inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnPhotonSerializeView, addr 0x56e8398, size 0x94, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSpawned, addr 0x56e842c, size 0x4, virtual true, abstract: false, final false
inline void OnSpawned() ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched, addr 0x56e8434, size 0x8c, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom, addr 0x56e865c, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom, addr 0x56e8660, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate, addr 0x56e8668, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate, addr 0x56e8664, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method ReadDataFusion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Render, addr 0x56e8344, size 0x44, virtual true, abstract: false, final false
inline void Render() ;

/// @brief Method Spawned, addr 0x56e82a0, size 0x94, virtual true, abstract: false, final false
inline void Spawned() ;

/// @brief Method Start, addr 0x56e81fc, size 0x18, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StateAuthorityChanged, addr 0x56e84c0, size 0x17c, virtual true, abstract: false, final false
inline void StateAuthorityChanged() ;

/// @brief Method WriteDataFusion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method .ctor, addr 0x56e8888, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLocallyOwned, addr 0x56e8670, size 0x4, virtual false, abstract: false, final false
inline bool get_IsLocallyOwned() ;

/// @brief Method get_OwnerID, addr 0x56e8804, size 0x84, virtual false, abstract: false, final false
inline int32_t get_OwnerID() ;

/// @brief Method get_ShouldUpdateobject, addr 0x56e8780, size 0x84, virtual false, abstract: false, final false
inline bool get_ShouldUpdateobject() ;

/// @brief Method get_ShouldWriteObjectData, addr 0x56e86fc, size 0x84, virtual false, abstract: false, final false
inline bool get_ShouldWriteObjectData() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Fusion::IStateAuthorityChanged"
constexpr ::Fusion::IStateAuthorityChanged* i___Fusion__IStateAuthorityChanged() noexcept;

/// @brief Convert to "::Photon::Pun::IOnPhotonViewOwnerChange"
constexpr ::Photon::Pun::IOnPhotonViewOwnerChange* i___Photon__Pun__IOnPhotonViewOwnerChange() noexcept;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* i___Photon__Pun__IPunInstantiateMagicCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkComponent(NetworkComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkComponent(NetworkComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkComponent) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
