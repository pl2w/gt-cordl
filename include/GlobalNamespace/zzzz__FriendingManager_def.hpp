#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendingManager)
namespace GlobalNamespace {
class FriendBackendController_Friend;
}
namespace GlobalNamespace {
struct FriendingManager_FriendStationData;
}
namespace GlobalNamespace {
struct FriendingManager_FriendStationState;
}
namespace GlobalNamespace {
class FriendingStation;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
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
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendingManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendingManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendingManager*, "", "FriendingManager");
// Dependencies GTZone, Photon.Pun.MonoBehaviourPun
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendingManager
class CORDL_TYPE FriendingManager : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using FriendStationData = ::GlobalNamespace::FriendingManager_FriendStationData;

using FriendStationState = ::GlobalNamespace::FriendingManager_FriendStationState;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::FriendingManager>  Instance;

/// @brief Field activeFriendStationData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeFriendStationData, put=__cordl_internal_set_activeFriendStationData)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>*  activeFriendStationData;

/// @brief Field friendingStations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendingStations, put=__cordl_internal_set_friendingStations)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>*  friendingStations;

/// @brief Field localPlayerZone, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerZone, put=__cordl_internal_set_localPlayerZone)) ::GlobalNamespace::GTZone  localPlayerZone;

/// @brief Field progressBarDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressBarDuration, put=__cordl_internal_set_progressBarDuration)) float_t  progressBarDuration;

/// @brief Field requiredProximityToStation, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredProximityToStation, put=__cordl_internal_set_requiredProximityToStation)) float_t  requiredProximityToStation;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method AuthorityUpdate, addr 0x5aa6b88, size 0x370, virtual false, abstract: false, final false
inline void AuthorityUpdate() ;

/// @brief Method Awake, addr 0x5aa6658, size 0x104, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckFriendStatusOnFriendListRefresh, addr 0x5aa882c, size 0x46c, virtual false, abstract: false, final false
inline void CheckFriendStatusOnFriendListRefresh(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  friendList) ;

/// @brief Method CheckFriendStatusRequest, addr 0x5aa8724, size 0x108, virtual false, abstract: false, final false
inline void CheckFriendStatusRequest(::GlobalNamespace::GTZone  zone, int32_t  actorNumberA, int32_t  actorNumberB) ;

