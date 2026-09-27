#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipClientApiClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipApiClient_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipClientApiClient)
namespace GlobalNamespace {
class AddSharedGroupMembersCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class AuthRefreshRequiredDelegateWrapper;
}
namespace GlobalNamespace {
class ClientConsumeConsumableCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ClientGetBulkSubscriptionsCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ClientGetMySubscriptionCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ClientGetPermissionsCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class CreateReportCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class CreateSharedGroupCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class DeleteUserDataCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class FinalizeApplePurchaseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class FinalizeGooglePurchaseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class FinalizeSteamPurchaseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class GetFileCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetMatchmakingStatusCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetMergedInventoryCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetProgressionTreesForPlayerCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetSharedGroupDataCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetStorefrontRequestCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class GetUserDataCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class GetUserInventoryCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class InitSteamPurchaseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ListGameSessionsCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class ListMothershipTitleDataCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ListUserDataCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class LoginCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class MatchmakingPlayerVector;
}
namespace GlobalNamespace {
class MothershipRefreshIAPCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class MothershipWriteEventsRequest;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper;
}
namespace GlobalNamespace {
class PlatformAndSkuVector;
}
namespace GlobalNamespace {
class PlayerSteamBeginLoginResponseCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class PurchaseOfferRequestCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class QuestBeginLoginV2RequestCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class RemoveSharedGroupMembersCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class RequestJoinGameSessionCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class SetUserDataCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class StartMatchmakingCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class StopMatchmakingCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class StringKeyValueMap;
}
namespace GlobalNamespace {
class StringVector;
}
namespace GlobalNamespace {
class UpdateSharedGroupDataCompleteClientDelegateWrapper;
}
namespace GlobalNamespace {
class ValidateUsernameCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class WriteEventsCompleteClientDelegateWrapper;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipClientApiClient;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipClientApiClient*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipClientApiClient*, "", "MothershipClientApiClient");
// Dependencies MothershipApiClient, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipClientApiClient
class CORDL_TYPE MothershipClientApiClient : public ::GlobalNamespace::MothershipApiClient {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method AddSharedGroupMembers, addr 0x55a4fe4, size 0x138, virtual false, abstract: false, final false
inline bool AddSharedGroupMembers(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData) ;

/// @brief Method BeginQuestV2Auth, addr 0x55a3c18, size 0xe4, virtual false, abstract: false, final false
inline bool BeginQuestV2Auth(::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method BeginSteamAuth, addr 0x55a3f04, size 0xdc, virtual false, abstract: false, final false
inline bool BeginSteamAuth(::System::IntPtr  userData) ;

/// @brief Method ClientBulkGetSubscriptions, addr 0x55a6e64, size 0x15c, virtual false, abstract: false, final false
inline bool ClientBulkGetSubscriptions(::StringW  callerId, ::GlobalNamespace::StringVector*  players, ::GlobalNamespace::PlatformAndSkuVector*  platformSkus, ::GlobalNamespace::StringVector*  catalogIds, ::System::IntPtr  userData) ;

/// @brief Method ClientFinalizeSteamSubscriptionPurchase, addr 0x55a6c64, size 0xf4, virtual false, abstract: false, final false
inline bool ClientFinalizeSteamSubscriptionPurchase(::StringW  callerId, ::StringW  steamOrderId, ::System::IntPtr  userData) ;

/// @brief Method ClientGetFileById, addr 0x55a70cc, size 0xf4, virtual false, abstract: false, final false
inline bool ClientGetFileById(::StringW  callerId, ::StringW  fileId, ::System::IntPtr  userData) ;

/// @brief Method ClientGetFileByNameOrAliasAndVersion, addr 0x55a71c0, size 0xfc, virtual false, abstract: false, final false
inline bool ClientGetFileByNameOrAliasAndVersion(::StringW  callerId, ::StringW  fileNameOrAlias, ::StringW  versionOrLatest, ::System::IntPtr  userData) ;

/// @brief Method ClientGetMatchmakingStatus, addr 0x55a75ec, size 0xf4, virtual false, abstract: false, final false
inline bool ClientGetMatchmakingStatus(::StringW  callerId, ::StringW  ticketId, ::System::IntPtr  userData) ;

/// @brief Method ClientGetMySubscriptions, addr 0x55a684c, size 0xe4, virtual false, abstract: false, final false
inline bool ClientGetMySubscriptions(::StringW  callerId, ::System::IntPtr  userData) ;

/// @brief Method ClientGetPermissions, addr 0x55a665c, size 0xe4, virtual false, abstract: false, final false
inline bool ClientGetPermissions(::StringW  callerId, ::System::IntPtr  userData) ;

/// @brief Method ClientInitSteamSubscriptionPurchase, addr 0x55a6a3c, size 0x11c, virtual false, abstract: false, final false
inline bool ClientInitSteamSubscriptionPurchase(::StringW  callerId, ::StringW  sku, int32_t  priceInUSDCents, int32_t  subscriptionBillingFrequency, ::StringW  subscriptionBillingFrequencyUnit, ::System::IntPtr  userData) ;

/// @brief Method ClientStartMatchmaking, addr 0x55a73c8, size 0x118, virtual false, abstract: false, final false
inline bool ClientStartMatchmaking(::StringW  callerId, ::StringW  gamemode, ::GlobalNamespace::MatchmakingPlayerVector*  players, ::System::IntPtr  userData) ;

/// @brief Method ClientStopMatchmaking, addr 0x55a77ec, size 0xf4, virtual false, abstract: false, final false
inline bool ClientStopMatchmaking(::StringW  callerId, ::StringW  ticketId, ::System::IntPtr  userData) ;

/// @brief Method CompleteQuestV2Auth, addr 0x55a3cfc, size 0xfc, virtual false, abstract: false, final false
inline bool CompleteQuestV2Auth(::StringW  userId, ::StringW  attestationToken, ::StringW  metaNonce, ::System::IntPtr  userData) ;

/// @brief Method CompleteSteamAuth, addr 0x55a3fe0, size 0xf4, virtual false, abstract: false, final false
inline bool CompleteSteamAuth(::StringW  nonce, ::StringW  ticket, ::System::IntPtr  userData) ;

/// @brief Method ConsumeConsumable, addr 0x55a3a18, size 0xf4, virtual false, abstract: false, final false
inline bool ConsumeConsumable(::StringW  callerId, ::StringW  entitlementId, ::System::IntPtr  userData) ;

/// @brief Method CreateReport, addr 0x55a2dc4, size 0x128, virtual false, abstract: false, final false
inline bool CreateReport(::StringW  callerId, ::StringW  reportedUserId, int32_t  category, ::StringW  platform, bool  moddedClient, ::StringW  metadata, ::System::IntPtr  userData) ;

/// @brief Method CreateSharedGroup, addr 0x55a4904, size 0x10c, virtual false, abstract: false, final false
inline bool CreateSharedGroup(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::System::IntPtr  userData) ;

/// @brief Method DeleteUserData, addr 0x55a29ac, size 0x10c, virtual false, abstract: false, final false
inline bool DeleteUserData(::StringW  callerId, ::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData) ;

/// @brief Method Dispose, addr 0x55a1670, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FinalizeApplePurchase, addr 0x55a585c, size 0xf4, virtual false, abstract: false, final false
inline bool FinalizeApplePurchase(::StringW  callerId, ::StringW  appleTransactionId, ::System::IntPtr  userData) ;

/// @brief Method FinalizeGooglePurchase, addr 0x55a565c, size 0xf4, virtual false, abstract: false, final false
inline bool FinalizeGooglePurchase(::StringW  callerId, ::StringW  purchaseToken, ::System::IntPtr  userData) ;

/// @brief Method FinalizeSteamPurchase, addr 0x55a5c74, size 0xf4, virtual false, abstract: false, final false
inline bool FinalizeSteamPurchase(::StringW  callerId, ::StringW  steamOrderId, ::System::IntPtr  userData) ;

/// @brief Method GetMergedInventory, addr 0x55a33e8, size 0xf4, virtual false, abstract: false, final false
inline bool GetMergedInventory(::StringW  callerId, ::StringW  targetId, ::System::IntPtr  userData) ;

/// @brief Method GetProgressionTrackValuesForPlayer, addr 0x55a627c, size 0xe4, virtual false, abstract: false, final false
inline bool GetProgressionTrackValuesForPlayer(::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method GetProgressionTreesForPlayer, addr 0x55a646c, size 0xe4, virtual false, abstract: false, final false
inline bool GetProgressionTreesForPlayer(::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method GetServerTime, addr 0x55a2384, size 0xdc, virtual false, abstract: false, final false
inline int64_t GetServerTime(::StringW  callerId) ;

/// @brief Method GetSharedGroupData, addr 0x55a4b1c, size 0x144, virtual false, abstract: false, final false
inline bool GetSharedGroupData(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  keys, bool  getMembers, ::System::IntPtr  userData) ;

/// @brief Method GetStorefront, addr 0x55a35e8, size 0x10c, virtual false, abstract: false, final false
inline bool GetStorefront(::StringW  callerId, ::GlobalNamespace::StringVector*  offerDisplays, ::System::IntPtr  userData) ;

/// @brief Method GetUserData, addr 0x55a2794, size 0x10c, virtual false, abstract: false, final false
inline bool GetUserData(::StringW  callerId, ::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData) ;

/// @brief Method GetUserInventory, addr 0x55a31f8, size 0xe4, virtual false, abstract: false, final false
inline bool GetUserInventory(::StringW  callerId, ::System::IntPtr  userData) ;

/// @brief Method InitSteamPurchase, addr 0x55a5a5c, size 0x10c, virtual false, abstract: false, final false
inline bool InitSteamPurchase(::StringW  callerId, ::StringW  offerDisplayId, ::StringW  offerId, int32_t  displayIndex, ::System::IntPtr  userData) ;

/// @brief Method ListClientMothershipTitleData, addr 0x55a41e0, size 0x10c, virtual false, abstract: false, final false
inline bool ListClientMothershipTitleData(::StringW  callerId, ::GlobalNamespace::StringVector*  keys, ::System::IntPtr  userData) ;

/// @brief Method ListGameSessions, addr 0x55a44c8, size 0x130, virtual false, abstract: false, final false
inline bool ListGameSessions(::StringW  callerId, int32_t  pageSize, int32_t  pageOffset, ::StringW  region, ::StringW  partition, int32_t  minEmptySlots, int32_t  maxEmptySlots, ::System::IntPtr  userData) ;

/// @brief Method ListUserData, addr 0x55a2bc4, size 0xf4, virtual false, abstract: false, final false
inline bool ListUserData(::StringW  callerId, ::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method LoginWithApple, addr 0x55a2094, size 0x128, virtual false, abstract: false, final false
inline bool LoginWithApple(::StringW  signature, ::StringW  gamePlayerId, ::StringW  teamPlayerId, ::StringW  certUri, ::StringW  salt, ::StringW  timestamp, ::System::IntPtr  userData) ;

/// @brief Method LoginWithGoogle, addr 0x55a1fa0, size 0xf4, virtual false, abstract: false, final false
inline bool LoginWithGoogle(::StringW  token, ::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method LoginWithInsecure1, addr 0x55a1bd0, size 0xf4, virtual false, abstract: false, final false
inline bool LoginWithInsecure1(::StringW  username, ::StringW  accountId, ::System::IntPtr  userData) ;

/// @brief Method LoginWithInsecure2, addr 0x55a1cc4, size 0xf4, virtual false, abstract: false, final false
inline bool LoginWithInsecure2(::StringW  username, ::StringW  accountId, ::System::IntPtr  userData) ;

/// @brief Method LoginWithPSN, addr 0x55a21bc, size 0xe4, virtual false, abstract: false, final false
inline bool LoginWithPSN(::StringW  authCode, ::System::IntPtr  userData) ;

/// @brief Method LoginWithQuest, addr 0x55a1db8, size 0xf4, virtual false, abstract: false, final false
inline bool LoginWithQuest(::StringW  nonce, ::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method LoginWithRift, addr 0x55a1eac, size 0xf4, virtual false, abstract: false, final false
inline bool LoginWithRift(::StringW  nonce, ::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method LoginWithSynthesisVR, addr 0x55a22a0, size 0xe4, virtual false, abstract: false, final false
inline bool LoginWithSynthesisVR(int64_t  deviceId, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::MothershipClientApiClient* New_ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::StringW  websocketUrl, bool  enableRetryQueue, ::StringW  sessionIdUUID) ;

static inline ::GlobalNamespace::MothershipClientApiClient* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method OpenNotificationsSocket, addr 0x55a608c, size 0xe4, virtual false, abstract: false, final false
inline bool OpenNotificationsSocket(::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method PurchaseOffer, addr 0x55a3800, size 0x10c, virtual false, abstract: false, final false
inline bool PurchaseOffer(::StringW  callerId, ::StringW  offerDisplayId, ::StringW  offerId, int32_t  displayIndex, ::System::IntPtr  userData) ;

/// @brief Method RefreshIAP, addr 0x55a546c, size 0xe4, virtual false, abstract: false, final false
inline bool RefreshIAP(::StringW  callerId, ::System::IntPtr  userData) ;

/// @brief Method RemoveSharedGroupMembers, addr 0x55a5228, size 0x138, virtual false, abstract: false, final false
inline bool RemoveSharedGroupMembers(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData) ;

/// @brief Method RequestJoinGameSession, addr 0x55a4704, size 0xf4, virtual false, abstract: false, final false
inline bool RequestJoinGameSession(::StringW  callerId, ::StringW  requestSessionId, ::System::IntPtr  userData) ;

/// @brief Method SetAcceptLanguage, addr 0x55a42ec, size 0xd0, virtual false, abstract: false, final false
inline void SetAcceptLanguage(::StringW  language) ;

/// @brief Method SetAddSharedGroupMembersCompleteDelegateWrapper, addr 0x55a4ed8, size 0x10c, virtual false, abstract: false, final false
inline void SetAddSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::AddSharedGroupMembersCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetAuthRefreshRequiredDelegateWrapper, addr 0x55a19b8, size 0x10c, virtual false, abstract: false, final false
inline void SetAuthRefreshRequiredDelegateWrapper(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*  wrapper) ;

/// @brief Method SetClientBulkGetSubscriptionsDelegateWrapper, addr 0x55a6d58, size 0x10c, virtual false, abstract: false, final false
inline void SetClientBulkGetSubscriptionsDelegateWrapper(::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper, addr 0x55a6b58, size 0x10c, virtual false, abstract: false, final false
inline void SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper(::GlobalNamespace::ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetClientGetMatchmakingStatusCompleteDelegateWrapper, addr 0x55a74e0, size 0x10c, virtual false, abstract: false, final false
inline void SetClientGetMatchmakingStatusCompleteDelegateWrapper(::GlobalNamespace::GetMatchmakingStatusCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetClientGetMySubscriptionsDelegateWrapper, addr 0x55a6740, size 0x10c, virtual false, abstract: false, final false
inline void SetClientGetMySubscriptionsDelegateWrapper(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetClientGetPermissionsCompleteDelegateWrapper, addr 0x55a6550, size 0x10c, virtual false, abstract: false, final false
inline void SetClientGetPermissionsCompleteDelegateWrapper(::GlobalNamespace::ClientGetPermissionsCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper, addr 0x55a6930, size 0x10c, virtual false, abstract: false, final false
inline void SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper(::GlobalNamespace::ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetClientStartMatchmakingCompleteDelegateWrapper, addr 0x55a72bc, size 0x10c, virtual false, abstract: false, final false
inline void SetClientStartMatchmakingCompleteDelegateWrapper(::GlobalNamespace::StartMatchmakingCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetClientStopMatchmakingCompleteDelegateWrapper, addr 0x55a76e0, size 0x10c, virtual false, abstract: false, final false
inline void SetClientStopMatchmakingCompleteDelegateWrapper(::GlobalNamespace::StopMatchmakingCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetConsumeConsumableCompleteClientDelegateWrapper, addr 0x55a390c, size 0x10c, virtual false, abstract: false, final false
inline void SetConsumeConsumableCompleteClientDelegateWrapper(::GlobalNamespace::ClientConsumeConsumableCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetCreateReportCompleteClientDelegateWrapper, addr 0x55a2cb8, size 0x10c, virtual false, abstract: false, final false
inline void SetCreateReportCompleteClientDelegateWrapper(::GlobalNamespace::CreateReportCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetCreateSharedGroupCompleteDelegateWrapper, addr 0x55a47f8, size 0x10c, virtual false, abstract: false, final false
inline void SetCreateSharedGroupCompleteDelegateWrapper(::GlobalNamespace::CreateSharedGroupCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetDeleteUserDataCompleteClientDelegateWrapper, addr 0x55a28a0, size 0x10c, virtual false, abstract: false, final false
inline void SetDeleteUserDataCompleteClientDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetFinalizeApplePurchaseCompleteDelegateWrapper, addr 0x55a5750, size 0x10c, virtual false, abstract: false, final false
inline void SetFinalizeApplePurchaseCompleteDelegateWrapper(::GlobalNamespace::FinalizeApplePurchaseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetFinalizeGooglePurchaseCompleteDelegateWrapper, addr 0x55a5550, size 0x10c, virtual false, abstract: false, final false
inline void SetFinalizeGooglePurchaseCompleteDelegateWrapper(::GlobalNamespace::FinalizeGooglePurchaseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetFinalizeSteamPurchaseCompleteDelegateWrapper, addr 0x55a5b68, size 0x10c, virtual false, abstract: false, final false
inline void SetFinalizeSteamPurchaseCompleteDelegateWrapper(::GlobalNamespace::FinalizeSteamPurchaseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetGetFileCompleteDelegateWrapper, addr 0x55a6fc0, size 0x10c, virtual false, abstract: false, final false
inline void SetGetFileCompleteDelegateWrapper(::GlobalNamespace::GetFileCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetGetMergedInventoryCompleteClientDelegateWrapper, addr 0x55a32dc, size 0x10c, virtual false, abstract: false, final false
inline void SetGetMergedInventoryCompleteClientDelegateWrapper(::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper, addr 0x55a6170, size 0x10c, virtual false, abstract: false, final false
inline void SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper, addr 0x55a6360, size 0x10c, virtual false, abstract: false, final false
inline void SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper(::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetGetSharedGroupDataCompleteDelegateWrapper, addr 0x55a4a10, size 0x10c, virtual false, abstract: false, final false
inline void SetGetSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::GetSharedGroupDataCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetGetStorefrontCompleteClientDelegateWrapper, addr 0x55a34dc, size 0x10c, virtual false, abstract: false, final false
inline void SetGetStorefrontCompleteClientDelegateWrapper(::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetGetUserDataCompleteClientDelegateWrapper, addr 0x55a2688, size 0x10c, virtual false, abstract: false, final false
inline void SetGetUserDataCompleteClientDelegateWrapper(::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetGetUserInventoryCompleteClientDelegateWrapper, addr 0x55a30ec, size 0x10c, virtual false, abstract: false, final false
inline void SetGetUserInventoryCompleteClientDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetInitSteamPurchaseCompleteDelegateWrapper, addr 0x55a5950, size 0x10c, virtual false, abstract: false, final false
inline void SetInitSteamPurchaseCompleteDelegateWrapper(::GlobalNamespace::InitSteamPurchaseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetListGameSessionsCompleteDelegateWrapper, addr 0x55a43bc, size 0x10c, virtual false, abstract: false, final false
inline void SetListGameSessionsCompleteDelegateWrapper(::GlobalNamespace::ListGameSessionsCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetListMothershipTitleDataCompleteClientDelegateWrapper, addr 0x55a40d4, size 0x10c, virtual false, abstract: false, final false
inline void SetListMothershipTitleDataCompleteClientDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetListUserDataCompleteClientDelegateWrapper, addr 0x55a2ab8, size 0x10c, virtual false, abstract: false, final false
inline void SetListUserDataCompleteClientDelegateWrapper(::GlobalNamespace::ListUserDataCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetLoginCompleteDelegate, addr 0x55a1ac4, size 0x10c, virtual false, abstract: false, final false
inline void SetLoginCompleteDelegate(::GlobalNamespace::LoginCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetMothershipRefreshIAPCompleteDelegateWrapper, addr 0x55a5360, size 0x10c, virtual false, abstract: false, final false
inline void SetMothershipRefreshIAPCompleteDelegateWrapper(::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetNotificationsMessageDelegateWrapper, addr 0x55a5f80, size 0x10c, virtual false, abstract: false, final false
inline void SetNotificationsMessageDelegateWrapper(::GlobalNamespace::NotificationsMessageDelegateWrapper*  wrapper) ;

/// @brief Method SetPurchaseCompleteClientDelegateWrapper, addr 0x55a36f4, size 0x10c, virtual false, abstract: false, final false
inline void SetPurchaseCompleteClientDelegateWrapper(::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper, addr 0x55a3b0c, size 0x10c, virtual false, abstract: false, final false
inline void SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper(::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetRemoveSharedGroupMembersCompleteDelegateWrapper, addr 0x55a511c, size 0x10c, virtual false, abstract: false, final false
inline void SetRemoveSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::RemoveSharedGroupMembersCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetRequestJoinGameSessionCompleteDelegateWrapper, addr 0x55a45f8, size 0x10c, virtual false, abstract: false, final false
inline void SetRequestJoinGameSessionCompleteDelegateWrapper(::GlobalNamespace::RequestJoinGameSessionCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetSetUserDataCompleteClientDelegateWrapper, addr 0x55a2460, size 0x10c, virtual false, abstract: false, final false
inline void SetSetUserDataCompleteClientDelegateWrapper(::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetSteamBeginRequestCompleteClientDelegateWrapper, addr 0x55a3df8, size 0x10c, virtual false, abstract: false, final false
inline void SetSteamBeginRequestCompleteClientDelegateWrapper(::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetUpdateSharedGroupDataCompleteDelegateWrapper, addr 0x55a4c60, size 0x10c, virtual false, abstract: false, final false
inline void SetUpdateSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::UpdateSharedGroupDataCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method SetUserData, addr 0x55a256c, size 0x11c, virtual false, abstract: false, final false
inline bool SetUserData(::StringW  callerId, ::StringW  userId, ::StringW  keyName, ::StringW  value, int32_t  generation, ::System::IntPtr  userData) ;

/// @brief Method SetValidateUsernameCompleteClientDelegateWrapper, addr 0x55a2eec, size 0x10c, virtual false, abstract: false, final false
inline void SetValidateUsernameCompleteClientDelegateWrapper(::GlobalNamespace::ValidateUsernameCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetWriteEventsCompleteClientDelegateWrapper, addr 0x55a5d68, size 0x10c, virtual false, abstract: false, final false
inline void SetWriteEventsCompleteClientDelegateWrapper(::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper*  wrapper) ;

/// @brief Method Tick, addr 0x55a18e8, size 0xd0, virtual true, abstract: false, final false
inline void Tick(float_t  deltaTimeInSeconds) ;

/// @brief Method UpdateSharedGroupData, addr 0x55a4d6c, size 0x16c, virtual false, abstract: false, final false
inline bool UpdateSharedGroupData(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringKeyValueMap*  data, ::GlobalNamespace::StringKeyValueMap*  customTags, ::GlobalNamespace::StringVector*  keysToRemove, ::StringW  permission, ::System::IntPtr  userData) ;

/// @brief Method ValidateUsername, addr 0x55a2ff8, size 0xf4, virtual false, abstract: false, final false
inline bool ValidateUsername(::StringW  callerId, ::StringW  username, ::System::IntPtr  userData) ;

/// @brief Method WriteEvents, addr 0x55a5e74, size 0x10c, virtual false, abstract: false, final false
inline bool WriteEvents(::StringW  callerId, ::GlobalNamespace::MothershipWriteEventsRequest*  request, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x55a17cc, size 0x11c, virtual false, abstract: false, final false
inline void _ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::StringW  websocketUrl, bool  enableRetryQueue, ::StringW  sessionIdUUID) ;

/// @brief Method .ctor, addr 0x55a14e8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x55a1598, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipClientApiClient*  obj) ;

/// @brief Method swigRelease, addr 0x55a15d8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipClientApiClient*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipClientApiClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipClientApiClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipClientApiClient(MothershipClientApiClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipClientApiClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipClientApiClient(MothershipClientApiClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9316};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipClientApiClient, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipClientApiClient) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
