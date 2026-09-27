#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Room.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Room)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class Player;
}
namespace Fusion::Photon::Realtime {
class RoomOptions;
}
namespace Fusion::Photon::Realtime {
class WebFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class Room;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Room*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Room*, "Fusion.Photon.Realtime", "Room");
// Dependencies Fusion.Photon.Realtime.RoomInfo
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Room
class CORDL_TYPE Room : public ::Fusion::Photon::Realtime::RoomInfo {
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

 __declspec(property(get=get_LoadBalancingClient, put=set_LoadBalancingClient)) ::Fusion::Photon::Realtime::LoadBalancingClient*  LoadBalancingClient;

 __declspec(property(get=get_MasterClientId)) int32_t  MasterClientId;

 __declspec(property(get=get_MaxPlayers, put=set_MaxPlayers)) int32_t  MaxPlayers;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_PlayerCount)) int32_t  PlayerCount;

 __declspec(property(get=get_PlayerTtl, put=set_PlayerTtl)) int32_t  PlayerTtl;

 __declspec(property(get=get_Players, put=set_Players)) ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  Players;

 __declspec(property(get=get_PropertiesListedInLobby, put=set_PropertiesListedInLobby)) ::ArrayW<::StringW>  PropertiesListedInLobby;

 __declspec(property(get=get_PublishUserId, put=set_PublishUserId)) bool  PublishUserId;

 __declspec(property(get=get_SuppressPlayerInfo, put=set_SuppressPlayerInfo)) bool  SuppressPlayerInfo;

 __declspec(property(get=get_SuppressRoomEvents, put=set_SuppressRoomEvents)) bool  SuppressRoomEvents;

/// @brief Field <BroadcastPropertiesChangeToAll>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField, put=__cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField)) bool  _BroadcastPropertiesChangeToAll_k__BackingField;

/// @brief Field <DeleteNullProperties>k__BackingField, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteNullProperties_k__BackingField, put=__cordl_internal_set__DeleteNullProperties_k__BackingField)) bool  _DeleteNullProperties_k__BackingField;

/// @brief Field <LoadBalancingClient>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadBalancingClient_k__BackingField, put=__cordl_internal_set__LoadBalancingClient_k__BackingField)) ::Fusion::Photon::Realtime::LoadBalancingClient*  _LoadBalancingClient_k__BackingField;

/// @brief Field <PublishUserId>k__BackingField, offset 0x7b, size 0x1 
 __declspec(property(get=__cordl_internal_get__PublishUserId_k__BackingField, put=__cordl_internal_set__PublishUserId_k__BackingField)) bool  _PublishUserId_k__BackingField;

/// @brief Field <SuppressPlayerInfo>k__BackingField, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressPlayerInfo_k__BackingField, put=__cordl_internal_set__SuppressPlayerInfo_k__BackingField)) bool  _SuppressPlayerInfo_k__BackingField;

/// @brief Field <SuppressRoomEvents>k__BackingField, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressRoomEvents_k__BackingField, put=__cordl_internal_set__SuppressRoomEvents_k__BackingField)) bool  _SuppressRoomEvents_k__BackingField;

/// @brief Field isOffline, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOffline, put=__cordl_internal_set_isOffline)) bool  isOffline;

/// @brief Field players, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_players, put=__cordl_internal_set_players)) ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  players;

/// @brief Method AddPlayer, addr 0x5f648fc, size 0x84, virtual true, abstract: false, final false
inline bool AddPlayer(::Fusion::Photon::Realtime::Player*  player) ;

/// @brief Method ClearExpectedUsers, addr 0x5f64a7c, size 0x78, virtual false, abstract: false, final false
inline bool ClearExpectedUsers() ;

/// @brief Method GetPlayer, addr 0x5f649f8, size 0x84, virtual true, abstract: false, final false
inline ::Fusion::Photon::Realtime::Player* GetPlayer(int32_t  id, bool  findMaster) ;

/// @brief Method InternalCacheProperties, addr 0x5f64008, size 0x6c, virtual true, abstract: false, final false
inline void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToCache) ;

/// @brief Method InternalCacheRoomFlags, addr 0x5f63fd4, size 0x34, virtual false, abstract: false, final false
inline void InternalCacheRoomFlags(int32_t  roomFlags) ;

