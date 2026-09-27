#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInternal_MessageTypeInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInternal_MessageTypeInternal)
// Forward declare root types
namespace GlobalNamespace {
struct PlatformInternal_MessageTypeInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlatformInternal_MessageTypeInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInternal_MessageTypeInternal, "Oculus.Platform", "PlatformInternal/MessageTypeInternal");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Platform.PlatformInternal/MessageTypeInternal
struct CORDL_TYPE PlatformInternal_MessageTypeInternal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __PlatformInternal_MessageTypeInternal_Unwrapped
enum struct __PlatformInternal_MessageTypeInternal_Unwrapped : uint32_t {
__E_AbuseReport_LaunchAdvancedReportFlow = static_cast<uint32_t>(0x4cb13a6eu),
__E_Application_ExecuteCoordinatedLaunch = static_cast<uint32_t>(0x267db4f4u),
__E_Application_GetInstalledApplications = static_cast<uint32_t>(0x520f744cu),
__E_Avatar_UpdateMetaData = static_cast<uint32_t>(0x7bcfd98eu),
__E_Cal_FinalizeApplication = static_cast<uint32_t>(0x1da9cbd5u),
__E_Cal_GetSuggestedApplications = static_cast<uint32_t>(0x56707015u),
__E_Cal_ProposeApplication = static_cast<uint32_t>(0x4e83f2ddu),
__E_Colocation_GetCurrentMapUuid = static_cast<uint32_t>(0x34557eb2u),
__E_Colocation_RequestMap = static_cast<uint32_t>(0x3215666du),
__E_Colocation_ShareMap = static_cast<uint32_t>(0x186dc4ddu),
__E_DeviceApplicationIntegrity_GetAttestationToken = static_cast<uint32_t>(0x102fa3deu),
__E_GraphAPI_Get = static_cast<uint32_t>(0x30ff006eu),
__E_GraphAPI_Post = static_cast<uint32_t>(0x76a5a7c4u),
__E_HTTP_Get = static_cast<uint32_t>(0x6fb63223u),
__E_HTTP_GetToFile = static_cast<uint32_t>(0x4e81dc59u),
__E_HTTP_MultiPartPost = static_cast<uint32_t>(0x5842d210u),
__E_HTTP_Post = static_cast<uint32_t>(0x6b36a54fu),
__E_Livestreaming_IsAllowedForApplication = static_cast<uint32_t>(0xb6d8d76u),
__E_Livestreaming_StartPartyStream = static_cast<uint32_t>(0x7b2f5cdcu),
__E_Livestreaming_StartStream = static_cast<uint32_t>(0x501ac7beu),
__E_Livestreaming_StopPartyStream = static_cast<uint32_t>(0x27670f58u),
__E_Livestreaming_StopStream = static_cast<uint32_t>(0x44e40dcau),
__E_Livestreaming_UpdateMicStatus = static_cast<uint32_t>(0x1c577d87u),
__E_NetSync_Connect = static_cast<uint32_t>(0x646d855fu),
__E_NetSync_Disconnect = static_cast<uint32_t>(0x1569feb5u),
__E_NetSync_GetSessions = static_cast<uint32_t>(0x6ed60a35u),
__E_NetSync_GetVoipAttenuation = static_cast<uint32_t>(0x112aca17u),
__E_NetSync_GetVoipAttenuationDefault = static_cast<uint32_t>(0x577ba8a0u),
__E_NetSync_SetVoipAttenuation = static_cast<uint32_t>(0x3497d7f6u),
__E_NetSync_SetVoipAttenuationModel = static_cast<uint32_t>(0x6a94ad8eu),
__E_NetSync_SetVoipChannelCfg = static_cast<uint32_t>(0x5c95a4f3u),
__E_NetSync_SetVoipGroup = static_cast<uint32_t>(0x58129c8eu),
__E_NetSync_SetVoipListentoChannels = static_cast<uint32_t>(0x5ed0ea32u),
__E_NetSync_SetVoipMicSource = static_cast<uint32_t>(0x3302f770u),
__E_NetSync_SetVoipSessionMuted = static_cast<uint32_t>(0x5585ff0au),
__E_NetSync_SetVoipSpeaktoChannels = static_cast<uint32_t>(0x2dafcdd5u),
__E_NetSync_SetVoipStreamMode = static_cast<uint32_t>(0x67e19d37u),
__E_Party_Create = static_cast<uint32_t>(0x1ad31b4fu),
__E_Party_GatherInApplication = static_cast<uint32_t>(0x7287c183u),
__E_Party_Get = static_cast<uint32_t>(0x5e8953bdu),
__E_Party_GetCurrentForUser = static_cast<uint32_t>(0x58cbff2au),
__E_Party_Invite = static_cast<uint32_t>(0x35b5c4e3u),
__E_Party_Join = static_cast<uint32_t>(0x68027c73u),
__E_Party_Leave = static_cast<uint32_t>(0x329206d1u),
__E_RichPresence_SetDestination = static_cast<uint32_t>(0x4f32e10du),
__E_RichPresence_SetIsJoinable = static_cast<uint32_t>(0x3e9b1f61u),
__E_RichPresence_SetLobbySession = static_cast<uint32_t>(0x71010917u),
__E_RichPresence_SetMatchSession = static_cast<uint32_t>(0x63dffc8eu),
__E_Room_CreateOrUpdateAndJoinNamed = static_cast<uint32_t>(0x7c8e0a91u),
__E_Room_GetNamedRooms = static_cast<uint32_t>(0x77d6e8cu),
__E_Room_GetSocialRooms = static_cast<uint32_t>(0x61881d76u),
__E_User_CancelRecordingForReportFlow = static_cast<uint32_t>(0x3e0d149u),
__E_User_GetUserCapabilities = static_cast<uint32_t>(0x121c317cu),
__E_User_LaunchReportFlow = static_cast<uint32_t>(0x5662a011u),
__E_User_LaunchReportFlow2 = static_cast<uint32_t>(0x7f835863u),
__E_User_NewEntitledTestUser = static_cast<uint32_t>(0x11741f03u),
__E_User_NewTestUser = static_cast<uint32_t>(0x36e84f8cu),
__E_User_NewTestUserFriends = static_cast<uint32_t>(0x1ed726c7u),
__E_User_StartRecordingForReportFlow = static_cast<uint32_t>(0x6c6e33e3u),
__E_User_StopRecordingAndLaunchReportFlow = static_cast<uint32_t>(0x60788c8bu),
__E_User_StopRecordingAndLaunchReportFlow2 = static_cast<uint32_t>(0x19c2b32bu),
__E_User_TestUserCreateDeviceManifest = static_cast<uint32_t>(0x6570b2bdu),
__E_Voip_ReportAppVoipSessions = static_cast<uint32_t>(0x185251ceu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformInternal_MessageTypeInternal_Unwrapped () const noexcept {
return static_cast<__PlatformInternal_MessageTypeInternal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlatformInternal_MessageTypeInternal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlatformInternal_MessageTypeInternal(uint32_t  value__) noexcept;

/// @brief Field AbuseReport_LaunchAdvancedReportFlow value: U32(1286683246)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const AbuseReport_LaunchAdvancedReportFlow;

/// @brief Field Application_ExecuteCoordinatedLaunch value: U32(645772532)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Application_ExecuteCoordinatedLaunch;

/// @brief Field Application_GetInstalledApplications value: U32(1376744524)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Application_GetInstalledApplications;

/// @brief Field Avatar_UpdateMetaData value: U32(2077219214)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Avatar_UpdateMetaData;

/// @brief Field Cal_FinalizeApplication value: U32(497667029)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Cal_FinalizeApplication;

/// @brief Field Cal_GetSuggestedApplications value: U32(1450209301)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Cal_GetSuggestedApplications;

/// @brief Field Cal_ProposeApplication value: U32(1317270237)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Cal_ProposeApplication;

/// @brief Field Colocation_GetCurrentMapUuid value: U32(878018226)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Colocation_GetCurrentMapUuid;

/// @brief Field Colocation_RequestMap value: U32(840263277)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Colocation_RequestMap;

/// @brief Field Colocation_ShareMap value: U32(409847005)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Colocation_ShareMap;

/// @brief Field DeviceApplicationIntegrity_GetAttestationToken value: U32(271557598)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const DeviceApplicationIntegrity_GetAttestationToken;

/// @brief Field GraphAPI_Get value: U32(822018158)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const GraphAPI_Get;

/// @brief Field GraphAPI_Post value: U32(1990567876)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const GraphAPI_Post;

/// @brief Field HTTP_Get value: U32(1874211363)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const HTTP_Get;

/// @brief Field HTTP_GetToFile value: U32(1317133401)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const HTTP_GetToFile;

/// @brief Field HTTP_MultiPartPost value: U32(1480774160)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const HTTP_MultiPartPost;

/// @brief Field HTTP_Post value: U32(1798743375)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const HTTP_Post;

/// @brief Field Livestreaming_IsAllowedForApplication value: U32(191729014)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Livestreaming_IsAllowedForApplication;

/// @brief Field Livestreaming_StartPartyStream value: U32(2066701532)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Livestreaming_StartPartyStream;

/// @brief Field Livestreaming_StartStream value: U32(1343932350)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Livestreaming_StartStream;

/// @brief Field Livestreaming_StopPartyStream value: U32(661065560)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Livestreaming_StopPartyStream;

/// @brief Field Livestreaming_StopStream value: U32(1155796426)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Livestreaming_StopStream;

/// @brief Field Livestreaming_UpdateMicStatus value: U32(475495815)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Livestreaming_UpdateMicStatus;

/// @brief Field NetSync_Connect value: U32(1684899167)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_Connect;

/// @brief Field NetSync_Disconnect value: U32(359268021)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_Disconnect;

/// @brief Field NetSync_GetSessions value: U32(1859521077)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_GetSessions;

/// @brief Field NetSync_GetVoipAttenuation value: U32(288016919)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_GetVoipAttenuation;

/// @brief Field NetSync_GetVoipAttenuationDefault value: U32(1467721888)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_GetVoipAttenuationDefault;

/// @brief Field NetSync_SetVoipAttenuation value: U32(882366454)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipAttenuation;

/// @brief Field NetSync_SetVoipAttenuationModel value: U32(1788128654)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipAttenuationModel;

/// @brief Field NetSync_SetVoipChannelCfg value: U32(1553310963)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipChannelCfg;

/// @brief Field NetSync_SetVoipGroup value: U32(1477614734)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipGroup;

/// @brief Field NetSync_SetVoipListentoChannels value: U32(1590749746)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipListentoChannels;

/// @brief Field NetSync_SetVoipMicSource value: U32(855832432)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipMicSource;

/// @brief Field NetSync_SetVoipSessionMuted value: U32(1434844938)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipSessionMuted;

/// @brief Field NetSync_SetVoipSpeaktoChannels value: U32(766496213)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipSpeaktoChannels;

/// @brief Field NetSync_SetVoipStreamMode value: U32(1742839095)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const NetSync_SetVoipStreamMode;

/// @brief Field Party_Create value: U32(450042703)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_Create;

/// @brief Field Party_GatherInApplication value: U32(1921499523)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_GatherInApplication;

/// @brief Field Party_Get value: U32(1586058173)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_Get;

/// @brief Field Party_GetCurrentForUser value: U32(1489764138)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_GetCurrentForUser;

/// @brief Field Party_Invite value: U32(901104867)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_Invite;

/// @brief Field Party_Join value: U32(1744993395)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_Join;

/// @brief Field Party_Leave value: U32(848430801)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Party_Leave;

/// @brief Field RichPresence_SetDestination value: U32(1328734477)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const RichPresence_SetDestination;

/// @brief Field RichPresence_SetIsJoinable value: U32(1050353505)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const RichPresence_SetIsJoinable;

/// @brief Field RichPresence_SetLobbySession value: U32(1895893271)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const RichPresence_SetLobbySession;

/// @brief Field RichPresence_SetMatchSession value: U32(1675623566)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const RichPresence_SetMatchSession;

/// @brief Field Room_CreateOrUpdateAndJoinNamed value: U32(2089683601)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Room_CreateOrUpdateAndJoinNamed;

/// @brief Field Room_GetNamedRooms value: U32(125660812)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Room_GetNamedRooms;

/// @brief Field Room_GetSocialRooms value: U32(1636310390)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Room_GetSocialRooms;

/// @brief Field User_CancelRecordingForReportFlow value: U32(65065289)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_CancelRecordingForReportFlow;

/// @brief Field User_GetUserCapabilities value: U32(303837564)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_GetUserCapabilities;

/// @brief Field User_LaunchReportFlow value: U32(1449304081)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_LaunchReportFlow;

/// @brief Field User_LaunchReportFlow2 value: U32(2139314275)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_LaunchReportFlow2;

/// @brief Field User_NewEntitledTestUser value: U32(292822787)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_NewEntitledTestUser;

/// @brief Field User_NewTestUser value: U32(921194380)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_NewTestUser;

/// @brief Field User_NewTestUserFriends value: U32(517416647)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_NewTestUserFriends;

/// @brief Field User_StartRecordingForReportFlow value: U32(1819161571)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_StartRecordingForReportFlow;

/// @brief Field User_StopRecordingAndLaunchReportFlow value: U32(1618513035)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_StopRecordingAndLaunchReportFlow;

/// @brief Field User_StopRecordingAndLaunchReportFlow2 value: U32(432190251)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_StopRecordingAndLaunchReportFlow2;

/// @brief Field User_TestUserCreateDeviceManifest value: U32(1701884605)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const User_TestUserCreateDeviceManifest;

/// @brief Field Voip_ReportAppVoipSessions value: U32(408048078)
static ::GlobalNamespace::PlatformInternal_MessageTypeInternal const Voip_ReportAppVoipSessions;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInternal_MessageTypeInternal, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInternal_MessageTypeInternal) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
