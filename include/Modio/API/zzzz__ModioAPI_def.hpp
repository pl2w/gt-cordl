#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPI_Platform_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/API/zzzz__SearchFilter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPI)
namespace GlobalNamespace {
struct Agreements_ModioAPI__GetAgreementVersionAsJToken_d__0;
}
namespace GlobalNamespace {
struct Agreements_ModioAPI__GetAgreementVersion_d__1;
}
namespace GlobalNamespace {
struct Agreements_ModioAPI__GetCurrentAgreementAsJToken_d__2;
}
namespace GlobalNamespace {
struct Agreements_ModioAPI__GetCurrentAgreement_d__3;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaAppleAsJToken_d__0;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaApple_d__1;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaDiscordAsJToken_d__2;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaDiscord_d__3;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaEpicgamesAsJToken_d__4;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaEpicgames_d__5;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaFacebookAsJToken_d__6;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaFacebook_d__7;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaGogGalaxyAsJToken_d__8;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaGogGalaxy_d__9;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaGoogleAsJToken_d__10;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaGoogle_d__11;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaItchioAsJToken_d__12;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaItchio_d__13;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaOculusAsJToken_d__14;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaOculus_d__15;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaOpenidAsJToken_d__16;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaOpenid_d__17;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaPsnAsJToken_d__18;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaPsn_d__19;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaSteamAsJToken_d__20;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaSteam_d__21;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaSwitch_d__23;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaXboxLiveAsJToken_d__24;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__AuthenticateViaXboxLive_d__25;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__ExchangeEmailSecurityCodeAsJToken_d__26;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__ExchangeEmailSecurityCode_d__27;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__LogoutAsJToken_d__28;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__Logout_d__29;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__RequestEmailSecurityCodeAsJToken_d__30;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__RequestEmailSecurityCode_d__31;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__TermsAsJToken_d__32;
}
namespace GlobalNamespace {
struct Authentication_ModioAPI__Terms_d__33;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__AddModCommentAsJToken_d__0;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__AddModCommentKarmaAsJToken_d__2;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__AddModCommentKarma_d__3;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__AddModComment_d__1;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__DeleteModCommentAsJToken_d__4;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__DeleteModComment_d__5;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__GetModCommentAsJToken_d__6;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__GetModComment_d__7;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__GetModCommentsAsJToken_d__8;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__GetModComments_d__9;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__UpdateModCommentAsJToken_d__12;
}
namespace GlobalNamespace {
struct Comments_ModioAPI__UpdateModComment_d__13;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__AddModDependenciesAsJToken_d__0;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__AddModDependencies_d__1;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__DeleteModDependenciesAsJToken_d__2;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__DeleteModDependencies_d__3;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__GetModDependantsAsJToken_d__4;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__GetModDependants_d__5;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__GetModDependenciesAsJToken_d__8;
}
namespace GlobalNamespace {
struct Dependencies_ModioAPI__GetModDependencies_d__9;
}
namespace GlobalNamespace {
struct Events_ModioAPI__GetModEventsAsJToken_d__0;
}
namespace GlobalNamespace {
struct Events_ModioAPI__GetModEvents_d__1;
}
namespace GlobalNamespace {
struct Events_ModioAPI__GetModsEventsAsJToken_d__4;
}
namespace GlobalNamespace {
struct Events_ModioAPI__GetModsEvents_d__5;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__AddMultipartUploadPartAsJToken_d__0;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__AddMultipartUploadPart_d__1;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__CompleteMultipartUploadSessionAsJToken_d__2;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__CompleteMultipartUploadSession_d__3;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__CreateMultipartUploadSessionAsJToken_d__4;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__CreateMultipartUploadSession_d__5;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__DeleteMultipartUploadSessionAsJToken_d__6;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__DeleteMultipartUploadSession_d__7;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__GetMultipartUploadPartsAsJToken_d__8;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__GetMultipartUploadParts_d__9;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__GetMultipartUploadSessionsAsJToken_d__12;
}
namespace GlobalNamespace {
struct FilesMultipartUploads_ModioAPI__GetMultipartUploadSessions_d__13;
}
namespace GlobalNamespace {
struct Files_ModioAPI__AddModfileAsJToken_d__0;
}
namespace GlobalNamespace {
struct Files_ModioAPI__AddModfile_d__1;
}
namespace GlobalNamespace {
struct Files_ModioAPI__DeleteModfileAsJToken_d__2;
}
namespace GlobalNamespace {
struct Files_ModioAPI__DeleteModfile_d__3;
}
namespace GlobalNamespace {
struct Files_ModioAPI__EditModfileAsJToken_d__4;
}
namespace GlobalNamespace {
struct Files_ModioAPI__EditModfile_d__5;
}
namespace GlobalNamespace {
struct Files_ModioAPI__GetModfileAsJToken_d__6;
}
namespace GlobalNamespace {
struct Files_ModioAPI__GetModfile_d__7;
}
namespace GlobalNamespace {
struct Files_ModioAPI__GetModfilesAsJToken_d__8;
}
namespace GlobalNamespace {
struct Files_ModioAPI__GetModfiles_d__9;
}
namespace GlobalNamespace {
struct Files_ModioAPI__ManagePlatformStatusAsJToken_d__12;
}
namespace GlobalNamespace {
struct Files_ModioAPI__ManagePlatformStatus_d__13;
}
namespace GlobalNamespace {
struct Games_ModioAPI__GetGameAsJToken_d__0;
}
namespace GlobalNamespace {
struct Games_ModioAPI__GetGame_d__1;
}
namespace GlobalNamespace {
struct Games_ModioAPI__GetGamesAsJToken_d__2;
}
namespace GlobalNamespace {
struct Games_ModioAPI__GetGames_d__3;
}
namespace GlobalNamespace {
struct General_ModioAPI__GetResourceOwnerAsJToken_d__0;
}
namespace GlobalNamespace {
struct General_ModioAPI__GetResourceOwner_d__1;
}
namespace GlobalNamespace {
struct General_ModioAPI__PingAsJToken_d__2;
}
namespace GlobalNamespace {
struct General_ModioAPI__Ping_d__3;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncAppleEntitlementAsJToken_d__0;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncAppleEntitlement_d__1;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncGoogleEntitlementsAsJToken_d__2;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncGoogleEntitlements_d__3;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncMetaEntitlementAsJToken_d__4;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncMetaEntitlement_d__5;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncPlaystationNetworkEntitlementsAsJToken_d__6;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncPlaystationNetworkEntitlements_d__7;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncSteamEntitlementAsJToken_d__8;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncSteamEntitlement_d__9;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncXboxLiveEntitlementsAsJToken_d__10;
}
namespace GlobalNamespace {
struct InAppPurchases_ModioAPI__SyncXboxLiveEntitlements_d__11;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetAuthenticatedUserAsJToken_d__0;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetAuthenticatedUser_d__1;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserEventsAsJToken_d__2;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserEvents_d__3;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserGamesAsJToken_d__6;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserGames_d__7;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserModfilesAsJToken_d__10;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserModfiles_d__11;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserModsAsJToken_d__14;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserMods_d__15;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserPurchasesAsJToken_d__18;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserPurchases_d__19;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserRatingsAsJToken_d__22;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserRatings_d__23;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserSubscriptionsAsJToken_d__28;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserSubscriptions_d__29;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserWalletAsJToken_d__32;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUserWallet_d__33;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUsersMutedAsJToken_d__26;
}
namespace GlobalNamespace {
struct Me_ModioAPI__GetUsersMuted_d__27;
}
namespace GlobalNamespace {
struct Media_ModioAPI__AddGameMediaAsJToken_d__0;
}
namespace GlobalNamespace {
struct Media_ModioAPI__AddGameMedia_d__1;
}
namespace GlobalNamespace {
struct Media_ModioAPI__AddModMediaAsJToken_d__2;
}
namespace GlobalNamespace {
struct Media_ModioAPI__AddModMedia_d__3;
}
namespace GlobalNamespace {
struct Media_ModioAPI__DeleteModMediaAsJToken_d__4;
}
namespace GlobalNamespace {
struct Media_ModioAPI__DeleteModMedia_d__5;
}
namespace GlobalNamespace {
struct Media_ModioAPI__ReorderModMediaAsJToken_d__6;
}
namespace GlobalNamespace {
struct Media_ModioAPI__ReorderModMedia_d__7;
}
namespace GlobalNamespace {
struct Metadata_ModioAPI__AddModKvpMetadataAsJToken_d__0;
}
namespace GlobalNamespace {
struct Metadata_ModioAPI__AddModKvpMetadata_d__1;
}
namespace GlobalNamespace {
struct Metadata_ModioAPI__DeleteModKvpMetadataAsJToken_d__2;
}
namespace GlobalNamespace {
struct Metadata_ModioAPI__DeleteModKvpMetadata_d__3;
}
namespace GlobalNamespace {
struct Metadata_ModioAPI__GetModKvpMetadataAsJToken_d__4;
}
namespace GlobalNamespace {
struct Metadata_ModioAPI__GetModKvpMetadata_d__5;
}
namespace GlobalNamespace {
struct Metrics_ModioAPI__MetricsSessionEndAsJToken_d__0;
}
namespace GlobalNamespace {
struct Metrics_ModioAPI__MetricsSessionEnd_d__1;
}
namespace GlobalNamespace {
struct Metrics_ModioAPI__MetricsSessionHeartbeatAsJToken_d__2;
}
namespace GlobalNamespace {
struct Metrics_ModioAPI__MetricsSessionHeartbeat_d__3;
}
namespace GlobalNamespace {
struct Metrics_ModioAPI__MetricsSessionStartAsJToken_d__4;
}
namespace GlobalNamespace {
struct Metrics_ModioAPI__MetricsSessionStart_d__5;
}
namespace GlobalNamespace {
struct ModioAPI_Platform;
}
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace GlobalNamespace {
struct ModioAPI__Ping_d__56;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__AddModAsJToken_d__0;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__AddMod_d__1;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__DeleteModAsJToken_d__2;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__DeleteMod_d__3;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__EditModAsJToken_d__4;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__EditMod_d__5;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__GetModAsJToken_d__6;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__GetMod_d__7;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__GetModsAsJToken_d__8;
}
namespace GlobalNamespace {
struct Mods_ModioAPI__GetMods_d__9;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__CreateModMonetizationTeamAsJToken_d__0;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__CreateModMonetizationTeam_d__1;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__GetGameTokenPacksAsJToken_d__2;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__GetGameTokenPacks_d__3;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__GetUsersInModMonetizationTeamAsJToken_d__4;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__GetUsersInModMonetizationTeam_d__5;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__PurchaseAsJToken_d__6;
}
namespace GlobalNamespace {
struct Monetization_ModioAPI__Purchase_d__7;
}
namespace GlobalNamespace {
struct Ratings_ModioAPI__AddModRatingAsJToken_d__0;
}
namespace GlobalNamespace {
struct Ratings_ModioAPI__AddModRating_d__1;
}
namespace GlobalNamespace {
struct Reports_ModioAPI__SubmitReportAsJToken_d__0;
}
namespace GlobalNamespace {
struct Reports_ModioAPI__SubmitReport_d__1;
}
namespace GlobalNamespace {
struct ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0;
}
namespace GlobalNamespace {
struct ServiceToService_ModioAPI__RequestUserDelegationToken_d__1;
}
namespace GlobalNamespace {
struct Stats_ModioAPI__GetGameStatsAsJToken_d__0;
}
namespace GlobalNamespace {
struct Stats_ModioAPI__GetGameStats_d__1;
}
namespace GlobalNamespace {
struct Stats_ModioAPI__GetModStatsAsJToken_d__6;
}
namespace GlobalNamespace {
struct Stats_ModioAPI__GetModStats_d__7;
}
namespace GlobalNamespace {
struct Stats_ModioAPI__GetModsStatsAsJToken_d__2;
}
namespace GlobalNamespace {
struct Stats_ModioAPI__GetModsStats_d__3;
}
namespace GlobalNamespace {
struct Subscribe_ModioAPI__SubscribeToModAsJToken_d__0;
}
namespace GlobalNamespace {
struct Subscribe_ModioAPI__SubscribeToMod_d__1;
}
namespace GlobalNamespace {
struct Subscribe_ModioAPI__UnsubscribeFromModAsJToken_d__2;
}
namespace GlobalNamespace {
struct Subscribe_ModioAPI__UnsubscribeFromMod_d__3;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__AddModTagsAsJToken_d__0;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__AddModTags_d__1;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__DeleteModTagsAsJToken_d__2;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__DeleteModTags_d__3;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__GetGameTagOptionsAsJToken_d__4;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__GetGameTagOptions_d__5;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__GetModTagsAsJToken_d__6;
}
namespace GlobalNamespace {
struct Tags_ModioAPI__GetModTags_d__7;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__AddModTeamMemberAsJToken_d__0;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__AddModTeamMember_d__1;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__DeleteModTeamMemberAsJToken_d__2;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__DeleteModTeamMember_d__3;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__GetModTeamMembersAsJToken_d__4;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__GetModTeamMembers_d__5;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__UpdateModTeamMemberAsJToken_d__8;
}
namespace GlobalNamespace {
struct Teams_ModioAPI__UpdateModTeamMember_d__9;
}
namespace GlobalNamespace {
struct Users_ModioAPI__MuteAUserAsJToken_d__0;
}
namespace GlobalNamespace {
struct Users_ModioAPI__MuteAUser_d__1;
}
namespace GlobalNamespace {
struct Users_ModioAPI__UnmuteAUserAsJToken_d__2;
}
namespace GlobalNamespace {
struct Users_ModioAPI__UnmuteAUser_d__3;
}
namespace Modio::API::Interfaces {
class IModioAPIInterface;
}
namespace Modio::API::SchemaDefinitions {
struct AccessTokenObject;
}
namespace Modio::API::SchemaDefinitions {
struct AddCommentRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddGameMediaRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModDependenciesRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModDependenciesResponse;
}
namespace Modio::API::SchemaDefinitions {
struct AddModMediaRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModMetadataRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModMetadataResponse;
}
namespace Modio::API::SchemaDefinitions {
struct AddModRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModSubscriptionRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModTagsRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddModfileRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddRatingRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddRatingResponse;
}
namespace Modio::API::SchemaDefinitions {
struct AddReportRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AddReportResponse;
}
namespace Modio::API::SchemaDefinitions {
struct AddTeamMemberRequest;
}
namespace Modio::API::SchemaDefinitions {
struct AgreementVersionObject;
}
namespace Modio::API::SchemaDefinitions {
struct AppleAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct CommentObject;
}
namespace Modio::API::SchemaDefinitions {
struct CreateMultipartUploadSessionRequest;
}
namespace Modio::API::SchemaDefinitions {
struct DeleteModDependenciesRequest;
}
namespace Modio::API::SchemaDefinitions {
struct DeleteModMediaRequest;
}
namespace Modio::API::SchemaDefinitions {
struct DeleteModMetadataRequest;
}
namespace Modio::API::SchemaDefinitions {
struct DeleteModTagsRequest;
}
namespace Modio::API::SchemaDefinitions {
struct DiscordAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct EditModRequest;
}
namespace Modio::API::SchemaDefinitions {
struct EmailAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct EmailAuthenticationSecurityCodeRequest;
}
namespace Modio::API::SchemaDefinitions {
struct EmailRequestResponse;
}
namespace Modio::API::SchemaDefinitions {
struct EntitlementFulfillmentObject;
}
namespace Modio::API::SchemaDefinitions {
struct EpicGamesAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct FacebookAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct GameObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameStatsObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameTagOptionObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameTokenPackObject;
}
namespace Modio::API::SchemaDefinitions {
struct GogAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct GoogleAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct ItchioAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct MessageObject;
}
namespace Modio::API::SchemaDefinitions {
struct MetaQuestAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct MetadataKvpObject;
}
namespace Modio::API::SchemaDefinitions {
struct MetricsSessionRequest;
}
namespace Modio::API::SchemaDefinitions {
struct ModDependantsObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModDependenciesObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModEventObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModStatsObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModTagObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModfileObject;
}
namespace Modio::API::SchemaDefinitions {
struct MonetizationTeamAccountsObject;
}
namespace Modio::API::SchemaDefinitions {
struct MultipartUploadObject;
}
namespace Modio::API::SchemaDefinitions {
struct MultipartUploadPartObject;
}
namespace Modio::API::SchemaDefinitions {
struct OpenIdAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
template<typename T>
struct Pagination_1;
}
namespace Modio::API::SchemaDefinitions {
struct PayObject;
}
namespace Modio::API::SchemaDefinitions {
struct PayRequest;
}
namespace Modio::API::SchemaDefinitions {
struct PsnAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct RatingObject;
}
namespace Modio::API::SchemaDefinitions {
struct Response204;
}
namespace Modio::API::SchemaDefinitions {
struct SteamAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct SwitchAuthenticationRequest;
}
namespace Modio::API::SchemaDefinitions {
struct SyncAppleEntitlementsRequest;
}
namespace Modio::API::SchemaDefinitions {
struct SyncPlayStationNetworkEntitlementsRequest;
}
namespace Modio::API::SchemaDefinitions {
struct SyncXboxEntitlementsRequest;
}
namespace Modio::API::SchemaDefinitions {
struct TeamMemberObject;
}
namespace Modio::API::SchemaDefinitions {
struct TermsObject;
}
namespace Modio::API::SchemaDefinitions {
struct UpdateCommentKarmaRequest;
}
namespace Modio::API::SchemaDefinitions {
struct UpdateCommentRequest;
}
namespace Modio::API::SchemaDefinitions {
struct UpdateGameMediaResponse;
}
namespace Modio::API::SchemaDefinitions {
struct UpdateModMediaResponse;
}
namespace Modio::API::SchemaDefinitions {
struct UserDelegationTokenObject;
}
namespace Modio::API::SchemaDefinitions {
struct UserEventObject;
}
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
namespace Modio::API::SchemaDefinitions {
struct WalletObject;
}
namespace Modio::API::SchemaDefinitions {
struct WebMessageObject;
}
namespace Modio::API::SchemaDefinitions {
struct XboxLiveAuthenticationRequest;
}
namespace Modio::API {
class Comments_ModioAPI_GetModCommentsFilter;
}
namespace Modio::API {
class Dependencies_ModioAPI_GetModDependantsFilter;
}
namespace Modio::API {
class Dependencies_ModioAPI_GetModDependenciesFilter;
}
namespace Modio::API {
class Events_ModioAPI_GetModEventsFilter;
}
namespace Modio::API {
class Events_ModioAPI_GetModsEventsFilter;
}
namespace Modio::API {
class FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter;
}
namespace Modio::API {
class FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter;
}
namespace Modio::API {
class Files_ModioAPI_GetModfilesFilter;
}
namespace Modio::API {
struct Filtering;
}
namespace Modio::API {
class Games_ModioAPI_GetGamesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserEventsFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserGamesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserModfilesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserModsFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserPurchasesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserRatingsFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserSubscriptionsFilter;
}
namespace Modio::API {
class Metadata_ModioAPI_GetModKvpMetadataFilter;
}
namespace Modio::API {
class ModioAPI_Agreements;
}
namespace Modio::API {
class ModioAPI_Authentication;
}
namespace Modio::API {
class ModioAPI_Comments;
}
namespace Modio::API {
class ModioAPI_Dependencies;
}
namespace Modio::API {
class ModioAPI_Events;
}
namespace Modio::API {
class ModioAPI_FilesMultipartUploads;
}
namespace Modio::API {
class ModioAPI_Files;
}
namespace Modio::API {
class ModioAPI_Games;
}
namespace Modio::API {
class ModioAPI_General;
}
namespace Modio::API {
class ModioAPI_InAppPurchases;
}
namespace Modio::API {
class ModioAPI_Me;
}
namespace Modio::API {
class ModioAPI_Media;
}
namespace Modio::API {
class ModioAPI_Metadata;
}
namespace Modio::API {
class ModioAPI_Metrics;
}
namespace Modio::API {
class ModioAPI_Mods;
}
namespace Modio::API {
class ModioAPI_Monetization;
}
namespace Modio::API {
class ModioAPI_Ratings;
}
namespace Modio::API {
class ModioAPI_Reports;
}
namespace Modio::API {
class ModioAPI_ServiceToService;
}
namespace Modio::API {
class ModioAPI_Stats;
}
namespace Modio::API {
class ModioAPI_Subscribe;
}
namespace Modio::API {
class ModioAPI_Tags;
}
namespace Modio::API {
class ModioAPI_Teams;
}
namespace Modio::API {
class ModioAPI_Users;
}
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::API {
class Stats_ModioAPI_GetModsStatsFilter;
}
namespace Modio::API {
class Tags_ModioAPI_GetModTagsFilter;
}
namespace Modio::API {
class Teams_ModioAPI_GetModTeamMembersFilter;
}
namespace Modio::Authentication {
class IModioAuthService;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModioSettings;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::API {
class Comments_ModioAPI_GetModCommentsFilter;
}
namespace Modio::API {
class Dependencies_ModioAPI_GetModDependantsFilter;
}
namespace Modio::API {
class Dependencies_ModioAPI_GetModDependenciesFilter;
}
namespace Modio::API {
class Events_ModioAPI_GetModEventsFilter;
}
namespace Modio::API {
class Events_ModioAPI_GetModsEventsFilter;
}
namespace Modio::API {
class FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter;
}
namespace Modio::API {
class FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter;
}
namespace Modio::API {
class Files_ModioAPI_GetModfilesFilter;
}
namespace Modio::API {
class Games_ModioAPI_GetGamesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserEventsFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserGamesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserModfilesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserModsFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserPurchasesFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserRatingsFilter;
}
namespace Modio::API {
class Me_ModioAPI_GetUserSubscriptionsFilter;
}
namespace Modio::API {
class Metadata_ModioAPI_GetModKvpMetadataFilter;
}
namespace Modio::API {
class ModioAPI;
}
namespace Modio::API {
class ModioAPI_Agreements;
}
namespace Modio::API {
class ModioAPI_Authentication;
}
namespace Modio::API {
class ModioAPI_Comments;
}
namespace Modio::API {
class ModioAPI_Dependencies;
}
namespace Modio::API {
class ModioAPI_Events;
}
namespace Modio::API {
class ModioAPI_Files;
}
namespace Modio::API {
class ModioAPI_FilesMultipartUploads;
}
namespace Modio::API {
class ModioAPI_Games;
}
namespace Modio::API {
class ModioAPI_General;
}
namespace Modio::API {
class ModioAPI_InAppPurchases;
}
namespace Modio::API {
class ModioAPI_Me;
}
namespace Modio::API {
class ModioAPI_Media;
}
namespace Modio::API {
class ModioAPI_Metadata;
}
namespace Modio::API {
class ModioAPI_Metrics;
}
namespace Modio::API {
class ModioAPI_Mods;
}
namespace Modio::API {
class ModioAPI_Monetization;
}
namespace Modio::API {
class ModioAPI_Ratings;
}
namespace Modio::API {
class ModioAPI_Reports;
}
namespace Modio::API {
class ModioAPI_ServiceToService;
}
namespace Modio::API {
class ModioAPI_Stats;
}
namespace Modio::API {
class ModioAPI_Subscribe;
}
namespace Modio::API {
class ModioAPI_Tags;
}
namespace Modio::API {
class ModioAPI_Teams;
}
namespace Modio::API {
class ModioAPI_Users;
}
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::API {
class Stats_ModioAPI_GetModsStatsFilter;
}
namespace Modio::API {
class Tags_ModioAPI_GetModTagsFilter;
}
namespace Modio::API {
class Teams_ModioAPI_GetModTeamMembersFilter;
}
// Write type traits
MARK_REF_T(::Modio::API::Comments_ModioAPI_GetModCommentsFilter*);
MARK_REF_T(::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter*);
MARK_REF_T(::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*);
MARK_REF_T(::Modio::API::Events_ModioAPI_GetModEventsFilter*);
MARK_REF_T(::Modio::API::Events_ModioAPI_GetModsEventsFilter*);
MARK_REF_T(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter*);
MARK_REF_T(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter*);
MARK_REF_T(::Modio::API::Files_ModioAPI_GetModfilesFilter*);
MARK_REF_T(::Modio::API::Games_ModioAPI_GetGamesFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserEventsFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserGamesFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserModfilesFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserModsFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserRatingsFilter*);
MARK_REF_T(::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter*);
MARK_REF_T(::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter*);
MARK_REF_T(::Modio::API::ModioAPI*);
MARK_REF_T(::Modio::API::ModioAPI_Agreements*);
MARK_REF_T(::Modio::API::ModioAPI_Authentication*);
MARK_REF_T(::Modio::API::ModioAPI_Comments*);
MARK_REF_T(::Modio::API::ModioAPI_Dependencies*);
MARK_REF_T(::Modio::API::ModioAPI_Events*);
MARK_REF_T(::Modio::API::ModioAPI_Files*);
MARK_REF_T(::Modio::API::ModioAPI_FilesMultipartUploads*);
MARK_REF_T(::Modio::API::ModioAPI_Games*);
MARK_REF_T(::Modio::API::ModioAPI_General*);
MARK_REF_T(::Modio::API::ModioAPI_InAppPurchases*);
MARK_REF_T(::Modio::API::ModioAPI_Me*);
MARK_REF_T(::Modio::API::ModioAPI_Media*);
MARK_REF_T(::Modio::API::ModioAPI_Metadata*);
MARK_REF_T(::Modio::API::ModioAPI_Metrics*);
MARK_REF_T(::Modio::API::ModioAPI_Mods*);
MARK_REF_T(::Modio::API::ModioAPI_Monetization*);
MARK_REF_T(::Modio::API::ModioAPI_Ratings*);
MARK_REF_T(::Modio::API::ModioAPI_Reports*);
MARK_REF_T(::Modio::API::ModioAPI_ServiceToService*);
MARK_REF_T(::Modio::API::ModioAPI_Stats*);
MARK_REF_T(::Modio::API::ModioAPI_Subscribe*);
MARK_REF_T(::Modio::API::ModioAPI_Tags*);
MARK_REF_T(::Modio::API::ModioAPI_Teams*);
MARK_REF_T(::Modio::API::ModioAPI_Users*);
MARK_REF_T(::Modio::API::Mods_ModioAPI_GetModsFilter*);
MARK_REF_T(::Modio::API::Stats_ModioAPI_GetModsStatsFilter*);
MARK_REF_T(::Modio::API::Tags_ModioAPI_GetModTagsFilter*);
MARK_REF_T(::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter*);
DEFINE_IL2CPP_CLASS(::Modio::API::Comments_ModioAPI_GetModCommentsFilter*, "Modio.API", "ModioAPI/Comments/GetModCommentsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter*, "Modio.API", "ModioAPI/Dependencies/GetModDependantsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*, "Modio.API", "ModioAPI/Dependencies/GetModDependenciesFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Events_ModioAPI_GetModEventsFilter*, "Modio.API", "ModioAPI/Events/GetModEventsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Events_ModioAPI_GetModsEventsFilter*, "Modio.API", "ModioAPI/Events/GetModsEventsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter*, "Modio.API", "ModioAPI/FilesMultipartUploads/GetMultipartUploadPartsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter*, "Modio.API", "ModioAPI/FilesMultipartUploads/GetMultipartUploadSessionsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Files_ModioAPI_GetModfilesFilter*, "Modio.API", "ModioAPI/Files/GetModfilesFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Games_ModioAPI_GetGamesFilter*, "Modio.API", "ModioAPI/Games/GetGamesFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserEventsFilter*, "Modio.API", "ModioAPI/Me/GetUserEventsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserGamesFilter*, "Modio.API", "ModioAPI/Me/GetUserGamesFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserModfilesFilter*, "Modio.API", "ModioAPI/Me/GetUserModfilesFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserModsFilter*, "Modio.API", "ModioAPI/Me/GetUserModsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*, "Modio.API", "ModioAPI/Me/GetUserPurchasesFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserRatingsFilter*, "Modio.API", "ModioAPI/Me/GetUserRatingsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter*, "Modio.API", "ModioAPI/Me/GetUserSubscriptionsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter*, "Modio.API", "ModioAPI/Metadata/GetModKvpMetadataFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI*, "Modio.API", "ModioAPI");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Agreements*, "Modio.API", "ModioAPI/Agreements");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Authentication*, "Modio.API", "ModioAPI/Authentication");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Comments*, "Modio.API", "ModioAPI/Comments");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Dependencies*, "Modio.API", "ModioAPI/Dependencies");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Events*, "Modio.API", "ModioAPI/Events");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Files*, "Modio.API", "ModioAPI/Files");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_FilesMultipartUploads*, "Modio.API", "ModioAPI/FilesMultipartUploads");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Games*, "Modio.API", "ModioAPI/Games");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_General*, "Modio.API", "ModioAPI/General");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_InAppPurchases*, "Modio.API", "ModioAPI/InAppPurchases");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Me*, "Modio.API", "ModioAPI/Me");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Media*, "Modio.API", "ModioAPI/Media");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Metadata*, "Modio.API", "ModioAPI/Metadata");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Metrics*, "Modio.API", "ModioAPI/Metrics");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Mods*, "Modio.API", "ModioAPI/Mods");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Monetization*, "Modio.API", "ModioAPI/Monetization");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Ratings*, "Modio.API", "ModioAPI/Ratings");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Reports*, "Modio.API", "ModioAPI/Reports");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_ServiceToService*, "Modio.API", "ModioAPI/ServiceToService");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Stats*, "Modio.API", "ModioAPI/Stats");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Subscribe*, "Modio.API", "ModioAPI/Subscribe");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Tags*, "Modio.API", "ModioAPI/Tags");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Teams*, "Modio.API", "ModioAPI/Teams");
DEFINE_IL2CPP_CLASS(::Modio::API::ModioAPI_Users*, "Modio.API", "ModioAPI/Users");
DEFINE_IL2CPP_CLASS(::Modio::API::Mods_ModioAPI_GetModsFilter*, "Modio.API", "ModioAPI/Mods/GetModsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Stats_ModioAPI_GetModsStatsFilter*, "Modio.API", "ModioAPI/Stats/GetModsStatsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Tags_ModioAPI_GetModTagsFilter*, "Modio.API", "ModioAPI/Tags/GetModTagsFilter");
DEFINE_IL2CPP_CLASS(::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter*, "Modio.API", "ModioAPI/Teams/GetModTeamMembersFilter");
// [Extension]
// Dependencies Modio.API.ModioAPI::Platform, Modio.API.ModioAPI::Portal, System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI
class CORDL_TYPE ModioAPI : public ::System::Object {
public:
// Declarations
using Platform = ::GlobalNamespace::ModioAPI_Platform;

using Portal = ::GlobalNamespace::ModioAPI_Portal;

using _Ping_d__56 = ::GlobalNamespace::ModioAPI__Ping_d__56;

using Agreements = ::Modio::API::ModioAPI_Agreements;

using Authentication = ::Modio::API::ModioAPI_Authentication;

using Comments = ::Modio::API::ModioAPI_Comments;

using Dependencies = ::Modio::API::ModioAPI_Dependencies;

using Events = ::Modio::API::ModioAPI_Events;

using Files = ::Modio::API::ModioAPI_Files;

using FilesMultipartUploads = ::Modio::API::ModioAPI_FilesMultipartUploads;

using Games = ::Modio::API::ModioAPI_Games;

using General = ::Modio::API::ModioAPI_General;

using InAppPurchases = ::Modio::API::ModioAPI_InAppPurchases;

using Me = ::Modio::API::ModioAPI_Me;

using Media = ::Modio::API::ModioAPI_Media;

using Metadata = ::Modio::API::ModioAPI_Metadata;

using Metrics = ::Modio::API::ModioAPI_Metrics;

using Mods = ::Modio::API::ModioAPI_Mods;

using Monetization = ::Modio::API::ModioAPI_Monetization;

using Ratings = ::Modio::API::ModioAPI_Ratings;

using Reports = ::Modio::API::ModioAPI_Reports;

using ServiceToService = ::Modio::API::ModioAPI_ServiceToService;

using Stats = ::Modio::API::ModioAPI_Stats;

using Subscribe = ::Modio::API::ModioAPI_Subscribe;

using Tags = ::Modio::API::ModioAPI_Tags;

using Teams = ::Modio::API::ModioAPI_Teams;

using Users = ::Modio::API::ModioAPI_Users;

/// @brief Field OnOfflineStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnOfflineStatusChanged, put=setStaticF_OnOfflineStatusChanged)) ::System::Action_1<bool>*  OnOfflineStatusChanged;

/// @brief Field <CurrentPortal>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurrentPortal_k__BackingField, put=setStaticF__CurrentPortal_k__BackingField)) ::GlobalNamespace::ModioAPI_Portal  _CurrentPortal_k__BackingField;

/// @brief Field <IsOffline>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsOffline_k__BackingField, put=setStaticF__IsOffline_k__BackingField)) bool  _IsOffline_k__BackingField;

/// @brief Field <LanguageCodeResponse>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LanguageCodeResponse_k__BackingField, put=setStaticF__LanguageCodeResponse_k__BackingField)) ::StringW  _LanguageCodeResponse_k__BackingField;

/// @brief Field _apiInterface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__apiInterface, put=setStaticF__apiInterface)) ::Modio::API::Interfaces::IModioAPIInterface*  _apiInterface;

/// @brief Field _modioSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__modioSettings, put=setStaticF__modioSettings)) ::Modio::ModioSettings*  _modioSettings;

/// @brief Field _platform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__platform, put=setStaticF__platform)) ::GlobalNamespace::ModioAPI_Platform  _platform;

/// @brief Field _serverURL, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__serverURL, put=setStaticF__serverURL)) ::StringW  _serverURL;

/// [Extension]
/// @brief Method GetHeader, addr 0xa06629c, size 0x1c4, virtual false, abstract: false, final false
static inline ::StringW GetHeader(::GlobalNamespace::ModioAPI_Platform  platform) ;

/// [Extension]
/// @brief Method GetHeader, addr 0xa066658, size 0x1c4, virtual false, abstract: false, final false
static inline ::StringW GetHeader(::GlobalNamespace::ModioAPI_Portal  portal) ;

/// @brief Method Init, addr 0xa064f08, size 0x704, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method IsInitialized, addr 0xa066928, size 0xf0, virtual false, abstract: false, final false
static inline bool IsInitialized() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::<Ping>d__56))]
/// @brief Method Ping, addr 0xa066a18, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* Ping() ;