static inline ::Fusion::Photon::Realtime::Room* New_ctor(::StringW  roomName, ::Fusion::Photon::Realtime::RoomOptions*  options, bool  isOffline) ;

/// @brief Method RemovePlayer, addr 0x5f647b8, size 0x30, virtual true, abstract: false, final false
inline void RemovePlayer(int32_t  id) ;

/// @brief Method RemovePlayer, addr 0x5f6474c, size 0x6c, virtual true, abstract: false, final false
inline void RemovePlayer(::Fusion::Photon::Realtime::Player*  player) ;

/// @brief Method SetCustomProperties, addr 0x5f64564, size 0x144, virtual true, abstract: false, final false
inline bool SetCustomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method SetExpectedUsers, addr 0x5f64be8, size 0x90, virtual false, abstract: false, final false
inline bool SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers) ;

/// @brief Method SetExpectedUsers, addr 0x5f64af4, size 0xf4, virtual false, abstract: false, final false
inline bool SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers, ::ArrayW<::StringW>  oldExpectedUsers) ;

/// @brief Method SetMasterClient, addr 0x5f647e8, size 0x114, virtual false, abstract: false, final false
inline bool SetMasterClient(::Fusion::Photon::Realtime::Player*  masterClientPlayer) ;

/// @brief Method SetPropertiesListedInLobby, addr 0x5f646a8, size 0xa4, virtual false, abstract: false, final false
inline bool SetPropertiesListedInLobby(::ArrayW<::StringW>  lobbyProps) ;

/// @brief Method StorePlayer, addr 0x5f64980, size 0x78, virtual true, abstract: false, final false
inline ::Fusion::Photon::Realtime::Player* StorePlayer(::Fusion::Photon::Realtime::Player*  player) ;

/// @brief Method ToString, addr 0x5f64c78, size 0x254, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToStringFull, addr 0x5f64ecc, size 0x2c0, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr bool const& __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() const;

constexpr bool& __cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteNullProperties_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteNullProperties_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get__LoadBalancingClient_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get__LoadBalancingClient_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PublishUserId_k__BackingField() const;

constexpr bool& __cordl_internal_get__PublishUserId_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressRoomEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressRoomEvents_k__BackingField() ;

constexpr bool const& __cordl_internal_get_isOffline() const;

constexpr bool& __cordl_internal_get_isOffline() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>* const& __cordl_internal_get_players() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*& __cordl_internal_get_players() ;

constexpr void __cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DeleteNullProperties_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LoadBalancingClient_k__BackingField(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set__PublishUserId_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SuppressRoomEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_isOffline(bool  value) ;

constexpr void __cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  value) ;

/// @brief Method .ctor, addr 0x5f63e30, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  roomName, ::Fusion::Photon::Realtime::RoomOptions*  options, bool  isOffline) ;

/// @brief Method get_AutoCleanUp, addr 0x5f63dd8, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoCleanUp() ;

/// [CompilerGenerated]
/// @brief Method get_BroadcastPropertiesChangeToAll, addr 0x5f63de0, size 0x8, virtual false, abstract: false, final false
inline bool get_BroadcastPropertiesChangeToAll() ;

/// [CompilerGenerated]
/// @brief Method get_DeleteNullProperties, addr 0x5f63e20, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteNullProperties() ;

/// @brief Method get_EmptyRoomTtl, addr 0x5f63d4c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_EmptyRoomTtl() ;

/// @brief Method get_ExpectedUsers, addr 0x5f63cc8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_ExpectedUsers() ;

/// @brief Method get_IsOffline, addr 0x5f5fbcc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOffline() ;

/// @brief Method get_IsOpen, addr 0x5f639b0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_IsVisible, addr 0x5f63a84, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method get_LoadBalancingClient, addr 0x5f63988, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::LoadBalancingClient* get_LoadBalancingClient() ;

/// @brief Method get_MasterClientId, addr 0x5f5f1b8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MasterClientId() ;

/// @brief Method get_MaxPlayers, addr 0x5f63b58, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxPlayers() ;