/// [PunRPC]
/// @brief Method CheckFriendStatusRequestRPC, addr 0x5aaa0ac, size 0x1d4, virtual false, abstract: false, final false
inline void CheckFriendStatusRequestRPC(::GlobalNamespace::GTZone  zone, int32_t  actorNumberA, int32_t  actorNumberB, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method CheckFriendStatusResponse, addr 0x5aa8e20, size 0x3a8, virtual false, abstract: false, final false
inline void CheckFriendStatusResponse(::GlobalNamespace::GTZone  zone, int32_t  responderActorNumber, int32_t  friendTargetActorNumber, bool  friends) ;

/// [PunRPC]
/// @brief Method CheckFriendStatusResponseRPC, addr 0x5aaa280, size 0x1f8, virtual false, abstract: false, final false
inline void CheckFriendStatusResponseRPC(::GlobalNamespace::GTZone  zone, int32_t  friendTargetActorNumber, bool  friends, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method DebugLogFriendingStations, addr 0x5aa72a0, size 0x240, virtual false, abstract: false, final false
inline void DebugLogFriendingStations() ;

/// [PunRPC]
/// @brief Method FriendButtonPressedRPC, addr 0x5aaa478, size 0x1e8, virtual false, abstract: false, final false
inline void FriendButtonPressedRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method FriendButtonUnpressedRPC, addr 0x5aaa660, size 0x1e8, virtual false, abstract: false, final false
inline void FriendButtonUnpressedRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method FriendRequestCallback, addr 0x5aa9ad8, size 0x1d0, virtual false, abstract: false, final false
inline void FriendRequestCallback(::GlobalNamespace::GTZone  zone, int32_t  localId, int32_t  friendId, bool  success) ;

/// @brief Method FriendRequestCompletedAuthority, addr 0x5aa973c, size 0x39c, virtual false, abstract: false, final false
inline void FriendRequestCompletedAuthority(::GlobalNamespace::GTZone  zone, int32_t  playerId, bool  succeeded) ;

/// [PunRPC]
/// @brief Method FriendRequestCompletedRPC, addr 0x5aaac5c, size 0x1f8, virtual false, abstract: false, final false
inline void FriendRequestCompletedRPC(::GlobalNamespace::GTZone  zone, bool  succeeded, ::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GlobalNamespace::FriendingManager* New_ctor() ;

/// [PunRPC]
/// @brief Method NotifyClientsFriendRequestReadyRPC, addr 0x5aaaa80, size 0x1dc, virtual false, abstract: false, final false
inline void NotifyClientsFriendRequestReadyRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnDestroy, addr 0x5aa692c, size 0x240, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5aa6b78, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5aa6b6c, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPhotonSerializeView, addr 0x5aa9ca8, size 0x238, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5aa6ef8, size 0x4, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlayerEnteredStation, addr 0x5aa74e0, size 0x5d4, virtual false, abstract: false, final false
inline void PlayerEnteredStation(::GlobalNamespace::GTZone  zone, ::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method PlayerExitedStation, addr 0x5aa7ab4, size 0x570, virtual false, abstract: false, final false
inline void PlayerExitedStation(::GlobalNamespace::GTZone  zone, ::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method PlayerPressedButton, addr 0x5aa8024, size 0x384, virtual false, abstract: false, final false
inline void PlayerPressedButton(::GlobalNamespace::GTZone  zone, int32_t  playerId) ;

/// @brief Method PlayerUnpressedButton, addr 0x5aa83a8, size 0x37c, virtual false, abstract: false, final false
inline void PlayerUnpressedButton(::GlobalNamespace::GTZone  zone, int32_t  playerId) ;

/// @brief Method RegisterFriendingStation, addr 0x5aa71ac, size 0x98, virtual false, abstract: false, final false
inline void RegisterFriendingStation(::GlobalNamespace::FriendingStation*  friendingStation) ;

/// @brief Method SendFriendRequestIfApplicable, addr 0x5aa91c8, size 0x304, virtual false, abstract: false, final false
inline void SendFriendRequestIfApplicable(::GlobalNamespace::GTZone  zone) ;

/// @brief Method SliceUpdate, addr 0x5aa6b84, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5aa675c, size 0x1d0, virtual false, abstract: false, final false
inline void Start() ;

/// [PunRPC]
/// @brief Method StationNoLongerActiveRPC, addr 0x5aaa848, size 0x238, virtual false, abstract: false, final false
inline void StationNoLongerActiveRPC(::GlobalNamespace::GTZone  zone, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method UnregisterFriendingStation, addr 0x5aa7244, size 0x5c, virtual false, abstract: false, final false
inline void UnregisterFriendingStation(::GlobalNamespace::FriendingStation*  friendingStation) ;

/// @brief Method UpdateFriendingStations, addr 0x5aa70a0, size 0x108, virtual false, abstract: false, final false
inline void UpdateFriendingStations() ;

/// @brief Method ValidateState, addr 0x5aa6efc, size 0x1a4, virtual false, abstract: false, final false
inline void ValidateState() ;

/// [CompilerGenerated]
/// @brief Method <OnPhotonSerializeView>g__ReceiveFriendStationData|31_1, addr 0x5aa9fa4, size 0x108, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FriendingManager_FriendStationData _OnPhotonSerializeView_g__ReceiveFriendStationData_31_1(::Photon::Pun::PhotonStream*  stream) ;

/// [CompilerGenerated]
/// @brief Method <OnPhotonSerializeView>g__SendFriendStationData|31_0, addr 0x5aa9ee0, size 0xc4, virtual false, abstract: false, final false
static inline void _OnPhotonSerializeView_g__SendFriendStationData_31_0(::Photon::Pun::PhotonStream*  stream, ::GlobalNamespace::FriendingManager_FriendStationData  data) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>* const& __cordl_internal_get_activeFriendStationData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>*& __cordl_internal_get_activeFriendStationData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>* const& __cordl_internal_get_friendingStations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>*& __cordl_internal_get_friendingStations() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_localPlayerZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_localPlayerZone() ;

constexpr float_t const& __cordl_internal_get_progressBarDuration() const;

constexpr float_t& __cordl_internal_get_progressBarDuration() ;

constexpr float_t const& __cordl_internal_get_requiredProximityToStation() const;

constexpr float_t& __cordl_internal_get_requiredProximityToStation() ;

constexpr void __cordl_internal_set_activeFriendStationData(::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>*  value) ;

constexpr void __cordl_internal_set_friendingStations(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>*  value) ;

constexpr void __cordl_internal_set_localPlayerZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_progressBarDuration(float_t  value) ;

constexpr void __cordl_internal_set_requiredProximityToStation(float_t  value) ;

/// @brief Method .ctor, addr 0x5aaae54, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::FriendingManager> getStaticF_Instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::FriendingManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendingManager(FriendingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendingManager(FriendingManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3266};

/// [SerializeField]
/// @brief Field progressBarDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___progressBarDuration;

/// [SerializeField]
/// @brief Field requiredProximityToStation, offset: 0x2c, size: 0x4, def value: None
 float_t  ___requiredProximityToStation;

/// @brief Field activeFriendStationData, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FriendingManager_FriendStationData>*  ___activeFriendStationData;

/// @brief Field friendingStations, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GlobalNamespace::FriendingStation>>*  ___friendingStations;

/// @brief Field localPlayerZone, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___localPlayerZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendingManager, ___progressBarDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager, ___requiredProximityToStation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager, ___activeFriendStationData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager, ___friendingStations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingManager, ___localPlayerZone) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendingManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
