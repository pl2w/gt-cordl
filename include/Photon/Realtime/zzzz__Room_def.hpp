#pragma once
// IWYU pragma private; include "Photon/Realtime/Room.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Room)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class WebFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Photon::Realtime {
class Room;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::Room*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::Room*, "Photon.Realtime", "Room");
// Dependencies Photon.Realtime.RoomInfo
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.Room
class CORDL_TYPE Room : public ::Photon::Realtime::RoomInfo {
public:
// Declarations
 __declspec(property(get=get_AutoCleanUp)) bool  AutoCleanUp;

 __declspec(property(get=get_BroadcastPropertiesChangeToAll, put=set_BroadcastPropertiesChangeToAll)) bool  BroadcastPropertiesChangeToAll;

 __declspec(property(get=get_DeleteNullProperties, put=set_DeleteNullProperties)) bool  DeleteNullProperties;

 __declspec(property(get=get_EmptyRoomTtl, put=set_EmptyRoomTtl)) int32_t  EmptyRoomTtl;

 __declspec(property(get=get_ExpectedUsers)) ::ArrayW<::StringW>  ExpectedUsers;

 __declspec(property(get=get_IsOffline, put=set_IsOffline)) bool  IsOffline;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_IsVisible, put=set_IsVisible)) bool  IsVisible;

 __declspec(property(get=get_LoadBalancingClient, put=set_LoadBalancingClient)) ::Photon::Realtime::LoadBalancingClient*  LoadBalancingClient;

 __declspec(property(get=get_MasterClientId)) int32_t  MasterClientId;

 __declspec(property(get=get_MaxPlayers, put=set_MaxPlayers)) uint8_t  MaxPlayers;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_PlayerCount)) uint8_t  PlayerCount;

 __declspec(property(get=get_PlayerTtl, put=set_PlayerTtl)) int32_t  PlayerTtl;

 __declspec(property(get=get_Players, put=set_Players)) ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  Players;

 __declspec(property(get=get_PropertiesListedInLobby, put=set_PropertiesListedInLobby)) ::ArrayW<::StringW>  PropertiesListedInLobby;

 __declspec(property(get=get_PublishUserId, put=set_PublishUserId)) bool  PublishUserId;

 __declspec(property(get=get_SuppressPlayerInfo, put=set_SuppressPlayerInfo)) bool  SuppressPlayerInfo;

 __declspec(property(get=get_SuppressRoomEvents, put=set_SuppressRoomEvents)) bool  SuppressRoomEvents;

/// @brief Field <BroadcastPropertiesChangeToAll>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField, put=__cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField)) bool  _BroadcastPropertiesChangeToAll_k__BackingField;

/// @brief Field <DeleteNullProperties>k__BackingField, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteNullProperties_k__BackingField, put=__cordl_internal_set__DeleteNullProperties_k__BackingField)) bool  _DeleteNullProperties_k__BackingField;

/// @brief Field <LoadBalancingClient>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadBalancingClient_k__BackingField, put=__cordl_internal_set__LoadBalancingClient_k__BackingField)) ::Photon::Realtime::LoadBalancingClient*  _LoadBalancingClient_k__BackingField;

/// @brief Field <PublishUserId>k__BackingField, offset 0x7b, size 0x1 
 __declspec(property(get=__cordl_internal_get__PublishUserId_k__BackingField, put=__cordl_internal_set__PublishUserId_k__BackingField)) bool  _PublishUserId_k__BackingField;

/// @brief Field <SuppressPlayerInfo>k__BackingField, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressPlayerInfo_k__BackingField, put=__cordl_internal_set__SuppressPlayerInfo_k__BackingField)) bool  _SuppressPlayerInfo_k__BackingField;

/// @brief Field <SuppressRoomEvents>k__BackingField, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressRoomEvents_k__BackingField, put=__cordl_internal_set__SuppressRoomEvents_k__BackingField)) bool  _SuppressRoomEvents_k__BackingField;

/// @brief Field isOffline, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOffline, put=__cordl_internal_set_isOffline)) bool  isOffline;

/// @brief Field players, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_players, put=__cordl_internal_set_players)) ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  players;

/// @brief Method AddPlayer, addr 0xa70deac, size 0x84, virtual true, abstract: false, final false
inline bool AddPlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method ClearExpectedUsers, addr 0xa70e02c, size 0x78, virtual false, abstract: false, final false
inline bool ClearExpectedUsers() ;