/// @brief Method get_Name, addr 0x5f63998, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_PlayerCount, addr 0x5f63c6c, size 0x54, virtual false, abstract: false, final false
inline int32_t get_PlayerCount() ;

/// @brief Method get_PlayerTtl, addr 0x5f63cd0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayerTtl() ;

/// @brief Method get_Players, addr 0x5f5f4e4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>* get_Players() ;

/// @brief Method get_PropertiesListedInLobby, addr 0x5f63dc8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_PropertiesListedInLobby() ;

/// [CompilerGenerated]
/// @brief Method get_PublishUserId, addr 0x5f63e10, size 0x8, virtual false, abstract: false, final false
inline bool get_PublishUserId() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressPlayerInfo, addr 0x5f63e00, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressPlayerInfo() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressRoomEvents, addr 0x5f63df0, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressRoomEvents() ;

/// [CompilerGenerated]
/// @brief Method set_BroadcastPropertiesChangeToAll, addr 0x5f63de8, size 0x8, virtual false, abstract: false, final false
inline void set_BroadcastPropertiesChangeToAll(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeleteNullProperties, addr 0x5f63e28, size 0x8, virtual false, abstract: false, final false
inline void set_DeleteNullProperties(bool  value) ;

/// @brief Method set_EmptyRoomTtl, addr 0x5f63d54, size 0x74, virtual false, abstract: false, final false
inline void set_EmptyRoomTtl(int32_t  value) ;

/// @brief Method set_IsOffline, addr 0x5f639a8, size 0x8, virtual false, abstract: false, final false
inline void set_IsOffline(bool  value) ;

/// @brief Method set_IsOpen, addr 0x5f639b8, size 0xcc, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_IsVisible, addr 0x5f63a8c, size 0xcc, virtual false, abstract: false, final false
inline void set_IsVisible(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LoadBalancingClient, addr 0x5f63990, size 0x8, virtual false, abstract: false, final false
inline void set_LoadBalancingClient(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method set_MaxPlayers, addr 0x5f63b60, size 0x10c, virtual false, abstract: false, final false
inline void set_MaxPlayers(int32_t  value) ;

/// @brief Method set_Name, addr 0x5f639a0, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_PlayerTtl, addr 0x5f63cd8, size 0x74, virtual false, abstract: false, final false
inline void set_PlayerTtl(int32_t  value) ;

/// @brief Method set_Players, addr 0x5f63cc0, size 0x8, virtual false, abstract: false, final false
inline void set_Players(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  value) ;

/// @brief Method set_PropertiesListedInLobby, addr 0x5f63dd0, size 0x8, virtual false, abstract: false, final false
inline void set_PropertiesListedInLobby(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_PublishUserId, addr 0x5f63e18, size 0x8, virtual false, abstract: false, final false
inline void set_PublishUserId(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressPlayerInfo, addr 0x5f63e08, size 0x8, virtual false, abstract: false, final false
inline void set_SuppressPlayerInfo(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressRoomEvents, addr 0x5f63df8, size 0x8, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28106};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <LoadBalancingClient>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ____LoadBalancingClient_k__BackingField;

/// @brief Field isOffline, offset: 0x68, size: 0x1, def value: None
 bool  ___isOffline;

/// @brief Field players, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  ___players;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <BroadcastPropertiesChangeToAll>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____BroadcastPropertiesChangeToAll_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SuppressRoomEvents>k__BackingField, offset: 0x79, size: 0x1, def value: None
 bool  ____SuppressRoomEvents_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SuppressPlayerInfo>k__BackingField, offset: 0x7a, size: 0x1, def value: None
 bool  ____SuppressPlayerInfo_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PublishUserId>k__BackingField, offset: 0x7b, size: 0x1, def value: None
 bool  ____PublishUserId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <DeleteNullProperties>k__BackingField, offset: 0x7c, size: 0x1, def value: None
 bool  ____DeleteNullProperties_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Room, ____LoadBalancingClient_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ___isOffline) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ___players) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ____BroadcastPropertiesChangeToAll_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ____SuppressRoomEvents_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ____SuppressPlayerInfo_k__BackingField) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ____PublishUserId_k__BackingField) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Room, ____DeleteNullProperties_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Room) == 0x80, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