/// @brief Method SetAPIInterface, addr 0xa06560c, size 0x594, virtual false, abstract: false, final false
static inline void SetAPIInterface(::Modio::API::Interfaces::IModioAPIInterface*  apiInterface) ;

/// @brief Method SetOfflineStatus, addr 0xa06681c, size 0x10c, virtual false, abstract: false, final false
static inline void SetOfflineStatus(bool  isOffline) ;

/// @brief Method SetPlatform, addr 0xa065f34, size 0x368, virtual false, abstract: false, final false
static inline void SetPlatform(::GlobalNamespace::ModioAPI_Platform  platform) ;

/// @brief Method SetPortal, addr 0xa066460, size 0x1f8, virtual false, abstract: false, final false
static inline void SetPortal(::GlobalNamespace::ModioAPI_Portal  portal) ;

/// @brief Method SetPortalFromAuthService, addr 0xa065ba0, size 0xd4, virtual false, abstract: false, final false
static inline void SetPortalFromAuthService(::Modio::Authentication::IModioAuthService*  authService) ;

/// @brief Method SetResponseLanguage, addr 0xa065c74, size 0x2c0, virtual false, abstract: false, final false
static inline void SetResponseLanguage(::StringW  languageCode) ;

/// [CompilerGenerated]
/// @brief Method add_OnOfflineStatusChanged, addr 0xa064b04, size 0xf0, virtual false, abstract: false, final false
static inline void add_OnOfflineStatusChanged(::System::Action_1<bool>*  value) ;

static inline ::System::Action_1<bool>* getStaticF_OnOfflineStatusChanged() ;

static inline ::GlobalNamespace::ModioAPI_Portal getStaticF__CurrentPortal_k__BackingField() ;

static inline bool getStaticF__IsOffline_k__BackingField() ;

static inline ::StringW getStaticF__LanguageCodeResponse_k__BackingField() ;

static inline ::Modio::API::Interfaces::IModioAPIInterface* getStaticF__apiInterface() ;

static inline ::Modio::ModioSettings* getStaticF__modioSettings() ;

static inline ::GlobalNamespace::ModioAPI_Platform getStaticF__platform() ;

static inline ::StringW getStaticF__serverURL() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentPortal, addr 0xa064d9c, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModioAPI_Portal get_CurrentPortal() ;

/// [CompilerGenerated]
/// @brief Method get_IsOffline, addr 0xa064ce4, size 0x58, virtual false, abstract: false, final false
static inline bool get_IsOffline() ;

/// [CompilerGenerated]
/// @brief Method get_LanguageCodeResponse, addr 0xa064e50, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_LanguageCodeResponse() ;

/// [CompilerGenerated]
/// @brief Method remove_OnOfflineStatusChanged, addr 0xa064bf4, size 0xf0, virtual false, abstract: false, final false
static inline void remove_OnOfflineStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_OnOfflineStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF__CurrentPortal_k__BackingField(::GlobalNamespace::ModioAPI_Portal  value) ;

static inline void setStaticF__IsOffline_k__BackingField(bool  value) ;

static inline void setStaticF__LanguageCodeResponse_k__BackingField(::StringW  value) ;

static inline void setStaticF__apiInterface(::Modio::API::Interfaces::IModioAPIInterface*  value) ;

static inline void setStaticF__modioSettings(::Modio::ModioSettings*  value) ;

static inline void setStaticF__platform(::GlobalNamespace::ModioAPI_Platform  value) ;

