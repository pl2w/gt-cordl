#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipClientApiUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipClientApiUnity)
namespace GlobalNamespace {
class BulkGetSubscriptionsResponse;
}
namespace GlobalNamespace {
class CreateReportResponse;
}
namespace GlobalNamespace {
class FinalizeSteamPurchaseResponse;
}
namespace GlobalNamespace {
class FinalizeSteamSubscriptionPurchaseResponse;
}
namespace GlobalNamespace {
class GetMySubscriptionsResponse;
}
namespace GlobalNamespace {
class GetProgressionTrackValuesForPlayerResponse;
}
namespace GlobalNamespace {
class GetProgressionTreesForPlayerResponse;
}
namespace GlobalNamespace {
class InitSteamPurchaseResponse;
}
namespace GlobalNamespace {
class InitSteamSubscriptionPurchaseResponse;
}
namespace GlobalNamespace {
class ListClientMothershipTitleDataResponse;
}
namespace GlobalNamespace {
class LoginResponse;
}
namespace GlobalNamespace {
class MothershipAuthCallback;
}
namespace GlobalNamespace {
class MothershipAuthRefreshRequiredCallback;
}
namespace GlobalNamespace {
class MothershipBeginQuestCallback;
}
namespace GlobalNamespace {
class MothershipBeginSteamCallback;
}
namespace GlobalNamespace {
class MothershipClientApiClient;
}
namespace GlobalNamespace {
class MothershipConsumeCompleteCallback;
}
namespace GlobalNamespace {
class MothershipConsumeConsumableResponse;
}
namespace GlobalNamespace {
class MothershipCreateReportCallback;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipFinalizeSteamSubscriptionPurchaseCallback;
}
namespace GlobalNamespace {
class MothershipGetFileDetailsCompleteCallback;
}
namespace GlobalNamespace {
class MothershipGetInventoryResponse;
}
namespace GlobalNamespace {
class MothershipGetMergedInventoryCallback;
}
namespace GlobalNamespace {
class MothershipGetMergedInventoryResponse;
}
namespace GlobalNamespace {
class MothershipGetMySubscriptionCallback;
}
namespace GlobalNamespace {
class MothershipGetPlayerProgressionCallback;
}
namespace GlobalNamespace {
class MothershipGetPlayerProgressionTressCallback;
}
namespace GlobalNamespace {
class MothershipGetRoomPlayersSubscriptionsCallback;
}
namespace GlobalNamespace {
class MothershipGetStorefrontCallback;
}
namespace GlobalNamespace {
class MothershipGetStorefrontResponse;
}
namespace GlobalNamespace {
class MothershipGetUserDataCallback;
}
namespace GlobalNamespace {
class MothershipGetUserInventoryCallback;
}
namespace GlobalNamespace {
class MothershipHttpClientUnity;
}
namespace GlobalNamespace {
class MothershipInitSteamSubscriptionPurchaseCallback;
}
namespace GlobalNamespace {
class MothershipListTitleDataCallback;
}
namespace GlobalNamespace {
class MothershipLogCallback;
}
namespace GlobalNamespace {
struct MothershipLogLevel;
}
namespace GlobalNamespace {
class MothershipNotificationsWrapper;
}
namespace GlobalNamespace {
class MothershipPurchaseOfferCallback;
}
namespace GlobalNamespace {
class MothershipPurchaseOfferResponse;
}
namespace GlobalNamespace {
class MothershipRefreshIAPCallback;
}
namespace GlobalNamespace {
class MothershipRefreshIAPResponse;
}
namespace GlobalNamespace {
class MothershipSetUserDataCallback;
}
namespace GlobalNamespace {
class MothershipSharedSettings;
}
namespace GlobalNamespace {
class MothershipSteamFinalizeTransactionCallback;
}
namespace GlobalNamespace {
class MothershipSteamInitTransactionCallback;
}
namespace GlobalNamespace {
class MothershipUserData;
}
namespace GlobalNamespace {
class MothershipWebSocketDispatcher;
}
namespace GlobalNamespace {
class MothershipWebSocketWrapper;
}
namespace GlobalNamespace {
class MothershipWriteEventsCallback;
}
namespace GlobalNamespace {
class MothershipWriteEventsRequest;
}
namespace GlobalNamespace {
class MothershipWriteEventsResponse;
}
namespace GlobalNamespace {
class NotificationsMessageResponse;
}
namespace GlobalNamespace {
class PlayerQuestBeginLoginV2Response;
}
namespace GlobalNamespace {
class PlayerSteamBeginLoginResponse;
}
namespace GlobalNamespace {
class SetUserDataResponse;
}
namespace GlobalNamespace {
class SharedDownloadableFileResult;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipClientApiUnity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipClientApiUnity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipClientApiUnity*, "", "MothershipClientApiUnity");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipClientApiUnity
class CORDL_TYPE MothershipClientApiUnity : public ::System::Object {
public:
// Declarations
/// @brief Field DeploymentId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeploymentId, put=setStaticF_DeploymentId)) ::StringW  DeploymentId;

/// @brief Field EnvironmentId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnvironmentId, put=setStaticF_EnvironmentId)) ::StringW  EnvironmentId;

/// @brief Field MothershipBaseUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MothershipBaseUrl, put=setStaticF_MothershipBaseUrl)) ::StringW  MothershipBaseUrl;

/// @brief Field MothershipWebSocketUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MothershipWebSocketUrl, put=setStaticF_MothershipWebSocketUrl)) ::StringW  MothershipWebSocketUrl;

/// @brief Field OnCloseNotificationSocket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCloseNotificationSocket, put=setStaticF_OnCloseNotificationSocket)) ::System::Action_1<::System::IntPtr>*  OnCloseNotificationSocket;

/// @brief Field OnErrorNotificationSocket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnErrorNotificationSocket, put=setStaticF_OnErrorNotificationSocket)) ::System::Action_1<::System::IntPtr>*  OnErrorNotificationSocket;

/// @brief Field OnMessageNotificationSocket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMessageNotificationSocket, put=setStaticF_OnMessageNotificationSocket)) ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  OnMessageNotificationSocket;

/// @brief Field OnOpenNotificationSocket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnOpenNotificationSocket, put=setStaticF_OnOpenNotificationSocket)) ::System::Action_1<::System::IntPtr>*  OnOpenNotificationSocket;

/// @brief Field SessionId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SessionId, put=setStaticF_SessionId)) ::StringW  SessionId;

/// @brief Field TitleId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TitleId, put=setStaticF_TitleId)) ::StringW  TitleId;

/// @brief Field auth, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_auth, put=setStaticF_auth)) ::GlobalNamespace::MothershipAuthCallback*  auth;

/// @brief Field authRefreshRequiredCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_authRefreshRequiredCallback, put=setStaticF_authRefreshRequiredCallback)) ::GlobalNamespace::MothershipAuthRefreshRequiredCallback*  authRefreshRequiredCallback;

/// @brief Field beginQuestCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beginQuestCallback, put=setStaticF_beginQuestCallback)) ::GlobalNamespace::MothershipBeginQuestCallback*  beginQuestCallback;

/// @brief Field beginSteamCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_beginSteamCallback, put=setStaticF_beginSteamCallback)) ::GlobalNamespace::MothershipBeginSteamCallback*  beginSteamCallback;

/// @brief Field client, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_client, put=setStaticF_client)) ::GlobalNamespace::MothershipClientApiClient*  client;

/// @brief Field consumeConsumableCompleteCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_consumeConsumableCompleteCallback, put=setStaticF_consumeConsumableCompleteCallback)) ::GlobalNamespace::MothershipConsumeCompleteCallback*  consumeConsumableCompleteCallback;

/// @brief Field createReportCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_createReportCallback, put=setStaticF_createReportCallback)) ::GlobalNamespace::MothershipCreateReportCallback*  createReportCallback;

/// @brief Field finalizeSteamPurchaseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_finalizeSteamPurchaseCallback, put=setStaticF_finalizeSteamPurchaseCallback)) ::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*  finalizeSteamPurchaseCallback;

/// @brief Field finalizeSteamSubPurchaseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_finalizeSteamSubPurchaseCallback, put=setStaticF_finalizeSteamSubPurchaseCallback)) ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*  finalizeSteamSubPurchaseCallback;

/// @brief Field getFileDetailsCompleteCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getFileDetailsCompleteCallback, put=setStaticF_getFileDetailsCompleteCallback)) ::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*  getFileDetailsCompleteCallback;

/// @brief Field getMergedInventoryCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getMergedInventoryCallback, put=setStaticF_getMergedInventoryCallback)) ::GlobalNamespace::MothershipGetMergedInventoryCallback*  getMergedInventoryCallback;

/// @brief Field getMySubscriptionCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getMySubscriptionCallback, put=setStaticF_getMySubscriptionCallback)) ::GlobalNamespace::MothershipGetMySubscriptionCallback*  getMySubscriptionCallback;

/// @brief Field getProgressionCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getProgressionCallback, put=setStaticF_getProgressionCallback)) ::GlobalNamespace::MothershipGetPlayerProgressionCallback*  getProgressionCallback;

/// @brief Field getProgressionTreesCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getProgressionTreesCallback, put=setStaticF_getProgressionTreesCallback)) ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*  getProgressionTreesCallback;

/// @brief Field getRoomPlayersSubscriptionsCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getRoomPlayersSubscriptionsCallback, put=setStaticF_getRoomPlayersSubscriptionsCallback)) ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*  getRoomPlayersSubscriptionsCallback;

/// @brief Field getStorefrontCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getStorefrontCallback, put=setStaticF_getStorefrontCallback)) ::GlobalNamespace::MothershipGetStorefrontCallback*  getStorefrontCallback;

/// @brief Field getUserInventoryCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getUserInventoryCallback, put=setStaticF_getUserInventoryCallback)) ::GlobalNamespace::MothershipGetUserInventoryCallback*  getUserInventoryCallback;

/// @brief Field getUserdataCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getUserdataCallback, put=setStaticF_getUserdataCallback)) ::GlobalNamespace::MothershipGetUserDataCallback*  getUserdataCallback;

/// @brief Field http, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_http, put=setStaticF_http)) ::GlobalNamespace::MothershipHttpClientUnity*  http;

/// @brief Field initSteamPurchaseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initSteamPurchaseCallback, put=setStaticF_initSteamPurchaseCallback)) ::GlobalNamespace::MothershipSteamInitTransactionCallback*  initSteamPurchaseCallback;

/// @brief Field initSteamSubPurchaseCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initSteamSubPurchaseCallback, put=setStaticF_initSteamSubPurchaseCallback)) ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*  initSteamSubPurchaseCallback;

/// @brief Field isEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isEnabled, put=setStaticF_isEnabled)) bool  isEnabled;

/// @brief Field listMothershipTitleDataCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_listMothershipTitleDataCallback, put=setStaticF_listMothershipTitleDataCallback)) ::GlobalNamespace::MothershipListTitleDataCallback*  listMothershipTitleDataCallback;

/// @brief Field logCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_logCallback, put=setStaticF_logCallback)) ::GlobalNamespace::MothershipLogCallback*  logCallback;

/// @brief Field notificationWrapper, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_notificationWrapper, put=setStaticF_notificationWrapper)) ::GlobalNamespace::MothershipNotificationsWrapper*  notificationWrapper;

/// @brief Field purchaseOfferCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_purchaseOfferCallback, put=setStaticF_purchaseOfferCallback)) ::GlobalNamespace::MothershipPurchaseOfferCallback*  purchaseOfferCallback;

/// @brief Field refreshIAPCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_refreshIAPCallback, put=setStaticF_refreshIAPCallback)) ::GlobalNamespace::MothershipRefreshIAPCallback*  refreshIAPCallback;

/// @brief Field setUserDataCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setUserDataCallback, put=setStaticF_setUserDataCallback)) ::GlobalNamespace::MothershipSetUserDataCallback*  setUserDataCallback;

/// @brief Field websocket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_websocket, put=setStaticF_websocket)) ::GlobalNamespace::MothershipWebSocketWrapper*  websocket;

/// @brief Field websocketDispatcher, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_websocketDispatcher, put=setStaticF_websocketDispatcher)) ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>  websocketDispatcher;

/// @brief Field writeEventsCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_writeEventsCallback, put=setStaticF_writeEventsCallback)) ::GlobalNamespace::MothershipWriteEventsCallback*  writeEventsCallback;

/// @brief Method CloseWebSockets, addr 0x53bd378, size 0x6c, virtual false, abstract: false, final false
static inline void CloseWebSockets() ;

/// @brief Method CompleteLogInWithQuest, addr 0x53baddc, size 0x188, virtual false, abstract: false, final false
static inline bool CompleteLogInWithQuest(::StringW  userId, ::StringW  attestationToken, ::StringW  nonce, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method CompleteLoginWithSteam, addr 0x53bb580, size 0x180, virtual false, abstract: false, final false
static inline bool CompleteLoginWithSteam(::StringW  nonce, ::StringW  steamTicket, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method ConsumeConsumable, addr 0x53bc494, size 0x194, virtual false, abstract: false, final false
static inline bool ConsumeConsumable(::StringW  entitlementId, ::System::Action_1<::GlobalNamespace::MothershipConsumeConsumableResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method CreateReport, addr 0x53bbc20, size 0x1dc, virtual false, abstract: false, final false
static inline bool CreateReport(::StringW  reportedUserId, int32_t  category, bool  moddedClient, ::StringW  metadata, ::System::Action_1<::GlobalNamespace::CreateReportResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method FinalizeSteamPurchase, addr 0x53bc964, size 0x194, virtual false, abstract: false, final false
static inline bool FinalizeSteamPurchase(::StringW  steamOrderId, ::System::Action_1<::GlobalNamespace::FinalizeSteamPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method FinalizeSteamSubscriptionTransaction, addr 0x53be3d4, size 0x194, virtual false, abstract: false, final false
static inline bool FinalizeSteamSubscriptionTransaction(::StringW  steamOrderId, ::System::Action_1<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method ForgetAllCredentials, addr 0x53ba530, size 0x4, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetAndRefreshMySubscriptions, addr 0x53bdf54, size 0x18c, virtual false, abstract: false, final false
static inline bool GetAndRefreshMySubscriptions(::System::Action_1<::GlobalNamespace::GetMySubscriptionsResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetDLCFileDetails, addr 0x53be568, size 0x194, virtual false, abstract: false, final false
static inline bool GetDLCFileDetails(::StringW  fileId, ::System::Action_1<::GlobalNamespace::SharedDownloadableFileResult*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetPlayerProgressionData, addr 0x53bd7a0, size 0x18c, virtual false, abstract: false, final false
static inline bool GetPlayerProgressionData(::System::Action_1<::GlobalNamespace::GetProgressionTrackValuesForPlayerResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetPlayerProgressionTreesData, addr 0x53bd92c, size 0x18c, virtual false, abstract: false, final false
static inline bool GetPlayerProgressionTreesData(::System::Action_1<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetRoomPlayerSubscriptions, addr 0x53be0e0, size 0x130, virtual false, abstract: false, final false
static inline bool GetRoomPlayerSubscriptions(::ArrayW<::StringW>  playerIds, ::System::Action_1<::GlobalNamespace::BulkGetSubscriptionsResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetSharedSettingsObject, addr 0x53b95a8, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MothershipSharedSettings> GetSharedSettingsObject() ;

/// @brief Method GetStorefront, addr 0x53bc11c, size 0x1c8, virtual false, abstract: false, final false
static inline bool GetStorefront(::ArrayW<::StringW>  offerDisplays, ::System::Action_1<::GlobalNamespace::MothershipGetStorefrontResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetUserDataValue, addr 0x53bb86c, size 0x1e0, virtual false, abstract: false, final false
static inline bool GetUserDataValue(::StringW  keyName, ::System::Action_1<::GlobalNamespace::MothershipUserData*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction, ::StringW  targetId) ;

/// @brief Method GetUserInventory, addr 0x53bbf88, size 0x194, virtual false, abstract: false, final false
static inline bool GetUserInventory(::StringW  TargetPlayerMothershipId, ::System::Action_1<::GlobalNamespace::MothershipGetMergedInventoryResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method GetUserInventory, addr 0x53bbdfc, size 0x18c, virtual false, abstract: false, final false
static inline bool GetUserInventory(::System::Action_1<::GlobalNamespace::MothershipGetInventoryResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method InitSteamPurchase, addr 0x53bc7b4, size 0x1b0, virtual false, abstract: false, final false
static inline bool InitSteamPurchase(::StringW  displayId, ::StringW  offerId, int32_t  displayIndex, ::System::Action_1<::GlobalNamespace::InitSteamPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method InitSteamSubscriptionTransaction, addr 0x53be210, size 0x1c4, virtual false, abstract: false, final false
static inline bool InitSteamSubscriptionTransaction(::StringW  sku, ::StringW  frequencyUnit, int32_t  frequency, int32_t  priceInUSDCents, ::System::Action_1<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method InvokeCloseNotificationSocket, addr 0x53bd638, size 0xb4, virtual false, abstract: false, final false
static inline void InvokeCloseNotificationSocket(/* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method InvokeErrorNotificationSocket, addr 0x53bd6ec, size 0xb4, virtual false, abstract: false, final false
static inline void InvokeErrorNotificationSocket(/* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method InvokeMessageNotificationSocket, addr 0x53bd518, size 0x120, virtual false, abstract: false, final false
static inline void InvokeMessageNotificationSocket(::GlobalNamespace::NotificationsMessageResponse*  notification, /* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method InvokeOpenNotificationSocket, addr 0x53bd464, size 0xb4, virtual false, abstract: false, final false
static inline void InvokeOpenNotificationSocket(/* [NativeInteger] */ ::System::IntPtr  userData) ;

/// @brief Method IsClientLoggedIn, addr 0x53ba52c, size 0x4, virtual false, abstract: false, final false
static inline bool IsClientLoggedIn() ;

/// @brief Method IsEnabled, addr 0x53ba534, size 0x58, virtual false, abstract: false, final false
static inline bool IsEnabled() ;

/// @brief Method ListMothershipTitleData, addr 0x53bdc40, size 0x314, virtual false, abstract: false, final false
static inline bool ListMothershipTitleData(::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::GlobalNamespace::StringVector*  keys, ::System::Action_1<::GlobalNamespace::ListClientMothershipTitleDataResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method LogInWithApple, addr 0x53bb264, size 0x1b8, virtual false, abstract: false, final false
static inline bool LogInWithApple(::StringW  signature, ::StringW  gamePlayerId, ::StringW  teamPlayerId, ::StringW  certUri, ::StringW  salt, ::StringW  timestamp, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method LogInWithGoogle, addr 0x53bb0e4, size 0x180, virtual false, abstract: false, final false
static inline bool LogInWithGoogle(::StringW  token, ::StringW  userId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method LogInWithInsecure1, addr 0x53ba970, size 0x180, virtual false, abstract: false, final false
static inline bool LogInWithInsecure1(::StringW  Username, ::StringW  AccountId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method LogInWithQuest, addr 0x53baaf0, size 0x180, virtual false, abstract: false, final false
static inline bool LogInWithQuest(::StringW  nonce, ::StringW  userId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method LogInWithRift, addr 0x53baf64, size 0x180, virtual false, abstract: false, final false
static inline bool LogInWithRift(::StringW  nonce, ::StringW  userId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method LogInWithSynthesisVR, addr 0x53bb700, size 0x16c, virtual false, abstract: false, final false
static inline bool LogInWithSynthesisVR(int64_t  DeviceId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method OpenNotificationsSocket, addr 0x53bd298, size 0xe0, virtual false, abstract: false, final false
static inline bool OpenNotificationsSocket() ;

/// @brief Method PurchaseOffer, addr 0x53bc2e4, size 0x1b0, virtual false, abstract: false, final false
static inline bool PurchaseOffer(::StringW  offerDisplayId, ::StringW  offerId, int32_t  displayIndex, ::System::Action_1<::GlobalNamespace::MothershipPurchaseOfferResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method RefreshMetaIAP, addr 0x53bc628, size 0x18c, virtual false, abstract: false, final false
static inline bool RefreshMetaIAP(::System::Action_1<::GlobalNamespace::MothershipRefreshIAPResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method SetAuthRefreshedCallback, addr 0x53ba85c, size 0x114, virtual false, abstract: false, final false
static inline void SetAuthRefreshedCallback(::System::Action_1<::StringW>*  callback) ;

/// @brief Method SetLanguage, addr 0x53ba670, size 0xd0, virtual false, abstract: false, final false
static inline void SetLanguage(::StringW  newLanguage) ;

/// @brief Method SetLogCallback, addr 0x53ba740, size 0x11c, virtual false, abstract: false, final false
static inline void SetLogCallback(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  callback) ;

/// @brief Method SetUserDataValue, addr 0x53bba4c, size 0x1d4, virtual false, abstract: false, final false
static inline bool SetUserDataValue(::StringW  keyName, ::StringW  value, ::System::Action_1<::GlobalNamespace::SetUserDataResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction, ::StringW  targetId) ;

/// @brief Method StartLogInWithQuest, addr 0x53bac70, size 0x16c, virtual false, abstract: false, final false
static inline bool StartLogInWithQuest(::StringW  userId, ::System::Action_1<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method StartLoginWithSteam, addr 0x53bb41c, size 0x164, virtual false, abstract: false, final false
static inline bool StartLoginWithSteam(::System::Action_1<::GlobalNamespace::PlayerSteamBeginLoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// @brief Method Tick, addr 0x53ba58c, size 0xe4, virtual false, abstract: false, final false
static inline void Tick(float_t  deltaTime) ;

/// @brief Method TickWebSockets, addr 0x53bd3e4, size 0x80, virtual false, abstract: false, final false
static inline void TickWebSockets(float_t  deltaTime) ;

/// @brief Method WriteEvents, addr 0x53bdab8, size 0x188, virtual false, abstract: false, final false
static inline bool WriteEvents(::StringW  callerId, ::GlobalNamespace::MothershipWriteEventsRequest*  req, ::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction) ;

/// [CompilerGenerated]
/// @brief Method add_OnCloseNotificationSocket, addr 0x53bcec8, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnCloseNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnErrorNotificationSocket, addr 0x53bd0b0, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnErrorNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMessageNotificationSocket, addr 0x53bcce0, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnMessageNotificationSocket(/* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOpenNotificationSocket, addr 0x53bcaf8, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnOpenNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value) ;

static inline ::StringW getStaticF_DeploymentId() ;

static inline ::StringW getStaticF_EnvironmentId() ;

static inline ::StringW getStaticF_MothershipBaseUrl() ;

static inline ::StringW getStaticF_MothershipWebSocketUrl() ;

static inline ::System::Action_1<::System::IntPtr>* getStaticF_OnCloseNotificationSocket() ;

static inline ::System::Action_1<::System::IntPtr>* getStaticF_OnErrorNotificationSocket() ;

static inline ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>* getStaticF_OnMessageNotificationSocket() ;

static inline ::System::Action_1<::System::IntPtr>* getStaticF_OnOpenNotificationSocket() ;

static inline ::StringW getStaticF_SessionId() ;

static inline ::StringW getStaticF_TitleId() ;

static inline ::GlobalNamespace::MothershipAuthCallback* getStaticF_auth() ;

static inline ::GlobalNamespace::MothershipAuthRefreshRequiredCallback* getStaticF_authRefreshRequiredCallback() ;

static inline ::GlobalNamespace::MothershipBeginQuestCallback* getStaticF_beginQuestCallback() ;

static inline ::GlobalNamespace::MothershipBeginSteamCallback* getStaticF_beginSteamCallback() ;

static inline ::GlobalNamespace::MothershipClientApiClient* getStaticF_client() ;

static inline ::GlobalNamespace::MothershipConsumeCompleteCallback* getStaticF_consumeConsumableCompleteCallback() ;

static inline ::GlobalNamespace::MothershipCreateReportCallback* getStaticF_createReportCallback() ;

static inline ::GlobalNamespace::MothershipSteamFinalizeTransactionCallback* getStaticF_finalizeSteamPurchaseCallback() ;

static inline ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback* getStaticF_finalizeSteamSubPurchaseCallback() ;

static inline ::GlobalNamespace::MothershipGetFileDetailsCompleteCallback* getStaticF_getFileDetailsCompleteCallback() ;

static inline ::GlobalNamespace::MothershipGetMergedInventoryCallback* getStaticF_getMergedInventoryCallback() ;

static inline ::GlobalNamespace::MothershipGetMySubscriptionCallback* getStaticF_getMySubscriptionCallback() ;

static inline ::GlobalNamespace::MothershipGetPlayerProgressionCallback* getStaticF_getProgressionCallback() ;

static inline ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback* getStaticF_getProgressionTreesCallback() ;

static inline ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback* getStaticF_getRoomPlayersSubscriptionsCallback() ;

static inline ::GlobalNamespace::MothershipGetStorefrontCallback* getStaticF_getStorefrontCallback() ;

static inline ::GlobalNamespace::MothershipGetUserInventoryCallback* getStaticF_getUserInventoryCallback() ;

static inline ::GlobalNamespace::MothershipGetUserDataCallback* getStaticF_getUserdataCallback() ;

static inline ::GlobalNamespace::MothershipHttpClientUnity* getStaticF_http() ;

static inline ::GlobalNamespace::MothershipSteamInitTransactionCallback* getStaticF_initSteamPurchaseCallback() ;

static inline ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback* getStaticF_initSteamSubPurchaseCallback() ;

static inline bool getStaticF_isEnabled() ;

static inline ::GlobalNamespace::MothershipListTitleDataCallback* getStaticF_listMothershipTitleDataCallback() ;

static inline ::GlobalNamespace::MothershipLogCallback* getStaticF_logCallback() ;

static inline ::GlobalNamespace::MothershipNotificationsWrapper* getStaticF_notificationWrapper() ;

static inline ::GlobalNamespace::MothershipPurchaseOfferCallback* getStaticF_purchaseOfferCallback() ;

static inline ::GlobalNamespace::MothershipRefreshIAPCallback* getStaticF_refreshIAPCallback() ;

static inline ::GlobalNamespace::MothershipSetUserDataCallback* getStaticF_setUserDataCallback() ;

static inline ::GlobalNamespace::MothershipWebSocketWrapper* getStaticF_websocket() ;

static inline ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> getStaticF_websocketDispatcher() ;

static inline ::GlobalNamespace::MothershipWriteEventsCallback* getStaticF_writeEventsCallback() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCloseNotificationSocket, addr 0x53bcfbc, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnCloseNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnErrorNotificationSocket, addr 0x53bd1a4, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnErrorNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMessageNotificationSocket, addr 0x53bcdd4, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnMessageNotificationSocket(/* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOpenNotificationSocket, addr 0x53bcbec, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnOpenNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value) ;

static inline void setStaticF_DeploymentId(::StringW  value) ;

static inline void setStaticF_EnvironmentId(::StringW  value) ;

static inline void setStaticF_MothershipBaseUrl(::StringW  value) ;

static inline void setStaticF_MothershipWebSocketUrl(::StringW  value) ;

static inline void setStaticF_OnCloseNotificationSocket(::System::Action_1<::System::IntPtr>*  value) ;

static inline void setStaticF_OnErrorNotificationSocket(::System::Action_1<::System::IntPtr>*  value) ;

static inline void setStaticF_OnMessageNotificationSocket(::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value) ;

static inline void setStaticF_OnOpenNotificationSocket(::System::Action_1<::System::IntPtr>*  value) ;

static inline void setStaticF_SessionId(::StringW  value) ;

static inline void setStaticF_TitleId(::StringW  value) ;

static inline void setStaticF_auth(::GlobalNamespace::MothershipAuthCallback*  value) ;

static inline void setStaticF_authRefreshRequiredCallback(::GlobalNamespace::MothershipAuthRefreshRequiredCallback*  value) ;

static inline void setStaticF_beginQuestCallback(::GlobalNamespace::MothershipBeginQuestCallback*  value) ;

static inline void setStaticF_beginSteamCallback(::GlobalNamespace::MothershipBeginSteamCallback*  value) ;

static inline void setStaticF_client(::GlobalNamespace::MothershipClientApiClient*  value) ;

static inline void setStaticF_consumeConsumableCompleteCallback(::GlobalNamespace::MothershipConsumeCompleteCallback*  value) ;

static inline void setStaticF_createReportCallback(::GlobalNamespace::MothershipCreateReportCallback*  value) ;

static inline void setStaticF_finalizeSteamPurchaseCallback(::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*  value) ;

static inline void setStaticF_finalizeSteamSubPurchaseCallback(::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*  value) ;

static inline void setStaticF_getFileDetailsCompleteCallback(::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*  value) ;

static inline void setStaticF_getMergedInventoryCallback(::GlobalNamespace::MothershipGetMergedInventoryCallback*  value) ;

static inline void setStaticF_getMySubscriptionCallback(::GlobalNamespace::MothershipGetMySubscriptionCallback*  value) ;

static inline void setStaticF_getProgressionCallback(::GlobalNamespace::MothershipGetPlayerProgressionCallback*  value) ;

static inline void setStaticF_getProgressionTreesCallback(::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*  value) ;

static inline void setStaticF_getRoomPlayersSubscriptionsCallback(::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*  value) ;

static inline void setStaticF_getStorefrontCallback(::GlobalNamespace::MothershipGetStorefrontCallback*  value) ;

static inline void setStaticF_getUserInventoryCallback(::GlobalNamespace::MothershipGetUserInventoryCallback*  value) ;

static inline void setStaticF_getUserdataCallback(::GlobalNamespace::MothershipGetUserDataCallback*  value) ;

static inline void setStaticF_http(::GlobalNamespace::MothershipHttpClientUnity*  value) ;

static inline void setStaticF_initSteamPurchaseCallback(::GlobalNamespace::MothershipSteamInitTransactionCallback*  value) ;

static inline void setStaticF_initSteamSubPurchaseCallback(::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*  value) ;

static inline void setStaticF_isEnabled(bool  value) ;

static inline void setStaticF_listMothershipTitleDataCallback(::GlobalNamespace::MothershipListTitleDataCallback*  value) ;

static inline void setStaticF_logCallback(::GlobalNamespace::MothershipLogCallback*  value) ;

static inline void setStaticF_notificationWrapper(::GlobalNamespace::MothershipNotificationsWrapper*  value) ;

static inline void setStaticF_purchaseOfferCallback(::GlobalNamespace::MothershipPurchaseOfferCallback*  value) ;

static inline void setStaticF_refreshIAPCallback(::GlobalNamespace::MothershipRefreshIAPCallback*  value) ;

static inline void setStaticF_setUserDataCallback(::GlobalNamespace::MothershipSetUserDataCallback*  value) ;

static inline void setStaticF_websocket(::GlobalNamespace::MothershipWebSocketWrapper*  value) ;

static inline void setStaticF_websocketDispatcher(::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>  value) ;

static inline void setStaticF_writeEventsCallback(::GlobalNamespace::MothershipWriteEventsCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipClientApiUnity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipClientApiUnity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipClientApiUnity(MothershipClientApiUnity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipClientApiUnity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipClientApiUnity(MothershipClientApiUnity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipClientApiUnity) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