/// @brief Method GetPlayer, addr 0xa70dfa8, size 0x84, virtual true, abstract: false, final false
inline ::Photon::Realtime::Player* GetPlayer(int32_t  id, bool  findMaster) ;

/// @brief Method InternalCacheProperties, addr 0xa70d640, size 0x70, virtual true, abstract: false, final false
inline void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToCache) ;

/// @brief Method InternalCacheRoomFlags, addr 0xa70d60c, size 0x34, virtual false, abstract: false, final false
inline void InternalCacheRoomFlags(int32_t  roomFlags) ;

static inline ::Photon::Realtime::Room* New_ctor(::StringW  roomName, ::Photon::Realtime::RoomOptions*  options, bool  isOffline) ;

/// @brief Method RemovePlayer, addr 0xa70dd68, size 0x30, virtual true, abstract: false, final false
inline void RemovePlayer(int32_t  id) ;

/// @brief Method RemovePlayer, addr 0xa70dcfc, size 0x6c, virtual true, abstract: false, final false
inline void RemovePlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method SetCustomProperties, addr 0xa70db10, size 0x148, virtual true, abstract: false, final false
inline bool SetCustomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method SetExpectedUsers, addr 0xa70e198, size 0x90, virtual false, abstract: false, final false
inline bool SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers) ;

/// @brief Method SetExpectedUsers, addr 0xa70e0a4, size 0xf4, virtual false, abstract: false, final false
inline bool SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers, ::ArrayW<::StringW>  oldExpectedUsers) ;

/// @brief Method SetMasterClient, addr 0xa70dd98, size 0x114, virtual false, abstract: false, final false
inline bool SetMasterClient(::Photon::Realtime::Player*  masterClientPlayer) ;

/// @brief Method SetPropertiesListedInLobby, addr 0xa70dc58, size 0xa4, virtual false, abstract: false, final false
inline bool SetPropertiesListedInLobby(::ArrayW<::StringW>  lobbyProps) ;

/// @brief Method StorePlayer, addr 0xa70df30, size 0x78, virtual true, abstract: false, final false
inline ::Photon::Realtime::Player* StorePlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method ToString, addr 0xa70e228, size 0x254, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToStringFull, addr 0xa70e47c, size 0x2c0, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr bool const& __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() const;

constexpr bool& __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteNullProperties_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteNullProperties_k__BackingField() ;

constexpr ::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get__LoadBalancingClient_k__BackingField() const;

constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__LoadBalancingClient_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PublishUserId_k__BackingField() const;

constexpr bool& __cordl_internal_get__PublishUserId_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressRoomEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressRoomEvents_k__BackingField() ;

constexpr bool const& __cordl_internal_get_isOffline() const;

constexpr bool& __cordl_internal_get_isOffline() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>* const& __cordl_internal_get_players() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*& __cordl_internal_get_players() ;

constexpr void __cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DeleteNullProperties_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LoadBalancingClient_k__BackingField(::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set__PublishUserId_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SuppressRoomEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_isOffline(bool  value) ;

constexpr void __cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  value) ;

/// @brief Method .ctor, addr 0xa70d470, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  roomName, ::Photon::Realtime::RoomOptions*  options, bool  isOffline) ;

/// @brief Method get_AutoCleanUp, addr 0xa70d418, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoCleanUp() ;

/// [CompilerGenerated]
/// @brief Method get_BroadcastPropertiesChangeToAll, addr 0xa70d420, size 0x8, virtual false, abstract: false, final false
inline bool get_BroadcastPropertiesChangeToAll() ;

/// [CompilerGenerated]
/// @brief Method get_DeleteNullProperties, addr 0xa70d460, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteNullProperties() ;

/// @brief Method get_EmptyRoomTtl, addr 0xa70d384, size 0x8, virtual false, abstract: false, final false
inline int32_t get_EmptyRoomTtl() ;

/// @brief Method get_ExpectedUsers, addr 0xa70d300, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_ExpectedUsers() ;

/// @brief Method get_IsOffline, addr 0xa70d014, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOffline() ;

/// @brief Method get_IsOpen, addr 0xa70d024, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_IsVisible, addr 0xa70d0f8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method get_LoadBalancingClient, addr 0xa70cff4, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::LoadBalancingClient* get_LoadBalancingClient() ;

/// @brief Method get_MasterClientId, addr 0xa70d400, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MasterClientId() ;

/// @brief Method get_MaxPlayers, addr 0xa70d1cc, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_MaxPlayers() ;

