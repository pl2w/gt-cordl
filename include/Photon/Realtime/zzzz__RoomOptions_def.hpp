#pragma once
// IWYU pragma private; include "Photon/Realtime/RoomOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomOptions)
namespace ExitGames::Client::Photon {
class Hashtable;
}
// Forward declare root types
namespace Photon::Realtime {
class RoomOptions;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::RoomOptions*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::RoomOptions*, "Photon.Realtime", "RoomOptions");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.RoomOptions
class CORDL_TYPE RoomOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BroadcastPropsChangeToAll, put=set_BroadcastPropsChangeToAll)) bool  BroadcastPropsChangeToAll;

 __declspec(property(get=get_CleanupCacheOnLeave, put=set_CleanupCacheOnLeave)) bool  CleanupCacheOnLeave;

/// @brief Field CustomRoomProperties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomRoomProperties, put=__cordl_internal_set_CustomRoomProperties)) ::ExitGames::Client::Photon::Hashtable*  CustomRoomProperties;

/// @brief Field CustomRoomPropertiesForLobby, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomRoomPropertiesForLobby, put=__cordl_internal_set_CustomRoomPropertiesForLobby)) ::ArrayW<::StringW>  CustomRoomPropertiesForLobby;

 __declspec(property(get=get_DeleteNullProperties, put=set_DeleteNullProperties)) bool  DeleteNullProperties;

/// @brief Field EmptyRoomTtl, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_EmptyRoomTtl, put=__cordl_internal_set_EmptyRoomTtl)) int32_t  EmptyRoomTtl;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_IsVisible, put=set_IsVisible)) bool  IsVisible;

/// @brief Field MaxPlayers, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_MaxPlayers, put=__cordl_internal_set_MaxPlayers)) uint8_t  MaxPlayers;

/// @brief Field PlayerTtl, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerTtl, put=__cordl_internal_set_PlayerTtl)) int32_t  PlayerTtl;

/// @brief Field Plugins, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Plugins, put=__cordl_internal_set_Plugins)) ::ArrayW<::StringW>  Plugins;

 __declspec(property(get=get_PublishUserId, put=set_PublishUserId)) bool  PublishUserId;

 __declspec(property(get=get_SuppressPlayerInfo, put=set_SuppressPlayerInfo)) bool  SuppressPlayerInfo;

 __declspec(property(get=get_SuppressRoomEvents, put=set_SuppressRoomEvents)) bool  SuppressRoomEvents;

/// @brief Field <DeleteNullProperties>k__BackingField, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteNullProperties_k__BackingField, put=__cordl_internal_set__DeleteNullProperties_k__BackingField)) bool  _DeleteNullProperties_k__BackingField;

/// @brief Field <PublishUserId>k__BackingField, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__PublishUserId_k__BackingField, put=__cordl_internal_set__PublishUserId_k__BackingField)) bool  _PublishUserId_k__BackingField;

/// @brief Field <SuppressPlayerInfo>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressPlayerInfo_k__BackingField, put=__cordl_internal_set__SuppressPlayerInfo_k__BackingField)) bool  _SuppressPlayerInfo_k__BackingField;

/// @brief Field <SuppressRoomEvents>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__SuppressRoomEvents_k__BackingField, put=__cordl_internal_set__SuppressRoomEvents_k__BackingField)) bool  _SuppressRoomEvents_k__BackingField;

/// @brief Field broadcastPropsChangeToAll, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_broadcastPropsChangeToAll, put=__cordl_internal_set_broadcastPropsChangeToAll)) bool  broadcastPropsChangeToAll;

/// @brief Field cleanupCacheOnLeave, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_cleanupCacheOnLeave, put=__cordl_internal_set_cleanupCacheOnLeave)) bool  cleanupCacheOnLeave;

/// @brief Field isOpen, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOpen, put=__cordl_internal_set_isOpen)) bool  isOpen;

/// @brief Field isVisible, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isVisible, put=__cordl_internal_set_isVisible)) bool  isVisible;

static inline ::Photon::Realtime::RoomOptions* New_ctor() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get_CustomRoomProperties() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_CustomRoomProperties() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_CustomRoomPropertiesForLobby() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_CustomRoomPropertiesForLobby() ;

constexpr int32_t const& __cordl_internal_get_EmptyRoomTtl() const;

constexpr int32_t& __cordl_internal_get_EmptyRoomTtl() ;

constexpr uint8_t const& __cordl_internal_get_MaxPlayers() const;

constexpr uint8_t& __cordl_internal_get_MaxPlayers() ;

constexpr int32_t const& __cordl_internal_get_PlayerTtl() const;

constexpr int32_t& __cordl_internal_get_PlayerTtl() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_Plugins() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_Plugins() ;

constexpr bool const& __cordl_internal_get__DeleteNullProperties_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteNullProperties_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PublishUserId_k__BackingField() const;

constexpr bool& __cordl_internal_get__PublishUserId_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressPlayerInfo_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SuppressRoomEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__SuppressRoomEvents_k__BackingField() ;

constexpr bool const& __cordl_internal_get_broadcastPropsChangeToAll() const;

constexpr bool& __cordl_internal_get_broadcastPropsChangeToAll() ;

constexpr bool const& __cordl_internal_get_cleanupCacheOnLeave() const;

constexpr bool& __cordl_internal_get_cleanupCacheOnLeave() ;

constexpr bool const& __cordl_internal_get_isOpen() const;

