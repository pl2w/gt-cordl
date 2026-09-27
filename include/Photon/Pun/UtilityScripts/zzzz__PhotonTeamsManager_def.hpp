#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonTeamsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTeamsManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class PhotonTeam;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class Player;
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
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonTeamsManager;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PhotonTeamsManager*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PhotonTeamsManager*, "Photon.Pun.UtilityScripts", "PhotonTeamsManager");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PhotonTeamsManager
class CORDL_TYPE PhotonTeamsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PlayerJoinedTeam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlayerJoinedTeam, put=setStaticF_PlayerJoinedTeam)) ::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  PlayerJoinedTeam;

/// @brief Field PlayerLeftTeam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlayerLeftTeam, put=setStaticF_PlayerLeftTeam)) ::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  PlayerLeftTeam;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>  instance;

/// @brief Field playersPerTeam, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersPerTeam, put=__cordl_internal_set_playersPerTeam)) ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*  playersPerTeam;

/// @brief Field teamsByCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamsByCode, put=__cordl_internal_set_teamsByCode)) ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>*  teamsByCode;

/// @brief Field teamsByName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamsByName, put=__cordl_internal_set_teamsByName)) ::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>*  teamsByName;

/// @brief Field teamsList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamsList, put=__cordl_internal_set_teamsList)) ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*  teamsList;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method Awake, addr 0xa734d88, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearTeams, addr 0xa734f20, size 0x1a0, virtual false, abstract: false, final false
inline void ClearTeams() ;

/// @brief Method GetAvailableTeams, addr 0xa735f60, size 0x58, virtual false, abstract: false, final false
inline ::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*> GetAvailableTeams() ;

/// @brief Method GetTeamMembersCount, addr 0xa736630, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetTeamMembersCount(uint8_t  code) ;

/// @brief Method GetTeamMembersCount, addr 0xa736700, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetTeamMembersCount(::StringW  name) ;

/// @brief Method GetTeamMembersCount, addr 0xa73666c, size 0x94, virtual false, abstract: false, final false
inline int32_t GetTeamMembersCount(::Photon::Pun::UtilityScripts::PhotonTeam*  team) ;

/// @brief Method Init, addr 0xa734a8c, size 0x2fc, virtual false, abstract: false, final false
inline void Init() ;

static inline ::Photon::Pun::UtilityScripts::PhotonTeamsManager* New_ctor() ;

/// @brief Method OnDisable, addr 0xa734ec0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa734e68, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched, addr 0xa736754, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom, addr 0xa735b5c, size 0x334, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom, addr 0xa7358dc, size 0x198, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate, addr 0xa7351ec, size 0x6f0, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate, addr 0xa736750, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnCreateRoomFailed, addr 0xa736744, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnCreatedRoom, addr 0xa736740, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom() ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnFriendListUpdate, addr 0xa73673c, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnJoinRandomFailed, addr 0xa73674c, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnJoinRoomFailed, addr 0xa736748, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnJoinedRoom, addr 0xa7350c0, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom() ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnLeftRoom, addr 0xa7351e4, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom() ;

/// @brief Method Photon.Realtime.IMatchmakingCallbacks.OnPreLeavingRoom, addr 0xa7351e8, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IMatchmakingCallbacks_OnPreLeavingRoom() ;

/// @brief Method TryGetTeamByCode, addr 0xa735e90, size 0x68, virtual false, abstract: false, final false
inline bool TryGetTeamByCode(uint8_t  code, ::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>  team) ;

/// @brief Method TryGetTeamByName, addr 0xa735ef8, size 0x68, virtual false, abstract: false, final false
inline bool TryGetTeamByName(::StringW  teamName, ::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>  team) ;

/// @brief Method TryGetTeamMatesOfPlayer, addr 0xa7362a8, size 0x388, virtual false, abstract: false, final false
inline bool TryGetTeamMatesOfPlayer(::Photon::Realtime::Player*  player, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  teamMates) ;

/// @brief Method TryGetTeamMembers, addr 0xa735fb8, size 0x228, virtual false, abstract: false, final false
inline bool TryGetTeamMembers(uint8_t  code, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  members) ;

/// @brief Method TryGetTeamMembers, addr 0xa736258, size 0x50, virtual false, abstract: false, final false
inline bool TryGetTeamMembers(::Photon::Pun::UtilityScripts::PhotonTeam*  team, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  members) ;

/// @brief Method TryGetTeamMembers, addr 0xa7361e0, size 0x78, virtual false, abstract: false, final false
inline bool TryGetTeamMembers(::StringW  teamName, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  members) ;

/// @brief Method UpdateTeams, addr 0xa7350c4, size 0x120, virtual false, abstract: false, final false
inline void UpdateTeams() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>* const& __cordl_internal_get_playersPerTeam() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*& __cordl_internal_get_playersPerTeam() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>* const& __cordl_internal_get_teamsByCode() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>*& __cordl_internal_get_teamsByCode() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>* const& __cordl_internal_get_teamsByName() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>*& __cordl_internal_get_teamsByName() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>* const& __cordl_internal_get_teamsList() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*& __cordl_internal_get_teamsList() ;

constexpr void __cordl_internal_set_playersPerTeam(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*  value) ;

constexpr void __cordl_internal_set_teamsByCode(::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

constexpr void __cordl_internal_set_teamsByName(::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

constexpr void __cordl_internal_set_teamsList(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

/// @brief Method .ctor, addr 0xa736758, size 0x208, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_PlayerJoinedTeam, addr 0xa7345c8, size 0xcc, virtual false, abstract: false, final false
static inline void add_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_PlayerLeftTeam, addr 0xa734760, size 0xd0, virtual false, abstract: false, final false
static inline void add_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

static inline ::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>* getStaticF_PlayerJoinedTeam() ;

static inline ::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>* getStaticF_PlayerLeftTeam() ;

static inline ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> getStaticF_instance() ;

/// @brief Method get_Instance, addr 0xa734900, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> get_Instance() ;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_PlayerJoinedTeam, addr 0xa734694, size 0xcc, virtual false, abstract: false, final false
static inline void remove_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_PlayerLeftTeam, addr 0xa734830, size 0xd0, virtual false, abstract: false, final false
static inline void remove_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

static inline void setStaticF_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

static inline void setStaticF_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value) ;

static inline void setStaticF_instance(::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTeamsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTeamsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTeamsManager(PhotonTeamsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTeamsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTeamsManager(PhotonTeamsManager const& ) = delete;

/// @brief Field TeamPlayerProp offset 0xffffffff size 0x8
static constexpr ::ConstString  TeamPlayerProp{u"_pt"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31211};

/// [SerializeField]
/// @brief Field teamsList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*  ___teamsList;

/// @brief Field teamsByCode, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>*  ___teamsByCode;

/// @brief Field teamsByName, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>*  ___teamsByName;

/// @brief Field playersPerTeam, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*  ___playersPerTeam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeamsManager, ___teamsList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeamsManager, ___teamsByCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeamsManager, ___teamsByName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeamsManager, ___playersPerTeam) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PhotonTeamsManager) == 0x40, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
