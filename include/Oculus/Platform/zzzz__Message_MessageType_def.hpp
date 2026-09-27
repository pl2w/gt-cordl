#pragma once
// IWYU pragma private; include "Oculus/Platform/Message_MessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Message_MessageType)
// Forward declare root types
namespace GlobalNamespace {
struct Message_MessageType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Message_MessageType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Message_MessageType, "Oculus.Platform", "Message/MessageType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Platform.Message/MessageType
struct CORDL_TYPE Message_MessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __Message_MessageType_Unwrapped
enum struct __Message_MessageType_Unwrapped : uint32_t {
__E_Unknown = static_cast<uint32_t>(0x0u),
__E_AbuseReport_ReportRequestHandled = static_cast<uint32_t>(0x4b8efc86u),
__E_Achievements_AddCount = static_cast<uint32_t>(0x3e76231u),
__E_Achievements_AddFields = static_cast<uint32_t>(0x14aa2129u),
__E_Achievements_GetAllDefinitions = static_cast<uint32_t>(0x3d3458du),
__E_Achievements_GetAllProgress = static_cast<uint32_t>(0x4f9fde1du),
__E_Achievements_GetDefinitionsByName = static_cast<uint32_t>(0x629101bcu),
__E_Achievements_GetNextAchievementDefinitionArrayPage = static_cast<uint32_t>(0x2a7dd255u),
__E_Achievements_GetNextAchievementProgressArrayPage = static_cast<uint32_t>(0x2f42e727u),
__E_Achievements_GetProgressByName = static_cast<uint32_t>(0x152663b1u),
__E_Achievements_Unlock = static_cast<uint32_t>(0x593ccbddu),
__E_ApplicationLifecycle_GetRegisteredPIDs = static_cast<uint32_t>(0x4e5cf62u),
__E_ApplicationLifecycle_GetSessionKey = static_cast<uint32_t>(0x3aaf591du),
__E_ApplicationLifecycle_RegisterSessionKey = static_cast<uint32_t>(0x4db6aff8u),
__E_Application_CancelAppDownload = static_cast<uint32_t>(0x7c2060deu),
__E_Application_CheckAppDownloadProgress = static_cast<uint32_t>(0x5534a924u),
__E_Application_GetVersion = static_cast<uint32_t>(0x68670a0eu),
__E_Application_InstallAppUpdateAndRelaunch = static_cast<uint32_t>(0x14806b85u),
__E_Application_LaunchOtherApp = static_cast<uint32_t>(0x54e2d1f8u),
__E_Application_StartAppDownload = static_cast<uint32_t>(0x44fc006eu),
__E_AssetFile_Delete = static_cast<uint32_t>(0x6d5d7886u),
__E_AssetFile_DeleteById = static_cast<uint32_t>(0x5ae8cd52u),
__E_AssetFile_DeleteByName = static_cast<uint32_t>(0x420ac1cfu),
__E_AssetFile_Download = static_cast<uint32_t>(0x11449fc5u),
__E_AssetFile_DownloadById = static_cast<uint32_t>(0x2d008992u),
__E_AssetFile_DownloadByName = static_cast<uint32_t>(0x6336cefau),
__E_AssetFile_DownloadCancel = static_cast<uint32_t>(0x80ad3c7u),
__E_AssetFile_DownloadCancelById = static_cast<uint32_t>(0x51659514u),
__E_AssetFile_DownloadCancelByName = static_cast<uint32_t>(0x446aecfau),
__E_AssetFile_GetList = static_cast<uint32_t>(0x4afc6f74u),
__E_AssetFile_Status = static_cast<uint32_t>(0x2d32f60u),
__E_AssetFile_StatusById = static_cast<uint32_t>(0x5d955d38u),
__E_AssetFile_StatusByName = static_cast<uint32_t>(0x41cfda50u),
__E_Avatar_LaunchAvatarEditor = static_cast<uint32_t>(0x5f1e153u),
__E_Challenges_Create = static_cast<uint32_t>(0x6859d641u),
__E_Challenges_DeclineInvite = static_cast<uint32_t>(0x568e76c0u),
__E_Challenges_Delete = static_cast<uint32_t>(0x264885cau),
__E_Challenges_Get = static_cast<uint32_t>(0x77584ef3u),
__E_Challenges_GetEntries = static_cast<uint32_t>(0x121ab45fu),
__E_Challenges_GetEntriesAfterRank = static_cast<uint32_t>(0x8891a7fu),
__E_Challenges_GetEntriesByIds = static_cast<uint32_t>(0x316509dcu),
__E_Challenges_GetList = static_cast<uint32_t>(0x43264356u),
__E_Challenges_GetNextChallenges = static_cast<uint32_t>(0x5b7ca1b6u),
__E_Challenges_GetNextEntries = static_cast<uint32_t>(0x7f4ca0c6u),
__E_Challenges_GetPreviousChallenges = static_cast<uint32_t>(0xeb4040du),
__E_Challenges_GetPreviousEntries = static_cast<uint32_t>(0x78c90470u),
__E_Challenges_Join = static_cast<uint32_t>(0x21248069u),
__E_Challenges_Leave = static_cast<uint32_t>(0x296116e5u),
__E_Challenges_UpdateInfo = static_cast<uint32_t>(0x1175be60u),
__E_DeviceApplicationIntegrity_GetIntegrityToken = static_cast<uint32_t>(0x3271abdau),
__E_Entitlement_GetIsViewerEntitled = static_cast<uint32_t>(0x186b58b1u),
__E_GroupPresence_Clear = static_cast<uint32_t>(0x6daa9cc3u),
__E_GroupPresence_GetInvitableUsers = static_cast<uint32_t>(0x234bc3f1u),
__E_GroupPresence_GetNextApplicationInviteArrayPage = static_cast<uint32_t>(0x4f8c0f2u),
__E_GroupPresence_GetSentInvites = static_cast<uint32_t>(0x8260ab1u),
__E_GroupPresence_LaunchInvitePanel = static_cast<uint32_t>(0xf9ecf9fu),
__E_GroupPresence_LaunchMultiplayerErrorDialog = static_cast<uint32_t>(0x2955af24u),
__E_GroupPresence_LaunchRejoinDialog = static_cast<uint32_t>(0x1577036fu),
__E_GroupPresence_LaunchRosterPanel = static_cast<uint32_t>(0x35728882u),
__E_GroupPresence_SendInvites = static_cast<uint32_t>(0xdcbd364u),
__E_GroupPresence_Set = static_cast<uint32_t>(0x675f5c24u),
__E_GroupPresence_SetDeeplinkMessageOverride = static_cast<uint32_t>(0x521adf0du),
__E_GroupPresence_SetDestination = static_cast<uint32_t>(0x4c5b268au),
__E_GroupPresence_SetIsJoinable = static_cast<uint32_t>(0x2a8f1055u),
__E_GroupPresence_SetLobbySession = static_cast<uint32_t>(0x48ff55beu),
__E_GroupPresence_SetMatchSession = static_cast<uint32_t>(0x314c84b8u),
__E_IAP_ConsumePurchase = static_cast<uint32_t>(0x1fbb72d9u),
__E_IAP_GetNextProductArrayPage = static_cast<uint32_t>(0x1bd94aafu),
__E_IAP_GetNextPurchaseArrayPage = static_cast<uint32_t>(0x47570a95u),
__E_IAP_GetProductsBySKU = static_cast<uint32_t>(0x7e9acaf5u),
__E_IAP_GetViewerPurchases = static_cast<uint32_t>(0x3a0f8419u),
__E_IAP_GetViewerPurchasesDurableCache = static_cast<uint32_t>(0x63599e2bu),
__E_IAP_LaunchCheckoutFlow = static_cast<uint32_t>(0x3f9b0d0du),
__E_LanguagePack_GetCurrent = static_cast<uint32_t>(0x1f90f0d5u),
__E_LanguagePack_SetCurrent = static_cast<uint32_t>(0x5b4fbbe0u),
__E_Leaderboard_Get = static_cast<uint32_t>(0x6ad44ef8u),
__E_Leaderboard_GetEntries = static_cast<uint32_t>(0x5db3474cu),
__E_Leaderboard_GetEntriesAfterRank = static_cast<uint32_t>(0x18378befu),
__E_Leaderboard_GetEntriesByIds = static_cast<uint32_t>(0x39607bfcu),
__E_Leaderboard_GetNextEntries = static_cast<uint32_t>(0x4e207cd9u),
__E_Leaderboard_GetNextLeaderboardArrayPage = static_cast<uint32_t>(0x35f6769bu),
__E_Leaderboard_GetPreviousEntries = static_cast<uint32_t>(0x4901dac0u),
__E_Leaderboard_WriteEntry = static_cast<uint32_t>(0x117fc8feu),
__E_Leaderboard_WriteEntryWithSupplementaryMetric = static_cast<uint32_t>(0x72c692fau),
__E_Media_ShareToFacebook = static_cast<uint32_t>(0xe38aefu),
__E_Notification_MarkAsRead = static_cast<uint32_t>(0x717259e3u),
__E_PushNotification_Register = static_cast<uint32_t>(0x663a8b5fu),
__E_RichPresence_Clear = static_cast<uint32_t>(0x57b752b3u),
__E_RichPresence_GetDestinations = static_cast<uint32_t>(0x586f2d14u),
__E_RichPresence_GetNextDestinationArrayPage = static_cast<uint32_t>(0x67367f45u),
__E_RichPresence_Set = static_cast<uint32_t>(0x3c147509u),
__E_UserAgeCategory_Get = static_cast<uint32_t>(0x21cbe0c0u),
__E_UserAgeCategory_Report = static_cast<uint32_t>(0x2e4dd8d6u),
__E_User_Get = static_cast<uint32_t>(0x6bcf9e47u),
__E_User_GetAccessToken = static_cast<uint32_t>(0x6a85abeu),
__E_User_GetBlockedUsers = static_cast<uint32_t>(0x7d201556u),
__E_User_GetLinkedAccounts = static_cast<uint32_t>(0x5793f456u),
__E_User_GetLoggedInUser = static_cast<uint32_t>(0x436f345du),
__E_User_GetLoggedInUserFriends = static_cast<uint32_t>(0x587c2a8du),
__E_User_GetLoggedInUserManagedInfo = static_cast<uint32_t>(0x70ba3aeeu),
__E_User_GetNextBlockedUserArrayPage = static_cast<uint32_t>(0x7c2afdcbu),
__E_User_GetNextUserArrayPage = static_cast<uint32_t>(0x267cf743u),
__E_User_GetNextUserCapabilityArrayPage = static_cast<uint32_t>(0x2309f399u),
__E_User_GetOrgScopedID = static_cast<uint32_t>(0x18f0b01bu),
__E_User_GetSdkAccounts = static_cast<uint32_t>(0x67526a83u),
__E_User_GetUserProof = static_cast<uint32_t>(0x22810483u),
__E_User_LaunchBlockFlow = static_cast<uint32_t>(0x6fd62528u),
__E_User_LaunchFriendRequestFlow = static_cast<uint32_t>(0x904b598u),
__E_User_LaunchUnblockFlow = static_cast<uint32_t>(0x14a22a97u),
__E_Voip_GetMicrophoneAvailability = static_cast<uint32_t>(0x744ce345u),
__E_Voip_SetSystemVoipSuppressed = static_cast<uint32_t>(0x453fc9aau),
__E_Notification_AbuseReport_ReportButtonPressed = static_cast<uint32_t>(0x24472f6cu),
__E_Notification_ApplicationLifecycle_LaunchIntentChanged = static_cast<uint32_t>(0x4b34ca3u),
__E_Notification_AssetFile_DownloadUpdate = static_cast<uint32_t>(0x2fdd0ccdu),
__E_Notification_GroupPresence_InvitationsSent = static_cast<uint32_t>(0x679a84b6u),
__E_Notification_GroupPresence_JoinIntentReceived = static_cast<uint32_t>(0x773889f6u),
__E_Notification_GroupPresence_LeaveIntentReceived = static_cast<uint32_t>(0x4737ea1du),
__E_Notification_HTTP_Transfer = static_cast<uint32_t>(0x7dd46e2fu),
__E_Notification_Livestreaming_StatusChange = static_cast<uint32_t>(0x2247596eu),
__E_Notification_NetSync_ConnectionStatusChanged = static_cast<uint32_t>(0x73484cau),
__E_Notification_NetSync_SessionsChanged = static_cast<uint32_t>(0x387e7f36u),
__E_Notification_Party_PartyUpdate = static_cast<uint32_t>(0x1d118ab2u),
__E_Notification_Voip_MicrophoneAvailabilityStateUpdate = static_cast<uint32_t>(0x3e20cb57u),
__E_Notification_Voip_SystemVoipState = static_cast<uint32_t>(0x58d254a5u),
__E_Notification_Vrcamera_GetDataChannelMessageUpdate = static_cast<uint32_t>(0x6ee4f33cu),
__E_Notification_Vrcamera_GetSurfaceUpdate = static_cast<uint32_t>(0x37f21084u),
__E_Platform_InitializeWithAccessToken = static_cast<uint32_t>(0x35692f2bu),
__E_Platform_InitializeStandaloneOculus = static_cast<uint32_t>(0x51f8ce0cu),
__E_Platform_InitializeAndroidAsynchronous = static_cast<uint32_t>(0x1ad307b4u),
__E_Platform_InitializeWindowsAsynchronous = static_cast<uint32_t>(0x6da7ba8fu),
__E_Notification_Session_InvitationsSent = static_cast<uint32_t>(0x7f9c880u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Message_MessageType_Unwrapped () const noexcept {
return static_cast<__Message_MessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Message_MessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Message_MessageType(uint32_t  value__) noexcept;

/// @brief Field AbuseReport_ReportRequestHandled value: U32(1267661958)
static ::GlobalNamespace::Message_MessageType const AbuseReport_ReportRequestHandled;

/// @brief Field Achievements_AddCount value: U32(65495601)
static ::GlobalNamespace::Message_MessageType const Achievements_AddCount;

/// @brief Field Achievements_AddFields value: U32(346693929)
static ::GlobalNamespace::Message_MessageType const Achievements_AddFields;

/// @brief Field Achievements_GetAllDefinitions value: U32(64177549)
static ::GlobalNamespace::Message_MessageType const Achievements_GetAllDefinitions;

/// @brief Field Achievements_GetAllProgress value: U32(1335877149)
static ::GlobalNamespace::Message_MessageType const Achievements_GetAllProgress;

/// @brief Field Achievements_GetDefinitionsByName value: U32(1653670332)
static ::GlobalNamespace::Message_MessageType const Achievements_GetDefinitionsByName;

/// @brief Field Achievements_GetNextAchievementDefinitionArrayPage value: U32(712888917)
static ::GlobalNamespace::Message_MessageType const Achievements_GetNextAchievementDefinitionArrayPage;

/// @brief Field Achievements_GetNextAchievementProgressArrayPage value: U32(792913703)
static ::GlobalNamespace::Message_MessageType const Achievements_GetNextAchievementProgressArrayPage;

/// @brief Field Achievements_GetProgressByName value: U32(354837425)
static ::GlobalNamespace::Message_MessageType const Achievements_GetProgressByName;

/// @brief Field Achievements_Unlock value: U32(1497156573)
static ::GlobalNamespace::Message_MessageType const Achievements_Unlock;

/// @brief Field ApplicationLifecycle_GetRegisteredPIDs value: U32(82169698)
static ::GlobalNamespace::Message_MessageType const ApplicationLifecycle_GetRegisteredPIDs;

/// @brief Field ApplicationLifecycle_GetSessionKey value: U32(984570141)
static ::GlobalNamespace::Message_MessageType const ApplicationLifecycle_GetSessionKey;

/// @brief Field ApplicationLifecycle_RegisterSessionKey value: U32(1303818232)
static ::GlobalNamespace::Message_MessageType const ApplicationLifecycle_RegisterSessionKey;

/// @brief Field Application_CancelAppDownload value: U32(2082496734)
static ::GlobalNamespace::Message_MessageType const Application_CancelAppDownload;

/// @brief Field Application_CheckAppDownloadProgress value: U32(1429514532)
static ::GlobalNamespace::Message_MessageType const Application_CheckAppDownloadProgress;

/// @brief Field Application_GetVersion value: U32(1751583246)
static ::GlobalNamespace::Message_MessageType const Application_GetVersion;

/// @brief Field Application_InstallAppUpdateAndRelaunch value: U32(343960453)
static ::GlobalNamespace::Message_MessageType const Application_InstallAppUpdateAndRelaunch;

/// @brief Field Application_LaunchOtherApp value: U32(1424151032)
static ::GlobalNamespace::Message_MessageType const Application_LaunchOtherApp;

/// @brief Field Application_StartAppDownload value: U32(1157365870)
static ::GlobalNamespace::Message_MessageType const Application_StartAppDownload;

/// @brief Field AssetFile_Delete value: U32(1834842246)
static ::GlobalNamespace::Message_MessageType const AssetFile_Delete;

/// @brief Field AssetFile_DeleteById value: U32(1525206354)
static ::GlobalNamespace::Message_MessageType const AssetFile_DeleteById;

/// @brief Field AssetFile_DeleteByName value: U32(1108001231)
static ::GlobalNamespace::Message_MessageType const AssetFile_DeleteByName;

/// @brief Field AssetFile_Download value: U32(289710021)
static ::GlobalNamespace::Message_MessageType const AssetFile_Download;

/// @brief Field AssetFile_DownloadById value: U32(755009938)
static ::GlobalNamespace::Message_MessageType const AssetFile_DownloadById;

/// @brief Field AssetFile_DownloadByName value: U32(1664536314)
static ::GlobalNamespace::Message_MessageType const AssetFile_DownloadByName;

/// @brief Field AssetFile_DownloadCancel value: U32(134927303)
static ::GlobalNamespace::Message_MessageType const AssetFile_DownloadCancel;

/// @brief Field AssetFile_DownloadCancelById value: U32(1365611796)
static ::GlobalNamespace::Message_MessageType const AssetFile_DownloadCancelById;

/// @brief Field AssetFile_DownloadCancelByName value: U32(1147858170)
static ::GlobalNamespace::Message_MessageType const AssetFile_DownloadCancelByName;

/// @brief Field AssetFile_GetList value: U32(1258057588)
static ::GlobalNamespace::Message_MessageType const AssetFile_GetList;

/// @brief Field AssetFile_Status value: U32(47394656)
static ::GlobalNamespace::Message_MessageType const AssetFile_Status;

/// @brief Field AssetFile_StatusById value: U32(1570069816)
static ::GlobalNamespace::Message_MessageType const AssetFile_StatusById;

/// @brief Field AssetFile_StatusByName value: U32(1104140880)
static ::GlobalNamespace::Message_MessageType const AssetFile_StatusByName;

/// @brief Field Avatar_LaunchAvatarEditor value: U32(99737939)
static ::GlobalNamespace::Message_MessageType const Avatar_LaunchAvatarEditor;

/// @brief Field Challenges_Create value: U32(1750718017)
static ::GlobalNamespace::Message_MessageType const Challenges_Create;

/// @brief Field Challenges_DeclineInvite value: U32(1452177088)
static ::GlobalNamespace::Message_MessageType const Challenges_DeclineInvite;

/// @brief Field Challenges_Delete value: U32(642287050)
static ::GlobalNamespace::Message_MessageType const Challenges_Delete;

/// @brief Field Challenges_Get value: U32(2002276083)
static ::GlobalNamespace::Message_MessageType const Challenges_Get;

/// @brief Field Challenges_GetEntries value: U32(303739999)
static ::GlobalNamespace::Message_MessageType const Challenges_GetEntries;

/// @brief Field Challenges_GetEntriesAfterRank value: U32(143202943)
static ::GlobalNamespace::Message_MessageType const Challenges_GetEntriesAfterRank;

/// @brief Field Challenges_GetEntriesByIds value: U32(828705244)
static ::GlobalNamespace::Message_MessageType const Challenges_GetEntriesByIds;

/// @brief Field Challenges_GetList value: U32(1126581078)
static ::GlobalNamespace::Message_MessageType const Challenges_GetList;

/// @brief Field Challenges_GetNextChallenges value: U32(1534894518)
static ::GlobalNamespace::Message_MessageType const Challenges_GetNextChallenges;

/// @brief Field Challenges_GetNextEntries value: U32(2135728326)
static ::GlobalNamespace::Message_MessageType const Challenges_GetNextEntries;

/// @brief Field Challenges_GetPreviousChallenges value: U32(246678541)
static ::GlobalNamespace::Message_MessageType const Challenges_GetPreviousChallenges;

/// @brief Field Challenges_GetPreviousEntries value: U32(2026439792)
static ::GlobalNamespace::Message_MessageType const Challenges_GetPreviousEntries;

/// @brief Field Challenges_Join value: U32(556040297)
static ::GlobalNamespace::Message_MessageType const Challenges_Join;

/// @brief Field Challenges_Leave value: U32(694228709)
static ::GlobalNamespace::Message_MessageType const Challenges_Leave;

/// @brief Field Challenges_UpdateInfo value: U32(292929120)
static ::GlobalNamespace::Message_MessageType const Challenges_UpdateInfo;

/// @brief Field DeviceApplicationIntegrity_GetIntegrityToken value: U32(846310362)
static ::GlobalNamespace::Message_MessageType const DeviceApplicationIntegrity_GetIntegrityToken;

/// @brief Field Entitlement_GetIsViewerEntitled value: U32(409688241)
static ::GlobalNamespace::Message_MessageType const Entitlement_GetIsViewerEntitled;

/// @brief Field GroupPresence_Clear value: U32(1839897795)
static ::GlobalNamespace::Message_MessageType const GroupPresence_Clear;

/// @brief Field GroupPresence_GetInvitableUsers value: U32(592167921)
static ::GlobalNamespace::Message_MessageType const GroupPresence_GetInvitableUsers;

/// @brief Field GroupPresence_GetNextApplicationInviteArrayPage value: U32(83411186)
static ::GlobalNamespace::Message_MessageType const GroupPresence_GetNextApplicationInviteArrayPage;

/// @brief Field GroupPresence_GetSentInvites value: U32(136710833)
static ::GlobalNamespace::Message_MessageType const GroupPresence_GetSentInvites;

/// @brief Field GroupPresence_LaunchInvitePanel value: U32(262066079)
static ::GlobalNamespace::Message_MessageType const GroupPresence_LaunchInvitePanel;

/// @brief Field GroupPresence_LaunchMultiplayerErrorDialog value: U32(693481252)
static ::GlobalNamespace::Message_MessageType const GroupPresence_LaunchMultiplayerErrorDialog;

/// @brief Field GroupPresence_LaunchRejoinDialog value: U32(360121199)
static ::GlobalNamespace::Message_MessageType const GroupPresence_LaunchRejoinDialog;

/// @brief Field GroupPresence_LaunchRosterPanel value: U32(896698498)
static ::GlobalNamespace::Message_MessageType const GroupPresence_LaunchRosterPanel;

/// @brief Field GroupPresence_SendInvites value: U32(231461732)
static ::GlobalNamespace::Message_MessageType const GroupPresence_SendInvites;

/// @brief Field GroupPresence_Set value: U32(1734302756)
static ::GlobalNamespace::Message_MessageType const GroupPresence_Set;

/// @brief Field GroupPresence_SetDeeplinkMessageOverride value: U32(1377492749)
static ::GlobalNamespace::Message_MessageType const GroupPresence_SetDeeplinkMessageOverride;

/// @brief Field GroupPresence_SetDestination value: U32(1281042058)
static ::GlobalNamespace::Message_MessageType const GroupPresence_SetDestination;

/// @brief Field GroupPresence_SetIsJoinable value: U32(714018901)
static ::GlobalNamespace::Message_MessageType const GroupPresence_SetIsJoinable;

/// @brief Field GroupPresence_SetLobbySession value: U32(1224693182)
static ::GlobalNamespace::Message_MessageType const GroupPresence_SetLobbySession;

/// @brief Field GroupPresence_SetMatchSession value: U32(827098296)
static ::GlobalNamespace::Message_MessageType const GroupPresence_SetMatchSession;

/// @brief Field IAP_ConsumePurchase value: U32(532378329)
static ::GlobalNamespace::Message_MessageType const IAP_ConsumePurchase;

/// @brief Field IAP_GetNextProductArrayPage value: U32(467225263)
static ::GlobalNamespace::Message_MessageType const IAP_GetNextProductArrayPage;

/// @brief Field IAP_GetNextPurchaseArrayPage value: U32(1196886677)
static ::GlobalNamespace::Message_MessageType const IAP_GetNextPurchaseArrayPage;

/// @brief Field IAP_GetProductsBySKU value: U32(2124073717)
static ::GlobalNamespace::Message_MessageType const IAP_GetProductsBySKU;

/// @brief Field IAP_GetViewerPurchases value: U32(974095385)
static ::GlobalNamespace::Message_MessageType const IAP_GetViewerPurchases;

/// @brief Field IAP_GetViewerPurchasesDurableCache value: U32(1666817579)
static ::GlobalNamespace::Message_MessageType const IAP_GetViewerPurchasesDurableCache;

/// @brief Field IAP_LaunchCheckoutFlow value: U32(1067126029)
static ::GlobalNamespace::Message_MessageType const IAP_LaunchCheckoutFlow;

/// @brief Field LanguagePack_GetCurrent value: U32(529592533)
static ::GlobalNamespace::Message_MessageType const LanguagePack_GetCurrent;

/// @brief Field LanguagePack_SetCurrent value: U32(1531952096)
static ::GlobalNamespace::Message_MessageType const LanguagePack_SetCurrent;

/// @brief Field Leaderboard_Get value: U32(1792298744)
static ::GlobalNamespace::Message_MessageType const Leaderboard_Get;

/// @brief Field Leaderboard_GetEntries value: U32(1572030284)
static ::GlobalNamespace::Message_MessageType const Leaderboard_GetEntries;

/// @brief Field Leaderboard_GetEntriesAfterRank value: U32(406293487)
static ::GlobalNamespace::Message_MessageType const Leaderboard_GetEntriesAfterRank;

/// @brief Field Leaderboard_GetEntriesByIds value: U32(962624508)
static ::GlobalNamespace::Message_MessageType const Leaderboard_GetEntriesByIds;

/// @brief Field Leaderboard_GetNextEntries value: U32(1310751961)
static ::GlobalNamespace::Message_MessageType const Leaderboard_GetNextEntries;

/// @brief Field Leaderboard_GetNextLeaderboardArrayPage value: U32(905344667)
static ::GlobalNamespace::Message_MessageType const Leaderboard_GetNextLeaderboardArrayPage;

/// @brief Field Leaderboard_GetPreviousEntries value: U32(1224858304)
static ::GlobalNamespace::Message_MessageType const Leaderboard_GetPreviousEntries;

/// @brief Field Leaderboard_WriteEntry value: U32(293587198)
static ::GlobalNamespace::Message_MessageType const Leaderboard_WriteEntry;

/// @brief Field Leaderboard_WriteEntryWithSupplementaryMetric value: U32(1925616378)
static ::GlobalNamespace::Message_MessageType const Leaderboard_WriteEntryWithSupplementaryMetric;

/// @brief Field Media_ShareToFacebook value: U32(14912239)
static ::GlobalNamespace::Message_MessageType const Media_ShareToFacebook;

/// @brief Field Notification_AbuseReport_ReportButtonPressed value: U32(608644972)
static ::GlobalNamespace::Message_MessageType const Notification_AbuseReport_ReportButtonPressed;

/// @brief Field Notification_ApplicationLifecycle_LaunchIntentChanged value: U32(78859427)
static ::GlobalNamespace::Message_MessageType const Notification_ApplicationLifecycle_LaunchIntentChanged;

/// @brief Field Notification_AssetFile_DownloadUpdate value: U32(803015885)
static ::GlobalNamespace::Message_MessageType const Notification_AssetFile_DownloadUpdate;

/// @brief Field Notification_GroupPresence_InvitationsSent value: U32(1738179766)
static ::GlobalNamespace::Message_MessageType const Notification_GroupPresence_InvitationsSent;

/// @brief Field Notification_GroupPresence_JoinIntentReceived value: U32(2000194038)
static ::GlobalNamespace::Message_MessageType const Notification_GroupPresence_JoinIntentReceived;

/// @brief Field Notification_GroupPresence_LeaveIntentReceived value: U32(1194846749)
static ::GlobalNamespace::Message_MessageType const Notification_GroupPresence_LeaveIntentReceived;

/// @brief Field Notification_HTTP_Transfer value: U32(2111073839)
static ::GlobalNamespace::Message_MessageType const Notification_HTTP_Transfer;

/// @brief Field Notification_Livestreaming_StatusChange value: U32(575101294)
static ::GlobalNamespace::Message_MessageType const Notification_Livestreaming_StatusChange;

/// @brief Field Notification_MarkAsRead value: U32(1903319523)
static ::GlobalNamespace::Message_MessageType const Notification_MarkAsRead;

/// @brief Field Notification_NetSync_ConnectionStatusChanged value: U32(120882378)
static ::GlobalNamespace::Message_MessageType const Notification_NetSync_ConnectionStatusChanged;

/// @brief Field Notification_NetSync_SessionsChanged value: U32(947814198)
static ::GlobalNamespace::Message_MessageType const Notification_NetSync_SessionsChanged;

/// @brief Field Notification_Party_PartyUpdate value: U32(487688882)
static ::GlobalNamespace::Message_MessageType const Notification_Party_PartyUpdate;

/// @brief Field Notification_Session_InvitationsSent value: U32(133810304)
static ::GlobalNamespace::Message_MessageType const Notification_Session_InvitationsSent;

/// @brief Field Notification_Voip_MicrophoneAvailabilityStateUpdate value: U32(1042336599)
static ::GlobalNamespace::Message_MessageType const Notification_Voip_MicrophoneAvailabilityStateUpdate;

/// @brief Field Notification_Voip_SystemVoipState value: U32(1490179237)
static ::GlobalNamespace::Message_MessageType const Notification_Voip_SystemVoipState;

/// @brief Field Notification_Vrcamera_GetDataChannelMessageUpdate value: U32(1860498236)
static ::GlobalNamespace::Message_MessageType const Notification_Vrcamera_GetDataChannelMessageUpdate;

/// @brief Field Notification_Vrcamera_GetSurfaceUpdate value: U32(938610820)
static ::GlobalNamespace::Message_MessageType const Notification_Vrcamera_GetSurfaceUpdate;

/// @brief Field Platform_InitializeAndroidAsynchronous value: U32(450037684)
static ::GlobalNamespace::Message_MessageType const Platform_InitializeAndroidAsynchronous;

/// @brief Field Platform_InitializeStandaloneOculus value: U32(1375260172)
static ::GlobalNamespace::Message_MessageType const Platform_InitializeStandaloneOculus;

/// @brief Field Platform_InitializeWindowsAsynchronous value: U32(1839708815)
static ::GlobalNamespace::Message_MessageType const Platform_InitializeWindowsAsynchronous;

/// @brief Field Platform_InitializeWithAccessToken value: U32(896085803)
static ::GlobalNamespace::Message_MessageType const Platform_InitializeWithAccessToken;

/// @brief Field PushNotification_Register value: U32(1715112799)
static ::GlobalNamespace::Message_MessageType const PushNotification_Register;

/// @brief Field RichPresence_Clear value: U32(1471632051)
static ::GlobalNamespace::Message_MessageType const RichPresence_Clear;

/// @brief Field RichPresence_GetDestinations value: U32(1483681044)
static ::GlobalNamespace::Message_MessageType const RichPresence_GetDestinations;

/// @brief Field RichPresence_GetNextDestinationArrayPage value: U32(1731624773)
static ::GlobalNamespace::Message_MessageType const RichPresence_GetNextDestinationArrayPage;

/// @brief Field RichPresence_Set value: U32(1007973641)
static ::GlobalNamespace::Message_MessageType const RichPresence_Set;

/// @brief Field Unknown value: U32(0)
static ::GlobalNamespace::Message_MessageType const Unknown;

/// @brief Field UserAgeCategory_Get value: U32(567009472)
static ::GlobalNamespace::Message_MessageType const UserAgeCategory_Get;

/// @brief Field UserAgeCategory_Report value: U32(776853718)
static ::GlobalNamespace::Message_MessageType const UserAgeCategory_Report;

/// @brief Field User_Get value: U32(1808768583)
static ::GlobalNamespace::Message_MessageType const User_Get;

/// @brief Field User_GetAccessToken value: U32(111696574)
static ::GlobalNamespace::Message_MessageType const User_GetAccessToken;

/// @brief Field User_GetBlockedUsers value: U32(2099254614)
static ::GlobalNamespace::Message_MessageType const User_GetBlockedUsers;

/// @brief Field User_GetLinkedAccounts value: U32(1469314134)
static ::GlobalNamespace::Message_MessageType const User_GetLinkedAccounts;

/// @brief Field User_GetLoggedInUser value: U32(1131361373)
static ::GlobalNamespace::Message_MessageType const User_GetLoggedInUser;

/// @brief Field User_GetLoggedInUserFriends value: U32(1484532365)
static ::GlobalNamespace::Message_MessageType const User_GetLoggedInUserFriends;

/// @brief Field User_GetLoggedInUserManagedInfo value: U32(1891252974)
static ::GlobalNamespace::Message_MessageType const User_GetLoggedInUserManagedInfo;

/// @brief Field User_GetNextBlockedUserArrayPage value: U32(2083192267)
static ::GlobalNamespace::Message_MessageType const User_GetNextBlockedUserArrayPage;

/// @brief Field User_GetNextUserArrayPage value: U32(645723971)
static ::GlobalNamespace::Message_MessageType const User_GetNextUserArrayPage;

/// @brief Field User_GetNextUserCapabilityArrayPage value: U32(587854745)
static ::GlobalNamespace::Message_MessageType const User_GetNextUserCapabilityArrayPage;

/// @brief Field User_GetOrgScopedID value: U32(418426907)
static ::GlobalNamespace::Message_MessageType const User_GetOrgScopedID;

/// @brief Field User_GetSdkAccounts value: U32(1733454467)
static ::GlobalNamespace::Message_MessageType const User_GetSdkAccounts;

/// @brief Field User_GetUserProof value: U32(578880643)
static ::GlobalNamespace::Message_MessageType const User_GetUserProof;

/// @brief Field User_LaunchBlockFlow value: U32(1876305192)
static ::GlobalNamespace::Message_MessageType const User_LaunchBlockFlow;

/// @brief Field User_LaunchFriendRequestFlow value: U32(151303576)
static ::GlobalNamespace::Message_MessageType const User_LaunchFriendRequestFlow;

/// @brief Field User_LaunchUnblockFlow value: U32(346172055)
static ::GlobalNamespace::Message_MessageType const User_LaunchUnblockFlow;

/// @brief Field Voip_GetMicrophoneAvailability value: U32(1951195973)
static ::GlobalNamespace::Message_MessageType const Voip_GetMicrophoneAvailability;

/// @brief Field Voip_SetSystemVoipSuppressed value: U32(1161808298)
static ::GlobalNamespace::Message_MessageType const Voip_SetSystemVoipSuppressed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Message_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Message_MessageType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