constexpr bool& __cordl_internal_get_isOpen() ;

constexpr bool const& __cordl_internal_get_isVisible() const;

constexpr bool& __cordl_internal_get_isVisible() ;

constexpr void __cordl_internal_set_CustomRoomProperties(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set_CustomRoomPropertiesForLobby(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_EmptyRoomTtl(int32_t  value) ;

constexpr void __cordl_internal_set_MaxPlayers(uint8_t  value) ;

constexpr void __cordl_internal_set_PlayerTtl(int32_t  value) ;

constexpr void __cordl_internal_set_Plugins(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__DeleteNullProperties_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PublishUserId_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SuppressRoomEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_broadcastPropsChangeToAll(bool  value) ;

constexpr void __cordl_internal_set_cleanupCacheOnLeave(bool  value) ;

constexpr void __cordl_internal_set_isOpen(bool  value) ;

constexpr void __cordl_internal_set_isVisible(bool  value) ;

/// @brief Method .ctor, addr 0xa706fc4, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BroadcastPropsChangeToAll, addr 0xa709644, size 0x8, virtual false, abstract: false, final false
inline bool get_BroadcastPropsChangeToAll() ;

/// @brief Method get_CleanupCacheOnLeave, addr 0xa7095f4, size 0x8, virtual false, abstract: false, final false
inline bool get_CleanupCacheOnLeave() ;

/// [CompilerGenerated]
/// @brief Method get_DeleteNullProperties, addr 0xa709634, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteNullProperties() ;

/// @brief Method get_IsOpen, addr 0xa7095e4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_IsVisible, addr 0xa7095d4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method get_PublishUserId, addr 0xa709624, size 0x8, virtual false, abstract: false, final false
inline bool get_PublishUserId() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressPlayerInfo, addr 0xa709614, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressPlayerInfo() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressRoomEvents, addr 0xa709604, size 0x8, virtual false, abstract: false, final false
inline bool get_SuppressRoomEvents() ;

/// @brief Method set_BroadcastPropsChangeToAll, addr 0xa70964c, size 0x8, virtual false, abstract: false, final false
inline void set_BroadcastPropsChangeToAll(bool  value) ;

/// @brief Method set_CleanupCacheOnLeave, addr 0xa7095fc, size 0x8, virtual false, abstract: false, final false
inline void set_CleanupCacheOnLeave(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeleteNullProperties, addr 0xa70963c, size 0x8, virtual false, abstract: false, final false
inline void set_DeleteNullProperties(bool  value) ;

/// @brief Method set_IsOpen, addr 0xa7095ec, size 0x8, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_IsVisible, addr 0xa7095dc, size 0x8, virtual false, abstract: false, final false
inline void set_IsVisible(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PublishUserId, addr 0xa70962c, size 0x8, virtual false, abstract: false, final false
inline void set_PublishUserId(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressPlayerInfo, addr 0xa70961c, size 0x8, virtual false, abstract: false, final false
inline void set_SuppressPlayerInfo(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressRoomEvents, addr 0xa70960c, size 0x8, virtual false, abstract: false, final false
inline void set_SuppressRoomEvents(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomOptions(RoomOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomOptions(RoomOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29882};

/// @brief Field isVisible, offset: 0x10, size: 0x1, def value: None
 bool  ___isVisible;

/// @brief Field isOpen, offset: 0x11, size: 0x1, def value: None
 bool  ___isOpen;

/// @brief Field MaxPlayers, offset: 0x12, size: 0x1, def value: None
 uint8_t  ___MaxPlayers;

/// @brief Field PlayerTtl, offset: 0x14, size: 0x4, def value: None
 int32_t  ___PlayerTtl;

/// @brief Field EmptyRoomTtl, offset: 0x18, size: 0x4, def value: None
 int32_t  ___EmptyRoomTtl;

/// @brief Field cleanupCacheOnLeave, offset: 0x1c, size: 0x1, def value: None
 bool  ___cleanupCacheOnLeave;

/// @brief Field CustomRoomProperties, offset: 0x20, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ___CustomRoomProperties;

/// @brief Field CustomRoomPropertiesForLobby, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___CustomRoomPropertiesForLobby;

/// @brief Field Plugins, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___Plugins;

/// [CompilerGenerated]
/// @brief Field <SuppressRoomEvents>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____SuppressRoomEvents_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SuppressPlayerInfo>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____SuppressPlayerInfo_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PublishUserId>k__BackingField, offset: 0x3a, size: 0x1, def value: None
 bool  ____PublishUserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DeleteNullProperties>k__BackingField, offset: 0x3b, size: 0x1, def value: None
 bool  ____DeleteNullProperties_k__BackingField;

/// @brief Field broadcastPropsChangeToAll, offset: 0x3c, size: 0x1, def value: None
 bool  ___broadcastPropsChangeToAll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::RoomOptions, ___isVisible) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___isOpen) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___MaxPlayers) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___PlayerTtl) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___EmptyRoomTtl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___cleanupCacheOnLeave) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___CustomRoomProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___CustomRoomPropertiesForLobby) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___Plugins) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____SuppressRoomEvents_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____SuppressPlayerInfo_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____PublishUserId_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ____DeleteNullProperties_k__BackingField) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::RoomOptions, ___broadcastPropsChangeToAll) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::RoomOptions) == 0x40, "Size mismatch!");

} // namespace end def Photon::Realtime
