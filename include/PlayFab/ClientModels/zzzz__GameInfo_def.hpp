#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__GameInstanceState_def.hpp"
#include "PlayFab/ClientModels/zzzz__Region_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameInfo)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GameInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GameInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GameInfo*, "PlayFab.ClientModels", "GameInfo");
// Dependencies PlayFab.ClientModels.GameInstanceState, PlayFab.ClientModels.Region, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GameInfo
class CORDL_TYPE GameInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field BuildVersion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildVersion, put=__cordl_internal_set_BuildVersion)) ::StringW  BuildVersion;

/// @brief Field GameMode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameMode, put=__cordl_internal_set_GameMode)) ::StringW  GameMode;

/// @brief Field GameServerData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameServerData, put=__cordl_internal_set_GameServerData)) ::StringW  GameServerData;

/// @brief Field GameServerStateEnum, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_GameServerStateEnum, put=__cordl_internal_set_GameServerStateEnum)) ::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState>  GameServerStateEnum;

/// @brief Field LastHeartbeat, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastHeartbeat, put=__cordl_internal_set_LastHeartbeat)) ::System::Nullable_1<::System::DateTime>  LastHeartbeat;

/// @brief Field LobbyID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyID, put=__cordl_internal_set_LobbyID)) ::StringW  LobbyID;

/// @brief Field MaxPlayers, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxPlayers, put=__cordl_internal_set_MaxPlayers)) ::System::Nullable_1<int32_t>  MaxPlayers;

/// @brief Field PlayerUserIds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerUserIds, put=__cordl_internal_set_PlayerUserIds)) ::System::Collections::Generic::List_1<::StringW>*  PlayerUserIds;

/// @brief Field Region, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::System::Nullable_1<::PlayFab::ClientModels::Region>  Region;

/// @brief Field RunTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_RunTime, put=__cordl_internal_set_RunTime)) uint32_t  RunTime;

/// @brief Field ServerIPV4Address, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerIPV4Address, put=__cordl_internal_set_ServerIPV4Address)) ::StringW  ServerIPV4Address;

/// @brief Field ServerIPV6Address, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerIPV6Address, put=__cordl_internal_set_ServerIPV6Address)) ::StringW  ServerIPV6Address;

/// @brief Field ServerPort, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_ServerPort, put=__cordl_internal_set_ServerPort)) ::System::Nullable_1<int32_t>  ServerPort;

/// @brief Field ServerPublicDNSName, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerPublicDNSName, put=__cordl_internal_set_ServerPublicDNSName)) ::StringW  ServerPublicDNSName;

/// @brief Field StatisticName, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Tags, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Tags;

static inline ::PlayFab::ClientModels::GameInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildVersion() const;

constexpr ::StringW& __cordl_internal_get_BuildVersion() ;

constexpr ::StringW const& __cordl_internal_get_GameMode() const;

constexpr ::StringW& __cordl_internal_get_GameMode() ;

constexpr ::StringW const& __cordl_internal_get_GameServerData() const;

constexpr ::StringW& __cordl_internal_get_GameServerData() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState> const& __cordl_internal_get_GameServerStateEnum() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState>& __cordl_internal_get_GameServerStateEnum() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastHeartbeat() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastHeartbeat() ;

constexpr ::StringW const& __cordl_internal_get_LobbyID() const;

constexpr ::StringW& __cordl_internal_get_LobbyID() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_MaxPlayers() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_MaxPlayers() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PlayerUserIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PlayerUserIds() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& __cordl_internal_get_Region() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& __cordl_internal_get_Region() ;

constexpr uint32_t const& __cordl_internal_get_RunTime() const;

constexpr uint32_t& __cordl_internal_get_RunTime() ;

constexpr ::StringW const& __cordl_internal_get_ServerIPV4Address() const;

constexpr ::StringW& __cordl_internal_get_ServerIPV4Address() ;

constexpr ::StringW const& __cordl_internal_get_ServerIPV6Address() const;

constexpr ::StringW& __cordl_internal_get_ServerIPV6Address() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ServerPort() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ServerPort() ;

constexpr ::StringW const& __cordl_internal_get_ServerPublicDNSName() const;

constexpr ::StringW& __cordl_internal_get_ServerPublicDNSName() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Tags() ;

constexpr void __cordl_internal_set_BuildVersion(::StringW  value) ;

constexpr void __cordl_internal_set_GameMode(::StringW  value) ;

constexpr void __cordl_internal_set_GameServerData(::StringW  value) ;

constexpr void __cordl_internal_set_GameServerStateEnum(::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState>  value) ;

constexpr void __cordl_internal_set_LastHeartbeat(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_LobbyID(::StringW  value) ;

constexpr void __cordl_internal_set_MaxPlayers(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_PlayerUserIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value) ;

constexpr void __cordl_internal_set_RunTime(uint32_t  value) ;

constexpr void __cordl_internal_set_ServerIPV4Address(::StringW  value) ;

constexpr void __cordl_internal_set_ServerIPV6Address(::StringW  value) ;

constexpr void __cordl_internal_set_ServerPort(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ServerPublicDNSName(::StringW  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84db90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameInfo(GameInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameInfo(GameInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20000};

/// @brief Field BuildVersion, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___BuildVersion;

/// @brief Field GameMode, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___GameMode;

/// @brief Field GameServerData, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___GameServerData;

/// @brief Field GameServerStateEnum, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::GameInstanceState>  ___GameServerStateEnum;

/// @brief Field LastHeartbeat, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastHeartbeat;

/// @brief Field LobbyID, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___LobbyID;

/// @brief Field MaxPlayers, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___MaxPlayers;

/// @brief Field PlayerUserIds, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PlayerUserIds;

/// @brief Field Region, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::Region>  ___Region;

/// @brief Field RunTime, offset: 0x78, size: 0x4, def value: None
 uint32_t  ___RunTime;

/// @brief Field ServerIPV4Address, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___ServerIPV4Address;

/// @brief Field ServerIPV6Address, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___ServerIPV6Address;

/// @brief Field ServerPort, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ServerPort;

/// @brief Size padding 0x98 - 0xb8 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// @brief Field ServerPublicDNSName, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___ServerPublicDNSName;

/// @brief Field StatisticName, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Tags, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___BuildVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___GameMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___GameServerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___GameServerStateEnum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___LastHeartbeat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___LobbyID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___MaxPlayers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___PlayerUserIds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___Region) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___RunTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___ServerIPV4Address) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___ServerIPV6Address) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___ServerPort) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___ServerPublicDNSName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___StatisticName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GameInfo, ___Tags) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GameInfo) == 0x98, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