/// @brief Method get_Name, addr 0xa70d004, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_PlayerCount, addr 0xa70d2a0, size 0x50, virtual false, abstract: false, final false
inline uint8_t get_PlayerCount() ;

/// @brief Method get_PlayerTtl, addr 0xa70d308, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayerTtl() ;

/// @brief Method get_Players, addr 0xa70d2f0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>* get_Players() ;

/// @brief Method get_PropertiesListedInLobby, addr 0xa70d408, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_PropertiesListedInLobby() ;

/// [CompilerGenerated]
/// @brief Method get_PublishUserId, addr 0xa70d450, size 0x8, virtual false, abstract: false, final false
inline bool get_PublishUserId() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressPlayerInfo, addr 0xa70d440, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressPlayerInfo() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressRoomEvents, addr 0xa70d430, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressRoomEvents() ;

/// [CompilerGenerated]
/// @brief Method set_BroadcastPropertiesChangeToAll, addr 0xa70d428, size 0x8, virtual false, abstract: false, final false
inline void set_BroadcastPropertiesChangeToAll(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeleteNullProperties, addr 0xa70d468, size 0x8, virtual false, abstract: false, final false
inline void set_DeleteNullProperties(bool  value) ;

/// @brief Method set_EmptyRoomTtl, addr 0xa70d38c, size 0x74, virtual false, abstract: false, final false
inline void set_EmptyRoomTtl(int32_t  value) ;

/// @brief Method set_IsOffline, addr 0xa70d01c, size 0x8, virtual false, abstract: false, final false
inline void set_IsOffline(bool  value) ;

/// @brief Method set_IsOpen, addr 0xa70d02c, size 0xcc, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_IsVisible, addr 0xa70d100, size 0xcc, virtual false, abstract: false, final false
inline void set_IsVisible(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LoadBalancingClient, addr 0xa70cffc, size 0x8, virtual false, abstract: false, final false
inline void set_LoadBalancingClient(::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method set_MaxPlayers, addr 0xa70d1d4, size 0xcc, virtual false, abstract: false, final false
inline void set_MaxPlayers(uint8_t  value) ;

/// @brief Method set_Name, addr 0xa70d00c, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_PlayerTtl, addr 0xa70d310, size 0x74, virtual false, abstract: false, final false
inline void set_PlayerTtl(int32_t  value) ;

/// @brief Method set_Players, addr 0xa70d2f8, size 0x8, virtual false, abstract: false, final false
inline void set_Players(::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  value) ;

/// @brief Method set_PropertiesListedInLobby, addr 0xa70d410, size 0x8, virtual false, abstract: false, final false
inline void set_PropertiesListedInLobby(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_PublishUserId, addr 0xa70d458, size 0x8, virtual false, abstract: false, final false
inline void set_PublishUserId(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressPlayerInfo, addr 0xa70d448, size 0x8, virtual false, abstract: false, final false
inline void set_SuppressPlayerInfo(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressRoomEvents, addr 0xa70d438, size 0x8, virtual false, abstract: false, final false
inline void set_SuppressRoomEvents(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Room() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Room(Room && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Room", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Room(Room const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29899};

/// [CompilerGenerated]
/// @brief Field <LoadBalancingClient>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Photon::Realtime::LoadBalancingClient*  ____LoadBalancingClient_k__BackingField;

/// @brief Field isOffline, offset: 0x68, size: 0x1, def value: None
 bool  ___isOffline;

/// @brief Field players, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  ___players;

/// [CompilerGenerated]
/// @brief Field <BroadcastPropertiesChangeToAll>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____BroadcastPropertiesChangeToAll_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SuppressRoomEvents>k__BackingField, offset: 0x79, size: 0x1, def value: None
 bool  ____SuppressRoomEvents_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SuppressPlayerInfo>k__BackingField, offset: 0x7a, size: 0x1, def value: None
 bool  ____SuppressPlayerInfo_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PublishUserId>k__BackingField, offset: 0x7b, size: 0x1, def value: None
 bool  ____PublishUserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DeleteNullProperties>k__BackingField, offset: 0x7c, size: 0x1, def value: None
 bool  ____DeleteNullProperties_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::Room, ____LoadBalancingClient_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ___isOffline) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ___players) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____BroadcastPropertiesChangeToAll_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____SuppressRoomEvents_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____SuppressPlayerInfo_k__BackingField) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____PublishUserId_k__BackingField) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Room, ____DeleteNullProperties_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::Room) == 0x80, "Size mismatch!");

} // namespace end def Photon::Realtime