static inline void setStaticF__serverURL(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentPortal, addr 0xa064df4, size 0x5c, virtual false, abstract: false, final false
static inline void set_CurrentPortal(::GlobalNamespace::ModioAPI_Portal  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsOffline, addr 0xa064d3c, size 0x60, virtual false, abstract: false, final false
static inline void set_IsOffline(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LanguageCodeResponse, addr 0xa064ea8, size 0x60, virtual false, abstract: false, final false
static inline void set_LanguageCodeResponse(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI(ModioAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI(ModioAPI const& ) = delete;

/// @brief Field HEADER_LANGUAGE_RESPONSE offset 0xffffffff size 0x8
static constexpr ::ConstString  HEADER_LANGUAGE_RESPONSE{u"Accept-Language"};

/// @brief Field HEADER_PLATFORM offset 0xffffffff size 0x8
static constexpr ::ConstString  HEADER_PLATFORM{u"X-Modio-Platform"};

/// @brief Field HEADER_PORTAL offset 0xffffffff size 0x8
static constexpr ::ConstString  HEADER_PORTAL{u"X-Modio-Portal"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/InAppPurchases
class CORDL_TYPE ModioAPI_InAppPurchases : public ::System::Object {
public:
// Declarations
using _SyncAppleEntitlementAsJToken_d__0 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncAppleEntitlementAsJToken_d__0;

using _SyncAppleEntitlement_d__1 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncAppleEntitlement_d__1;

using _SyncGoogleEntitlementsAsJToken_d__2 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncGoogleEntitlementsAsJToken_d__2;

using _SyncGoogleEntitlements_d__3 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncGoogleEntitlements_d__3;

using _SyncMetaEntitlementAsJToken_d__4 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncMetaEntitlementAsJToken_d__4;

using _SyncMetaEntitlement_d__5 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncMetaEntitlement_d__5;

using _SyncPlaystationNetworkEntitlementsAsJToken_d__6 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncPlaystationNetworkEntitlementsAsJToken_d__6;

using _SyncPlaystationNetworkEntitlements_d__7 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncPlaystationNetworkEntitlements_d__7;

using _SyncSteamEntitlementAsJToken_d__8 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncSteamEntitlementAsJToken_d__8;

using _SyncSteamEntitlement_d__9 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncSteamEntitlement_d__9;

using _SyncXboxLiveEntitlementsAsJToken_d__10 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncXboxLiveEntitlementsAsJToken_d__10;

using _SyncXboxLiveEntitlements_d__11 = ::GlobalNamespace::InAppPurchases_ModioAPI__SyncXboxLiveEntitlements_d__11;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncAppleEntitlement>d__1))]
/// @brief Method SyncAppleEntitlement, addr 0xa0d3674, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>>>>>* SyncAppleEntitlement(::System::Nullable_1<::Modio::API::SchemaDefinitions::SyncAppleEntitlementsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncAppleEntitlementAsJToken>d__0))]
/// @brief Method SyncAppleEntitlementAsJToken, addr 0xa0d3568, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SyncAppleEntitlementAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::SyncAppleEntitlementsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncGoogleEntitlements>d__3))]
/// @brief Method SyncGoogleEntitlements, addr 0xa0d386c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>>>>>* SyncGoogleEntitlements() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncGoogleEntitlementsAsJToken>d__2))]
/// @brief Method SyncGoogleEntitlementsAsJToken, addr 0xa0d3780, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SyncGoogleEntitlementsAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncMetaEntitlement>d__5))]
/// @brief Method SyncMetaEntitlement, addr 0xa0d3a44, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>>>>>* SyncMetaEntitlement(int64_t  userId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncMetaEntitlementAsJToken>d__4))]
/// @brief Method SyncMetaEntitlementAsJToken, addr 0xa0d3958, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SyncMetaEntitlementAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncPlaystationNetworkEntitlements>d__7))]
/// @brief Method SyncPlaystationNetworkEntitlements, addr 0xa0d3c54, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>>>>>* SyncPlaystationNetworkEntitlements(::System::Nullable_1<::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncPlaystationNetworkEntitlementsAsJToken>d__6))]
/// @brief Method SyncPlaystationNetworkEntitlementsAsJToken, addr 0xa0d3b44, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SyncPlaystationNetworkEntitlementsAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncSteamEntitlement>d__9))]
/// @brief Method SyncSteamEntitlement, addr 0xa0d3e50, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>>>>>* SyncSteamEntitlement() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncSteamEntitlementAsJToken>d__8))]
/// @brief Method SyncSteamEntitlementAsJToken, addr 0xa0d3d64, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SyncSteamEntitlementAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncXboxLiveEntitlements>d__11))]
/// @brief Method SyncXboxLiveEntitlements, addr 0xa0d4048, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>>>>>* SyncXboxLiveEntitlements(::System::Nullable_1<::Modio::API::SchemaDefinitions::SyncXboxEntitlementsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::InAppPurchases::<SyncXboxLiveEntitlementsAsJToken>d__10))]
/// @brief Method SyncXboxLiveEntitlementsAsJToken, addr 0xa0d3f3c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SyncXboxLiveEntitlementsAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::SyncXboxEntitlementsRequest>  body) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_InAppPurchases() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_InAppPurchases", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_InAppPurchases(ModioAPI_InAppPurchases && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_InAppPurchases", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_InAppPurchases(ModioAPI_InAppPurchases const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_InAppPurchases) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Subscribe
class CORDL_TYPE ModioAPI_Subscribe : public ::System::Object {
public:
// Declarations
using _SubscribeToModAsJToken_d__0 = ::GlobalNamespace::Subscribe_ModioAPI__SubscribeToModAsJToken_d__0;

using _SubscribeToMod_d__1 = ::GlobalNamespace::Subscribe_ModioAPI__SubscribeToMod_d__1;

using _UnsubscribeFromModAsJToken_d__2 = ::GlobalNamespace::Subscribe_ModioAPI__UnsubscribeFromModAsJToken_d__2;

using _UnsubscribeFromMod_d__3 = ::GlobalNamespace::Subscribe_ModioAPI__UnsubscribeFromMod_d__3;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Subscribe::<SubscribeToMod>d__1))]
/// @brief Method SubscribeToMod, addr 0xa0d1720, size 0x104, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>* SubscribeToMod(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModSubscriptionRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Subscribe::<SubscribeToModAsJToken>d__0))]
/// @brief Method SubscribeToModAsJToken, addr 0xa0d161c, size 0x104, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SubscribeToModAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModSubscriptionRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Subscribe::<UnsubscribeFromMod>d__3))]
/// @brief Method UnsubscribeFromMod, addr 0xa0d1924, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* UnsubscribeFromMod(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Subscribe::<UnsubscribeFromModAsJToken>d__2))]
/// @brief Method UnsubscribeFromModAsJToken, addr 0xa0d1824, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* UnsubscribeFromModAsJToken(int64_t  modId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Subscribe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Subscribe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Subscribe(ModioAPI_Subscribe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Subscribe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Subscribe(ModioAPI_Subscribe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Subscribe) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Reports
class CORDL_TYPE ModioAPI_Reports : public ::System::Object {
public:
// Declarations
using _SubmitReportAsJToken_d__0 = ::GlobalNamespace::Reports_ModioAPI__SubmitReportAsJToken_d__0;

using _SubmitReport_d__1 = ::GlobalNamespace::Reports_ModioAPI__SubmitReport_d__1;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Reports::<SubmitReport>d__1))]
/// @brief Method SubmitReport, addr 0xa0d0748, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddReportResponse>>>* SubmitReport(::System::Nullable_1<::Modio::API::SchemaDefinitions::AddReportRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Reports::<SubmitReportAsJToken>d__0))]
/// @brief Method SubmitReportAsJToken, addr 0xa0d0628, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* SubmitReportAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::AddReportRequest>  body) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Reports() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Reports", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Reports(ModioAPI_Reports && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Reports", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Reports(ModioAPI_Reports const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Reports) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/ServiceToService
class CORDL_TYPE ModioAPI_ServiceToService : public ::System::Object {
public:
// Declarations
using _RequestUserDelegationTokenAsJToken_d__0 = ::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationTokenAsJToken_d__0;

using _RequestUserDelegationToken_d__1 = ::GlobalNamespace::ServiceToService_ModioAPI__RequestUserDelegationToken_d__1;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::ServiceToService::<RequestUserDelegationToken>d__1))]
/// @brief Method RequestUserDelegationToken, addr 0xa0cf880, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::UserDelegationTokenObject>>>* RequestUserDelegationToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::ServiceToService::<RequestUserDelegationTokenAsJToken>d__0))]
/// @brief Method RequestUserDelegationTokenAsJToken, addr 0xa0cf794, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* RequestUserDelegationTokenAsJToken() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_ServiceToService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_ServiceToService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_ServiceToService(ModioAPI_ServiceToService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_ServiceToService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_ServiceToService(ModioAPI_ServiceToService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_ServiceToService) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Users
class CORDL_TYPE ModioAPI_Users : public ::System::Object {
public:
// Declarations
using _MuteAUserAsJToken_d__0 = ::GlobalNamespace::Users_ModioAPI__MuteAUserAsJToken_d__0;

using _MuteAUser_d__1 = ::GlobalNamespace::Users_ModioAPI__MuteAUser_d__1;

using _UnmuteAUserAsJToken_d__2 = ::GlobalNamespace::Users_ModioAPI__UnmuteAUserAsJToken_d__2;

using _UnmuteAUser_d__3 = ::GlobalNamespace::Users_ModioAPI__UnmuteAUser_d__3;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Users::<MuteAUser>d__1))]
/// @brief Method MuteAUser, addr 0xa0cda4c, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* MuteAUser(int64_t  userId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Users::<MuteAUserAsJToken>d__0))]
/// @brief Method MuteAUserAsJToken, addr 0xa0cd94c, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* MuteAUserAsJToken(int64_t  userId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Users::<UnmuteAUser>d__3))]
/// @brief Method UnmuteAUser, addr 0xa0cdc4c, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* UnmuteAUser(int64_t  userId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Users::<UnmuteAUserAsJToken>d__2))]
/// @brief Method UnmuteAUserAsJToken, addr 0xa0cdb4c, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* UnmuteAUserAsJToken(int64_t  userId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Users() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Users", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Users(ModioAPI_Users && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Users", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Users(ModioAPI_Users const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Users) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Metrics
class CORDL_TYPE ModioAPI_Metrics : public ::System::Object {
public:
// Declarations
using _MetricsSessionEndAsJToken_d__0 = ::GlobalNamespace::Metrics_ModioAPI__MetricsSessionEndAsJToken_d__0;

using _MetricsSessionEnd_d__1 = ::GlobalNamespace::Metrics_ModioAPI__MetricsSessionEnd_d__1;

using _MetricsSessionHeartbeatAsJToken_d__2 = ::GlobalNamespace::Metrics_ModioAPI__MetricsSessionHeartbeatAsJToken_d__2;

using _MetricsSessionHeartbeat_d__3 = ::GlobalNamespace::Metrics_ModioAPI__MetricsSessionHeartbeat_d__3;

using _MetricsSessionStartAsJToken_d__4 = ::GlobalNamespace::Metrics_ModioAPI__MetricsSessionStartAsJToken_d__4;

using _MetricsSessionStart_d__5 = ::GlobalNamespace::Metrics_ModioAPI__MetricsSessionStart_d__5;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metrics::<MetricsSessionEnd>d__1))]
/// @brief Method MetricsSessionEnd, addr 0xa0cab30, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* MetricsSessionEnd(::Modio::API::SchemaDefinitions::MetricsSessionRequest  sessionRequest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metrics::<MetricsSessionEndAsJToken>d__0))]
/// @brief Method MetricsSessionEndAsJToken, addr 0xa0caa18, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* MetricsSessionEndAsJToken(::Modio::API::SchemaDefinitions::MetricsSessionRequest  sessionRequest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metrics::<MetricsSessionHeartbeat>d__3))]
/// @brief Method MetricsSessionHeartbeat, addr 0xa0cad60, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* MetricsSessionHeartbeat(::Modio::API::SchemaDefinitions::MetricsSessionRequest  sessionRequest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metrics::<MetricsSessionHeartbeatAsJToken>d__2))]
/// @brief Method MetricsSessionHeartbeatAsJToken, addr 0xa0cac48, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* MetricsSessionHeartbeatAsJToken(::Modio::API::SchemaDefinitions::MetricsSessionRequest  sessionRequest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metrics::<MetricsSessionStart>d__5))]
/// @brief Method MetricsSessionStart, addr 0xa0caf90, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* MetricsSessionStart(::Modio::API::SchemaDefinitions::MetricsSessionRequest  sessionRequest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metrics::<MetricsSessionStartAsJToken>d__4))]
/// @brief Method MetricsSessionStartAsJToken, addr 0xa0cae78, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* MetricsSessionStartAsJToken(::Modio::API::SchemaDefinitions::MetricsSessionRequest  sessionRequest) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Metrics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Metrics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Metrics(ModioAPI_Metrics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Metrics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Metrics(ModioAPI_Metrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17987};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Metrics) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/General
class CORDL_TYPE ModioAPI_General : public ::System::Object {
public:
// Declarations
using _GetResourceOwnerAsJToken_d__0 = ::GlobalNamespace::General_ModioAPI__GetResourceOwnerAsJToken_d__0;

using _GetResourceOwner_d__1 = ::GlobalNamespace::General_ModioAPI__GetResourceOwner_d__1;

using _PingAsJToken_d__2 = ::GlobalNamespace::General_ModioAPI__PingAsJToken_d__2;

using _Ping_d__3 = ::GlobalNamespace::General_ModioAPI__Ping_d__3;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::General::<GetResourceOwner>d__1))]
/// @brief Method GetResourceOwner, addr 0xa0c8dc4, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::UserObject>>>* GetResourceOwner() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::General::<GetResourceOwnerAsJToken>d__0))]
/// @brief Method GetResourceOwnerAsJToken, addr 0xa0c8cd8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetResourceOwnerAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::General::<Ping>d__3))]
/// @brief Method Ping, addr 0xa0c8f9c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::WebMessageObject>>>* Ping() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::General::<PingAsJToken>d__2))]
/// @brief Method PingAsJToken, addr 0xa0c8eb0, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* PingAsJToken() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_General() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_General", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_General(ModioAPI_General && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_General", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_General(ModioAPI_General const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_General) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Events
class CORDL_TYPE ModioAPI_Events : public ::System::Object {
public:
// Declarations
using _GetModEventsAsJToken_d__0 = ::GlobalNamespace::Events_ModioAPI__GetModEventsAsJToken_d__0;

using _GetModEvents_d__1 = ::GlobalNamespace::Events_ModioAPI__GetModEvents_d__1;

using _GetModsEventsAsJToken_d__4 = ::GlobalNamespace::Events_ModioAPI__GetModsEventsAsJToken_d__4;

using _GetModsEvents_d__5 = ::GlobalNamespace::Events_ModioAPI__GetModsEvents_d__5;

using GetModEventsFilter = ::Modio::API::Events_ModioAPI_GetModEventsFilter;

using GetModsEventsFilter = ::Modio::API::Events_ModioAPI_GetModsEventsFilter;

/// @brief Method FilterGetModEvents, addr 0xa0c64bc, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Events_ModioAPI_GetModEventsFilter* FilterGetModEvents(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetModsEvents, addr 0xa0c679c, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* FilterGetModsEvents(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Events::<GetModEvents>d__1))]
/// @brief Method GetModEvents, addr 0xa0c63b0, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModEventObject>>>>>* GetModEvents(int64_t  modId, ::Modio::API::Events_ModioAPI_GetModEventsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Events::<GetModEventsAsJToken>d__0))]
/// @brief Method GetModEventsAsJToken, addr 0xa0c62b0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModEventsAsJToken(int64_t  modId, ::Modio::API::Events_ModioAPI_GetModEventsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Events::<GetModsEvents>d__5))]
/// @brief Method GetModsEvents, addr 0xa0c6690, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModEventObject>>>>>* GetModsEvents(::Modio::API::Events_ModioAPI_GetModsEventsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Events::<GetModsEventsAsJToken>d__4))]
/// @brief Method GetModsEventsAsJToken, addr 0xa0c6584, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModsEventsAsJToken(::Modio::API::Events_ModioAPI_GetModsEventsFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Events() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Events", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Events(ModioAPI_Events && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Events", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Events(ModioAPI_Events const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Events) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Events/GetModsEventsFilter
class CORDL_TYPE Events_ModioAPI_GetModsEventsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Events_ModioAPI_GetModsEventsFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa0c6d8c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0c6cc0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method EventType, addr 0xa0c6e34, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* EventType(::StringW  eventType, ::Modio::API::Filtering  condition) ;

/// @brief Method EventType, addr 0xa0c6edc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* EventType(::System::Collections::Generic::ICollection_1<::StringW>*  eventType, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0c6930, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0c6864, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Latest, addr 0xa0c7054, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* Latest(::System::Collections::Generic::ICollection_1<bool>*  latest, ::Modio::API::Filtering  condition) ;

/// @brief Method Latest, addr 0xa0c6f84, size 0xd0, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* Latest(bool  latest, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0c6aa4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0c69d8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method Subscribed, addr 0xa0c71cc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* Subscribed(::System::Collections::Generic::ICollection_1<bool>*  subscribed, ::Modio::API::Filtering  condition) ;

/// @brief Method Subscribed, addr 0xa0c70fc, size 0xd0, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* Subscribed(bool  subscribed, ::Modio::API::Filtering  condition) ;

/// @brief Method UserId, addr 0xa0c6c18, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* UserId(::System::Collections::Generic::ICollection_1<int64_t>*  userId, ::Modio::API::Filtering  condition) ;

/// @brief Method UserId, addr 0xa0c6b4c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Events_ModioAPI_GetModsEventsFilter* UserId(int64_t  userId, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0c6804, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Events_ModioAPI_GetModsEventsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Events_ModioAPI_GetModsEventsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Events_ModioAPI_GetModsEventsFilter(Events_ModioAPI_GetModsEventsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Events_ModioAPI_GetModsEventsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Events_ModioAPI_GetModsEventsFilter(Events_ModioAPI_GetModsEventsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Events_ModioAPI_GetModsEventsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Events/GetModEventsFilter
class CORDL_TYPE Events_ModioAPI_GetModEventsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Events_ModioAPI_GetModEventsFilter*> {
public:
// Declarations
static inline ::Modio::API::Events_ModioAPI_GetModEventsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method .ctor, addr 0xa0c6524, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Events_ModioAPI_GetModEventsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Events_ModioAPI_GetModEventsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Events_ModioAPI_GetModEventsFilter(Events_ModioAPI_GetModEventsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Events_ModioAPI_GetModEventsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Events_ModioAPI_GetModEventsFilter(Events_ModioAPI_GetModEventsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Events_ModioAPI_GetModEventsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Stats
class CORDL_TYPE ModioAPI_Stats : public ::System::Object {
public:
// Declarations
using _GetGameStatsAsJToken_d__0 = ::GlobalNamespace::Stats_ModioAPI__GetGameStatsAsJToken_d__0;

using _GetGameStats_d__1 = ::GlobalNamespace::Stats_ModioAPI__GetGameStats_d__1;

using _GetModStatsAsJToken_d__6 = ::GlobalNamespace::Stats_ModioAPI__GetModStatsAsJToken_d__6;

using _GetModStats_d__7 = ::GlobalNamespace::Stats_ModioAPI__GetModStats_d__7;

using _GetModsStatsAsJToken_d__2 = ::GlobalNamespace::Stats_ModioAPI__GetModsStatsAsJToken_d__2;

using _GetModsStats_d__3 = ::GlobalNamespace::Stats_ModioAPI__GetModsStats_d__3;

using GetModsStatsFilter = ::Modio::API::Stats_ModioAPI_GetModsStatsFilter;

/// @brief Method FilterGetModsStats, addr 0xa0c2ef8, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* FilterGetModsStats(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Stats::<GetGameStats>d__1))]
/// @brief Method GetGameStats, addr 0xa0c2bf4, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::GameStatsObject>>>* GetGameStats() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Stats::<GetGameStatsAsJToken>d__0))]
/// @brief Method GetGameStatsAsJToken, addr 0xa0c2b08, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetGameStatsAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Stats::<GetModStats>d__7))]
/// @brief Method GetModStats, addr 0xa0c30c0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModStatsObject>>>* GetModStats(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Stats::<GetModStatsAsJToken>d__6))]
/// @brief Method GetModStatsAsJToken, addr 0xa0c2fc0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModStatsAsJToken(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Stats::<GetModsStats>d__3))]
/// @brief Method GetModsStats, addr 0xa0c2dec, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModStatsObject>>>>>* GetModsStats(::Modio::API::Stats_ModioAPI_GetModsStatsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Stats::<GetModsStatsAsJToken>d__2))]
/// @brief Method GetModsStatsAsJToken, addr 0xa0c2ce0, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModsStatsAsJToken(::Modio::API::Stats_ModioAPI_GetModsStatsFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Stats() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Stats", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Stats(ModioAPI_Stats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Stats", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Stats(ModioAPI_Stats const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Stats) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Stats/GetModsStatsFilter
class CORDL_TYPE Stats_ModioAPI_GetModsStatsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Stats_ModioAPI_GetModsStatsFilter*> {
public:
// Declarations
/// @brief Method DownloadsTotal, addr 0xa0c36e8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* DownloadsTotal(::System::Collections::Generic::ICollection_1<int64_t>*  downloadsTotal, ::Modio::API::Filtering  condition) ;

/// @brief Method DownloadsTotal, addr 0xa0c361c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* DownloadsTotal(int64_t  downloadsTotal, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0c328c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0c31c0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PopularityRankPosition, addr 0xa0c3400, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* PopularityRankPosition(::System::Collections::Generic::ICollection_1<int64_t>*  popularityRankPosition, ::Modio::API::Filtering  condition) ;

/// @brief Method PopularityRankPosition, addr 0xa0c3334, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* PopularityRankPosition(int64_t  popularityRankPosition, ::Modio::API::Filtering  condition) ;

/// @brief Method PopularityRankTotalMods, addr 0xa0c3574, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* PopularityRankTotalMods(::System::Collections::Generic::ICollection_1<int64_t>*  popularityRankTotalMods, ::Modio::API::Filtering  condition) ;

/// @brief Method PopularityRankTotalMods, addr 0xa0c34a8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* PopularityRankTotalMods(int64_t  popularityRankTotalMods, ::Modio::API::Filtering  condition) ;

/// @brief Method RatingsNegative, addr 0xa0c3b44, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* RatingsNegative(::System::Collections::Generic::ICollection_1<int64_t>*  ratingsNegative, ::Modio::API::Filtering  condition) ;

/// @brief Method RatingsNegative, addr 0xa0c3a78, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* RatingsNegative(int64_t  ratingsNegative, ::Modio::API::Filtering  condition) ;

/// @brief Method RatingsPositive, addr 0xa0c39d0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* RatingsPositive(::System::Collections::Generic::ICollection_1<int64_t>*  ratingsPositive, ::Modio::API::Filtering  condition) ;

/// @brief Method RatingsPositive, addr 0xa0c3904, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* RatingsPositive(int64_t  ratingsPositive, ::Modio::API::Filtering  condition) ;

/// @brief Method SubscribersTotal, addr 0xa0c385c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* SubscribersTotal(::System::Collections::Generic::ICollection_1<int64_t>*  subscribersTotal, ::Modio::API::Filtering  condition) ;

/// @brief Method SubscribersTotal, addr 0xa0c3790, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Stats_ModioAPI_GetModsStatsFilter* SubscribersTotal(int64_t  subscribersTotal, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0c2f60, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stats_ModioAPI_GetModsStatsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stats_ModioAPI_GetModsStatsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Stats_ModioAPI_GetModsStatsFilter(Stats_ModioAPI_GetModsStatsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stats_ModioAPI_GetModsStatsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stats_ModioAPI_GetModsStatsFilter(Stats_ModioAPI_GetModsStatsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Stats_ModioAPI_GetModsStatsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Games
class CORDL_TYPE ModioAPI_Games : public ::System::Object {
public:
// Declarations
using _GetGameAsJToken_d__0 = ::GlobalNamespace::Games_ModioAPI__GetGameAsJToken_d__0;

using _GetGame_d__1 = ::GlobalNamespace::Games_ModioAPI__GetGame_d__1;

using _GetGamesAsJToken_d__2 = ::GlobalNamespace::Games_ModioAPI__GetGamesAsJToken_d__2;

using _GetGames_d__3 = ::GlobalNamespace::Games_ModioAPI__GetGames_d__3;

using GetGamesFilter = ::Modio::API::Games_ModioAPI_GetGamesFilter;

/// @brief Method FilterGetGames, addr 0xa0bf35c, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Games_ModioAPI_GetGamesFilter* FilterGetGames(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Games::<GetGame>d__1))]
/// @brief Method GetGame, addr 0xa0bf044, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::GameObject>>>* GetGame(::System::Nullable_1<bool>  showHiddenTags) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Games::<GetGameAsJToken>d__0))]
/// @brief Method GetGameAsJToken, addr 0xa0bef44, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetGameAsJToken(::System::Nullable_1<bool>  showHiddenTags) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Games::<GetGames>d__3))]
/// @brief Method GetGames, addr 0xa0bf250, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::GameObject>>>>>* GetGames(::Modio::API::Games_ModioAPI_GetGamesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Games::<GetGamesAsJToken>d__2))]
/// @brief Method GetGamesAsJToken, addr 0xa0bf144, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetGamesAsJToken(::Modio::API::Games_ModioAPI_GetGamesFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Games() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Games", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Games(ModioAPI_Games && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Games", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Games(ModioAPI_Games const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Games) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Games/GetGamesFilter
class CORDL_TYPE Games_ModioAPI_GetGamesFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Games_ModioAPI_GetGamesFilter*> {
public:
// Declarations
/// @brief Method ApiAccessOptions, addr 0xa0c0cf0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* ApiAccessOptions(::System::Collections::Generic::ICollection_1<int64_t>*  apiAccessOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method ApiAccessOptions, addr 0xa0c0c24, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* ApiAccessOptions(int64_t  apiAccessOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CommunityOptions, addr 0xa0c0a08, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* CommunityOptions(::System::Collections::Generic::ICollection_1<int64_t>*  communityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CommunityOptions, addr 0xa0c093c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* CommunityOptions(int64_t  communityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CurationOption, addr 0xa0c0720, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* CurationOption(::System::Collections::Generic::ICollection_1<int64_t>*  curationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method CurationOption, addr 0xa0c0654, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* CurationOption(int64_t  curationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0bf94c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0bf880, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0bfc34, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DateLive(::System::Collections::Generic::ICollection_1<int64_t>*  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0bfb68, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DateLive(int64_t  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0bfac0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DateUpdated(::System::Collections::Generic::ICollection_1<int64_t>*  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0bf9f4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DateUpdated(int64_t  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DependencyOption, addr 0xa0c0894, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DependencyOption(::System::Collections::Generic::ICollection_1<int64_t>*  dependencyOption, ::Modio::API::Filtering  condition) ;

/// @brief Method DependencyOption, addr 0xa0c07c8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* DependencyOption(int64_t  dependencyOption, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0bf4f0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0bf424, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method InstructionsUrl, addr 0xa0c00cc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* InstructionsUrl(::StringW  instructionsUrl, ::Modio::API::Filtering  condition) ;

/// @brief Method InstructionsUrl, addr 0xa0c0174, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* InstructionsUrl(::System::Collections::Generic::ICollection_1<::StringW>*  instructionsUrl, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOptions, addr 0xa0c0e64, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* MaturityOptions(::System::Collections::Generic::ICollection_1<int64_t>*  maturityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOptions, addr 0xa0c0d98, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* MaturityOptions(int64_t  maturityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0c0b7c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* MonetizationOptions(::System::Collections::Generic::ICollection_1<int64_t>*  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0c0ab0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* MonetizationOptions(int64_t  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0bfcdc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Name(::StringW  name, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0bfd84, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Name(::System::Collections::Generic::ICollection_1<::StringW>*  name, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0bfe2c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* NameId(::StringW  nameId, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0bfed4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* NameId(::System::Collections::Generic::ICollection_1<::StringW>*  nameId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Games_ModioAPI_GetGamesFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PresentationOption, addr 0xa0c0438, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* PresentationOption(::System::Collections::Generic::ICollection_1<int64_t>*  presentationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method PresentationOption, addr 0xa0c036c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* PresentationOption(int64_t  presentationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method ShowHiddenTags, addr 0xa0c0fdc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* ShowHiddenTags(::System::Collections::Generic::ICollection_1<bool>*  showHiddenTags, ::Modio::API::Filtering  condition) ;

/// @brief Method ShowHiddenTags, addr 0xa0c0f0c, size 0xd0, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* ShowHiddenTags(bool  showHiddenTags, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0bf664, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0bf598, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmissionOption, addr 0xa0c05ac, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* SubmissionOption(::System::Collections::Generic::ICollection_1<int64_t>*  submissionOption, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmissionOption, addr 0xa0c04e0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* SubmissionOption(int64_t  submissionOption, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0bf7d8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0bf70c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method Summary, addr 0xa0bff7c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Summary(::StringW  summary, ::Modio::API::Filtering  condition) ;

/// @brief Method Summary, addr 0xa0c0024, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* Summary(::System::Collections::Generic::ICollection_1<::StringW>*  summary, ::Modio::API::Filtering  condition) ;

/// @brief Method UgcName, addr 0xa0c021c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* UgcName(::StringW  ugcName, ::Modio::API::Filtering  condition) ;

/// @brief Method UgcName, addr 0xa0c02c4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Games_ModioAPI_GetGamesFilter* UgcName(::System::Collections::Generic::ICollection_1<::StringW>*  ugcName, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0bf3c4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Games_ModioAPI_GetGamesFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Games_ModioAPI_GetGamesFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Games_ModioAPI_GetGamesFilter(Games_ModioAPI_GetGamesFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Games_ModioAPI_GetGamesFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Games_ModioAPI_GetGamesFilter(Games_ModioAPI_GetGamesFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17955};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Games_ModioAPI_GetGamesFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me
class CORDL_TYPE ModioAPI_Me : public ::System::Object {
public:
// Declarations
using _GetAuthenticatedUserAsJToken_d__0 = ::GlobalNamespace::Me_ModioAPI__GetAuthenticatedUserAsJToken_d__0;

using _GetAuthenticatedUser_d__1 = ::GlobalNamespace::Me_ModioAPI__GetAuthenticatedUser_d__1;

using _GetUserEventsAsJToken_d__2 = ::GlobalNamespace::Me_ModioAPI__GetUserEventsAsJToken_d__2;

using _GetUserEvents_d__3 = ::GlobalNamespace::Me_ModioAPI__GetUserEvents_d__3;

using _GetUserGamesAsJToken_d__6 = ::GlobalNamespace::Me_ModioAPI__GetUserGamesAsJToken_d__6;

using _GetUserGames_d__7 = ::GlobalNamespace::Me_ModioAPI__GetUserGames_d__7;

using _GetUserModfilesAsJToken_d__10 = ::GlobalNamespace::Me_ModioAPI__GetUserModfilesAsJToken_d__10;

using _GetUserModfiles_d__11 = ::GlobalNamespace::Me_ModioAPI__GetUserModfiles_d__11;

using _GetUserModsAsJToken_d__14 = ::GlobalNamespace::Me_ModioAPI__GetUserModsAsJToken_d__14;

using _GetUserMods_d__15 = ::GlobalNamespace::Me_ModioAPI__GetUserMods_d__15;

using _GetUserPurchasesAsJToken_d__18 = ::GlobalNamespace::Me_ModioAPI__GetUserPurchasesAsJToken_d__18;

using _GetUserPurchases_d__19 = ::GlobalNamespace::Me_ModioAPI__GetUserPurchases_d__19;

using _GetUserRatingsAsJToken_d__22 = ::GlobalNamespace::Me_ModioAPI__GetUserRatingsAsJToken_d__22;

using _GetUserRatings_d__23 = ::GlobalNamespace::Me_ModioAPI__GetUserRatings_d__23;

using _GetUserSubscriptionsAsJToken_d__28 = ::GlobalNamespace::Me_ModioAPI__GetUserSubscriptionsAsJToken_d__28;

using _GetUserSubscriptions_d__29 = ::GlobalNamespace::Me_ModioAPI__GetUserSubscriptions_d__29;

using _GetUserWalletAsJToken_d__32 = ::GlobalNamespace::Me_ModioAPI__GetUserWalletAsJToken_d__32;

using _GetUserWallet_d__33 = ::GlobalNamespace::Me_ModioAPI__GetUserWallet_d__33;

using _GetUsersMutedAsJToken_d__26 = ::GlobalNamespace::Me_ModioAPI__GetUsersMutedAsJToken_d__26;

using _GetUsersMuted_d__27 = ::GlobalNamespace::Me_ModioAPI__GetUsersMuted_d__27;

using GetUserEventsFilter = ::Modio::API::Me_ModioAPI_GetUserEventsFilter;

using GetUserGamesFilter = ::Modio::API::Me_ModioAPI_GetUserGamesFilter;

using GetUserModfilesFilter = ::Modio::API::Me_ModioAPI_GetUserModfilesFilter;

using GetUserModsFilter = ::Modio::API::Me_ModioAPI_GetUserModsFilter;

using GetUserPurchasesFilter = ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter;

using GetUserRatingsFilter = ::Modio::API::Me_ModioAPI_GetUserRatingsFilter;

using GetUserSubscriptionsFilter = ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter;

/// @brief Method FilterGetUserEvents, addr 0xa0ace00, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* FilterGetUserEvents(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetUserGames, addr 0xa0ad0e0, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* FilterGetUserGames(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetUserModfiles, addr 0xa0ad3c0, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* FilterGetUserModfiles(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetUserMods, addr 0xa0ad6a0, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* FilterGetUserMods(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetUserPurchases, addr 0xa0ad980, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* FilterGetUserPurchases(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetUserRatings, addr 0xa0adc60, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* FilterGetUserRatings(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetUserSubscriptions, addr 0xa0ae118, size 0x6c, virtual false, abstract: false, final false
static inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* FilterGetUserSubscriptions(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetAuthenticatedUser>d__1))]
/// @brief Method GetAuthenticatedUser, addr 0xa0acadc, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::UserObject>>>* GetAuthenticatedUser(::StringW  xModioDelegationToken) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetAuthenticatedUserAsJToken>d__0))]
/// @brief Method GetAuthenticatedUserAsJToken, addr 0xa0ac9d0, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetAuthenticatedUserAsJToken(::StringW  xModioDelegationToken) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserEvents>d__3))]
/// @brief Method GetUserEvents, addr 0xa0accf4, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::UserEventObject>>>>>* GetUserEvents(::Modio::API::Me_ModioAPI_GetUserEventsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserEventsAsJToken>d__2))]
/// @brief Method GetUserEventsAsJToken, addr 0xa0acbe8, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserEventsAsJToken(::Modio::API::Me_ModioAPI_GetUserEventsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserGames>d__7))]
/// @brief Method GetUserGames, addr 0xa0acfd4, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::GameObject>>>>>* GetUserGames(::Modio::API::Me_ModioAPI_GetUserGamesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserGamesAsJToken>d__6))]
/// @brief Method GetUserGamesAsJToken, addr 0xa0acec8, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserGamesAsJToken(::Modio::API::Me_ModioAPI_GetUserGamesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserModfiles>d__11))]
/// @brief Method GetUserModfiles, addr 0xa0ad2b4, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>* GetUserModfiles(::Modio::API::Me_ModioAPI_GetUserModfilesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserModfilesAsJToken>d__10))]
/// @brief Method GetUserModfilesAsJToken, addr 0xa0ad1a8, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserModfilesAsJToken(::Modio::API::Me_ModioAPI_GetUserModfilesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserMods>d__15))]
/// @brief Method GetUserMods, addr 0xa0ad594, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModObject>>>>>* GetUserMods(::Modio::API::Me_ModioAPI_GetUserModsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserModsAsJToken>d__14))]
/// @brief Method GetUserModsAsJToken, addr 0xa0ad488, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserModsAsJToken(::Modio::API::Me_ModioAPI_GetUserModsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserPurchases>d__19))]
/// @brief Method GetUserPurchases, addr 0xa0ad874, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModObject>>>>>* GetUserPurchases(::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserPurchasesAsJToken>d__18))]
/// @brief Method GetUserPurchasesAsJToken, addr 0xa0ad768, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserPurchasesAsJToken(::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserRatings>d__23))]
/// @brief Method GetUserRatings, addr 0xa0adb54, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::RatingObject>>>>>* GetUserRatings(::Modio::API::Me_ModioAPI_GetUserRatingsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserRatingsAsJToken>d__22))]
/// @brief Method GetUserRatingsAsJToken, addr 0xa0ada48, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserRatingsAsJToken(::Modio::API::Me_ModioAPI_GetUserRatingsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserSubscriptions>d__29))]
/// @brief Method GetUserSubscriptions, addr 0xa0ae00c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModObject>>>>>* GetUserSubscriptions(::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserSubscriptionsAsJToken>d__28))]
/// @brief Method GetUserSubscriptionsAsJToken, addr 0xa0adf00, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserSubscriptionsAsJToken(::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserWallet>d__33))]
/// @brief Method GetUserWallet, addr 0xa0ae284, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::WalletObject>>>* GetUserWallet(int64_t  gameId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUserWalletAsJToken>d__32))]
/// @brief Method GetUserWalletAsJToken, addr 0xa0ae184, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUserWalletAsJToken(int64_t  gameId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUsersMuted>d__27))]
/// @brief Method GetUsersMuted, addr 0xa0ade14, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::UserObject>>>>>* GetUsersMuted() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Me::<GetUsersMutedAsJToken>d__26))]
/// @brief Method GetUsersMutedAsJToken, addr 0xa0add28, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUsersMutedAsJToken() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Me() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Me", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Me(ModioAPI_Me && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Me", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Me(ModioAPI_Me const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17954};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Me) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserSubscriptionsFilter
class CORDL_TYPE Me_ModioAPI_GetUserSubscriptionsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa0b59cc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0b5900, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0b5cb4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* DateLive(::System::Collections::Generic::ICollection_1<int64_t>*  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0b5be8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* DateLive(int64_t  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0b5b40, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* DateUpdated(::System::Collections::Generic::ICollection_1<int64_t>*  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0b5a74, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* DateUpdated(int64_t  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b53fc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* GameId(::System::Collections::Generic::ICollection_1<int64_t>*  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b5330, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* GameId(int64_t  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b5288, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b51bc, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa0b662c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MaturityOption(::System::Collections::Generic::ICollection_1<int64_t>*  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa0b6560, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MaturityOption(int64_t  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b62c0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MetadataBlob(::StringW  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b6368, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MetadataBlob(::System::Collections::Generic::ICollection_1<::StringW>*  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa0b6170, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MetadataKvp(::StringW  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa0b6218, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MetadataKvp(::System::Collections::Generic::ICollection_1<::StringW>*  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa0b60c8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Modfile(::System::Collections::Generic::ICollection_1<int64_t>*  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa0b5ffc, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Modfile(int64_t  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b67a0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MonetizationOptions(::System::Collections::Generic::ICollection_1<int64_t>*  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b66d4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* MonetizationOptions(int64_t  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0b5d5c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Name(::StringW  name, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0b5e04, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Name(::System::Collections::Generic::ICollection_1<::StringW>*  name, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0b5eac, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* NameId(::StringW  nameId, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0b5f54, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* NameId(::System::Collections::Generic::ICollection_1<::StringW>*  nameId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PlatformStatus, addr 0xa0b6848, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* PlatformStatus(::StringW  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method PlatformStatus, addr 0xa0b68f0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* PlatformStatus(::System::Collections::Generic::ICollection_1<::StringW>*  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0b5570, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0b54a4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0b5858, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0b578c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa0b6410, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Tags(::StringW  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa0b64b8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Tags(::System::Collections::Generic::ICollection_1<::StringW>*  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa0b56e4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Visible(::System::Collections::Generic::ICollection_1<int64_t>*  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa0b5618, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter* Visible(int64_t  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0b515c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserSubscriptionsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserSubscriptionsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserSubscriptionsFilter(Me_ModioAPI_GetUserSubscriptionsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserSubscriptionsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserSubscriptionsFilter(Me_ModioAPI_GetUserSubscriptionsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17933};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserSubscriptionsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserRatingsFilter
class CORDL_TYPE Me_ModioAPI_GetUserRatingsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserRatingsFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa0b50b4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0b4fe8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b4c58, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* GameId(::System::Collections::Generic::ICollection_1<int64_t>*  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b4b8c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* GameId(int64_t  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0b4dcc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0b4d00, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method Rating, addr 0xa0b4f40, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* Rating(::System::Collections::Generic::ICollection_1<int64_t>*  rating, ::Modio::API::Filtering  condition) ;

/// @brief Method Rating, addr 0xa0b4e74, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserRatingsFilter* Rating(int64_t  rating, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0adcc8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserRatingsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserRatingsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserRatingsFilter(Me_ModioAPI_GetUserRatingsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserRatingsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserRatingsFilter(Me_ModioAPI_GetUserRatingsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17932};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserRatingsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserPurchasesFilter
class CORDL_TYPE Me_ModioAPI_GetUserPurchasesFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserPurchasesFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa0b3a70, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0b39a4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0b3d58, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* DateLive(::System::Collections::Generic::ICollection_1<int64_t>*  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0b3c8c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* DateLive(int64_t  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0b3be4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* DateUpdated(::System::Collections::Generic::ICollection_1<int64_t>*  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0b3b18, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* DateUpdated(int64_t  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b34a0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* GameId(::System::Collections::Generic::ICollection_1<int64_t>*  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b33d4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* GameId(int64_t  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b332c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b3260, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa0b46d0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MaturityOption(::System::Collections::Generic::ICollection_1<int64_t>*  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa0b4604, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MaturityOption(int64_t  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b4364, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MetadataBlob(::StringW  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b440c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MetadataBlob(::System::Collections::Generic::ICollection_1<::StringW>*  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa0b4214, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MetadataKvp(::StringW  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa0b42bc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MetadataKvp(::System::Collections::Generic::ICollection_1<::StringW>*  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa0b416c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Modfile(::System::Collections::Generic::ICollection_1<int64_t>*  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa0b40a0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Modfile(int64_t  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b4844, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MonetizationOptions(::System::Collections::Generic::ICollection_1<int64_t>*  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b4778, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* MonetizationOptions(int64_t  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0b3e00, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Name(::StringW  name, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0b3ea8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Name(::System::Collections::Generic::ICollection_1<::StringW>*  name, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0b3f50, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* NameId(::StringW  nameId, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0b3ff8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* NameId(::System::Collections::Generic::ICollection_1<::StringW>*  nameId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PlatformStatus, addr 0xa0b48ec, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* PlatformStatus(::StringW  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method PlatformStatus, addr 0xa0b4994, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* PlatformStatus(::System::Collections::Generic::ICollection_1<::StringW>*  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method Platforms, addr 0xa0b4a3c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Platforms(::StringW  platforms, ::Modio::API::Filtering  condition) ;

/// @brief Method Platforms, addr 0xa0b4ae4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Platforms(::System::Collections::Generic::ICollection_1<::StringW>*  platforms, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0b3614, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0b3548, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0b38fc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0b3830, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa0b44b4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Tags(::StringW  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa0b455c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Tags(::System::Collections::Generic::ICollection_1<::StringW>*  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa0b3788, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Visible(::System::Collections::Generic::ICollection_1<int64_t>*  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa0b36bc, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserPurchasesFilter* Visible(int64_t  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0ad9e8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserPurchasesFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserPurchasesFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserPurchasesFilter(Me_ModioAPI_GetUserPurchasesFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserPurchasesFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserPurchasesFilter(Me_ModioAPI_GetUserPurchasesFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17931};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserPurchasesFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserModsFilter
class CORDL_TYPE Me_ModioAPI_GetUserModsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserModsFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa0b2294, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0b21c8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0b257c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* DateLive(::System::Collections::Generic::ICollection_1<int64_t>*  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0b24b0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* DateLive(int64_t  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0b2408, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* DateUpdated(::System::Collections::Generic::ICollection_1<int64_t>*  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0b233c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* DateUpdated(int64_t  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b1cc4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* GameId(::System::Collections::Generic::ICollection_1<int64_t>*  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0b1bf8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* GameId(int64_t  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b1b50, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b1a84, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa0b2ef4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MaturityOption(::System::Collections::Generic::ICollection_1<int64_t>*  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa0b2e28, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MaturityOption(int64_t  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b2b88, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MetadataBlob(::StringW  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b2c30, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MetadataBlob(::System::Collections::Generic::ICollection_1<::StringW>*  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa0b2a38, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MetadataKvp(::StringW  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa0b2ae0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MetadataKvp(::System::Collections::Generic::ICollection_1<::StringW>*  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa0b2990, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Modfile(::System::Collections::Generic::ICollection_1<int64_t>*  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa0b28c4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Modfile(int64_t  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b3068, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MonetizationOptions(::System::Collections::Generic::ICollection_1<int64_t>*  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b2f9c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* MonetizationOptions(int64_t  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0b2624, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Name(::StringW  name, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0b26cc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Name(::System::Collections::Generic::ICollection_1<::StringW>*  name, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0b2774, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* NameId(::StringW  nameId, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0b281c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* NameId(::System::Collections::Generic::ICollection_1<::StringW>*  nameId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PlatformStatus, addr 0xa0b3110, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* PlatformStatus(::StringW  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method PlatformStatus, addr 0xa0b31b8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* PlatformStatus(::System::Collections::Generic::ICollection_1<::StringW>*  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0b1e38, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0b1d6c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0b2120, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0b2054, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa0b2cd8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Tags(::StringW  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa0b2d80, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Tags(::System::Collections::Generic::ICollection_1<::StringW>*  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa0b1fac, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Visible(::System::Collections::Generic::ICollection_1<int64_t>*  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa0b1ee0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModsFilter* Visible(int64_t  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0ad708, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserModsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserModsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserModsFilter(Me_ModioAPI_GetUserModsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserModsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserModsFilter(Me_ModioAPI_GetUserModsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17930};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserModsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserModfilesFilter
class CORDL_TYPE Me_ModioAPI_GetUserModfilesFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserModfilesFilter*> {
public:
// Declarations
/// @brief Method Changelog, addr 0xa0b1694, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Changelog(::StringW  changelog, ::Modio::API::Filtering  condition) ;

/// @brief Method Changelog, addr 0xa0b173c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Changelog(::System::Collections::Generic::ICollection_1<::StringW>*  changelog, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0b0c2c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0b0b60, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateScanned, addr 0xa0b0da0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* DateScanned(::System::Collections::Generic::ICollection_1<int64_t>*  dateScanned, ::Modio::API::Filtering  condition) ;

/// @brief Method DateScanned, addr 0xa0b0cd4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* DateScanned(int64_t  dateScanned, ::Modio::API::Filtering  condition) ;

/// @brief Method Filehash, addr 0xa0b12a4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Filehash(::StringW  filehash, ::Modio::API::Filtering  condition) ;

/// @brief Method Filehash, addr 0xa0b134c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Filehash(::System::Collections::Generic::ICollection_1<::StringW>*  filehash, ::Modio::API::Filtering  condition) ;

/// @brief Method Filename, addr 0xa0b13f4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Filename(::StringW  filename, ::Modio::API::Filtering  condition) ;

/// @brief Method Filename, addr 0xa0b149c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Filename(::System::Collections::Generic::ICollection_1<::StringW>*  filename, ::Modio::API::Filtering  condition) ;

/// @brief Method Filesize, addr 0xa0b11fc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Filesize(::System::Collections::Generic::ICollection_1<int64_t>*  filesize, ::Modio::API::Filtering  condition) ;

/// @brief Method Filesize, addr 0xa0b1130, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Filesize(int64_t  filesize, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b0944, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0b0878, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b17e4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* MetadataBlob(::StringW  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa0b188c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* MetadataBlob(::System::Collections::Generic::ICollection_1<::StringW>*  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0b0ab8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0b09ec, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PlatformStatus, addr 0xa0b1934, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* PlatformStatus(::StringW  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method PlatformStatus, addr 0xa0b19dc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* PlatformStatus(::System::Collections::Generic::ICollection_1<::StringW>*  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method Version, addr 0xa0b1544, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Version(::StringW  version, ::Modio::API::Filtering  condition) ;

/// @brief Method Version, addr 0xa0b15ec, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* Version(::System::Collections::Generic::ICollection_1<::StringW>*  version, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusPositive, addr 0xa0b1088, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* VirusPositive(::System::Collections::Generic::ICollection_1<int64_t>*  virusPositive, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusPositive, addr 0xa0b0fbc, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* VirusPositive(int64_t  virusPositive, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusStatus, addr 0xa0b0f14, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* VirusStatus(::System::Collections::Generic::ICollection_1<int64_t>*  virusStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusStatus, addr 0xa0b0e48, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserModfilesFilter* VirusStatus(int64_t  virusStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0ad428, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserModfilesFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserModfilesFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserModfilesFilter(Me_ModioAPI_GetUserModfilesFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserModfilesFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserModfilesFilter(Me_ModioAPI_GetUserModfilesFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17929};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserModfilesFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserGamesFilter
class CORDL_TYPE Me_ModioAPI_GetUserGamesFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserGamesFilter*> {
public:
// Declarations
/// @brief Method ApiAccessOptions, addr 0xa0b04e4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* ApiAccessOptions(::System::Collections::Generic::ICollection_1<int64_t>*  apiAccessOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method ApiAccessOptions, addr 0xa0b0418, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* ApiAccessOptions(int64_t  apiAccessOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CommunityOptions, addr 0xa0b01fc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* CommunityOptions(::System::Collections::Generic::ICollection_1<int64_t>*  communityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CommunityOptions, addr 0xa0b0130, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* CommunityOptions(int64_t  communityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CurationOption, addr 0xa0aff14, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* CurationOption(::System::Collections::Generic::ICollection_1<int64_t>*  curationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method CurationOption, addr 0xa0afe48, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* CurationOption(int64_t  curationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0af140, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0af074, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0af428, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DateLive(::System::Collections::Generic::ICollection_1<int64_t>*  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa0af35c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DateLive(int64_t  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0af2b4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DateUpdated(::System::Collections::Generic::ICollection_1<int64_t>*  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa0af1e8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DateUpdated(int64_t  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DependencyOption, addr 0xa0b0088, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DependencyOption(::System::Collections::Generic::ICollection_1<int64_t>*  dependencyOption, ::Modio::API::Filtering  condition) ;

/// @brief Method DependencyOption, addr 0xa0affbc, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* DependencyOption(int64_t  dependencyOption, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0aece4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0aec18, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method InstructionsUrl, addr 0xa0af8c0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* InstructionsUrl(::StringW  instructionsUrl, ::Modio::API::Filtering  condition) ;

/// @brief Method InstructionsUrl, addr 0xa0af968, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* InstructionsUrl(::System::Collections::Generic::ICollection_1<::StringW>*  instructionsUrl, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOptions, addr 0xa0b0658, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* MaturityOptions(::System::Collections::Generic::ICollection_1<int64_t>*  maturityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOptions, addr 0xa0b058c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* MaturityOptions(int64_t  maturityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b0370, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* MonetizationOptions(::System::Collections::Generic::ICollection_1<int64_t>*  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa0b02a4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* MonetizationOptions(int64_t  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0af4d0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Name(::StringW  name, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa0af578, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Name(::System::Collections::Generic::ICollection_1<::StringW>*  name, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0af620, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* NameId(::StringW  nameId, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa0af6c8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* NameId(::System::Collections::Generic::ICollection_1<::StringW>*  nameId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PresentationOption, addr 0xa0afc2c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* PresentationOption(::System::Collections::Generic::ICollection_1<int64_t>*  presentationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method PresentationOption, addr 0xa0afb60, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* PresentationOption(int64_t  presentationOption, ::Modio::API::Filtering  condition) ;

/// @brief Method ShowHiddenTags, addr 0xa0b07d0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* ShowHiddenTags(::System::Collections::Generic::ICollection_1<bool>*  showHiddenTags, ::Modio::API::Filtering  condition) ;

/// @brief Method ShowHiddenTags, addr 0xa0b0700, size 0xd0, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* ShowHiddenTags(bool  showHiddenTags, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0aee58, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa0aed8c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmissionOption, addr 0xa0afda0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* SubmissionOption(::System::Collections::Generic::ICollection_1<int64_t>*  submissionOption, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmissionOption, addr 0xa0afcd4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* SubmissionOption(int64_t  submissionOption, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0aefcc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa0aef00, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method Summary, addr 0xa0af770, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Summary(::StringW  summary, ::Modio::API::Filtering  condition) ;

/// @brief Method Summary, addr 0xa0af818, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* Summary(::System::Collections::Generic::ICollection_1<::StringW>*  summary, ::Modio::API::Filtering  condition) ;

/// @brief Method UgcName, addr 0xa0afa10, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* UgcName(::StringW  ugcName, ::Modio::API::Filtering  condition) ;

/// @brief Method UgcName, addr 0xa0afab8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserGamesFilter* UgcName(::System::Collections::Generic::ICollection_1<::StringW>*  ugcName, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0ad148, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserGamesFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserGamesFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserGamesFilter(Me_ModioAPI_GetUserGamesFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserGamesFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserGamesFilter(Me_ModioAPI_GetUserGamesFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17928};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserGamesFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Me/GetUserEventsFilter
class CORDL_TYPE Me_ModioAPI_GetUserEventsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Me_ModioAPI_GetUserEventsFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa0aea20, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa0ae954, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method EventType, addr 0xa0aeac8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* EventType(::StringW  eventType, ::Modio::API::Filtering  condition) ;

/// @brief Method EventType, addr 0xa0aeb70, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* EventType(::System::Collections::Generic::ICollection_1<::StringW>*  eventType, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0ae5c4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* GameId(::System::Collections::Generic::ICollection_1<int64_t>*  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa0ae4f8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* GameId(int64_t  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0ae450, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa0ae384, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0ae738, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0ae66c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method UserId, addr 0xa0ae8ac, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* UserId(::System::Collections::Generic::ICollection_1<int64_t>*  userId, ::Modio::API::Filtering  condition) ;

/// @brief Method UserId, addr 0xa0ae7e0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Me_ModioAPI_GetUserEventsFilter* UserId(int64_t  userId, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0ace68, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Me_ModioAPI_GetUserEventsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserEventsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Me_ModioAPI_GetUserEventsFilter(Me_ModioAPI_GetUserEventsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Me_ModioAPI_GetUserEventsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Me_ModioAPI_GetUserEventsFilter(Me_ModioAPI_GetUserEventsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Me_ModioAPI_GetUserEventsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Agreements
class CORDL_TYPE ModioAPI_Agreements : public ::System::Object {
public:
// Declarations
using _GetAgreementVersionAsJToken_d__0 = ::GlobalNamespace::Agreements_ModioAPI__GetAgreementVersionAsJToken_d__0;

using _GetAgreementVersion_d__1 = ::GlobalNamespace::Agreements_ModioAPI__GetAgreementVersion_d__1;

using _GetCurrentAgreementAsJToken_d__2 = ::GlobalNamespace::Agreements_ModioAPI__GetCurrentAgreementAsJToken_d__2;

using _GetCurrentAgreement_d__3 = ::GlobalNamespace::Agreements_ModioAPI__GetCurrentAgreement_d__3;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Agreements::<GetAgreementVersion>d__1))]
/// @brief Method GetAgreementVersion, addr 0xa0aacb0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AgreementVersionObject>>>* GetAgreementVersion(int64_t  agreementVersionId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Agreements::<GetAgreementVersionAsJToken>d__0))]
/// @brief Method GetAgreementVersionAsJToken, addr 0xa0aabb0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetAgreementVersionAsJToken(int64_t  agreementVersionId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Agreements::<GetCurrentAgreement>d__3))]
/// @brief Method GetCurrentAgreement, addr 0xa0aaeb0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AgreementVersionObject>>>* GetCurrentAgreement(int64_t  agreementTypeId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Agreements::<GetCurrentAgreementAsJToken>d__2))]
/// @brief Method GetCurrentAgreementAsJToken, addr 0xa0aadb0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetCurrentAgreementAsJToken(int64_t  agreementTypeId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Agreements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Agreements", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Agreements(ModioAPI_Agreements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Agreements", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Agreements(ModioAPI_Agreements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Agreements) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Monetization
class CORDL_TYPE ModioAPI_Monetization : public ::System::Object {
public:
// Declarations
using _CreateModMonetizationTeamAsJToken_d__0 = ::GlobalNamespace::Monetization_ModioAPI__CreateModMonetizationTeamAsJToken_d__0;

using _CreateModMonetizationTeam_d__1 = ::GlobalNamespace::Monetization_ModioAPI__CreateModMonetizationTeam_d__1;

using _GetGameTokenPacksAsJToken_d__2 = ::GlobalNamespace::Monetization_ModioAPI__GetGameTokenPacksAsJToken_d__2;

using _GetGameTokenPacks_d__3 = ::GlobalNamespace::Monetization_ModioAPI__GetGameTokenPacks_d__3;

using _GetUsersInModMonetizationTeamAsJToken_d__4 = ::GlobalNamespace::Monetization_ModioAPI__GetUsersInModMonetizationTeamAsJToken_d__4;

using _GetUsersInModMonetizationTeam_d__5 = ::GlobalNamespace::Monetization_ModioAPI__GetUsersInModMonetizationTeam_d__5;

using _PurchaseAsJToken_d__6 = ::GlobalNamespace::Monetization_ModioAPI__PurchaseAsJToken_d__6;

using _Purchase_d__7 = ::GlobalNamespace::Monetization_ModioAPI__Purchase_d__7;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<CreateModMonetizationTeam>d__1))]
/// @brief Method CreateModMonetizationTeam, addr 0xa0a6ea0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject>>>* CreateModMonetizationTeam(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<CreateModMonetizationTeamAsJToken>d__0))]
/// @brief Method CreateModMonetizationTeamAsJToken, addr 0xa0a6da0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* CreateModMonetizationTeamAsJToken(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<GetGameTokenPacks>d__3))]
/// @brief Method GetGameTokenPacks, addr 0xa0a708c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::GameTokenPackObject>>>>>* GetGameTokenPacks() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<GetGameTokenPacksAsJToken>d__2))]
/// @brief Method GetGameTokenPacksAsJToken, addr 0xa0a6fa0, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetGameTokenPacksAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<GetUsersInModMonetizationTeam>d__5))]
/// @brief Method GetUsersInModMonetizationTeam, addr 0xa0a7278, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject>>>* GetUsersInModMonetizationTeam(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<GetUsersInModMonetizationTeamAsJToken>d__4))]
/// @brief Method GetUsersInModMonetizationTeamAsJToken, addr 0xa0a7178, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetUsersInModMonetizationTeamAsJToken(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<Purchase>d__7))]
/// @brief Method Purchase, addr 0xa0a7498, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::PayObject>>>* Purchase(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::PayRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Monetization::<PurchaseAsJToken>d__6))]
/// @brief Method PurchaseAsJToken, addr 0xa0a7378, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* PurchaseAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::PayRequest>  body) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Monetization() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Monetization", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Monetization(ModioAPI_Monetization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Monetization", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Monetization(ModioAPI_Monetization const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Monetization) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Authentication
class CORDL_TYPE ModioAPI_Authentication : public ::System::Object {
public:
// Declarations
using _AuthenticateViaAppleAsJToken_d__0 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaAppleAsJToken_d__0;

using _AuthenticateViaApple_d__1 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaApple_d__1;

using _AuthenticateViaDiscordAsJToken_d__2 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaDiscordAsJToken_d__2;

using _AuthenticateViaDiscord_d__3 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaDiscord_d__3;

using _AuthenticateViaEpicgamesAsJToken_d__4 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaEpicgamesAsJToken_d__4;

using _AuthenticateViaEpicgames_d__5 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaEpicgames_d__5;

using _AuthenticateViaFacebookAsJToken_d__6 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaFacebookAsJToken_d__6;

using _AuthenticateViaFacebook_d__7 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaFacebook_d__7;

using _AuthenticateViaGogGalaxyAsJToken_d__8 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGogGalaxyAsJToken_d__8;

using _AuthenticateViaGogGalaxy_d__9 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGogGalaxy_d__9;

using _AuthenticateViaGoogleAsJToken_d__10 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogleAsJToken_d__10;

using _AuthenticateViaGoogle_d__11 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaGoogle_d__11;

using _AuthenticateViaItchioAsJToken_d__12 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaItchioAsJToken_d__12;

using _AuthenticateViaItchio_d__13 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaItchio_d__13;

using _AuthenticateViaOculusAsJToken_d__14 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaOculusAsJToken_d__14;

using _AuthenticateViaOculus_d__15 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaOculus_d__15;

using _AuthenticateViaOpenidAsJToken_d__16 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaOpenidAsJToken_d__16;

using _AuthenticateViaOpenid_d__17 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaOpenid_d__17;

using _AuthenticateViaPsnAsJToken_d__18 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaPsnAsJToken_d__18;

using _AuthenticateViaPsn_d__19 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaPsn_d__19;

using _AuthenticateViaSteamAsJToken_d__20 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSteamAsJToken_d__20;

using _AuthenticateViaSteam_d__21 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSteam_d__21;

using _AuthenticateViaSwitchAsJToken_d__22 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitchAsJToken_d__22;

using _AuthenticateViaSwitch_d__23 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaSwitch_d__23;

using _AuthenticateViaXboxLiveAsJToken_d__24 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaXboxLiveAsJToken_d__24;

using _AuthenticateViaXboxLive_d__25 = ::GlobalNamespace::Authentication_ModioAPI__AuthenticateViaXboxLive_d__25;

using _ExchangeEmailSecurityCodeAsJToken_d__26 = ::GlobalNamespace::Authentication_ModioAPI__ExchangeEmailSecurityCodeAsJToken_d__26;

using _ExchangeEmailSecurityCode_d__27 = ::GlobalNamespace::Authentication_ModioAPI__ExchangeEmailSecurityCode_d__27;

using _LogoutAsJToken_d__28 = ::GlobalNamespace::Authentication_ModioAPI__LogoutAsJToken_d__28;

using _Logout_d__29 = ::GlobalNamespace::Authentication_ModioAPI__Logout_d__29;

using _RequestEmailSecurityCodeAsJToken_d__30 = ::GlobalNamespace::Authentication_ModioAPI__RequestEmailSecurityCodeAsJToken_d__30;

using _RequestEmailSecurityCode_d__31 = ::GlobalNamespace::Authentication_ModioAPI__RequestEmailSecurityCode_d__31;

using _TermsAsJToken_d__32 = ::GlobalNamespace::Authentication_ModioAPI__TermsAsJToken_d__32;

using _Terms_d__33 = ::GlobalNamespace::Authentication_ModioAPI__Terms_d__33;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaApple>d__1))]
/// @brief Method AuthenticateViaApple, addr 0xa096948, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaApple(::System::Nullable_1<::Modio::API::SchemaDefinitions::AppleAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaAppleAsJToken>d__0))]
/// @brief Method AuthenticateViaAppleAsJToken, addr 0xa096838, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaAppleAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::AppleAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaDiscord>d__3))]
/// @brief Method AuthenticateViaDiscord, addr 0xa096b74, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaDiscord(::System::Nullable_1<::Modio::API::SchemaDefinitions::DiscordAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaDiscordAsJToken>d__2))]
/// @brief Method AuthenticateViaDiscordAsJToken, addr 0xa096a58, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaDiscordAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::DiscordAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaEpicgames>d__5))]
/// @brief Method AuthenticateViaEpicgames, addr 0xa096dac, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaEpicgames(::System::Nullable_1<::Modio::API::SchemaDefinitions::EpicGamesAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaEpicgamesAsJToken>d__4))]
/// @brief Method AuthenticateViaEpicgamesAsJToken, addr 0xa096c90, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaEpicgamesAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::EpicGamesAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaFacebook>d__7))]
/// @brief Method AuthenticateViaFacebook, addr 0xa096fe4, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaFacebook(::System::Nullable_1<::Modio::API::SchemaDefinitions::FacebookAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaFacebookAsJToken>d__6))]
/// @brief Method AuthenticateViaFacebookAsJToken, addr 0xa096ec8, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaFacebookAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::FacebookAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaGogGalaxy>d__9))]
/// @brief Method AuthenticateViaGogGalaxy, addr 0xa09721c, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaGogGalaxy(::System::Nullable_1<::Modio::API::SchemaDefinitions::GogAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaGogGalaxyAsJToken>d__8))]
/// @brief Method AuthenticateViaGogGalaxyAsJToken, addr 0xa097100, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaGogGalaxyAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::GogAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaGoogle>d__11))]
/// @brief Method AuthenticateViaGoogle, addr 0xa097448, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaGoogle(::System::Nullable_1<::Modio::API::SchemaDefinitions::GoogleAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaGoogleAsJToken>d__10))]
/// @brief Method AuthenticateViaGoogleAsJToken, addr 0xa097338, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaGoogleAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::GoogleAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaItchio>d__13))]
/// @brief Method AuthenticateViaItchio, addr 0xa097674, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaItchio(::System::Nullable_1<::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaItchioAsJToken>d__12))]
/// @brief Method AuthenticateViaItchioAsJToken, addr 0xa097558, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaItchioAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaOculus>d__15))]
/// @brief Method AuthenticateViaOculus, addr 0xa0978ac, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaOculus(::System::Nullable_1<::Modio::API::SchemaDefinitions::MetaQuestAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaOculusAsJToken>d__14))]
/// @brief Method AuthenticateViaOculusAsJToken, addr 0xa097790, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaOculusAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::MetaQuestAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaOpenid>d__17))]
/// @brief Method AuthenticateViaOpenid, addr 0xa097ae0, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaOpenid(::System::Nullable_1<::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaOpenidAsJToken>d__16))]
/// @brief Method AuthenticateViaOpenidAsJToken, addr 0xa0979c8, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaOpenidAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::OpenIdAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaPsn>d__19))]
/// @brief Method AuthenticateViaPsn, addr 0xa097d10, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaPsn(::System::Nullable_1<::Modio::API::SchemaDefinitions::PsnAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaPsnAsJToken>d__18))]
/// @brief Method AuthenticateViaPsnAsJToken, addr 0xa097bf8, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaPsnAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::PsnAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaSteam>d__21))]
/// @brief Method AuthenticateViaSteam, addr 0xa097f44, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaSteam(::System::Nullable_1<::Modio::API::SchemaDefinitions::SteamAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaSteamAsJToken>d__20))]
/// @brief Method AuthenticateViaSteamAsJToken, addr 0xa097e28, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaSteamAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::SteamAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaSwitch>d__23))]
/// @brief Method AuthenticateViaSwitch, addr 0xa09817c, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaSwitch(::System::Nullable_1<::Modio::API::SchemaDefinitions::SwitchAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaSwitchAsJToken>d__22))]
/// @brief Method AuthenticateViaSwitchAsJToken, addr 0xa098060, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaSwitchAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::SwitchAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaXboxLive>d__25))]
/// @brief Method AuthenticateViaXboxLive, addr 0xa0983b4, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* AuthenticateViaXboxLive(::System::Nullable_1<::Modio::API::SchemaDefinitions::XboxLiveAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<AuthenticateViaXboxLiveAsJToken>d__24))]
/// @brief Method AuthenticateViaXboxLiveAsJToken, addr 0xa098298, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AuthenticateViaXboxLiveAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::XboxLiveAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<ExchangeEmailSecurityCode>d__27))]
/// @brief Method ExchangeEmailSecurityCode, addr 0xa0985dc, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AccessTokenObject>>>* ExchangeEmailSecurityCode(::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailAuthenticationSecurityCodeRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<ExchangeEmailSecurityCodeAsJToken>d__26))]
/// @brief Method ExchangeEmailSecurityCodeAsJToken, addr 0xa0984d0, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* ExchangeEmailSecurityCodeAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailAuthenticationSecurityCodeRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<Logout>d__29))]
/// @brief Method Logout, addr 0xa0987d4, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::WebMessageObject>>>* Logout() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<LogoutAsJToken>d__28))]
/// @brief Method LogoutAsJToken, addr 0xa0986e8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* LogoutAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<RequestEmailSecurityCode>d__31))]
/// @brief Method RequestEmailSecurityCode, addr 0xa0989cc, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailRequestResponse>>>* RequestEmailSecurityCode(::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<RequestEmailSecurityCodeAsJToken>d__30))]
/// @brief Method RequestEmailSecurityCodeAsJToken, addr 0xa0988c0, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* RequestEmailSecurityCodeAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<Terms>d__33))]
/// @brief Method Terms, addr 0xa098bc4, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::TermsObject>>>* Terms() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Authentication::<TermsAsJToken>d__32))]
/// @brief Method TermsAsJToken, addr 0xa098ad8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* TermsAsJToken() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Authentication() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Authentication", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Authentication(ModioAPI_Authentication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Authentication", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Authentication(ModioAPI_Authentication const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Authentication) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/FilesMultipartUploads
class CORDL_TYPE ModioAPI_FilesMultipartUploads : public ::System::Object {
public:
// Declarations
using _AddMultipartUploadPartAsJToken_d__0 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__AddMultipartUploadPartAsJToken_d__0;

using _AddMultipartUploadPart_d__1 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__AddMultipartUploadPart_d__1;

using _CompleteMultipartUploadSessionAsJToken_d__2 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__CompleteMultipartUploadSessionAsJToken_d__2;

using _CompleteMultipartUploadSession_d__3 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__CompleteMultipartUploadSession_d__3;

using _CreateMultipartUploadSessionAsJToken_d__4 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__CreateMultipartUploadSessionAsJToken_d__4;

using _CreateMultipartUploadSession_d__5 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__CreateMultipartUploadSession_d__5;

using _DeleteMultipartUploadSessionAsJToken_d__6 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__DeleteMultipartUploadSessionAsJToken_d__6;

using _DeleteMultipartUploadSession_d__7 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__DeleteMultipartUploadSession_d__7;

using _GetMultipartUploadPartsAsJToken_d__8 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__GetMultipartUploadPartsAsJToken_d__8;

using _GetMultipartUploadParts_d__9 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__GetMultipartUploadParts_d__9;

using _GetMultipartUploadSessionsAsJToken_d__12 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__GetMultipartUploadSessionsAsJToken_d__12;

using _GetMultipartUploadSessions_d__13 = ::GlobalNamespace::FilesMultipartUploads_ModioAPI__GetMultipartUploadSessions_d__13;

using GetMultipartUploadPartsFilter = ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter;

using GetMultipartUploadSessionsFilter = ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<AddMultipartUploadPart>d__1))]
/// @brief Method AddMultipartUploadPart, addr 0xa09057c, size 0x164, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>* AddMultipartUploadPart(::StringW  uploadId, int64_t  modId, ::StringW  contentRange, ::ArrayW<uint8_t>  bytes, ::StringW  digest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<AddMultipartUploadPartAsJToken>d__0))]
/// @brief Method AddMultipartUploadPartAsJToken, addr 0xa090418, size 0x164, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddMultipartUploadPartAsJToken(::StringW  uploadId, int64_t  modId, ::StringW  contentRange, ::ArrayW<uint8_t>  bytes, ::StringW  digest) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<CompleteMultipartUploadSession>d__3))]
/// @brief Method CompleteMultipartUploadSession, addr 0xa0907f0, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>* CompleteMultipartUploadSession(::StringW  uploadId, int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<CompleteMultipartUploadSessionAsJToken>d__2))]
/// @brief Method CompleteMultipartUploadSessionAsJToken, addr 0xa0906e0, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* CompleteMultipartUploadSessionAsJToken(::StringW  uploadId, int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<CreateMultipartUploadSession>d__5))]
/// @brief Method CreateMultipartUploadSession, addr 0xa090a20, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>* CreateMultipartUploadSession(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<CreateMultipartUploadSessionAsJToken>d__4))]
/// @brief Method CreateMultipartUploadSessionAsJToken, addr 0xa090900, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* CreateMultipartUploadSessionAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::CreateMultipartUploadSessionRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<DeleteMultipartUploadSession>d__7))]
/// @brief Method DeleteMultipartUploadSession, addr 0xa090c50, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteMultipartUploadSession(::StringW  uploadId, int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<DeleteMultipartUploadSessionAsJToken>d__6))]
/// @brief Method DeleteMultipartUploadSessionAsJToken, addr 0xa090b40, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteMultipartUploadSessionAsJToken(::StringW  uploadId, int64_t  modId) ;

/// @brief Method FilterGetMultipartUploadParts, addr 0xa090f6c, size 0x74, virtual false, abstract: false, final false
static inline ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter* FilterGetMultipartUploadParts(::StringW  uploadId, int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetMultipartUploadSessions, addr 0xa0911ec, size 0x6c, virtual false, abstract: false, final false
static inline ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter* FilterGetMultipartUploadSessions(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<GetMultipartUploadParts>d__9))]
/// @brief Method GetMultipartUploadParts, addr 0xa090e60, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>>>* GetMultipartUploadParts(int64_t  modId, ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<GetMultipartUploadPartsAsJToken>d__8))]
/// @brief Method GetMultipartUploadPartsAsJToken, addr 0xa090d60, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetMultipartUploadPartsAsJToken(int64_t  modId, ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<GetMultipartUploadSessions>d__13))]
/// @brief Method GetMultipartUploadSessions, addr 0xa0910e0, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>>>* GetMultipartUploadSessions(int64_t  modId, ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::FilesMultipartUploads::<GetMultipartUploadSessionsAsJToken>d__12))]
/// @brief Method GetMultipartUploadSessionsAsJToken, addr 0xa090fe0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetMultipartUploadSessionsAsJToken(int64_t  modId, ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_FilesMultipartUploads() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_FilesMultipartUploads", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_FilesMultipartUploads(ModioAPI_FilesMultipartUploads && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_FilesMultipartUploads", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_FilesMultipartUploads(ModioAPI_FilesMultipartUploads const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17877};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_FilesMultipartUploads) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/FilesMultipartUploads/GetMultipartUploadSessionsFilter
class CORDL_TYPE FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter*> {
public:
// Declarations
static inline ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method Status, addr 0xa091400, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa091334, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0912d4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter(FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter(FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17864};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadSessionsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/FilesMultipartUploads/GetMultipartUploadPartsFilter
class CORDL_TYPE FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter*> {
public:
// Declarations
/// @brief Field _uploadId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadId, put=__cordl_internal_set__uploadId)) ::StringW  _uploadId;

static inline ::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize, ::StringW  uploadId) ;

constexpr ::StringW const& __cordl_internal_get__uploadId() const;

constexpr ::StringW& __cordl_internal_get__uploadId() ;

constexpr void __cordl_internal_set__uploadId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa091258, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize, ::StringW  uploadId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter(FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter(FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17863};

/// @brief Field _uploadId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____uploadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter, ____uploadId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::FilesMultipartUploads_ModioAPI_GetMultipartUploadPartsFilter) == 0x28, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Teams
class CORDL_TYPE ModioAPI_Teams : public ::System::Object {
public:
// Declarations
using _AddModTeamMemberAsJToken_d__0 = ::GlobalNamespace::Teams_ModioAPI__AddModTeamMemberAsJToken_d__0;

using _AddModTeamMember_d__1 = ::GlobalNamespace::Teams_ModioAPI__AddModTeamMember_d__1;

using _DeleteModTeamMemberAsJToken_d__2 = ::GlobalNamespace::Teams_ModioAPI__DeleteModTeamMemberAsJToken_d__2;

using _DeleteModTeamMember_d__3 = ::GlobalNamespace::Teams_ModioAPI__DeleteModTeamMember_d__3;

using _GetModTeamMembersAsJToken_d__4 = ::GlobalNamespace::Teams_ModioAPI__GetModTeamMembersAsJToken_d__4;

using _GetModTeamMembers_d__5 = ::GlobalNamespace::Teams_ModioAPI__GetModTeamMembers_d__5;

using _UpdateModTeamMemberAsJToken_d__8 = ::GlobalNamespace::Teams_ModioAPI__UpdateModTeamMemberAsJToken_d__8;

using _UpdateModTeamMember_d__9 = ::GlobalNamespace::Teams_ModioAPI__UpdateModTeamMember_d__9;

using GetModTeamMembersFilter = ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<AddModTeamMember>d__1))]
/// @brief Method AddModTeamMember, addr 0xa08bcf0, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::TeamMemberObject>>>* AddModTeamMember(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddTeamMemberRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<AddModTeamMemberAsJToken>d__0))]
/// @brief Method AddModTeamMemberAsJToken, addr 0xa08bbcc, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModTeamMemberAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddTeamMemberRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<DeleteModTeamMember>d__3))]
/// @brief Method DeleteModTeamMember, addr 0xa08bf14, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModTeamMember(int64_t  modId, int64_t  teamMemberId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<DeleteModTeamMemberAsJToken>d__2))]
/// @brief Method DeleteModTeamMemberAsJToken, addr 0xa08be14, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModTeamMemberAsJToken(int64_t  modId, int64_t  teamMemberId) ;

/// @brief Method FilterGetModTeamMembers, addr 0xa08c220, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* FilterGetModTeamMembers(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<GetModTeamMembers>d__5))]
/// @brief Method GetModTeamMembers, addr 0xa08c114, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::TeamMemberObject>>>>>* GetModTeamMembers(int64_t  modId, ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<GetModTeamMembersAsJToken>d__4))]
/// @brief Method GetModTeamMembersAsJToken, addr 0xa08c014, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModTeamMembersAsJToken(int64_t  modId, ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<UpdateModTeamMember>d__9))]
/// @brief Method UpdateModTeamMember, addr 0xa08c3e8, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::TeamMemberObject>>>* UpdateModTeamMember(int64_t  modId, int64_t  teamMemberId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Teams::<UpdateModTeamMemberAsJToken>d__8))]
/// @brief Method UpdateModTeamMemberAsJToken, addr 0xa08c2e8, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* UpdateModTeamMemberAsJToken(int64_t  modId, int64_t  teamMemberId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Teams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Teams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Teams(ModioAPI_Teams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Teams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Teams(ModioAPI_Teams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17862};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Teams) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Teams/GetModTeamMembersFilter
class CORDL_TYPE Teams_ModioAPI_GetModTeamMembersFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa08cb60, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa08ca94, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa08c5b4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa08c4e8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Level, addr 0xa08c9ec, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Level(::System::Collections::Generic::ICollection_1<int64_t>*  level, ::Modio::API::Filtering  condition) ;

/// @brief Method Level, addr 0xa08c920, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Level(int64_t  level, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method Pending, addr 0xa08ccd4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Pending(::System::Collections::Generic::ICollection_1<int64_t>*  pending, ::Modio::API::Filtering  condition) ;

/// @brief Method Pending, addr 0xa08cc08, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Pending(int64_t  pending, ::Modio::API::Filtering  condition) ;

/// @brief Method UserId, addr 0xa08c728, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* UserId(::System::Collections::Generic::ICollection_1<int64_t>*  userId, ::Modio::API::Filtering  condition) ;

/// @brief Method UserId, addr 0xa08c65c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* UserId(int64_t  userId, ::Modio::API::Filtering  condition) ;

/// @brief Method Username, addr 0xa08c7d0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Username(::StringW  username, ::Modio::API::Filtering  condition) ;

/// @brief Method Username, addr 0xa08c878, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter* Username(::System::Collections::Generic::ICollection_1<::StringW>*  username, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa08c288, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Teams_ModioAPI_GetModTeamMembersFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Teams_ModioAPI_GetModTeamMembersFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Teams_ModioAPI_GetModTeamMembersFilter(Teams_ModioAPI_GetModTeamMembersFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Teams_ModioAPI_GetModTeamMembersFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Teams_ModioAPI_GetModTeamMembersFilter(Teams_ModioAPI_GetModTeamMembersFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Teams_ModioAPI_GetModTeamMembersFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Tags
class CORDL_TYPE ModioAPI_Tags : public ::System::Object {
public:
// Declarations
using _AddModTagsAsJToken_d__0 = ::GlobalNamespace::Tags_ModioAPI__AddModTagsAsJToken_d__0;

using _AddModTags_d__1 = ::GlobalNamespace::Tags_ModioAPI__AddModTags_d__1;

using _DeleteModTagsAsJToken_d__2 = ::GlobalNamespace::Tags_ModioAPI__DeleteModTagsAsJToken_d__2;

using _DeleteModTags_d__3 = ::GlobalNamespace::Tags_ModioAPI__DeleteModTags_d__3;

using _GetGameTagOptionsAsJToken_d__4 = ::GlobalNamespace::Tags_ModioAPI__GetGameTagOptionsAsJToken_d__4;

using _GetGameTagOptions_d__5 = ::GlobalNamespace::Tags_ModioAPI__GetGameTagOptions_d__5;

using _GetModTagsAsJToken_d__6 = ::GlobalNamespace::Tags_ModioAPI__GetModTagsAsJToken_d__6;

using _GetModTags_d__7 = ::GlobalNamespace::Tags_ModioAPI__GetModTags_d__7;

using GetModTagsFilter = ::Modio::API::Tags_ModioAPI_GetModTagsFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<AddModTags>d__1))]
/// @brief Method AddModTags, addr 0xa087b28, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MessageObject>>>* AddModTags(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModTagsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<AddModTagsAsJToken>d__0))]
/// @brief Method AddModTagsAsJToken, addr 0xa087a08, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModTagsAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModTagsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<DeleteModTags>d__3))]
/// @brief Method DeleteModTags, addr 0xa087d68, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModTags(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModTagsRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<DeleteModTagsAsJToken>d__2))]
/// @brief Method DeleteModTagsAsJToken, addr 0xa087c48, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModTagsAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModTagsRequest>  body) ;

/// @brief Method FilterGetModTags, addr 0xa08826c, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Tags_ModioAPI_GetModTagsFilter* FilterGetModTags(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<GetGameTagOptions>d__5))]
/// @brief Method GetGameTagOptions, addr 0xa087f74, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionObject>>>>>* GetGameTagOptions() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<GetGameTagOptionsAsJToken>d__4))]
/// @brief Method GetGameTagOptionsAsJToken, addr 0xa087e88, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetGameTagOptionsAsJToken() ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<GetModTags>d__7))]
/// @brief Method GetModTags, addr 0xa088160, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>>>>>* GetModTags(int64_t  modId, ::Modio::API::Tags_ModioAPI_GetModTagsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Tags::<GetModTagsAsJToken>d__6))]
/// @brief Method GetModTagsAsJToken, addr 0xa088060, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModTagsAsJToken(int64_t  modId, ::Modio::API::Tags_ModioAPI_GetModTagsFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Tags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Tags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Tags(ModioAPI_Tags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Tags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Tags(ModioAPI_Tags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17852};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Tags) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Tags/GetModTagsFilter
class CORDL_TYPE Tags_ModioAPI_GetModTagsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Tags_ModioAPI_GetModTagsFilter*> {
public:
// Declarations
/// @brief Method DateAdded, addr 0xa088400, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Tags_ModioAPI_GetModTagsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa088334, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Tags_ModioAPI_GetModTagsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Tags_ModioAPI_GetModTagsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method Tag, addr 0xa0884a8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Tags_ModioAPI_GetModTagsFilter* Tag(::StringW  tag, ::Modio::API::Filtering  condition) ;

/// @brief Method Tag, addr 0xa088550, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Tags_ModioAPI_GetModTagsFilter* Tag(::System::Collections::Generic::ICollection_1<::StringW>*  tag, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0882d4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tags_ModioAPI_GetModTagsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tags_ModioAPI_GetModTagsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tags_ModioAPI_GetModTagsFilter(Tags_ModioAPI_GetModTagsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tags_ModioAPI_GetModTagsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tags_ModioAPI_GetModTagsFilter(Tags_ModioAPI_GetModTagsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Tags_ModioAPI_GetModTagsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Ratings
class CORDL_TYPE ModioAPI_Ratings : public ::System::Object {
public:
// Declarations
using _AddModRatingAsJToken_d__0 = ::GlobalNamespace::Ratings_ModioAPI__AddModRatingAsJToken_d__0;

using _AddModRating_d__1 = ::GlobalNamespace::Ratings_ModioAPI__AddModRating_d__1;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Ratings::<AddModRating>d__1))]
/// @brief Method AddModRating, addr 0xa086b08, size 0x114, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddRatingResponse>>>* AddModRating(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddRatingRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Ratings::<AddModRatingAsJToken>d__0))]
/// @brief Method AddModRatingAsJToken, addr 0xa0869f4, size 0x114, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModRatingAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddRatingRequest>  body) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Ratings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Ratings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Ratings(ModioAPI_Ratings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Ratings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Ratings(ModioAPI_Ratings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Ratings) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Metadata
class CORDL_TYPE ModioAPI_Metadata : public ::System::Object {
public:
// Declarations
using _AddModKvpMetadataAsJToken_d__0 = ::GlobalNamespace::Metadata_ModioAPI__AddModKvpMetadataAsJToken_d__0;

using _AddModKvpMetadata_d__1 = ::GlobalNamespace::Metadata_ModioAPI__AddModKvpMetadata_d__1;

using _DeleteModKvpMetadataAsJToken_d__2 = ::GlobalNamespace::Metadata_ModioAPI__DeleteModKvpMetadataAsJToken_d__2;

using _DeleteModKvpMetadata_d__3 = ::GlobalNamespace::Metadata_ModioAPI__DeleteModKvpMetadata_d__3;

using _GetModKvpMetadataAsJToken_d__4 = ::GlobalNamespace::Metadata_ModioAPI__GetModKvpMetadataAsJToken_d__4;

using _GetModKvpMetadata_d__5 = ::GlobalNamespace::Metadata_ModioAPI__GetModKvpMetadata_d__5;

using GetModKvpMetadataFilter = ::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metadata::<AddModKvpMetadata>d__1))]
/// @brief Method AddModKvpMetadata, addr 0xa083a84, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModMetadataResponse>>>* AddModKvpMetadata(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModMetadataRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metadata::<AddModKvpMetadataAsJToken>d__0))]
/// @brief Method AddModKvpMetadataAsJToken, addr 0xa083964, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModKvpMetadataAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModMetadataRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metadata::<DeleteModKvpMetadata>d__3))]
/// @brief Method DeleteModKvpMetadata, addr 0xa083cc4, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModKvpMetadata(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModMetadataRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metadata::<DeleteModKvpMetadataAsJToken>d__2))]
/// @brief Method DeleteModKvpMetadataAsJToken, addr 0xa083ba4, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModKvpMetadataAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModMetadataRequest>  body) ;

/// @brief Method FilterGetModKvpMetadata, addr 0xa083ff0, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter* FilterGetModKvpMetadata(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metadata::<GetModKvpMetadata>d__5))]
/// @brief Method GetModKvpMetadata, addr 0xa083ee4, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>>>>>* GetModKvpMetadata(int64_t  modId, ::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Metadata::<GetModKvpMetadataAsJToken>d__4))]
/// @brief Method GetModKvpMetadataAsJToken, addr 0xa083de4, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModKvpMetadataAsJToken(int64_t  modId, ::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Metadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Metadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Metadata(ModioAPI_Metadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Metadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Metadata(ModioAPI_Metadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Metadata) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Metadata/GetModKvpMetadataFilter
class CORDL_TYPE Metadata_ModioAPI_GetModKvpMetadataFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter*> {
public:
// Declarations
static inline ::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method .ctor, addr 0xa084058, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Metadata_ModioAPI_GetModKvpMetadataFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Metadata_ModioAPI_GetModKvpMetadataFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Metadata_ModioAPI_GetModKvpMetadataFilter(Metadata_ModioAPI_GetModKvpMetadataFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Metadata_ModioAPI_GetModKvpMetadataFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Metadata_ModioAPI_GetModKvpMetadataFilter(Metadata_ModioAPI_GetModKvpMetadataFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Metadata_ModioAPI_GetModKvpMetadataFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Files
class CORDL_TYPE ModioAPI_Files : public ::System::Object {
public:
// Declarations
using _AddModfileAsJToken_d__0 = ::GlobalNamespace::Files_ModioAPI__AddModfileAsJToken_d__0;

using _AddModfile_d__1 = ::GlobalNamespace::Files_ModioAPI__AddModfile_d__1;

using _DeleteModfileAsJToken_d__2 = ::GlobalNamespace::Files_ModioAPI__DeleteModfileAsJToken_d__2;

using _DeleteModfile_d__3 = ::GlobalNamespace::Files_ModioAPI__DeleteModfile_d__3;

using _EditModfileAsJToken_d__4 = ::GlobalNamespace::Files_ModioAPI__EditModfileAsJToken_d__4;

using _EditModfile_d__5 = ::GlobalNamespace::Files_ModioAPI__EditModfile_d__5;

using _GetModfileAsJToken_d__6 = ::GlobalNamespace::Files_ModioAPI__GetModfileAsJToken_d__6;

using _GetModfile_d__7 = ::GlobalNamespace::Files_ModioAPI__GetModfile_d__7;

using _GetModfilesAsJToken_d__8 = ::GlobalNamespace::Files_ModioAPI__GetModfilesAsJToken_d__8;

using _GetModfiles_d__9 = ::GlobalNamespace::Files_ModioAPI__GetModfiles_d__9;

using _ManagePlatformStatusAsJToken_d__12 = ::GlobalNamespace::Files_ModioAPI__ManagePlatformStatusAsJToken_d__12;

using _ManagePlatformStatus_d__13 = ::GlobalNamespace::Files_ModioAPI__ManagePlatformStatus_d__13;

using GetModfilesFilter = ::Modio::API::Files_ModioAPI_GetModfilesFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<AddModfile>d__1))]
/// @brief Method AddModfile, addr 0xa07c9a4, size 0x128, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* AddModfile(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModfileRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<AddModfileAsJToken>d__0))]
/// @brief Method AddModfileAsJToken, addr 0xa07c87c, size 0x128, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModfileAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModfileRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<DeleteModfile>d__3))]
/// @brief Method DeleteModfile, addr 0xa07cbcc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModfile(int64_t  modId, int64_t  fileId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<DeleteModfileAsJToken>d__2))]
/// @brief Method DeleteModfileAsJToken, addr 0xa07cacc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModfileAsJToken(int64_t  modId, int64_t  fileId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<EditModfile>d__5))]
/// @brief Method EditModfile, addr 0xa07cdcc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* EditModfile(int64_t  modId, int64_t  fileId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<EditModfileAsJToken>d__4))]
/// @brief Method EditModfileAsJToken, addr 0xa07cccc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* EditModfileAsJToken(int64_t  modId, int64_t  fileId) ;

/// @brief Method FilterGetModfiles, addr 0xa07d2d8, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* FilterGetModfiles(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<GetModfile>d__7))]
/// @brief Method GetModfile, addr 0xa07cfcc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* GetModfile(int64_t  modId, int64_t  fileId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<GetModfileAsJToken>d__6))]
/// @brief Method GetModfileAsJToken, addr 0xa07cecc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModfileAsJToken(int64_t  modId, int64_t  fileId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<GetModfiles>d__9))]
/// @brief Method GetModfiles, addr 0xa07d1cc, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModfileObject>>>>>* GetModfiles(int64_t  modId, ::Modio::API::Files_ModioAPI_GetModfilesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<GetModfilesAsJToken>d__8))]
/// @brief Method GetModfilesAsJToken, addr 0xa07d0cc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModfilesAsJToken(int64_t  modId, ::Modio::API::Files_ModioAPI_GetModfilesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<ManagePlatformStatus>d__13))]
/// @brief Method ManagePlatformStatus, addr 0xa07d4a0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* ManagePlatformStatus(int64_t  modId, int64_t  fileId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Files::<ManagePlatformStatusAsJToken>d__12))]
/// @brief Method ManagePlatformStatusAsJToken, addr 0xa07d3a0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* ManagePlatformStatusAsJToken(int64_t  modId, int64_t  fileId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Files() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Files", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Files(ModioAPI_Files && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Files", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Files(ModioAPI_Files const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Files) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Files/GetModfilesFilter
class CORDL_TYPE Files_ModioAPI_GetModfilesFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Files_ModioAPI_GetModfilesFilter*> {
public:
// Declarations
/// @brief Method Changelog, addr 0xa07e3bc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Changelog(::StringW  changelog, ::Modio::API::Filtering  condition) ;

/// @brief Method Changelog, addr 0xa07e464, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Changelog(::System::Collections::Generic::ICollection_1<::StringW>*  changelog, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa07d954, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa07d888, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateScanned, addr 0xa07dac8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* DateScanned(::System::Collections::Generic::ICollection_1<int64_t>*  dateScanned, ::Modio::API::Filtering  condition) ;

/// @brief Method DateScanned, addr 0xa07d9fc, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* DateScanned(int64_t  dateScanned, ::Modio::API::Filtering  condition) ;

/// @brief Method Filehash, addr 0xa07dfcc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Filehash(::StringW  filehash, ::Modio::API::Filtering  condition) ;

/// @brief Method Filehash, addr 0xa07e074, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Filehash(::System::Collections::Generic::ICollection_1<::StringW>*  filehash, ::Modio::API::Filtering  condition) ;

/// @brief Method Filename, addr 0xa07e11c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Filename(::StringW  filename, ::Modio::API::Filtering  condition) ;

/// @brief Method Filename, addr 0xa07e1c4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Filename(::System::Collections::Generic::ICollection_1<::StringW>*  filename, ::Modio::API::Filtering  condition) ;

/// @brief Method Filesize, addr 0xa07df24, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Filesize(::System::Collections::Generic::ICollection_1<int64_t>*  filesize, ::Modio::API::Filtering  condition) ;

/// @brief Method Filesize, addr 0xa07de58, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Filesize(int64_t  filesize, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa07d66c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa07d5a0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa07e50c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* MetadataBlob(::StringW  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa07e5b4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* MetadataBlob(::System::Collections::Generic::ICollection_1<::StringW>*  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa07d7e0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa07d714, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PlatformStatus, addr 0xa07e65c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* PlatformStatus(::StringW  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method PlatformStatus, addr 0xa07e704, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* PlatformStatus(::System::Collections::Generic::ICollection_1<::StringW>*  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method Version, addr 0xa07e26c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Version(::StringW  version, ::Modio::API::Filtering  condition) ;

/// @brief Method Version, addr 0xa07e314, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* Version(::System::Collections::Generic::ICollection_1<::StringW>*  version, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusPositive, addr 0xa07ddb0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* VirusPositive(::System::Collections::Generic::ICollection_1<int64_t>*  virusPositive, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusPositive, addr 0xa07dce4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* VirusPositive(int64_t  virusPositive, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusStatus, addr 0xa07dc3c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* VirusStatus(::System::Collections::Generic::ICollection_1<int64_t>*  virusStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method VirusStatus, addr 0xa07db70, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Files_ModioAPI_GetModfilesFilter* VirusStatus(int64_t  virusStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa07d340, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Files_ModioAPI_GetModfilesFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Files_ModioAPI_GetModfilesFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Files_ModioAPI_GetModfilesFilter(Files_ModioAPI_GetModfilesFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Files_ModioAPI_GetModfilesFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Files_ModioAPI_GetModfilesFilter(Files_ModioAPI_GetModfilesFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Files_ModioAPI_GetModfilesFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Dependencies
class CORDL_TYPE ModioAPI_Dependencies : public ::System::Object {
public:
// Declarations
using _AddModDependenciesAsJToken_d__0 = ::GlobalNamespace::Dependencies_ModioAPI__AddModDependenciesAsJToken_d__0;

using _AddModDependencies_d__1 = ::GlobalNamespace::Dependencies_ModioAPI__AddModDependencies_d__1;

using _DeleteModDependenciesAsJToken_d__2 = ::GlobalNamespace::Dependencies_ModioAPI__DeleteModDependenciesAsJToken_d__2;

using _DeleteModDependencies_d__3 = ::GlobalNamespace::Dependencies_ModioAPI__DeleteModDependencies_d__3;

using _GetModDependantsAsJToken_d__4 = ::GlobalNamespace::Dependencies_ModioAPI__GetModDependantsAsJToken_d__4;

using _GetModDependants_d__5 = ::GlobalNamespace::Dependencies_ModioAPI__GetModDependants_d__5;

using _GetModDependenciesAsJToken_d__8 = ::GlobalNamespace::Dependencies_ModioAPI__GetModDependenciesAsJToken_d__8;

using _GetModDependencies_d__9 = ::GlobalNamespace::Dependencies_ModioAPI__GetModDependencies_d__9;

using GetModDependantsFilter = ::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter;

using GetModDependenciesFilter = ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<AddModDependencies>d__1))]
/// @brief Method AddModDependencies, addr 0xa078774, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModDependenciesResponse>>>* AddModDependencies(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModDependenciesRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<AddModDependenciesAsJToken>d__0))]
/// @brief Method AddModDependenciesAsJToken, addr 0xa078654, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModDependenciesAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModDependenciesRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<DeleteModDependencies>d__3))]
/// @brief Method DeleteModDependencies, addr 0xa0789b4, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModDependencies(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModDependenciesRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<DeleteModDependenciesAsJToken>d__2))]
/// @brief Method DeleteModDependenciesAsJToken, addr 0xa078894, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModDependenciesAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModDependenciesRequest>  body) ;

/// @brief Method FilterGetModDependants, addr 0xa078ce0, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter* FilterGetModDependants(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method FilterGetModDependencies, addr 0xa078fb4, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter* FilterGetModDependencies(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<GetModDependants>d__5))]
/// @brief Method GetModDependants, addr 0xa078bd4, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModDependantsObject>>>>>* GetModDependants(int64_t  modId, ::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<GetModDependantsAsJToken>d__4))]
/// @brief Method GetModDependantsAsJToken, addr 0xa078ad4, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModDependantsAsJToken(int64_t  modId, ::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<GetModDependencies>d__9))]
/// @brief Method GetModDependencies, addr 0xa078ea8, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModDependenciesObject>>>>>* GetModDependencies(int64_t  modId, ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Dependencies::<GetModDependenciesAsJToken>d__8))]
/// @brief Method GetModDependenciesAsJToken, addr 0xa078da8, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModDependenciesAsJToken(int64_t  modId, ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Dependencies() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Dependencies", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Dependencies(ModioAPI_Dependencies && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Dependencies", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Dependencies(ModioAPI_Dependencies const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Dependencies) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Dependencies/GetModDependenciesFilter
class CORDL_TYPE Dependencies_ModioAPI_GetModDependenciesFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*> {
public:
// Declarations
static inline ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method Recursive, addr 0xa07914c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter* Recursive(::System::Collections::Generic::ICollection_1<bool>*  recursive, ::Modio::API::Filtering  condition) ;

/// @brief Method Recursive, addr 0xa07907c, size 0xd0, virtual false, abstract: false, final false
inline ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter* Recursive(bool  recursive, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa07901c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dependencies_ModioAPI_GetModDependenciesFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dependencies_ModioAPI_GetModDependenciesFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dependencies_ModioAPI_GetModDependenciesFilter(Dependencies_ModioAPI_GetModDependenciesFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dependencies_ModioAPI_GetModDependenciesFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dependencies_ModioAPI_GetModDependenciesFilter(Dependencies_ModioAPI_GetModDependenciesFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Dependencies/GetModDependantsFilter
class CORDL_TYPE Dependencies_ModioAPI_GetModDependantsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter*> {
public:
// Declarations
static inline ::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method .ctor, addr 0xa078d48, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dependencies_ModioAPI_GetModDependantsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dependencies_ModioAPI_GetModDependantsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dependencies_ModioAPI_GetModDependantsFilter(Dependencies_ModioAPI_GetModDependantsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dependencies_ModioAPI_GetModDependantsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dependencies_ModioAPI_GetModDependantsFilter(Dependencies_ModioAPI_GetModDependantsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Dependencies_ModioAPI_GetModDependantsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Comments
class CORDL_TYPE ModioAPI_Comments : public ::System::Object {
public:
// Declarations
using _AddModCommentAsJToken_d__0 = ::GlobalNamespace::Comments_ModioAPI__AddModCommentAsJToken_d__0;

using _AddModCommentKarmaAsJToken_d__2 = ::GlobalNamespace::Comments_ModioAPI__AddModCommentKarmaAsJToken_d__2;

using _AddModCommentKarma_d__3 = ::GlobalNamespace::Comments_ModioAPI__AddModCommentKarma_d__3;

using _AddModComment_d__1 = ::GlobalNamespace::Comments_ModioAPI__AddModComment_d__1;

using _DeleteModCommentAsJToken_d__4 = ::GlobalNamespace::Comments_ModioAPI__DeleteModCommentAsJToken_d__4;

using _DeleteModComment_d__5 = ::GlobalNamespace::Comments_ModioAPI__DeleteModComment_d__5;

using _GetModCommentAsJToken_d__6 = ::GlobalNamespace::Comments_ModioAPI__GetModCommentAsJToken_d__6;

using _GetModComment_d__7 = ::GlobalNamespace::Comments_ModioAPI__GetModComment_d__7;

using _GetModCommentsAsJToken_d__8 = ::GlobalNamespace::Comments_ModioAPI__GetModCommentsAsJToken_d__8;

using _GetModComments_d__9 = ::GlobalNamespace::Comments_ModioAPI__GetModComments_d__9;

using _UpdateModCommentAsJToken_d__12 = ::GlobalNamespace::Comments_ModioAPI__UpdateModCommentAsJToken_d__12;

using _UpdateModComment_d__13 = ::GlobalNamespace::Comments_ModioAPI__UpdateModComment_d__13;

using GetModCommentsFilter = ::Modio::API::Comments_ModioAPI_GetModCommentsFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<AddModComment>d__1))]
/// @brief Method AddModComment, addr 0xa071a18, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::CommentObject>>>* AddModComment(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddCommentRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<AddModCommentAsJToken>d__0))]
/// @brief Method AddModCommentAsJToken, addr 0xa0718f8, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModCommentAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddCommentRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<AddModCommentKarma>d__3))]
/// @brief Method AddModCommentKarma, addr 0xa071c50, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::CommentObject>>>* AddModCommentKarma(int64_t  modId, int64_t  commentId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::UpdateCommentKarmaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<AddModCommentKarmaAsJToken>d__2))]
/// @brief Method AddModCommentKarmaAsJToken, addr 0xa071b38, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModCommentKarmaAsJToken(int64_t  modId, int64_t  commentId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::UpdateCommentKarmaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<DeleteModComment>d__5))]
/// @brief Method DeleteModComment, addr 0xa071e68, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModComment(int64_t  modId, int64_t  commentId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<DeleteModCommentAsJToken>d__4))]
/// @brief Method DeleteModCommentAsJToken, addr 0xa071d68, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModCommentAsJToken(int64_t  modId, int64_t  commentId) ;

/// @brief Method FilterGetModComments, addr 0xa072374, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* FilterGetModComments(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<GetModComment>d__7))]
/// @brief Method GetModComment, addr 0xa072068, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::CommentObject>>>* GetModComment(int64_t  modId, int64_t  commentId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<GetModCommentAsJToken>d__6))]
/// @brief Method GetModCommentAsJToken, addr 0xa071f68, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModCommentAsJToken(int64_t  modId, int64_t  commentId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<GetModComments>d__9))]
/// @brief Method GetModComments, addr 0xa072268, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::CommentObject>>>>>* GetModComments(int64_t  modId, ::Modio::API::Comments_ModioAPI_GetModCommentsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<GetModCommentsAsJToken>d__8))]
/// @brief Method GetModCommentsAsJToken, addr 0xa072168, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModCommentsAsJToken(int64_t  modId, ::Modio::API::Comments_ModioAPI_GetModCommentsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<UpdateModComment>d__13))]
/// @brief Method UpdateModComment, addr 0xa072560, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::CommentObject>>>* UpdateModComment(int64_t  modId, int64_t  commentId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::UpdateCommentRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Comments::<UpdateModCommentAsJToken>d__12))]
/// @brief Method UpdateModCommentAsJToken, addr 0xa07243c, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* UpdateModCommentAsJToken(int64_t  modId, int64_t  commentId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::UpdateCommentRequest>  body) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Comments() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Comments", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Comments(ModioAPI_Comments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Comments", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Comments(ModioAPI_Comments const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Comments) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Comments/GetModCommentsFilter
class CORDL_TYPE Comments_ModioAPI_GetModCommentsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Comments_ModioAPI_GetModCommentsFilter*> {
public:
// Declarations
/// @brief Method Content, addr 0xa073200, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* Content(::StringW  content, ::Modio::API::Filtering  condition) ;

/// @brief Method Content, addr 0xa0732a8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* Content(::System::Collections::Generic::ICollection_1<::StringW>*  content, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa072d20, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa072c54, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa072750, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa072684, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Karma, addr 0xa073158, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* Karma(::System::Collections::Generic::ICollection_1<int64_t>*  karma, ::Modio::API::Filtering  condition) ;

/// @brief Method Karma, addr 0xa07308c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* Karma(int64_t  karma, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0728c4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ModId(::System::Collections::Generic::ICollection_1<int64_t>*  modId, ::Modio::API::Filtering  condition) ;

/// @brief Method ModId, addr 0xa0727f8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ModId(int64_t  modId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method ReplyId, addr 0xa072e94, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ReplyId(::System::Collections::Generic::ICollection_1<int64_t>*  replyId, ::Modio::API::Filtering  condition) ;

/// @brief Method ReplyId, addr 0xa072dc8, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ReplyId(int64_t  replyId, ::Modio::API::Filtering  condition) ;

/// @brief Method ResourceId, addr 0xa072a38, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ResourceId(::System::Collections::Generic::ICollection_1<int64_t>*  resourceId, ::Modio::API::Filtering  condition) ;

/// @brief Method ResourceId, addr 0xa07296c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ResourceId(int64_t  resourceId, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa072bac, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa072ae0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method ThreadPosition, addr 0xa072f3c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ThreadPosition(::StringW  threadPosition, ::Modio::API::Filtering  condition) ;

/// @brief Method ThreadPosition, addr 0xa072fe4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Comments_ModioAPI_GetModCommentsFilter* ThreadPosition(::System::Collections::Generic::ICollection_1<::StringW>*  threadPosition, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa0723dc, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Comments_ModioAPI_GetModCommentsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Comments_ModioAPI_GetModCommentsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Comments_ModioAPI_GetModCommentsFilter(Comments_ModioAPI_GetModCommentsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Comments_ModioAPI_GetModCommentsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Comments_ModioAPI_GetModCommentsFilter(Comments_ModioAPI_GetModCommentsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Comments_ModioAPI_GetModCommentsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Mods
class CORDL_TYPE ModioAPI_Mods : public ::System::Object {
public:
// Declarations
using _AddModAsJToken_d__0 = ::GlobalNamespace::Mods_ModioAPI__AddModAsJToken_d__0;

using _AddMod_d__1 = ::GlobalNamespace::Mods_ModioAPI__AddMod_d__1;

using _DeleteModAsJToken_d__2 = ::GlobalNamespace::Mods_ModioAPI__DeleteModAsJToken_d__2;

using _DeleteMod_d__3 = ::GlobalNamespace::Mods_ModioAPI__DeleteMod_d__3;

using _EditModAsJToken_d__4 = ::GlobalNamespace::Mods_ModioAPI__EditModAsJToken_d__4;

using _EditMod_d__5 = ::GlobalNamespace::Mods_ModioAPI__EditMod_d__5;

using _GetModAsJToken_d__6 = ::GlobalNamespace::Mods_ModioAPI__GetModAsJToken_d__6;

using _GetMod_d__7 = ::GlobalNamespace::Mods_ModioAPI__GetMod_d__7;

using _GetModsAsJToken_d__8 = ::GlobalNamespace::Mods_ModioAPI__GetModsAsJToken_d__8;

using _GetMods_d__9 = ::GlobalNamespace::Mods_ModioAPI__GetMods_d__9;

using GetModsFilter = ::Modio::API::Mods_ModioAPI_GetModsFilter;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<AddMod>d__1))]
/// @brief Method AddMod, addr 0xa06acd0, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>* AddMod(::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<AddModAsJToken>d__0))]
/// @brief Method AddModAsJToken, addr 0xa06abb0, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<DeleteMod>d__3))]
/// @brief Method DeleteMod, addr 0xa06aef0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteMod(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<DeleteModAsJToken>d__2))]
/// @brief Method DeleteModAsJToken, addr 0xa06adf0, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModAsJToken(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<EditMod>d__5))]
/// @brief Method EditMod, addr 0xa06b120, size 0x130, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>* EditMod(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::EditModRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<EditModAsJToken>d__4))]
/// @brief Method EditModAsJToken, addr 0xa06aff0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* EditModAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::EditModRequest>  body) ;

/// @brief Method FilterGetMods, addr 0xa06b668, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::API::Mods_ModioAPI_GetModsFilter* FilterGetMods(int32_t  pageIndex, int32_t  pageSize) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<GetMod>d__7))]
/// @brief Method GetMod, addr 0xa06b350, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>* GetMod(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<GetModAsJToken>d__6))]
/// @brief Method GetModAsJToken, addr 0xa06b250, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModAsJToken(int64_t  modId) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<GetMods>d__9))]
/// @brief Method GetMods, addr 0xa06b55c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModObject>>>>>* GetMods(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Mods::<GetModsAsJToken>d__8))]
/// @brief Method GetModsAsJToken, addr 0xa06b450, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetModsAsJToken(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Mods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Mods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Mods(ModioAPI_Mods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Mods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Mods(ModioAPI_Mods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17792};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Mods) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies Modio.API.SearchFilter`1<T>
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Mods/GetModsFilter
class CORDL_TYPE Mods_ModioAPI_GetModsFilter : public ::Modio::API::SearchFilter_1<::Modio::API::Mods_ModioAPI_GetModsFilter*> {
public:
// Declarations
/// @brief Method CommunityOptions, addr 0xa06c4ec, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* CommunityOptions(::System::Collections::Generic::ICollection_1<int64_t>*  communityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method CommunityOptions, addr 0xa06c420, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* CommunityOptions(int64_t  communityOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa06c090, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* DateAdded(::System::Collections::Generic::ICollection_1<int64_t>*  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateAdded, addr 0xa06bfc4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* DateAdded(int64_t  dateAdded, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa06c378, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* DateLive(::System::Collections::Generic::ICollection_1<int64_t>*  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateLive, addr 0xa06c2ac, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* DateLive(int64_t  dateLive, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa06c204, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* DateUpdated(::System::Collections::Generic::ICollection_1<int64_t>*  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method DateUpdated, addr 0xa06c138, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* DateUpdated(int64_t  dateUpdated, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa06b970, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* GameId(::System::Collections::Generic::ICollection_1<int64_t>*  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method GameId, addr 0xa06b8a4, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* GameId(int64_t  gameId, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa06b7fc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Id(::System::Collections::Generic::ICollection_1<int64_t>*  id, ::Modio::API::Filtering  condition) ;

/// @brief Method Id, addr 0xa06b730, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Id(int64_t  id, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa06c660, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MaturityOption(::System::Collections::Generic::ICollection_1<int64_t>*  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MaturityOption, addr 0xa06c594, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MaturityOption(int64_t  maturityOption, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa06cc90, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MetadataBlob(::StringW  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataBlob, addr 0xa06cd38, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MetadataBlob(::System::Collections::Generic::ICollection_1<::StringW>*  metadataBlob, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa06cde0, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MetadataKvp(::StringW  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method MetadataKvp, addr 0xa06ce88, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MetadataKvp(::System::Collections::Generic::ICollection_1<::StringW>*  metadataKvp, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa06cbe8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Modfile(::System::Collections::Generic::ICollection_1<int64_t>*  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method Modfile, addr 0xa06cb1c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Modfile(int64_t  modfile, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa06c7d4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MonetizationOptions(::System::Collections::Generic::ICollection_1<int64_t>*  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method MonetizationOptions, addr 0xa06c708, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* MonetizationOptions(int64_t  monetizationOptions, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa06c87c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Name(::StringW  name, ::Modio::API::Filtering  condition) ;

/// @brief Method Name, addr 0xa06c924, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Name(::System::Collections::Generic::ICollection_1<::StringW>*  name, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa06c9cc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* NameId(::StringW  nameId, ::Modio::API::Filtering  condition) ;

/// @brief Method NameId, addr 0xa06ca74, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* NameId(::System::Collections::Generic::ICollection_1<::StringW>*  nameId, ::Modio::API::Filtering  condition) ;

static inline ::Modio::API::Mods_ModioAPI_GetModsFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method PlatformStatus, addr 0xa06d080, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* PlatformStatus(::StringW  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method PlatformStatus, addr 0xa06d128, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* PlatformStatus(::System::Collections::Generic::ICollection_1<::StringW>*  platformStatus, ::Modio::API::Filtering  condition) ;

/// @brief Method RevenueType, addr 0xa06d29c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* RevenueType(::System::Collections::Generic::ICollection_1<int64_t>*  revenueType, ::Modio::API::Filtering  condition) ;

/// @brief Method RevenueType, addr 0xa06d1d0, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* RevenueType(int64_t  revenueType, ::Modio::API::Filtering  condition) ;

/// @brief Method SortByStringType, addr 0xa06d4b8, size 0xd4, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* SortByStringType(::StringW  key, bool  ascending) ;

/// @brief Method Status, addr 0xa06bae4, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Status(::System::Collections::Generic::ICollection_1<int64_t>*  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Status, addr 0xa06ba18, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Status(int64_t  status, ::Modio::API::Filtering  condition) ;

/// @brief Method Stock, addr 0xa06d410, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Stock(::System::Collections::Generic::ICollection_1<int64_t>*  stock, ::Modio::API::Filtering  condition) ;

/// @brief Method Stock, addr 0xa06d344, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Stock(int64_t  stock, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa06bdcc, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* SubmittedBy(::System::Collections::Generic::ICollection_1<int64_t>*  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedBy, addr 0xa06bd00, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* SubmittedBy(int64_t  submittedBy, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedByDisplayName, addr 0xa06be74, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* SubmittedByDisplayName(::StringW  submittedByDisplayName, ::Modio::API::Filtering  condition) ;

/// @brief Method SubmittedByDisplayName, addr 0xa06bf1c, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* SubmittedByDisplayName(::System::Collections::Generic::ICollection_1<::StringW>*  submittedByDisplayName, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa06cf30, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Tags(::StringW  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Tags, addr 0xa06cfd8, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Tags(::System::Collections::Generic::ICollection_1<::StringW>*  tags, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa06bc58, size 0xa8, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Visible(::System::Collections::Generic::ICollection_1<int64_t>*  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method Visible, addr 0xa06bb8c, size 0xcc, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Visible(int64_t  visible, ::Modio::API::Filtering  condition) ;

/// @brief Method .ctor, addr 0xa06b6d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mods_ModioAPI_GetModsFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mods_ModioAPI_GetModsFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mods_ModioAPI_GetModsFilter(Mods_ModioAPI_GetModsFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mods_ModioAPI_GetModsFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mods_ModioAPI_GetModsFilter(Mods_ModioAPI_GetModsFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::Mods_ModioAPI_GetModsFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.ModioAPI/Media
class CORDL_TYPE ModioAPI_Media : public ::System::Object {
public:
// Declarations
using _AddGameMediaAsJToken_d__0 = ::GlobalNamespace::Media_ModioAPI__AddGameMediaAsJToken_d__0;

using _AddGameMedia_d__1 = ::GlobalNamespace::Media_ModioAPI__AddGameMedia_d__1;

using _AddModMediaAsJToken_d__2 = ::GlobalNamespace::Media_ModioAPI__AddModMediaAsJToken_d__2;

using _AddModMedia_d__3 = ::GlobalNamespace::Media_ModioAPI__AddModMedia_d__3;

using _DeleteModMediaAsJToken_d__4 = ::GlobalNamespace::Media_ModioAPI__DeleteModMediaAsJToken_d__4;

using _DeleteModMedia_d__5 = ::GlobalNamespace::Media_ModioAPI__DeleteModMedia_d__5;

using _ReorderModMediaAsJToken_d__6 = ::GlobalNamespace::Media_ModioAPI__ReorderModMediaAsJToken_d__6;

using _ReorderModMedia_d__7 = ::GlobalNamespace::Media_ModioAPI__ReorderModMedia_d__7;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<AddGameMedia>d__1))]
/// @brief Method AddGameMedia, addr 0xa066c88, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::UpdateGameMediaResponse>>>* AddGameMedia(::System::Nullable_1<::Modio::API::SchemaDefinitions::AddGameMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<AddGameMediaAsJToken>d__0))]
/// @brief Method AddGameMediaAsJToken, addr 0xa066b7c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddGameMediaAsJToken(::System::Nullable_1<::Modio::API::SchemaDefinitions::AddGameMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<AddModMedia>d__3))]
/// @brief Method AddModMedia, addr 0xa066ec4, size 0x130, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::UpdateModMediaResponse>>>* AddModMedia(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<AddModMediaAsJToken>d__2))]
/// @brief Method AddModMediaAsJToken, addr 0xa066d94, size 0x130, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* AddModMediaAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<DeleteModMedia>d__5))]
/// @brief Method DeleteModMedia, addr 0xa067114, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* DeleteModMedia(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<DeleteModMediaAsJToken>d__4))]
/// @brief Method DeleteModMediaAsJToken, addr 0xa066ff4, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* DeleteModMediaAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<ReorderModMedia>d__7))]
/// @brief Method ReorderModMedia, addr 0xa067354, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>* ReorderModMedia(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModMediaRequest>  body) ;

/// [AsyncStateMachine(typeof(Modio.API.ModioAPI::Media::<ReorderModMediaAsJToken>d__6))]
/// @brief Method ReorderModMediaAsJToken, addr 0xa067234, size 0x120, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* ReorderModMediaAsJToken(int64_t  modId, ::System::Nullable_1<::Modio::API::SchemaDefinitions::DeleteModMediaRequest>  body) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Media() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Media", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPI_Media(ModioAPI_Media && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPI_Media", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPI_Media(ModioAPI_Media const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17780};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::ModioAPI_Media) == 0x10, "Size mismatch!");

} // namespace end def Modio::API
