#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomConfig)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion {
class NetworkRunner;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomConfig*, "", "RoomConfig");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomConfig
class CORDL_TYPE RoomConfig : public ::System::Object {
public:
// Declarations
/// @brief Field CustomProps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomProps, put=__cordl_internal_set_CustomProps)) ::ExitGames::Client::Photon::Hashtable*  CustomProps;

 __declspec(property(get=get_EffectiveSearchFilter)) ::ExitGames::Client::Photon::Hashtable*  EffectiveSearchFilter;

 __declspec(property(get=get_IsJoiningWithFriends)) bool  IsJoiningWithFriends;

/// @brief Field MaxPlayers, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_MaxPlayers, put=__cordl_internal_set_MaxPlayers)) uint8_t  MaxPlayers;

/// @brief Field SearchFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SearchFilter, put=__cordl_internal_set_SearchFilter)) ::ExitGames::Client::Photon::Hashtable*  SearchFilter;

/// @brief Field createIfMissing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_createIfMissing, put=__cordl_internal_set_createIfMissing)) bool  createIfMissing;

/// @brief Field isJoinable, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_isJoinable, put=__cordl_internal_set_isJoinable)) bool  isJoinable;

/// @brief Field isPublic, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPublic, put=__cordl_internal_set_isPublic)) bool  isPublic;

/// @brief Field joinFriendIDs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinFriendIDs, put=__cordl_internal_set_joinFriendIDs)) ::ArrayW<::StringW>  joinFriendIDs;

/// @brief Method AnyPublicConfig, addr 0x56ec8b4, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RoomConfig* AnyPublicConfig() ;

/// @brief Method AutoCustomLobbyProps, addr 0x56ec718, size 0x19c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> AutoCustomLobbyProps() ;

/// @brief Method ClearExpectedUsers, addr 0x56ec604, size 0x74, virtual false, abstract: false, final false
inline void ClearExpectedUsers() ;

static inline ::GlobalNamespace::RoomConfig* New_ctor() ;

/// @brief Method SPConfig, addr 0x56e6f34, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RoomConfig* SPConfig() ;

/// @brief Method SetFriendIDs, addr 0x56ec458, size 0x1ac, virtual false, abstract: false, final false
inline void SetFriendIDs(::System::Collections::Generic::List_1<::StringW>*  friendIDs) ;

/// @brief Method SetFusionOpts, addr 0x56e3c18, size 0x48, virtual false, abstract: false, final false
inline void SetFusionOpts(::Fusion::NetworkRunner*  runnerInst) ;

/// @brief Method ToPUNOpts, addr 0x56ec678, size 0xa0, virtual false, abstract: false, final false
inline ::Photon::Realtime::RoomOptions* ToPUNOpts() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get_CustomProps() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_CustomProps() ;

constexpr uint8_t const& __cordl_internal_get_MaxPlayers() const;

constexpr uint8_t& __cordl_internal_get_MaxPlayers() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get_SearchFilter() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_SearchFilter() ;

constexpr bool const& __cordl_internal_get_createIfMissing() const;

constexpr bool& __cordl_internal_get_createIfMissing() ;

constexpr bool const& __cordl_internal_get_isJoinable() const;

constexpr bool& __cordl_internal_get_isJoinable() ;

constexpr bool const& __cordl_internal_get_isPublic() const;

constexpr bool& __cordl_internal_get_isPublic() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_joinFriendIDs() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_joinFriendIDs() ;

constexpr void __cordl_internal_set_CustomProps(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set_MaxPlayers(uint8_t  value) ;

constexpr void __cordl_internal_set_SearchFilter(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set_createIfMissing(bool  value) ;

constexpr void __cordl_internal_set_isJoinable(bool  value) ;

constexpr void __cordl_internal_set_isPublic(bool  value) ;

constexpr void __cordl_internal_set_joinFriendIDs(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x56e589c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EffectiveSearchFilter, addr 0x56ec420, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::Hashtable* get_EffectiveSearchFilter() ;

/// @brief Method get_IsJoiningWithFriends, addr 0x56ec438, size 0x20, virtual false, abstract: false, final false
inline bool get_IsJoiningWithFriends() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomConfig(RoomConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomConfig(RoomConfig const& ) = delete;

/// @brief Field Room_GameModePropKey offset 0xffffffff size 0x8
static constexpr ::ConstString  Room_GameModePropKey{u"gameMode"};

/// @brief Field Room_PlatformPropKey offset 0xffffffff size 0x8
static constexpr ::ConstString  Room_PlatformPropKey{u"platform"};

/// @brief Field Room_ScheduledEventStatePropKey offset 0xffffffff size 0x8
static constexpr ::ConstString  Room_ScheduledEventStatePropKey{u"scheduledEventState"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1137};

/// @brief Field isPublic, offset: 0x10, size: 0x1, def value: None
 bool  ___isPublic;

/// @brief Field isJoinable, offset: 0x11, size: 0x1, def value: None
 bool  ___isJoinable;

/// @brief Field MaxPlayers, offset: 0x12, size: 0x1, def value: None
 uint8_t  ___MaxPlayers;

/// @brief Field CustomProps, offset: 0x18, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ___CustomProps;

/// @brief Field SearchFilter, offset: 0x20, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ___SearchFilter;

/// @brief Field createIfMissing, offset: 0x28, size: 0x1, def value: None
 bool  ___createIfMissing;

/// @brief Field joinFriendIDs, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___joinFriendIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomConfig, ___isPublic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomConfig, ___isJoinable) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomConfig, ___MaxPlayers) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomConfig, ___CustomProps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomConfig, ___SearchFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomConfig, ___createIfMissing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomConfig, ___joinFriendIDs) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomConfig) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
