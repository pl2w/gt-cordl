#pragma once
// IWYU pragma private; include "PlayFab/PlayFabErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabErrorCode)
// Forward declare root types
namespace PlayFab {
struct PlayFabErrorCode;
}
// Write type traits
MARK_VAL_T(::PlayFab::PlayFabErrorCode);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabErrorCode, "PlayFab", "PlayFabErrorCode");
// Dependencies 
namespace PlayFab {
// Is value type: true
// CS Name: PlayFab.PlayFabErrorCode
struct CORDL_TYPE PlayFabErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayFabErrorCode_Unwrapped
enum struct __PlayFabErrorCode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x1),
__E_ConnectionError = static_cast<int32_t>(0x2),
__E_JsonParseError = static_cast<int32_t>(0x3),
__E_Success = static_cast<int32_t>(0x0),
__E_UnkownError = static_cast<int32_t>(0x1f4),
__E_InvalidParams = static_cast<int32_t>(0x3e8),
__E_AccountNotFound = static_cast<int32_t>(0x3e9),
__E_AccountBanned = static_cast<int32_t>(0x3ea),
__E_InvalidUsernameOrPassword = static_cast<int32_t>(0x3eb),
__E_InvalidTitleId = static_cast<int32_t>(0x3ec),
__E_InvalidEmailAddress = static_cast<int32_t>(0x3ed),
__E_EmailAddressNotAvailable = static_cast<int32_t>(0x3ee),
__E_InvalidUsername = static_cast<int32_t>(0x3ef),
__E_InvalidPassword = static_cast<int32_t>(0x3f0),
__E_UsernameNotAvailable = static_cast<int32_t>(0x3f1),
__E_InvalidSteamTicket = static_cast<int32_t>(0x3f2),
__E_AccountAlreadyLinked = static_cast<int32_t>(0x3f3),
__E_LinkedAccountAlreadyClaimed = static_cast<int32_t>(0x3f4),
__E_InvalidFacebookToken = static_cast<int32_t>(0x3f5),
__E_AccountNotLinked = static_cast<int32_t>(0x3f6),
__E_FailedByPaymentProvider = static_cast<int32_t>(0x3f7),
__E_CouponCodeNotFound = static_cast<int32_t>(0x3f8),
__E_InvalidContainerItem = static_cast<int32_t>(0x3f9),
__E_ContainerNotOwned = static_cast<int32_t>(0x3fa),
__E_KeyNotOwned = static_cast<int32_t>(0x3fb),
__E_InvalidItemIdInTable = static_cast<int32_t>(0x3fc),
__E_InvalidReceipt = static_cast<int32_t>(0x3fd),
__E_ReceiptAlreadyUsed = static_cast<int32_t>(0x3fe),
__E_ReceiptCancelled = static_cast<int32_t>(0x3ff),
__E_GameNotFound = static_cast<int32_t>(0x400),
__E_GameModeNotFound = static_cast<int32_t>(0x401),
__E_InvalidGoogleToken = static_cast<int32_t>(0x402),
__E_UserIsNotPartOfDeveloper = static_cast<int32_t>(0x403),
__E_InvalidTitleForDeveloper = static_cast<int32_t>(0x404),
__E_TitleNameConflicts = static_cast<int32_t>(0x405),
__E_UserisNotValid = static_cast<int32_t>(0x406),
__E_ValueAlreadyExists = static_cast<int32_t>(0x407),
__E_BuildNotFound = static_cast<int32_t>(0x408),
__E_PlayerNotInGame = static_cast<int32_t>(0x409),
__E_InvalidTicket = static_cast<int32_t>(0x40a),
__E_InvalidDeveloper = static_cast<int32_t>(0x40b),
__E_InvalidOrderInfo = static_cast<int32_t>(0x40c),
__E_RegistrationIncomplete = static_cast<int32_t>(0x40d),
__E_InvalidPlatform = static_cast<int32_t>(0x40e),
__E_UnknownError = static_cast<int32_t>(0x40f),
__E_SteamApplicationNotOwned = static_cast<int32_t>(0x410),
__E_WrongSteamAccount = static_cast<int32_t>(0x411),
__E_TitleNotActivated = static_cast<int32_t>(0x412),
__E_RegistrationSessionNotFound = static_cast<int32_t>(0x413),
__E_NoSuchMod = static_cast<int32_t>(0x414),
__E_FileNotFound = static_cast<int32_t>(0x415),
__E_DuplicateEmail = static_cast<int32_t>(0x416),
__E_ItemNotFound = static_cast<int32_t>(0x417),
__E_ItemNotOwned = static_cast<int32_t>(0x418),
__E_ItemNotRecycleable = static_cast<int32_t>(0x419),
__E_ItemNotAffordable = static_cast<int32_t>(0x41a),
__E_InvalidVirtualCurrency = static_cast<int32_t>(0x41b),
__E_WrongVirtualCurrency = static_cast<int32_t>(0x41c),
__E_WrongPrice = static_cast<int32_t>(0x41d),
__E_NonPositiveValue = static_cast<int32_t>(0x41e),
__E_InvalidRegion = static_cast<int32_t>(0x41f),
__E_RegionAtCapacity = static_cast<int32_t>(0x420),
__E_ServerFailedToStart = static_cast<int32_t>(0x421),
__E_NameNotAvailable = static_cast<int32_t>(0x422),
__E_InsufficientFunds = static_cast<int32_t>(0x423),
__E_InvalidDeviceID = static_cast<int32_t>(0x424),
__E_InvalidPushNotificationToken = static_cast<int32_t>(0x425),
__E_NoRemainingUses = static_cast<int32_t>(0x426),
__E_InvalidPaymentProvider = static_cast<int32_t>(0x427),
__E_PurchaseInitializationFailure = static_cast<int32_t>(0x428),
__E_DuplicateUsername = static_cast<int32_t>(0x429),
__E_InvalidBuyerInfo = static_cast<int32_t>(0x42a),
__E_NoGameModeParamsSet = static_cast<int32_t>(0x42b),
__E_BodyTooLarge = static_cast<int32_t>(0x42c),
__E_ReservedWordInBody = static_cast<int32_t>(0x42d),
__E_InvalidTypeInBody = static_cast<int32_t>(0x42e),
__E_InvalidRequest = static_cast<int32_t>(0x42f),
__E_ReservedEventName = static_cast<int32_t>(0x430),
__E_InvalidUserStatistics = static_cast<int32_t>(0x431),
__E_NotAuthenticated = static_cast<int32_t>(0x432),
__E_StreamAlreadyExists = static_cast<int32_t>(0x433),
__E_ErrorCreatingStream = static_cast<int32_t>(0x434),
__E_StreamNotFound = static_cast<int32_t>(0x435),
__E_InvalidAccount = static_cast<int32_t>(0x436),
__E_PurchaseDoesNotExist = static_cast<int32_t>(0x438),
__E_InvalidPurchaseTransactionStatus = static_cast<int32_t>(0x439),
__E_APINotEnabledForGameClientAccess = static_cast<int32_t>(0x43a),
__E_NoPushNotificationARNForTitle = static_cast<int32_t>(0x43b),
__E_BuildAlreadyExists = static_cast<int32_t>(0x43c),
__E_BuildPackageDoesNotExist = static_cast<int32_t>(0x43d),
__E_CustomAnalyticsEventsNotEnabledForTitle = static_cast<int32_t>(0x43f),
__E_InvalidSharedGroupId = static_cast<int32_t>(0x440),
__E_NotAuthorized = static_cast<int32_t>(0x441),
__E_MissingTitleGoogleProperties = static_cast<int32_t>(0x442),
__E_InvalidItemProperties = static_cast<int32_t>(0x443),
__E_InvalidPSNAuthCode = static_cast<int32_t>(0x444),
__E_InvalidItemId = static_cast<int32_t>(0x445),
__E_PushNotEnabledForAccount = static_cast<int32_t>(0x446),
__E_PushServiceError = static_cast<int32_t>(0x447),
__E_ReceiptDoesNotContainInAppItems = static_cast<int32_t>(0x448),
__E_ReceiptContainsMultipleInAppItems = static_cast<int32_t>(0x449),
__E_InvalidBundleID = static_cast<int32_t>(0x44a),
__E_JavascriptException = static_cast<int32_t>(0x44b),
__E_InvalidSessionTicket = static_cast<int32_t>(0x44c),
__E_UnableToConnectToDatabase = static_cast<int32_t>(0x44d),
__E_InternalServerError = static_cast<int32_t>(0x456),
__E_InvalidReportDate = static_cast<int32_t>(0x457),
__E_ReportNotAvailable = static_cast<int32_t>(0x458),
__E_DatabaseThroughputExceeded = static_cast<int32_t>(0x459),
__E_InvalidGameTicket = static_cast<int32_t>(0x45b),
__E_ExpiredGameTicket = static_cast<int32_t>(0x45c),
__E_GameTicketDoesNotMatchLobby = static_cast<int32_t>(0x45d),
__E_LinkedDeviceAlreadyClaimed = static_cast<int32_t>(0x45e),
__E_DeviceAlreadyLinked = static_cast<int32_t>(0x45f),
__E_DeviceNotLinked = static_cast<int32_t>(0x460),
__E_PartialFailure = static_cast<int32_t>(0x461),
__E_PublisherNotSet = static_cast<int32_t>(0x462),
__E_ServiceUnavailable = static_cast<int32_t>(0x463),
__E_VersionNotFound = static_cast<int32_t>(0x464),
__E_RevisionNotFound = static_cast<int32_t>(0x465),
__E_InvalidPublisherId = static_cast<int32_t>(0x466),
__E_DownstreamServiceUnavailable = static_cast<int32_t>(0x467),
__E_APINotIncludedInTitleUsageTier = static_cast<int32_t>(0x468),
__E_DAULimitExceeded = static_cast<int32_t>(0x469),
__E_APIRequestLimitExceeded = static_cast<int32_t>(0x46a),
__E_InvalidAPIEndpoint = static_cast<int32_t>(0x46b),
__E_BuildNotAvailable = static_cast<int32_t>(0x46c),
__E_ConcurrentEditError = static_cast<int32_t>(0x46d),
__E_ContentNotFound = static_cast<int32_t>(0x46e),
__E_CharacterNotFound = static_cast<int32_t>(0x46f),
__E_CloudScriptNotFound = static_cast<int32_t>(0x470),
__E_ContentQuotaExceeded = static_cast<int32_t>(0x471),
__E_InvalidCharacterStatistics = static_cast<int32_t>(0x472),
__E_PhotonNotEnabledForTitle = static_cast<int32_t>(0x473),
__E_PhotonApplicationNotFound = static_cast<int32_t>(0x474),
__E_PhotonApplicationNotAssociatedWithTitle = static_cast<int32_t>(0x475),
__E_InvalidEmailOrPassword = static_cast<int32_t>(0x476),
__E_FacebookAPIError = static_cast<int32_t>(0x477),
__E_InvalidContentType = static_cast<int32_t>(0x478),
__E_KeyLengthExceeded = static_cast<int32_t>(0x479),
__E_DataLengthExceeded = static_cast<int32_t>(0x47a),
__E_TooManyKeys = static_cast<int32_t>(0x47b),
__E_FreeTierCannotHaveVirtualCurrency = static_cast<int32_t>(0x47c),
__E_MissingAmazonSharedKey = static_cast<int32_t>(0x47d),
__E_AmazonValidationError = static_cast<int32_t>(0x47e),
__E_InvalidPSNIssuerId = static_cast<int32_t>(0x47f),
__E_PSNInaccessible = static_cast<int32_t>(0x480),
__E_ExpiredAuthToken = static_cast<int32_t>(0x481),
__E_FailedToGetEntitlements = static_cast<int32_t>(0x482),
__E_FailedToConsumeEntitlement = static_cast<int32_t>(0x483),
__E_TradeAcceptingUserNotAllowed = static_cast<int32_t>(0x484),
__E_TradeInventoryItemIsAssignedToCharacter = static_cast<int32_t>(0x485),
__E_TradeInventoryItemIsBundle = static_cast<int32_t>(0x486),
__E_TradeStatusNotValidForCancelling = static_cast<int32_t>(0x487),
__E_TradeStatusNotValidForAccepting = static_cast<int32_t>(0x488),
__E_TradeDoesNotExist = static_cast<int32_t>(0x489),
__E_TradeCancelled = static_cast<int32_t>(0x48a),
__E_TradeAlreadyFilled = static_cast<int32_t>(0x48b),
__E_TradeWaitForStatusTimeout = static_cast<int32_t>(0x48c),
__E_TradeInventoryItemExpired = static_cast<int32_t>(0x48d),
__E_TradeMissingOfferedAndAcceptedItems = static_cast<int32_t>(0x48e),
__E_TradeAcceptedItemIsBundle = static_cast<int32_t>(0x48f),
__E_TradeAcceptedItemIsStackable = static_cast<int32_t>(0x490),
__E_TradeInventoryItemInvalidStatus = static_cast<int32_t>(0x491),
__E_TradeAcceptedCatalogItemInvalid = static_cast<int32_t>(0x492),
__E_TradeAllowedUsersInvalid = static_cast<int32_t>(0x493),
__E_TradeInventoryItemDoesNotExist = static_cast<int32_t>(0x494),
__E_TradeInventoryItemIsConsumed = static_cast<int32_t>(0x495),
__E_TradeInventoryItemIsStackable = static_cast<int32_t>(0x496),
__E_TradeAcceptedItemsMismatch = static_cast<int32_t>(0x497),
__E_InvalidKongregateToken = static_cast<int32_t>(0x498),
__E_FeatureNotConfiguredForTitle = static_cast<int32_t>(0x499),
__E_NoMatchingCatalogItemForReceipt = static_cast<int32_t>(0x49a),
__E_InvalidCurrencyCode = static_cast<int32_t>(0x49b),
__E_NoRealMoneyPriceForCatalogItem = static_cast<int32_t>(0x49c),
__E_TradeInventoryItemIsNotTradable = static_cast<int32_t>(0x49d),
__E_TradeAcceptedCatalogItemIsNotTradable = static_cast<int32_t>(0x49e),
__E_UsersAlreadyFriends = static_cast<int32_t>(0x49f),
__E_LinkedIdentifierAlreadyClaimed = static_cast<int32_t>(0x4a0),
__E_CustomIdNotLinked = static_cast<int32_t>(0x4a1),
__E_TotalDataSizeExceeded = static_cast<int32_t>(0x4a2),
__E_DeleteKeyConflict = static_cast<int32_t>(0x4a3),
__E_InvalidXboxLiveToken = static_cast<int32_t>(0x4a4),
__E_ExpiredXboxLiveToken = static_cast<int32_t>(0x4a5),
__E_ResettableStatisticVersionRequired = static_cast<int32_t>(0x4a6),
__E_NotAuthorizedByTitle = static_cast<int32_t>(0x4a7),
__E_NoPartnerEnabled = static_cast<int32_t>(0x4a8),
__E_InvalidPartnerResponse = static_cast<int32_t>(0x4a9),
__E_APINotEnabledForGameServerAccess = static_cast<int32_t>(0x4aa),
__E_StatisticNotFound = static_cast<int32_t>(0x4ab),
__E_StatisticNameConflict = static_cast<int32_t>(0x4ac),
__E_StatisticVersionClosedForWrites = static_cast<int32_t>(0x4ad),
__E_StatisticVersionInvalid = static_cast<int32_t>(0x4ae),
__E_APIClientRequestRateLimitExceeded = static_cast<int32_t>(0x4af),
__E_InvalidJSONContent = static_cast<int32_t>(0x4b0),
__E_InvalidDropTable = static_cast<int32_t>(0x4b1),
__E_StatisticVersionAlreadyIncrementedForScheduledInterval = static_cast<int32_t>(0x4b2),
__E_StatisticCountLimitExceeded = static_cast<int32_t>(0x4b3),
__E_StatisticVersionIncrementRateExceeded = static_cast<int32_t>(0x4b4),
__E_ContainerKeyInvalid = static_cast<int32_t>(0x4b5),
__E_CloudScriptExecutionTimeLimitExceeded = static_cast<int32_t>(0x4b6),
__E_NoWritePermissionsForEvent = static_cast<int32_t>(0x4b7),
__E_CloudScriptFunctionArgumentSizeExceeded = static_cast<int32_t>(0x4b8),
__E_CloudScriptAPIRequestCountExceeded = static_cast<int32_t>(0x4b9),
__E_CloudScriptAPIRequestError = static_cast<int32_t>(0x4ba),
__E_CloudScriptHTTPRequestError = static_cast<int32_t>(0x4bb),
__E_InsufficientGuildRole = static_cast<int32_t>(0x4bc),
__E_GuildNotFound = static_cast<int32_t>(0x4bd),
__E_OverLimit = static_cast<int32_t>(0x4be),
__E_EventNotFound = static_cast<int32_t>(0x4bf),
__E_InvalidEventField = static_cast<int32_t>(0x4c0),
__E_InvalidEventName = static_cast<int32_t>(0x4c1),
__E_CatalogNotConfigured = static_cast<int32_t>(0x4c2),
__E_OperationNotSupportedForPlatform = static_cast<int32_t>(0x4c3),
__E_SegmentNotFound = static_cast<int32_t>(0x4c4),
__E_StoreNotFound = static_cast<int32_t>(0x4c5),
__E_InvalidStatisticName = static_cast<int32_t>(0x4c6),
__E_TitleNotQualifiedForLimit = static_cast<int32_t>(0x4c7),
__E_InvalidServiceLimitLevel = static_cast<int32_t>(0x4c8),
__E_ServiceLimitLevelInTransition = static_cast<int32_t>(0x4c9),
__E_CouponAlreadyRedeemed = static_cast<int32_t>(0x4ca),
__E_GameServerBuildSizeLimitExceeded = static_cast<int32_t>(0x4cb),
__E_GameServerBuildCountLimitExceeded = static_cast<int32_t>(0x4cc),
__E_VirtualCurrencyCountLimitExceeded = static_cast<int32_t>(0x4cd),
__E_VirtualCurrencyCodeExists = static_cast<int32_t>(0x4ce),
__E_TitleNewsItemCountLimitExceeded = static_cast<int32_t>(0x4cf),
__E_InvalidTwitchToken = static_cast<int32_t>(0x4d0),
__E_TwitchResponseError = static_cast<int32_t>(0x4d1),
__E_ProfaneDisplayName = static_cast<int32_t>(0x4d2),
__E_UserAlreadyAdded = static_cast<int32_t>(0x4d3),
__E_InvalidVirtualCurrencyCode = static_cast<int32_t>(0x4d4),
__E_VirtualCurrencyCannotBeDeleted = static_cast<int32_t>(0x4d5),
__E_IdentifierAlreadyClaimed = static_cast<int32_t>(0x4d6),
__E_IdentifierNotLinked = static_cast<int32_t>(0x4d7),
__E_InvalidContinuationToken = static_cast<int32_t>(0x4d8),
__E_ExpiredContinuationToken = static_cast<int32_t>(0x4d9),
__E_InvalidSegment = static_cast<int32_t>(0x4da),
__E_InvalidSessionId = static_cast<int32_t>(0x4db),
__E_SessionLogNotFound = static_cast<int32_t>(0x4dc),
__E_InvalidSearchTerm = static_cast<int32_t>(0x4dd),
__E_TwoFactorAuthenticationTokenRequired = static_cast<int32_t>(0x4de),
__E_GameServerHostCountLimitExceeded = static_cast<int32_t>(0x4df),
__E_PlayerTagCountLimitExceeded = static_cast<int32_t>(0x4e0),
__E_RequestAlreadyRunning = static_cast<int32_t>(0x4e1),
__E_ActionGroupNotFound = static_cast<int32_t>(0x4e2),
__E_MaximumSegmentBulkActionJobsRunning = static_cast<int32_t>(0x4e3),
__E_NoActionsOnPlayersInSegmentJob = static_cast<int32_t>(0x4e4),
__E_DuplicateStatisticName = static_cast<int32_t>(0x4e5),
__E_ScheduledTaskNameConflict = static_cast<int32_t>(0x4e6),
__E_ScheduledTaskCreateConflict = static_cast<int32_t>(0x4e7),
__E_InvalidScheduledTaskName = static_cast<int32_t>(0x4e8),
__E_InvalidTaskSchedule = static_cast<int32_t>(0x4e9),
__E_SteamNotEnabledForTitle = static_cast<int32_t>(0x4ea),
__E_LimitNotAnUpgradeOption = static_cast<int32_t>(0x4eb),
__E_NoSecretKeyEnabledForCloudScript = static_cast<int32_t>(0x4ec),
__E_TaskNotFound = static_cast<int32_t>(0x4ed),
__E_TaskInstanceNotFound = static_cast<int32_t>(0x4ee),
__E_InvalidIdentityProviderId = static_cast<int32_t>(0x4ef),
__E_MisconfiguredIdentityProvider = static_cast<int32_t>(0x4f0),
__E_InvalidScheduledTaskType = static_cast<int32_t>(0x4f1),
__E_BillingInformationRequired = static_cast<int32_t>(0x4f2),
__E_LimitedEditionItemUnavailable = static_cast<int32_t>(0x4f3),
__E_InvalidAdPlacementAndReward = static_cast<int32_t>(0x4f4),
__E_AllAdPlacementViewsAlreadyConsumed = static_cast<int32_t>(0x4f5),
__E_GoogleOAuthNotConfiguredForTitle = static_cast<int32_t>(0x4f6),
__E_GoogleOAuthError = static_cast<int32_t>(0x4f7),
__E_UserNotFriend = static_cast<int32_t>(0x4f8),
__E_InvalidSignature = static_cast<int32_t>(0x4f9),
__E_InvalidPublicKey = static_cast<int32_t>(0x4fa),
__E_GoogleOAuthNoIdTokenIncludedInResponse = static_cast<int32_t>(0x4fb),
__E_StatisticUpdateInProgress = static_cast<int32_t>(0x4fc),
__E_LeaderboardVersionNotAvailable = static_cast<int32_t>(0x4fd),
__E_StatisticAlreadyHasPrizeTable = static_cast<int32_t>(0x4ff),
__E_PrizeTableHasOverlappingRanks = static_cast<int32_t>(0x500),
__E_PrizeTableHasMissingRanks = static_cast<int32_t>(0x501),
__E_PrizeTableRankStartsAtZero = static_cast<int32_t>(0x502),
__E_InvalidStatistic = static_cast<int32_t>(0x503),
__E_ExpressionParseFailure = static_cast<int32_t>(0x504),
__E_ExpressionInvokeFailure = static_cast<int32_t>(0x505),
__E_ExpressionTooLong = static_cast<int32_t>(0x506),
__E_DataUpdateRateExceeded = static_cast<int32_t>(0x507),
__E_RestrictedEmailDomain = static_cast<int32_t>(0x508),
__E_EncryptionKeyDisabled = static_cast<int32_t>(0x509),
__E_EncryptionKeyMissing = static_cast<int32_t>(0x50a),
__E_EncryptionKeyBroken = static_cast<int32_t>(0x50b),
__E_NoSharedSecretKeyConfigured = static_cast<int32_t>(0x50c),
__E_SecretKeyNotFound = static_cast<int32_t>(0x50d),
__E_PlayerSecretAlreadyConfigured = static_cast<int32_t>(0x50e),
__E_APIRequestsDisabledForTitle = static_cast<int32_t>(0x50f),
__E_InvalidSharedSecretKey = static_cast<int32_t>(0x510),
__E_PrizeTableHasNoRanks = static_cast<int32_t>(0x511),
__E_ProfileDoesNotExist = static_cast<int32_t>(0x512),
__E_ContentS3OriginBucketNotConfigured = static_cast<int32_t>(0x513),
__E_InvalidEnvironmentForReceipt = static_cast<int32_t>(0x514),
__E_EncryptedRequestNotAllowed = static_cast<int32_t>(0x515),
__E_SignedRequestNotAllowed = static_cast<int32_t>(0x516),
__E_RequestViewConstraintParamsNotAllowed = static_cast<int32_t>(0x517),
__E_BadPartnerConfiguration = static_cast<int32_t>(0x518),
__E_XboxBPCertificateFailure = static_cast<int32_t>(0x519),
__E_XboxXASSExchangeFailure = static_cast<int32_t>(0x51a),
__E_InvalidEntityId = static_cast<int32_t>(0x51b),
__E_StatisticValueAggregationOverflow = static_cast<int32_t>(0x51c),
__E_EmailMessageFromAddressIsMissing = static_cast<int32_t>(0x51d),
__E_EmailMessageToAddressIsMissing = static_cast<int32_t>(0x51e),
__E_SmtpServerAuthenticationError = static_cast<int32_t>(0x51f),
__E_SmtpServerLimitExceeded = static_cast<int32_t>(0x520),
__E_SmtpServerInsufficientStorage = static_cast<int32_t>(0x521),
__E_SmtpServerCommunicationError = static_cast<int32_t>(0x522),
__E_SmtpServerGeneralFailure = static_cast<int32_t>(0x523),
__E_EmailClientTimeout = static_cast<int32_t>(0x524),
__E_EmailClientCanceledTask = static_cast<int32_t>(0x525),
__E_EmailTemplateMissing = static_cast<int32_t>(0x526),
__E_InvalidHostForTitleId = static_cast<int32_t>(0x527),
__E_EmailConfirmationTokenDoesNotExist = static_cast<int32_t>(0x528),
__E_EmailConfirmationTokenExpired = static_cast<int32_t>(0x529),
__E_AccountDeleted = static_cast<int32_t>(0x52a),
__E_PlayerSecretNotConfigured = static_cast<int32_t>(0x52b),
__E_InvalidSignatureTime = static_cast<int32_t>(0x52c),
__E_NoContactEmailAddressFound = static_cast<int32_t>(0x52d),
__E_InvalidAuthToken = static_cast<int32_t>(0x52e),
__E_AuthTokenDoesNotExist = static_cast<int32_t>(0x52f),
__E_AuthTokenExpired = static_cast<int32_t>(0x530),
__E_AuthTokenAlreadyUsedToResetPassword = static_cast<int32_t>(0x531),
__E_MembershipNameTooLong = static_cast<int32_t>(0x532),
__E_MembershipNotFound = static_cast<int32_t>(0x533),
__E_GoogleServiceAccountInvalid = static_cast<int32_t>(0x534),
__E_GoogleServiceAccountParseFailure = static_cast<int32_t>(0x535),
__E_EntityTokenMissing = static_cast<int32_t>(0x536),
__E_EntityTokenInvalid = static_cast<int32_t>(0x537),
__E_EntityTokenExpired = static_cast<int32_t>(0x538),
__E_EntityTokenRevoked = static_cast<int32_t>(0x539),
__E_InvalidProductForSubscription = static_cast<int32_t>(0x53a),
__E_XboxInaccessible = static_cast<int32_t>(0x53b),
__E_SubscriptionAlreadyTaken = static_cast<int32_t>(0x53c),
__E_SmtpAddonNotEnabled = static_cast<int32_t>(0x53d),
__E_APIConcurrentRequestLimitExceeded = static_cast<int32_t>(0x53e),
__E_XboxRejectedXSTSExchangeRequest = static_cast<int32_t>(0x53f),
__E_VariableNotDefined = static_cast<int32_t>(0x540),
__E_TemplateVersionNotDefined = static_cast<int32_t>(0x541),
__E_FileTooLarge = static_cast<int32_t>(0x542),
__E_TitleDeleted = static_cast<int32_t>(0x543),
__E_TitleContainsUserAccounts = static_cast<int32_t>(0x544),
__E_TitleDeletionPlayerCleanupFailure = static_cast<int32_t>(0x545),
__E_EntityFileOperationPending = static_cast<int32_t>(0x546),
__E_NoEntityFileOperationPending = static_cast<int32_t>(0x547),
__E_EntityProfileVersionMismatch = static_cast<int32_t>(0x548),
__E_TemplateVersionTooOld = static_cast<int32_t>(0x549),
__E_MembershipDefinitionInUse = static_cast<int32_t>(0x54a),
__E_PaymentPageNotConfigured = static_cast<int32_t>(0x54b),
__E_FailedLoginAttemptRateLimitExceeded = static_cast<int32_t>(0x54c),
__E_EntityBlockedByGroup = static_cast<int32_t>(0x54d),
__E_RoleDoesNotExist = static_cast<int32_t>(0x54e),
__E_EntityIsAlreadyMember = static_cast<int32_t>(0x54f),
__E_DuplicateRoleId = static_cast<int32_t>(0x550),
__E_GroupInvitationNotFound = static_cast<int32_t>(0x551),
__E_GroupApplicationNotFound = static_cast<int32_t>(0x552),
__E_OutstandingInvitationAcceptedInstead = static_cast<int32_t>(0x553),
__E_OutstandingApplicationAcceptedInstead = static_cast<int32_t>(0x554),
__E_RoleIsGroupDefaultMember = static_cast<int32_t>(0x555),
__E_RoleIsGroupAdmin = static_cast<int32_t>(0x556),
__E_RoleNameNotAvailable = static_cast<int32_t>(0x557),
__E_GroupNameNotAvailable = static_cast<int32_t>(0x558),
__E_EmailReportAlreadySent = static_cast<int32_t>(0x559),
__E_EmailReportRecipientBlacklisted = static_cast<int32_t>(0x55a),
__E_EventNamespaceNotAllowed = static_cast<int32_t>(0x55b),
__E_EventEntityNotAllowed = static_cast<int32_t>(0x55c),
__E_InvalidEntityType = static_cast<int32_t>(0x55d),
__E_NullTokenResultFromAad = static_cast<int32_t>(0x55e),
__E_InvalidTokenResultFromAad = static_cast<int32_t>(0x55f),
__E_NoValidCertificateForAad = static_cast<int32_t>(0x560),
__E_InvalidCertificateForAad = static_cast<int32_t>(0x561),
__E_DuplicateDropTableId = static_cast<int32_t>(0x562),
__E_MultiplayerServerError = static_cast<int32_t>(0x563),
__E_MultiplayerServerTooManyRequests = static_cast<int32_t>(0x564),
__E_MultiplayerServerNoContent = static_cast<int32_t>(0x565),
__E_MultiplayerServerBadRequest = static_cast<int32_t>(0x566),
__E_MultiplayerServerUnauthorized = static_cast<int32_t>(0x567),
__E_MultiplayerServerForbidden = static_cast<int32_t>(0x568),
__E_MultiplayerServerNotFound = static_cast<int32_t>(0x569),
__E_MultiplayerServerConflict = static_cast<int32_t>(0x56a),
__E_MultiplayerServerInternalServerError = static_cast<int32_t>(0x56b),
__E_MultiplayerServerUnavailable = static_cast<int32_t>(0x56c),
__E_ExplicitContentDetected = static_cast<int32_t>(0x56d),
__E_PIIContentDetected = static_cast<int32_t>(0x56e),
__E_InvalidScheduledTaskParameter = static_cast<int32_t>(0x56f),
__E_PerEntityEventRateLimitExceeded = static_cast<int32_t>(0x570),
__E_TitleDefaultLanguageNotSet = static_cast<int32_t>(0x571),
__E_EmailTemplateMissingDefaultVersion = static_cast<int32_t>(0x572),
__E_FacebookInstantGamesIdNotLinked = static_cast<int32_t>(0x573),
__E_InvalidFacebookInstantGamesSignature = static_cast<int32_t>(0x574),
__E_FacebookInstantGamesAuthNotConfiguredForTitle = static_cast<int32_t>(0x575),
__E_EntityProfileConstraintValidationFailed = static_cast<int32_t>(0x576),
__E_TelemetryIngestionKeyPending = static_cast<int32_t>(0x577),
__E_TelemetryIngestionKeyNotFound = static_cast<int32_t>(0x578),
__E_StatisticChildNameInvalid = static_cast<int32_t>(0x57a),
__E_DataIntegrityError = static_cast<int32_t>(0x57b),
__E_VirtualCurrencyCannotBeSetToOlderVersion = static_cast<int32_t>(0x57c),
__E_VirtualCurrencyMustBeWithinIntegerRange = static_cast<int32_t>(0x57d),
__E_EmailTemplateInvalidSyntax = static_cast<int32_t>(0x57e),
__E_EmailTemplateMissingCallback = static_cast<int32_t>(0x57f),
__E_PushNotificationTemplateInvalidPayload = static_cast<int32_t>(0x580),
__E_InvalidLocalizedPushNotificationLanguage = static_cast<int32_t>(0x581),
__E_MissingLocalizedPushNotificationMessage = static_cast<int32_t>(0x582),
__E_PushNotificationTemplateMissingPlatformPayload = static_cast<int32_t>(0x583),
__E_PushNotificationTemplatePayloadContainsInvalidJson = static_cast<int32_t>(0x584),
__E_PushNotificationTemplateContainsInvalidIosPayload = static_cast<int32_t>(0x585),
__E_PushNotificationTemplateContainsInvalidAndroidPayload = static_cast<int32_t>(0x586),
__E_PushNotificationTemplateIosPayloadMissingNotificationBody = static_cast<int32_t>(0x587),
__E_PushNotificationTemplateAndroidPayloadMissingNotificationBody = static_cast<int32_t>(0x588),
__E_PushNotificationTemplateNotFound = static_cast<int32_t>(0x589),
__E_PushNotificationTemplateMissingDefaultVersion = static_cast<int32_t>(0x58a),
__E_PushNotificationTemplateInvalidSyntax = static_cast<int32_t>(0x58b),
__E_PushNotificationTemplateNoCustomPayloadForV1 = static_cast<int32_t>(0x58c),
__E_NoLeaderboardForStatistic = static_cast<int32_t>(0x58d),
__E_TitleNewsMissingDefaultLanguage = static_cast<int32_t>(0x58e),
__E_TitleNewsNotFound = static_cast<int32_t>(0x58f),
__E_TitleNewsDuplicateLanguage = static_cast<int32_t>(0x590),
__E_TitleNewsMissingTitleOrBody = static_cast<int32_t>(0x591),
__E_TitleNewsInvalidLanguage = static_cast<int32_t>(0x592),
__E_EmailRecipientBlacklisted = static_cast<int32_t>(0x593),
__E_InvalidGameCenterAuthRequest = static_cast<int32_t>(0x594),
__E_GameCenterAuthenticationFailed = static_cast<int32_t>(0x595),
__E_CannotEnablePartiesForTitle = static_cast<int32_t>(0x596),
__E_PartyError = static_cast<int32_t>(0x597),
__E_PartyRequests = static_cast<int32_t>(0x598),
__E_PartyNoContent = static_cast<int32_t>(0x599),
__E_PartyBadRequest = static_cast<int32_t>(0x59a),
__E_PartyUnauthorized = static_cast<int32_t>(0x59b),
__E_PartyForbidden = static_cast<int32_t>(0x59c),
__E_PartyNotFound = static_cast<int32_t>(0x59d),
__E_PartyConflict = static_cast<int32_t>(0x59e),
__E_PartyInternalServerError = static_cast<int32_t>(0x59f),
__E_PartyUnavailable = static_cast<int32_t>(0x5a0),
__E_PartyTooManyRequests = static_cast<int32_t>(0x5a1),
__E_PushNotificationTemplateMissingName = static_cast<int32_t>(0x5a2),
__E_CannotEnableMultiplayerServersForTitle = static_cast<int32_t>(0x5a3),
__E_WriteAttemptedDuringExport = static_cast<int32_t>(0x5a4),
__E_MultiplayerServerTitleQuotaCoresExceeded = static_cast<int32_t>(0x5a5),
__E_AutomationRuleNotFound = static_cast<int32_t>(0x5a6),
__E_EntityAPIKeyLimitExceeded = static_cast<int32_t>(0x5a7),
__E_EntityAPIKeyNotFound = static_cast<int32_t>(0x5a8),
__E_EntityAPIKeyOrSecretInvalid = static_cast<int32_t>(0x5a9),
__E_EconomyServiceUnavailable = static_cast<int32_t>(0x5aa),
__E_EconomyServiceInternalError = static_cast<int32_t>(0x5ab),
__E_QueryRateLimitExceeded = static_cast<int32_t>(0x5ac),
__E_EntityAPIKeyCreationDisabledForEntity = static_cast<int32_t>(0x5ad),
__E_ForbiddenByEntityPolicy = static_cast<int32_t>(0x5ae),
__E_UpdateInventoryRateLimitExceeded = static_cast<int32_t>(0x5af),
__E_StudioCreationRateLimited = static_cast<int32_t>(0x5b0),
__E_StudioCreationInProgress = static_cast<int32_t>(0x5b1),
__E_DuplicateStudioName = static_cast<int32_t>(0x5b2),
__E_StudioNotFound = static_cast<int32_t>(0x5b3),
__E_StudioDeleted = static_cast<int32_t>(0x5b4),
__E_StudioDeactivated = static_cast<int32_t>(0x5b5),
__E_StudioActivated = static_cast<int32_t>(0x5b6),
__E_TitleCreationRateLimited = static_cast<int32_t>(0x5b7),
__E_TitleCreationInProgress = static_cast<int32_t>(0x5b8),
__E_DuplicateTitleName = static_cast<int32_t>(0x5b9),
__E_TitleActivationRateLimited = static_cast<int32_t>(0x5ba),
__E_TitleActivationInProgress = static_cast<int32_t>(0x5bb),
__E_TitleDeactivated = static_cast<int32_t>(0x5bc),
__E_TitleActivated = static_cast<int32_t>(0x5bd),
__E_CloudScriptAzureFunctionsExecutionTimeLimitExceeded = static_cast<int32_t>(0x5be),
__E_CloudScriptAzureFunctionsArgumentSizeExceeded = static_cast<int32_t>(0x5bf),
__E_CloudScriptAzureFunctionsReturnSizeExceeded = static_cast<int32_t>(0x5c0),
__E_CloudScriptAzureFunctionsHTTPRequestError = static_cast<int32_t>(0x5c1),
__E_VirtualCurrencyBetaGetError = static_cast<int32_t>(0x5c2),
__E_VirtualCurrencyBetaCreateError = static_cast<int32_t>(0x5c3),
__E_VirtualCurrencyBetaInitialDepositSaveError = static_cast<int32_t>(0x5c4),
__E_VirtualCurrencyBetaSaveError = static_cast<int32_t>(0x5c5),
__E_VirtualCurrencyBetaDeleteError = static_cast<int32_t>(0x5c6),
__E_VirtualCurrencyBetaRestoreError = static_cast<int32_t>(0x5c7),
__E_VirtualCurrencyBetaSaveConflict = static_cast<int32_t>(0x5c8),
__E_VirtualCurrencyBetaUpdateError = static_cast<int32_t>(0x5c9),
__E_InsightsManagementDatabaseNotFound = static_cast<int32_t>(0x5ca),
__E_InsightsManagementOperationNotFound = static_cast<int32_t>(0x5cb),
__E_InsightsManagementErrorPendingOperationExists = static_cast<int32_t>(0x5cc),
__E_InsightsManagementSetPerformanceLevelInvalidParameter = static_cast<int32_t>(0x5cd),
__E_InsightsManagementSetStorageRetentionInvalidParameter = static_cast<int32_t>(0x5ce),
__E_InsightsManagementGetStorageUsageInvalidParameter = static_cast<int32_t>(0x5cf),
__E_InsightsManagementGetOperationStatusInvalidParameter = static_cast<int32_t>(0x5d0),
__E_DuplicatePurchaseTransactionId = static_cast<int32_t>(0x5d1),
__E_EvaluationModePlayerCountExceeded = static_cast<int32_t>(0x5d2),
__E_GetPlayersInSegmentRateLimitExceeded = static_cast<int32_t>(0x5d3),
__E_CloudScriptFunctionNameSizeExceeded = static_cast<int32_t>(0x5d4),
__E_InsightsManagementTitleInEvaluationMode = static_cast<int32_t>(0x5d5),
__E_CloudScriptAzureFunctionsQueueRequestError = static_cast<int32_t>(0x5d6),
__E_EvaluationModeTitleCountExceeded = static_cast<int32_t>(0x5d7),
__E_InsightsManagementTitleNotInFlight = static_cast<int32_t>(0x5d8),
__E_LimitNotFound = static_cast<int32_t>(0x5d9),
__E_LimitNotAvailableViaAPI = static_cast<int32_t>(0x5da),
__E_InsightsManagementSetStorageRetentionBelowMinimum = static_cast<int32_t>(0x5db),
__E_InsightsManagementSetStorageRetentionAboveMaximum = static_cast<int32_t>(0x5dc),
__E_AppleNotEnabledForTitle = static_cast<int32_t>(0x5dd),
__E_InsightsManagementNewActiveEventExportLimitInvalid = static_cast<int32_t>(0x5de),
__E_InsightsManagementSetPerformanceRateLimited = static_cast<int32_t>(0x5df),
__E_PartyRequestsThrottledFromRateLimiter = static_cast<int32_t>(0x5e0),
__E_XboxServiceTooManyRequests = static_cast<int32_t>(0x5e1),
__E_NintendoSwitchNotEnabledForTitle = static_cast<int32_t>(0x5e2),
__E_RequestMultiplayerServersThrottledFromRateLimiter = static_cast<int32_t>(0x5e3),
__E_TitleDataInstanceNotFound = static_cast<int32_t>(0x5e4),
__E_DuplicateTitleDataOverrideInstanceName = static_cast<int32_t>(0x5e5),
__E_MatchmakingEntityInvalid = static_cast<int32_t>(0x7d1),
__E_MatchmakingPlayerAttributesInvalid = static_cast<int32_t>(0x7d2),
__E_MatchmakingQueueNotFound = static_cast<int32_t>(0x7e0),
__E_MatchmakingMatchNotFound = static_cast<int32_t>(0x7e1),
__E_MatchmakingTicketNotFound = static_cast<int32_t>(0x7e2),
__E_MatchmakingAlreadyJoinedTicket = static_cast<int32_t>(0x7ec),
__E_MatchmakingTicketAlreadyCompleted = static_cast<int32_t>(0x7ed),
__E_MatchmakingQueueConfigInvalid = static_cast<int32_t>(0x7ef),
__E_MatchmakingMemberProfileInvalid = static_cast<int32_t>(0x7f0),
__E_NintendoSwitchDeviceIdNotLinked = static_cast<int32_t>(0x7f2),
__E_MatchmakingNotEnabled = static_cast<int32_t>(0x7f3),
__E_MatchmakingPlayerAttributesTooLarge = static_cast<int32_t>(0x7fb),
__E_MatchmakingNumberOfPlayersInTicketTooLarge = static_cast<int32_t>(0x7fc),
__E_MatchmakingAttributeInvalid = static_cast<int32_t>(0x7fe),
__E_MatchmakingPlayerHasNotJoinedTicket = static_cast<int32_t>(0x805),
__E_MatchmakingRateLimitExceeded = static_cast<int32_t>(0x806),
__E_MatchmakingTicketMembershipLimitExceeded = static_cast<int32_t>(0x807),
__E_MatchmakingUnauthorized = static_cast<int32_t>(0x808),
__E_MatchmakingQueueLimitExceeded = static_cast<int32_t>(0x809),
__E_MatchmakingRequestTypeMismatch = static_cast<int32_t>(0x80a),
__E_MatchmakingBadRequest = static_cast<int32_t>(0x80b),
__E_TitleConfigNotFound = static_cast<int32_t>(0xbb9),
__E_TitleConfigUpdateConflict = static_cast<int32_t>(0xbba),
__E_TitleConfigSerializationError = static_cast<int32_t>(0xbbb),
__E_CatalogEntityInvalid = static_cast<int32_t>(0xfa1),
__E_CatalogTitleIdMissing = static_cast<int32_t>(0xfa2),
__E_CatalogPlayerIdMissing = static_cast<int32_t>(0xfa3),
__E_CatalogClientIdentityInvalid = static_cast<int32_t>(0xfa4),
__E_CatalogOneOrMoreFilesInvalid = static_cast<int32_t>(0xfa5),
__E_CatalogItemMetadataInvalid = static_cast<int32_t>(0xfa6),
__E_CatalogItemIdInvalid = static_cast<int32_t>(0xfa7),
__E_CatalogSearchParameterInvalid = static_cast<int32_t>(0xfa8),
__E_CatalogFeatureDisabled = static_cast<int32_t>(0xfa9),
__E_CatalogConfigInvalid = static_cast<int32_t>(0xfaa),
__E_CatalogUnauthorized = static_cast<int32_t>(0xfab),
__E_CatalogItemTypeInvalid = static_cast<int32_t>(0xfac),
__E_CatalogBadRequest = static_cast<int32_t>(0xfad),
__E_CatalogTooManyRequests = static_cast<int32_t>(0xfae),
__E_ExportInvalidStatusUpdate = static_cast<int32_t>(0x1388),
__E_ExportInvalidPrefix = static_cast<int32_t>(0x1389),
__E_ExportBlobContainerDoesNotExist = static_cast<int32_t>(0x138a),
__E_ExportNotFound = static_cast<int32_t>(0x138c),
__E_ExportCouldNotUpdate = static_cast<int32_t>(0x138d),
__E_ExportInvalidStorageType = static_cast<int32_t>(0x138e),
__E_ExportAmazonBucketDoesNotExist = static_cast<int32_t>(0x138f),
__E_ExportInvalidBlobStorage = static_cast<int32_t>(0x1390),
__E_ExportKustoException = static_cast<int32_t>(0x1391),
__E_ExportKustoConnectionFailed = static_cast<int32_t>(0x1394),
__E_ExportUnknownError = static_cast<int32_t>(0x1395),
__E_ExportCantEditPendingExport = static_cast<int32_t>(0x1396),
__E_ExportLimitExports = static_cast<int32_t>(0x1397),
__E_ExportLimitEvents = static_cast<int32_t>(0x1398),
__E_ExportInvalidPartitionStatusModification = static_cast<int32_t>(0x1399),
__E_ExportCouldNotCreate = static_cast<int32_t>(0x139a),
__E_ExportNoBackingDatabaseFound = static_cast<int32_t>(0x139b),
__E_ExportCouldNotDelete = static_cast<int32_t>(0x139c),
__E_ExportCannotDetermineEventQuery = static_cast<int32_t>(0x139d),
__E_ExportInvalidQuerySchemaModification = static_cast<int32_t>(0x139e),
__E_ExportQuerySchemaMissingRequiredColumns = static_cast<int32_t>(0x139f),
__E_ExportCannotParseQuery = static_cast<int32_t>(0x13a0),
__E_ExportControlCommandsNotAllowed = static_cast<int32_t>(0x13a1),
__E_ExportQueryMissingTableReference = static_cast<int32_t>(0x13a2),
__E_TitleNotEnabledForParty = static_cast<int32_t>(0x1770),
__E_PartyVersionNotFound = static_cast<int32_t>(0x1771),
__E_MultiplayerServerBuildReferencedByMatchmakingQueue = static_cast<int32_t>(0x1772),
__E_ExperimentationExperimentStopped = static_cast<int32_t>(0x1b58),
__E_ExperimentationExperimentRunning = static_cast<int32_t>(0x1b59),
__E_ExperimentationExperimentNotFound = static_cast<int32_t>(0x1b5a),
__E_ExperimentationExperimentNeverStarted = static_cast<int32_t>(0x1b5b),
__E_ExperimentationExperimentDeleted = static_cast<int32_t>(0x1b5c),
__E_ExperimentationClientTimeout = static_cast<int32_t>(0x1b5d),
__E_ExperimentationInvalidVariantConfiguration = static_cast<int32_t>(0x1b5e),
__E_ExperimentationInvalidVariableConfiguration = static_cast<int32_t>(0x1b5f),
__E_ExperimentInvalidId = static_cast<int32_t>(0x1b60),
__E_ExperimentationNoScorecard = static_cast<int32_t>(0x1b61),
__E_ExperimentationTreatmentAssignmentFailed = static_cast<int32_t>(0x1b62),
__E_ExperimentationTreatmentAssignmentDisabled = static_cast<int32_t>(0x1b63),
__E_ExperimentationInvalidDuration = static_cast<int32_t>(0x1b64),
__E_ExperimentationMaxExperimentsReached = static_cast<int32_t>(0x1b65),
__E_ExperimentationExperimentSchedulingInProgress = static_cast<int32_t>(0x1b66),
__E_ExperimentationExistingCodelessScheduled = static_cast<int32_t>(0x1b67),
__E_MaxActionDepthExceeded = static_cast<int32_t>(0x1f40),
__E_TitleNotOnUpdatedPricingPlan = static_cast<int32_t>(0x2328),
__E_SnapshotNotFound = static_cast<int32_t>(0x2af8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayFabErrorCode_Unwrapped () const noexcept {
return static_cast<__PlayFabErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayFabErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayFabErrorCode(int32_t  value__) noexcept;

/// @brief Field APIClientRequestRateLimitExceeded value: I32(1199)
static ::PlayFab::PlayFabErrorCode const APIClientRequestRateLimitExceeded;

/// @brief Field APIConcurrentRequestLimitExceeded value: I32(1342)
static ::PlayFab::PlayFabErrorCode const APIConcurrentRequestLimitExceeded;

/// @brief Field APINotEnabledForGameClientAccess value: I32(1082)
static ::PlayFab::PlayFabErrorCode const APINotEnabledForGameClientAccess;

/// @brief Field APINotEnabledForGameServerAccess value: I32(1194)
static ::PlayFab::PlayFabErrorCode const APINotEnabledForGameServerAccess;

/// @brief Field APINotIncludedInTitleUsageTier value: I32(1128)
static ::PlayFab::PlayFabErrorCode const APINotIncludedInTitleUsageTier;

/// @brief Field APIRequestLimitExceeded value: I32(1130)
static ::PlayFab::PlayFabErrorCode const APIRequestLimitExceeded;

/// @brief Field APIRequestsDisabledForTitle value: I32(1295)
static ::PlayFab::PlayFabErrorCode const APIRequestsDisabledForTitle;

/// @brief Field AccountAlreadyLinked value: I32(1011)
static ::PlayFab::PlayFabErrorCode const AccountAlreadyLinked;

/// @brief Field AccountBanned value: I32(1002)
static ::PlayFab::PlayFabErrorCode const AccountBanned;

/// @brief Field AccountDeleted value: I32(1322)
static ::PlayFab::PlayFabErrorCode const AccountDeleted;

/// @brief Field AccountNotFound value: I32(1001)
static ::PlayFab::PlayFabErrorCode const AccountNotFound;

/// @brief Field AccountNotLinked value: I32(1014)
static ::PlayFab::PlayFabErrorCode const AccountNotLinked;

/// @brief Field ActionGroupNotFound value: I32(1250)
static ::PlayFab::PlayFabErrorCode const ActionGroupNotFound;

/// @brief Field AllAdPlacementViewsAlreadyConsumed value: I32(1269)
static ::PlayFab::PlayFabErrorCode const AllAdPlacementViewsAlreadyConsumed;

/// @brief Field AmazonValidationError value: I32(1150)
static ::PlayFab::PlayFabErrorCode const AmazonValidationError;

/// @brief Field AppleNotEnabledForTitle value: I32(1501)
static ::PlayFab::PlayFabErrorCode const AppleNotEnabledForTitle;

/// @brief Field AuthTokenAlreadyUsedToResetPassword value: I32(1329)
static ::PlayFab::PlayFabErrorCode const AuthTokenAlreadyUsedToResetPassword;

/// @brief Field AuthTokenDoesNotExist value: I32(1327)
static ::PlayFab::PlayFabErrorCode const AuthTokenDoesNotExist;

/// @brief Field AuthTokenExpired value: I32(1328)
static ::PlayFab::PlayFabErrorCode const AuthTokenExpired;

/// @brief Field AutomationRuleNotFound value: I32(1446)
static ::PlayFab::PlayFabErrorCode const AutomationRuleNotFound;

/// @brief Field BadPartnerConfiguration value: I32(1304)
static ::PlayFab::PlayFabErrorCode const BadPartnerConfiguration;

/// @brief Field BillingInformationRequired value: I32(1266)
static ::PlayFab::PlayFabErrorCode const BillingInformationRequired;

/// @brief Field BodyTooLarge value: I32(1068)
static ::PlayFab::PlayFabErrorCode const BodyTooLarge;

/// @brief Field BuildAlreadyExists value: I32(1084)
static ::PlayFab::PlayFabErrorCode const BuildAlreadyExists;

/// @brief Field BuildNotAvailable value: I32(1132)
static ::PlayFab::PlayFabErrorCode const BuildNotAvailable;

/// @brief Field BuildNotFound value: I32(1032)
static ::PlayFab::PlayFabErrorCode const BuildNotFound;

/// @brief Field BuildPackageDoesNotExist value: I32(1085)
static ::PlayFab::PlayFabErrorCode const BuildPackageDoesNotExist;

/// @brief Field CannotEnableMultiplayerServersForTitle value: I32(1443)
static ::PlayFab::PlayFabErrorCode const CannotEnableMultiplayerServersForTitle;

/// @brief Field CannotEnablePartiesForTitle value: I32(1430)
static ::PlayFab::PlayFabErrorCode const CannotEnablePartiesForTitle;

/// @brief Field CatalogBadRequest value: I32(4013)
static ::PlayFab::PlayFabErrorCode const CatalogBadRequest;

/// @brief Field CatalogClientIdentityInvalid value: I32(4004)
static ::PlayFab::PlayFabErrorCode const CatalogClientIdentityInvalid;

/// @brief Field CatalogConfigInvalid value: I32(4010)
static ::PlayFab::PlayFabErrorCode const CatalogConfigInvalid;

/// @brief Field CatalogEntityInvalid value: I32(4001)
static ::PlayFab::PlayFabErrorCode const CatalogEntityInvalid;

/// @brief Field CatalogFeatureDisabled value: I32(4009)
static ::PlayFab::PlayFabErrorCode const CatalogFeatureDisabled;

/// @brief Field CatalogItemIdInvalid value: I32(4007)
static ::PlayFab::PlayFabErrorCode const CatalogItemIdInvalid;

/// @brief Field CatalogItemMetadataInvalid value: I32(4006)
static ::PlayFab::PlayFabErrorCode const CatalogItemMetadataInvalid;

/// @brief Field CatalogItemTypeInvalid value: I32(4012)
static ::PlayFab::PlayFabErrorCode const CatalogItemTypeInvalid;

/// @brief Field CatalogNotConfigured value: I32(1218)
static ::PlayFab::PlayFabErrorCode const CatalogNotConfigured;

/// @brief Field CatalogOneOrMoreFilesInvalid value: I32(4005)
static ::PlayFab::PlayFabErrorCode const CatalogOneOrMoreFilesInvalid;

/// @brief Field CatalogPlayerIdMissing value: I32(4003)
static ::PlayFab::PlayFabErrorCode const CatalogPlayerIdMissing;

/// @brief Field CatalogSearchParameterInvalid value: I32(4008)
static ::PlayFab::PlayFabErrorCode const CatalogSearchParameterInvalid;

/// @brief Field CatalogTitleIdMissing value: I32(4002)
static ::PlayFab::PlayFabErrorCode const CatalogTitleIdMissing;

/// @brief Field CatalogTooManyRequests value: I32(4014)
static ::PlayFab::PlayFabErrorCode const CatalogTooManyRequests;

/// @brief Field CatalogUnauthorized value: I32(4011)
static ::PlayFab::PlayFabErrorCode const CatalogUnauthorized;

/// @brief Field CharacterNotFound value: I32(1135)
static ::PlayFab::PlayFabErrorCode const CharacterNotFound;

/// @brief Field CloudScriptAPIRequestCountExceeded value: I32(1209)
static ::PlayFab::PlayFabErrorCode const CloudScriptAPIRequestCountExceeded;

/// @brief Field CloudScriptAPIRequestError value: I32(1210)
static ::PlayFab::PlayFabErrorCode const CloudScriptAPIRequestError;

/// @brief Field CloudScriptAzureFunctionsArgumentSizeExceeded value: I32(1471)
static ::PlayFab::PlayFabErrorCode const CloudScriptAzureFunctionsArgumentSizeExceeded;

/// @brief Field CloudScriptAzureFunctionsExecutionTimeLimitExceeded value: I32(1470)
static ::PlayFab::PlayFabErrorCode const CloudScriptAzureFunctionsExecutionTimeLimitExceeded;

/// @brief Field CloudScriptAzureFunctionsHTTPRequestError value: I32(1473)
static ::PlayFab::PlayFabErrorCode const CloudScriptAzureFunctionsHTTPRequestError;

/// @brief Field CloudScriptAzureFunctionsQueueRequestError value: I32(1494)
static ::PlayFab::PlayFabErrorCode const CloudScriptAzureFunctionsQueueRequestError;

/// @brief Field CloudScriptAzureFunctionsReturnSizeExceeded value: I32(1472)
static ::PlayFab::PlayFabErrorCode const CloudScriptAzureFunctionsReturnSizeExceeded;

/// @brief Field CloudScriptExecutionTimeLimitExceeded value: I32(1206)
static ::PlayFab::PlayFabErrorCode const CloudScriptExecutionTimeLimitExceeded;

/// @brief Field CloudScriptFunctionArgumentSizeExceeded value: I32(1208)
static ::PlayFab::PlayFabErrorCode const CloudScriptFunctionArgumentSizeExceeded;

/// @brief Field CloudScriptFunctionNameSizeExceeded value: I32(1492)
static ::PlayFab::PlayFabErrorCode const CloudScriptFunctionNameSizeExceeded;

/// @brief Field CloudScriptHTTPRequestError value: I32(1211)
static ::PlayFab::PlayFabErrorCode const CloudScriptHTTPRequestError;

/// @brief Field CloudScriptNotFound value: I32(1136)
static ::PlayFab::PlayFabErrorCode const CloudScriptNotFound;

/// @brief Field ConcurrentEditError value: I32(1133)
static ::PlayFab::PlayFabErrorCode const ConcurrentEditError;

/// @brief Field ConnectionError value: I32(2)
static ::PlayFab::PlayFabErrorCode const ConnectionError;

/// @brief Field ContainerKeyInvalid value: I32(1205)
static ::PlayFab::PlayFabErrorCode const ContainerKeyInvalid;

/// @brief Field ContainerNotOwned value: I32(1018)
static ::PlayFab::PlayFabErrorCode const ContainerNotOwned;

/// @brief Field ContentNotFound value: I32(1134)
static ::PlayFab::PlayFabErrorCode const ContentNotFound;

/// @brief Field ContentQuotaExceeded value: I32(1137)
static ::PlayFab::PlayFabErrorCode const ContentQuotaExceeded;

/// @brief Field ContentS3OriginBucketNotConfigured value: I32(1299)
static ::PlayFab::PlayFabErrorCode const ContentS3OriginBucketNotConfigured;

/// @brief Field CouponAlreadyRedeemed value: I32(1226)
static ::PlayFab::PlayFabErrorCode const CouponAlreadyRedeemed;

/// @brief Field CouponCodeNotFound value: I32(1016)
static ::PlayFab::PlayFabErrorCode const CouponCodeNotFound;

/// @brief Field CustomAnalyticsEventsNotEnabledForTitle value: I32(1087)
static ::PlayFab::PlayFabErrorCode const CustomAnalyticsEventsNotEnabledForTitle;

/// @brief Field CustomIdNotLinked value: I32(1185)
static ::PlayFab::PlayFabErrorCode const CustomIdNotLinked;

/// @brief Field DAULimitExceeded value: I32(1129)
static ::PlayFab::PlayFabErrorCode const DAULimitExceeded;

/// @brief Field DataIntegrityError value: I32(1403)
static ::PlayFab::PlayFabErrorCode const DataIntegrityError;

/// @brief Field DataLengthExceeded value: I32(1146)
static ::PlayFab::PlayFabErrorCode const DataLengthExceeded;

/// @brief Field DataUpdateRateExceeded value: I32(1287)
static ::PlayFab::PlayFabErrorCode const DataUpdateRateExceeded;

/// @brief Field DatabaseThroughputExceeded value: I32(1113)
static ::PlayFab::PlayFabErrorCode const DatabaseThroughputExceeded;

/// @brief Field DeleteKeyConflict value: I32(1187)
static ::PlayFab::PlayFabErrorCode const DeleteKeyConflict;

/// @brief Field DeviceAlreadyLinked value: I32(1119)
static ::PlayFab::PlayFabErrorCode const DeviceAlreadyLinked;

/// @brief Field DeviceNotLinked value: I32(1120)
static ::PlayFab::PlayFabErrorCode const DeviceNotLinked;

/// @brief Field DownstreamServiceUnavailable value: I32(1127)
static ::PlayFab::PlayFabErrorCode const DownstreamServiceUnavailable;

/// @brief Field DuplicateDropTableId value: I32(1378)
static ::PlayFab::PlayFabErrorCode const DuplicateDropTableId;

/// @brief Field DuplicateEmail value: I32(1046)
static ::PlayFab::PlayFabErrorCode const DuplicateEmail;

/// @brief Field DuplicatePurchaseTransactionId value: I32(1489)
static ::PlayFab::PlayFabErrorCode const DuplicatePurchaseTransactionId;

/// @brief Field DuplicateRoleId value: I32(1360)
static ::PlayFab::PlayFabErrorCode const DuplicateRoleId;

/// @brief Field DuplicateStatisticName value: I32(1253)
static ::PlayFab::PlayFabErrorCode const DuplicateStatisticName;

/// @brief Field DuplicateStudioName value: I32(1458)
static ::PlayFab::PlayFabErrorCode const DuplicateStudioName;

/// @brief Field DuplicateTitleDataOverrideInstanceName value: I32(1509)
static ::PlayFab::PlayFabErrorCode const DuplicateTitleDataOverrideInstanceName;

/// @brief Field DuplicateTitleName value: I32(1465)
static ::PlayFab::PlayFabErrorCode const DuplicateTitleName;

/// @brief Field DuplicateUsername value: I32(1065)
static ::PlayFab::PlayFabErrorCode const DuplicateUsername;

/// @brief Field EconomyServiceInternalError value: I32(1451)
static ::PlayFab::PlayFabErrorCode const EconomyServiceInternalError;

/// @brief Field EconomyServiceUnavailable value: I32(1450)
static ::PlayFab::PlayFabErrorCode const EconomyServiceUnavailable;

/// @brief Field EmailAddressNotAvailable value: I32(1006)
static ::PlayFab::PlayFabErrorCode const EmailAddressNotAvailable;

/// @brief Field EmailClientCanceledTask value: I32(1317)
static ::PlayFab::PlayFabErrorCode const EmailClientCanceledTask;

/// @brief Field EmailClientTimeout value: I32(1316)
static ::PlayFab::PlayFabErrorCode const EmailClientTimeout;

/// @brief Field EmailConfirmationTokenDoesNotExist value: I32(1320)
static ::PlayFab::PlayFabErrorCode const EmailConfirmationTokenDoesNotExist;

/// @brief Field EmailConfirmationTokenExpired value: I32(1321)
static ::PlayFab::PlayFabErrorCode const EmailConfirmationTokenExpired;

/// @brief Field EmailMessageFromAddressIsMissing value: I32(1309)
static ::PlayFab::PlayFabErrorCode const EmailMessageFromAddressIsMissing;

/// @brief Field EmailMessageToAddressIsMissing value: I32(1310)
static ::PlayFab::PlayFabErrorCode const EmailMessageToAddressIsMissing;

/// @brief Field EmailRecipientBlacklisted value: I32(1427)
static ::PlayFab::PlayFabErrorCode const EmailRecipientBlacklisted;

/// @brief Field EmailReportAlreadySent value: I32(1369)
static ::PlayFab::PlayFabErrorCode const EmailReportAlreadySent;

/// @brief Field EmailReportRecipientBlacklisted value: I32(1370)
static ::PlayFab::PlayFabErrorCode const EmailReportRecipientBlacklisted;

/// @brief Field EmailTemplateInvalidSyntax value: I32(1406)
static ::PlayFab::PlayFabErrorCode const EmailTemplateInvalidSyntax;

/// @brief Field EmailTemplateMissing value: I32(1318)
static ::PlayFab::PlayFabErrorCode const EmailTemplateMissing;

/// @brief Field EmailTemplateMissingCallback value: I32(1407)
static ::PlayFab::PlayFabErrorCode const EmailTemplateMissingCallback;

/// @brief Field EmailTemplateMissingDefaultVersion value: I32(1394)
static ::PlayFab::PlayFabErrorCode const EmailTemplateMissingDefaultVersion;

/// @brief Field EncryptedRequestNotAllowed value: I32(1301)
static ::PlayFab::PlayFabErrorCode const EncryptedRequestNotAllowed;

/// @brief Field EncryptionKeyBroken value: I32(1291)
static ::PlayFab::PlayFabErrorCode const EncryptionKeyBroken;

/// @brief Field EncryptionKeyDisabled value: I32(1289)
static ::PlayFab::PlayFabErrorCode const EncryptionKeyDisabled;

/// @brief Field EncryptionKeyMissing value: I32(1290)
static ::PlayFab::PlayFabErrorCode const EncryptionKeyMissing;

/// @brief Field EntityAPIKeyCreationDisabledForEntity value: I32(1453)
static ::PlayFab::PlayFabErrorCode const EntityAPIKeyCreationDisabledForEntity;

/// @brief Field EntityAPIKeyLimitExceeded value: I32(1447)
static ::PlayFab::PlayFabErrorCode const EntityAPIKeyLimitExceeded;

/// @brief Field EntityAPIKeyNotFound value: I32(1448)
static ::PlayFab::PlayFabErrorCode const EntityAPIKeyNotFound;

/// @brief Field EntityAPIKeyOrSecretInvalid value: I32(1449)
static ::PlayFab::PlayFabErrorCode const EntityAPIKeyOrSecretInvalid;

/// @brief Field EntityBlockedByGroup value: I32(1357)
static ::PlayFab::PlayFabErrorCode const EntityBlockedByGroup;

/// @brief Field EntityFileOperationPending value: I32(1350)
static ::PlayFab::PlayFabErrorCode const EntityFileOperationPending;

/// @brief Field EntityIsAlreadyMember value: I32(1359)
static ::PlayFab::PlayFabErrorCode const EntityIsAlreadyMember;

/// @brief Field EntityProfileConstraintValidationFailed value: I32(1398)
static ::PlayFab::PlayFabErrorCode const EntityProfileConstraintValidationFailed;

/// @brief Field EntityProfileVersionMismatch value: I32(1352)
static ::PlayFab::PlayFabErrorCode const EntityProfileVersionMismatch;

/// @brief Field EntityTokenExpired value: I32(1336)
static ::PlayFab::PlayFabErrorCode const EntityTokenExpired;

/// @brief Field EntityTokenInvalid value: I32(1335)
static ::PlayFab::PlayFabErrorCode const EntityTokenInvalid;

/// @brief Field EntityTokenMissing value: I32(1334)
static ::PlayFab::PlayFabErrorCode const EntityTokenMissing;

/// @brief Field EntityTokenRevoked value: I32(1337)
static ::PlayFab::PlayFabErrorCode const EntityTokenRevoked;

/// @brief Field ErrorCreatingStream value: I32(1076)
static ::PlayFab::PlayFabErrorCode const ErrorCreatingStream;

/// @brief Field EvaluationModePlayerCountExceeded value: I32(1490)
static ::PlayFab::PlayFabErrorCode const EvaluationModePlayerCountExceeded;

/// @brief Field EvaluationModeTitleCountExceeded value: I32(1495)
static ::PlayFab::PlayFabErrorCode const EvaluationModeTitleCountExceeded;

/// @brief Field EventEntityNotAllowed value: I32(1372)
static ::PlayFab::PlayFabErrorCode const EventEntityNotAllowed;

/// @brief Field EventNamespaceNotAllowed value: I32(1371)
static ::PlayFab::PlayFabErrorCode const EventNamespaceNotAllowed;

/// @brief Field EventNotFound value: I32(1215)
static ::PlayFab::PlayFabErrorCode const EventNotFound;

/// @brief Field ExperimentInvalidId value: I32(7008)
static ::PlayFab::PlayFabErrorCode const ExperimentInvalidId;

/// @brief Field ExperimentationClientTimeout value: I32(7005)
static ::PlayFab::PlayFabErrorCode const ExperimentationClientTimeout;

/// @brief Field ExperimentationExistingCodelessScheduled value: I32(7015)
static ::PlayFab::PlayFabErrorCode const ExperimentationExistingCodelessScheduled;

/// @brief Field ExperimentationExperimentDeleted value: I32(7004)
static ::PlayFab::PlayFabErrorCode const ExperimentationExperimentDeleted;

/// @brief Field ExperimentationExperimentNeverStarted value: I32(7003)
static ::PlayFab::PlayFabErrorCode const ExperimentationExperimentNeverStarted;

/// @brief Field ExperimentationExperimentNotFound value: I32(7002)
static ::PlayFab::PlayFabErrorCode const ExperimentationExperimentNotFound;

/// @brief Field ExperimentationExperimentRunning value: I32(7001)
static ::PlayFab::PlayFabErrorCode const ExperimentationExperimentRunning;

/// @brief Field ExperimentationExperimentSchedulingInProgress value: I32(7014)
static ::PlayFab::PlayFabErrorCode const ExperimentationExperimentSchedulingInProgress;

/// @brief Field ExperimentationExperimentStopped value: I32(7000)
static ::PlayFab::PlayFabErrorCode const ExperimentationExperimentStopped;

/// @brief Field ExperimentationInvalidDuration value: I32(7012)
static ::PlayFab::PlayFabErrorCode const ExperimentationInvalidDuration;

/// @brief Field ExperimentationInvalidVariableConfiguration value: I32(7007)
static ::PlayFab::PlayFabErrorCode const ExperimentationInvalidVariableConfiguration;

/// @brief Field ExperimentationInvalidVariantConfiguration value: I32(7006)
static ::PlayFab::PlayFabErrorCode const ExperimentationInvalidVariantConfiguration;

/// @brief Field ExperimentationMaxExperimentsReached value: I32(7013)
static ::PlayFab::PlayFabErrorCode const ExperimentationMaxExperimentsReached;

/// @brief Field ExperimentationNoScorecard value: I32(7009)
static ::PlayFab::PlayFabErrorCode const ExperimentationNoScorecard;

/// @brief Field ExperimentationTreatmentAssignmentDisabled value: I32(7011)
static ::PlayFab::PlayFabErrorCode const ExperimentationTreatmentAssignmentDisabled;

/// @brief Field ExperimentationTreatmentAssignmentFailed value: I32(7010)
static ::PlayFab::PlayFabErrorCode const ExperimentationTreatmentAssignmentFailed;

/// @brief Field ExpiredAuthToken value: I32(1153)
static ::PlayFab::PlayFabErrorCode const ExpiredAuthToken;

/// @brief Field ExpiredContinuationToken value: I32(1241)
static ::PlayFab::PlayFabErrorCode const ExpiredContinuationToken;

/// @brief Field ExpiredGameTicket value: I32(1116)
static ::PlayFab::PlayFabErrorCode const ExpiredGameTicket;

/// @brief Field ExpiredXboxLiveToken value: I32(1189)
static ::PlayFab::PlayFabErrorCode const ExpiredXboxLiveToken;

/// @brief Field ExplicitContentDetected value: I32(1389)
static ::PlayFab::PlayFabErrorCode const ExplicitContentDetected;

/// @brief Field ExportAmazonBucketDoesNotExist value: I32(5007)
static ::PlayFab::PlayFabErrorCode const ExportAmazonBucketDoesNotExist;

/// @brief Field ExportBlobContainerDoesNotExist value: I32(5002)
static ::PlayFab::PlayFabErrorCode const ExportBlobContainerDoesNotExist;

/// @brief Field ExportCannotDetermineEventQuery value: I32(5021)
static ::PlayFab::PlayFabErrorCode const ExportCannotDetermineEventQuery;

/// @brief Field ExportCannotParseQuery value: I32(5024)
static ::PlayFab::PlayFabErrorCode const ExportCannotParseQuery;

/// @brief Field ExportCantEditPendingExport value: I32(5014)
static ::PlayFab::PlayFabErrorCode const ExportCantEditPendingExport;

/// @brief Field ExportControlCommandsNotAllowed value: I32(5025)
static ::PlayFab::PlayFabErrorCode const ExportControlCommandsNotAllowed;

/// @brief Field ExportCouldNotCreate value: I32(5018)
static ::PlayFab::PlayFabErrorCode const ExportCouldNotCreate;

/// @brief Field ExportCouldNotDelete value: I32(5020)
static ::PlayFab::PlayFabErrorCode const ExportCouldNotDelete;

/// @brief Field ExportCouldNotUpdate value: I32(5005)
static ::PlayFab::PlayFabErrorCode const ExportCouldNotUpdate;

/// @brief Field ExportInvalidBlobStorage value: I32(5008)
static ::PlayFab::PlayFabErrorCode const ExportInvalidBlobStorage;

/// @brief Field ExportInvalidPartitionStatusModification value: I32(5017)
static ::PlayFab::PlayFabErrorCode const ExportInvalidPartitionStatusModification;

/// @brief Field ExportInvalidPrefix value: I32(5001)
static ::PlayFab::PlayFabErrorCode const ExportInvalidPrefix;

/// @brief Field ExportInvalidQuerySchemaModification value: I32(5022)
static ::PlayFab::PlayFabErrorCode const ExportInvalidQuerySchemaModification;

/// @brief Field ExportInvalidStatusUpdate value: I32(5000)
static ::PlayFab::PlayFabErrorCode const ExportInvalidStatusUpdate;

/// @brief Field ExportInvalidStorageType value: I32(5006)
static ::PlayFab::PlayFabErrorCode const ExportInvalidStorageType;

/// @brief Field ExportKustoConnectionFailed value: I32(5012)
static ::PlayFab::PlayFabErrorCode const ExportKustoConnectionFailed;

/// @brief Field ExportKustoException value: I32(5009)
static ::PlayFab::PlayFabErrorCode const ExportKustoException;

/// @brief Field ExportLimitEvents value: I32(5016)
static ::PlayFab::PlayFabErrorCode const ExportLimitEvents;

/// @brief Field ExportLimitExports value: I32(5015)
static ::PlayFab::PlayFabErrorCode const ExportLimitExports;

/// @brief Field ExportNoBackingDatabaseFound value: I32(5019)
static ::PlayFab::PlayFabErrorCode const ExportNoBackingDatabaseFound;

/// @brief Field ExportNotFound value: I32(5004)
static ::PlayFab::PlayFabErrorCode const ExportNotFound;

/// @brief Field ExportQueryMissingTableReference value: I32(5026)
static ::PlayFab::PlayFabErrorCode const ExportQueryMissingTableReference;

/// @brief Field ExportQuerySchemaMissingRequiredColumns value: I32(5023)
static ::PlayFab::PlayFabErrorCode const ExportQuerySchemaMissingRequiredColumns;

/// @brief Field ExportUnknownError value: I32(5013)
static ::PlayFab::PlayFabErrorCode const ExportUnknownError;

/// @brief Field ExpressionInvokeFailure value: I32(1285)
static ::PlayFab::PlayFabErrorCode const ExpressionInvokeFailure;

/// @brief Field ExpressionParseFailure value: I32(1284)
static ::PlayFab::PlayFabErrorCode const ExpressionParseFailure;

/// @brief Field ExpressionTooLong value: I32(1286)
static ::PlayFab::PlayFabErrorCode const ExpressionTooLong;

/// @brief Field FacebookAPIError value: I32(1143)
static ::PlayFab::PlayFabErrorCode const FacebookAPIError;

/// @brief Field FacebookInstantGamesAuthNotConfiguredForTitle value: I32(1397)
static ::PlayFab::PlayFabErrorCode const FacebookInstantGamesAuthNotConfiguredForTitle;

/// @brief Field FacebookInstantGamesIdNotLinked value: I32(1395)
static ::PlayFab::PlayFabErrorCode const FacebookInstantGamesIdNotLinked;

/// @brief Field FailedByPaymentProvider value: I32(1015)
static ::PlayFab::PlayFabErrorCode const FailedByPaymentProvider;

/// @brief Field FailedLoginAttemptRateLimitExceeded value: I32(1356)
static ::PlayFab::PlayFabErrorCode const FailedLoginAttemptRateLimitExceeded;

/// @brief Field FailedToConsumeEntitlement value: I32(1155)
static ::PlayFab::PlayFabErrorCode const FailedToConsumeEntitlement;

/// @brief Field FailedToGetEntitlements value: I32(1154)
static ::PlayFab::PlayFabErrorCode const FailedToGetEntitlements;

/// @brief Field FeatureNotConfiguredForTitle value: I32(1177)
static ::PlayFab::PlayFabErrorCode const FeatureNotConfiguredForTitle;

/// @brief Field FileNotFound value: I32(1045)
static ::PlayFab::PlayFabErrorCode const FileNotFound;

/// @brief Field FileTooLarge value: I32(1346)
static ::PlayFab::PlayFabErrorCode const FileTooLarge;

/// @brief Field ForbiddenByEntityPolicy value: I32(1454)
static ::PlayFab::PlayFabErrorCode const ForbiddenByEntityPolicy;

/// @brief Field FreeTierCannotHaveVirtualCurrency value: I32(1148)
static ::PlayFab::PlayFabErrorCode const FreeTierCannotHaveVirtualCurrency;

/// @brief Field GameCenterAuthenticationFailed value: I32(1429)
static ::PlayFab::PlayFabErrorCode const GameCenterAuthenticationFailed;

/// @brief Field GameModeNotFound value: I32(1025)
static ::PlayFab::PlayFabErrorCode const GameModeNotFound;

/// @brief Field GameNotFound value: I32(1024)
static ::PlayFab::PlayFabErrorCode const GameNotFound;

/// @brief Field GameServerBuildCountLimitExceeded value: I32(1228)
static ::PlayFab::PlayFabErrorCode const GameServerBuildCountLimitExceeded;

/// @brief Field GameServerBuildSizeLimitExceeded value: I32(1227)
static ::PlayFab::PlayFabErrorCode const GameServerBuildSizeLimitExceeded;

/// @brief Field GameServerHostCountLimitExceeded value: I32(1247)
static ::PlayFab::PlayFabErrorCode const GameServerHostCountLimitExceeded;

/// @brief Field GameTicketDoesNotMatchLobby value: I32(1117)
static ::PlayFab::PlayFabErrorCode const GameTicketDoesNotMatchLobby;

/// @brief Field GetPlayersInSegmentRateLimitExceeded value: I32(1491)
static ::PlayFab::PlayFabErrorCode const GetPlayersInSegmentRateLimitExceeded;

/// @brief Field GoogleOAuthError value: I32(1271)
static ::PlayFab::PlayFabErrorCode const GoogleOAuthError;

/// @brief Field GoogleOAuthNoIdTokenIncludedInResponse value: I32(1275)
static ::PlayFab::PlayFabErrorCode const GoogleOAuthNoIdTokenIncludedInResponse;

/// @brief Field GoogleOAuthNotConfiguredForTitle value: I32(1270)
static ::PlayFab::PlayFabErrorCode const GoogleOAuthNotConfiguredForTitle;

/// @brief Field GoogleServiceAccountInvalid value: I32(1332)
static ::PlayFab::PlayFabErrorCode const GoogleServiceAccountInvalid;

/// @brief Field GoogleServiceAccountParseFailure value: I32(1333)
static ::PlayFab::PlayFabErrorCode const GoogleServiceAccountParseFailure;

/// @brief Field GroupApplicationNotFound value: I32(1362)
static ::PlayFab::PlayFabErrorCode const GroupApplicationNotFound;

/// @brief Field GroupInvitationNotFound value: I32(1361)
static ::PlayFab::PlayFabErrorCode const GroupInvitationNotFound;

/// @brief Field GroupNameNotAvailable value: I32(1368)
static ::PlayFab::PlayFabErrorCode const GroupNameNotAvailable;

/// @brief Field GuildNotFound value: I32(1213)
static ::PlayFab::PlayFabErrorCode const GuildNotFound;

/// @brief Field IdentifierAlreadyClaimed value: I32(1238)
static ::PlayFab::PlayFabErrorCode const IdentifierAlreadyClaimed;

/// @brief Field IdentifierNotLinked value: I32(1239)
static ::PlayFab::PlayFabErrorCode const IdentifierNotLinked;

/// @brief Field InsightsManagementDatabaseNotFound value: I32(1482)
static ::PlayFab::PlayFabErrorCode const InsightsManagementDatabaseNotFound;

/// @brief Field InsightsManagementErrorPendingOperationExists value: I32(1484)
static ::PlayFab::PlayFabErrorCode const InsightsManagementErrorPendingOperationExists;

/// @brief Field InsightsManagementGetOperationStatusInvalidParameter value: I32(1488)
static ::PlayFab::PlayFabErrorCode const InsightsManagementGetOperationStatusInvalidParameter;

/// @brief Field InsightsManagementGetStorageUsageInvalidParameter value: I32(1487)
static ::PlayFab::PlayFabErrorCode const InsightsManagementGetStorageUsageInvalidParameter;

/// @brief Field InsightsManagementNewActiveEventExportLimitInvalid value: I32(1502)
static ::PlayFab::PlayFabErrorCode const InsightsManagementNewActiveEventExportLimitInvalid;

/// @brief Field InsightsManagementOperationNotFound value: I32(1483)
static ::PlayFab::PlayFabErrorCode const InsightsManagementOperationNotFound;

/// @brief Field InsightsManagementSetPerformanceLevelInvalidParameter value: I32(1485)
static ::PlayFab::PlayFabErrorCode const InsightsManagementSetPerformanceLevelInvalidParameter;

/// @brief Field InsightsManagementSetPerformanceRateLimited value: I32(1503)
static ::PlayFab::PlayFabErrorCode const InsightsManagementSetPerformanceRateLimited;

/// @brief Field InsightsManagementSetStorageRetentionAboveMaximum value: I32(1500)
static ::PlayFab::PlayFabErrorCode const InsightsManagementSetStorageRetentionAboveMaximum;

/// @brief Field InsightsManagementSetStorageRetentionBelowMinimum value: I32(1499)
static ::PlayFab::PlayFabErrorCode const InsightsManagementSetStorageRetentionBelowMinimum;

/// @brief Field InsightsManagementSetStorageRetentionInvalidParameter value: I32(1486)
static ::PlayFab::PlayFabErrorCode const InsightsManagementSetStorageRetentionInvalidParameter;

/// @brief Field InsightsManagementTitleInEvaluationMode value: I32(1493)
static ::PlayFab::PlayFabErrorCode const InsightsManagementTitleInEvaluationMode;

/// @brief Field InsightsManagementTitleNotInFlight value: I32(1496)
static ::PlayFab::PlayFabErrorCode const InsightsManagementTitleNotInFlight;

/// @brief Field InsufficientFunds value: I32(1059)
static ::PlayFab::PlayFabErrorCode const InsufficientFunds;

/// @brief Field InsufficientGuildRole value: I32(1212)
static ::PlayFab::PlayFabErrorCode const InsufficientGuildRole;

/// @brief Field InternalServerError value: I32(1110)
static ::PlayFab::PlayFabErrorCode const InternalServerError;

/// @brief Field InvalidAPIEndpoint value: I32(1131)
static ::PlayFab::PlayFabErrorCode const InvalidAPIEndpoint;

/// @brief Field InvalidAccount value: I32(1078)
static ::PlayFab::PlayFabErrorCode const InvalidAccount;

/// @brief Field InvalidAdPlacementAndReward value: I32(1268)
static ::PlayFab::PlayFabErrorCode const InvalidAdPlacementAndReward;

/// @brief Field InvalidAuthToken value: I32(1326)
static ::PlayFab::PlayFabErrorCode const InvalidAuthToken;

/// @brief Field InvalidBundleID value: I32(1098)
static ::PlayFab::PlayFabErrorCode const InvalidBundleID;

/// @brief Field InvalidBuyerInfo value: I32(1066)
static ::PlayFab::PlayFabErrorCode const InvalidBuyerInfo;

/// @brief Field InvalidCertificateForAad value: I32(1377)
static ::PlayFab::PlayFabErrorCode const InvalidCertificateForAad;

/// @brief Field InvalidCharacterStatistics value: I32(1138)
static ::PlayFab::PlayFabErrorCode const InvalidCharacterStatistics;

/// @brief Field InvalidContainerItem value: I32(1017)
static ::PlayFab::PlayFabErrorCode const InvalidContainerItem;

/// @brief Field InvalidContentType value: I32(1144)
static ::PlayFab::PlayFabErrorCode const InvalidContentType;

/// @brief Field InvalidContinuationToken value: I32(1240)
static ::PlayFab::PlayFabErrorCode const InvalidContinuationToken;

/// @brief Field InvalidCurrencyCode value: I32(1179)
static ::PlayFab::PlayFabErrorCode const InvalidCurrencyCode;

/// @brief Field InvalidDeveloper value: I32(1035)
static ::PlayFab::PlayFabErrorCode const InvalidDeveloper;

/// @brief Field InvalidDeviceID value: I32(1060)
static ::PlayFab::PlayFabErrorCode const InvalidDeviceID;

/// @brief Field InvalidDropTable value: I32(1201)
static ::PlayFab::PlayFabErrorCode const InvalidDropTable;

/// @brief Field InvalidEmailAddress value: I32(1005)
static ::PlayFab::PlayFabErrorCode const InvalidEmailAddress;

/// @brief Field InvalidEmailOrPassword value: I32(1142)
static ::PlayFab::PlayFabErrorCode const InvalidEmailOrPassword;

/// @brief Field InvalidEntityId value: I32(1307)
static ::PlayFab::PlayFabErrorCode const InvalidEntityId;

/// @brief Field InvalidEntityType value: I32(1373)
static ::PlayFab::PlayFabErrorCode const InvalidEntityType;

/// @brief Field InvalidEnvironmentForReceipt value: I32(1300)
static ::PlayFab::PlayFabErrorCode const InvalidEnvironmentForReceipt;

/// @brief Field InvalidEventField value: I32(1216)
static ::PlayFab::PlayFabErrorCode const InvalidEventField;

/// @brief Field InvalidEventName value: I32(1217)
static ::PlayFab::PlayFabErrorCode const InvalidEventName;

/// @brief Field InvalidFacebookInstantGamesSignature value: I32(1396)
static ::PlayFab::PlayFabErrorCode const InvalidFacebookInstantGamesSignature;

/// @brief Field InvalidFacebookToken value: I32(1013)
static ::PlayFab::PlayFabErrorCode const InvalidFacebookToken;

/// @brief Field InvalidGameCenterAuthRequest value: I32(1428)
static ::PlayFab::PlayFabErrorCode const InvalidGameCenterAuthRequest;

/// @brief Field InvalidGameTicket value: I32(1115)
static ::PlayFab::PlayFabErrorCode const InvalidGameTicket;

/// @brief Field InvalidGoogleToken value: I32(1026)
static ::PlayFab::PlayFabErrorCode const InvalidGoogleToken;

/// @brief Field InvalidHostForTitleId value: I32(1319)
static ::PlayFab::PlayFabErrorCode const InvalidHostForTitleId;

/// @brief Field InvalidIdentityProviderId value: I32(1263)
static ::PlayFab::PlayFabErrorCode const InvalidIdentityProviderId;

/// @brief Field InvalidItemId value: I32(1093)
static ::PlayFab::PlayFabErrorCode const InvalidItemId;

/// @brief Field InvalidItemIdInTable value: I32(1020)
static ::PlayFab::PlayFabErrorCode const InvalidItemIdInTable;

/// @brief Field InvalidItemProperties value: I32(1091)
static ::PlayFab::PlayFabErrorCode const InvalidItemProperties;

/// @brief Field InvalidJSONContent value: I32(1200)
static ::PlayFab::PlayFabErrorCode const InvalidJSONContent;

/// @brief Field InvalidKongregateToken value: I32(1176)
static ::PlayFab::PlayFabErrorCode const InvalidKongregateToken;

/// @brief Field InvalidLocalizedPushNotificationLanguage value: I32(1409)
static ::PlayFab::PlayFabErrorCode const InvalidLocalizedPushNotificationLanguage;

/// @brief Field InvalidOrderInfo value: I32(1036)
static ::PlayFab::PlayFabErrorCode const InvalidOrderInfo;

/// @brief Field InvalidPSNAuthCode value: I32(1092)
static ::PlayFab::PlayFabErrorCode const InvalidPSNAuthCode;

/// @brief Field InvalidPSNIssuerId value: I32(1151)
static ::PlayFab::PlayFabErrorCode const InvalidPSNIssuerId;

/// @brief Field InvalidParams value: I32(1000)
static ::PlayFab::PlayFabErrorCode const InvalidParams;

/// @brief Field InvalidPartnerResponse value: I32(1193)
static ::PlayFab::PlayFabErrorCode const InvalidPartnerResponse;

/// @brief Field InvalidPassword value: I32(1008)
static ::PlayFab::PlayFabErrorCode const InvalidPassword;

/// @brief Field InvalidPaymentProvider value: I32(1063)
static ::PlayFab::PlayFabErrorCode const InvalidPaymentProvider;

/// @brief Field InvalidPlatform value: I32(1038)
static ::PlayFab::PlayFabErrorCode const InvalidPlatform;

/// @brief Field InvalidProductForSubscription value: I32(1338)
static ::PlayFab::PlayFabErrorCode const InvalidProductForSubscription;

/// @brief Field InvalidPublicKey value: I32(1274)
static ::PlayFab::PlayFabErrorCode const InvalidPublicKey;

/// @brief Field InvalidPublisherId value: I32(1126)
static ::PlayFab::PlayFabErrorCode const InvalidPublisherId;

/// @brief Field InvalidPurchaseTransactionStatus value: I32(1081)
static ::PlayFab::PlayFabErrorCode const InvalidPurchaseTransactionStatus;

/// @brief Field InvalidPushNotificationToken value: I32(1061)
static ::PlayFab::PlayFabErrorCode const InvalidPushNotificationToken;

/// @brief Field InvalidReceipt value: I32(1021)
static ::PlayFab::PlayFabErrorCode const InvalidReceipt;

/// @brief Field InvalidRegion value: I32(1055)
static ::PlayFab::PlayFabErrorCode const InvalidRegion;

/// @brief Field InvalidReportDate value: I32(1111)
static ::PlayFab::PlayFabErrorCode const InvalidReportDate;

/// @brief Field InvalidRequest value: I32(1071)
static ::PlayFab::PlayFabErrorCode const InvalidRequest;

/// @brief Field InvalidScheduledTaskName value: I32(1256)
static ::PlayFab::PlayFabErrorCode const InvalidScheduledTaskName;

/// @brief Field InvalidScheduledTaskParameter value: I32(1391)
static ::PlayFab::PlayFabErrorCode const InvalidScheduledTaskParameter;

/// @brief Field InvalidScheduledTaskType value: I32(1265)
static ::PlayFab::PlayFabErrorCode const InvalidScheduledTaskType;

/// @brief Field InvalidSearchTerm value: I32(1245)
static ::PlayFab::PlayFabErrorCode const InvalidSearchTerm;

/// @brief Field InvalidSegment value: I32(1242)
static ::PlayFab::PlayFabErrorCode const InvalidSegment;

/// @brief Field InvalidServiceLimitLevel value: I32(1224)
static ::PlayFab::PlayFabErrorCode const InvalidServiceLimitLevel;

/// @brief Field InvalidSessionId value: I32(1243)
static ::PlayFab::PlayFabErrorCode const InvalidSessionId;

/// @brief Field InvalidSessionTicket value: I32(1100)
static ::PlayFab::PlayFabErrorCode const InvalidSessionTicket;

/// @brief Field InvalidSharedGroupId value: I32(1088)
static ::PlayFab::PlayFabErrorCode const InvalidSharedGroupId;

/// @brief Field InvalidSharedSecretKey value: I32(1296)
static ::PlayFab::PlayFabErrorCode const InvalidSharedSecretKey;

/// @brief Field InvalidSignature value: I32(1273)
static ::PlayFab::PlayFabErrorCode const InvalidSignature;

/// @brief Field InvalidSignatureTime value: I32(1324)
static ::PlayFab::PlayFabErrorCode const InvalidSignatureTime;

/// @brief Field InvalidStatistic value: I32(1283)
static ::PlayFab::PlayFabErrorCode const InvalidStatistic;

/// @brief Field InvalidStatisticName value: I32(1222)
static ::PlayFab::PlayFabErrorCode const InvalidStatisticName;

/// @brief Field InvalidSteamTicket value: I32(1010)
static ::PlayFab::PlayFabErrorCode const InvalidSteamTicket;

/// @brief Field InvalidTaskSchedule value: I32(1257)
static ::PlayFab::PlayFabErrorCode const InvalidTaskSchedule;

/// @brief Field InvalidTicket value: I32(1034)
static ::PlayFab::PlayFabErrorCode const InvalidTicket;

/// @brief Field InvalidTitleForDeveloper value: I32(1028)
static ::PlayFab::PlayFabErrorCode const InvalidTitleForDeveloper;

/// @brief Field InvalidTitleId value: I32(1004)
static ::PlayFab::PlayFabErrorCode const InvalidTitleId;

/// @brief Field InvalidTokenResultFromAad value: I32(1375)
static ::PlayFab::PlayFabErrorCode const InvalidTokenResultFromAad;

/// @brief Field InvalidTwitchToken value: I32(1232)
static ::PlayFab::PlayFabErrorCode const InvalidTwitchToken;

/// @brief Field InvalidTypeInBody value: I32(1070)
static ::PlayFab::PlayFabErrorCode const InvalidTypeInBody;

/// @brief Field InvalidUserStatistics value: I32(1073)
static ::PlayFab::PlayFabErrorCode const InvalidUserStatistics;

/// @brief Field InvalidUsername value: I32(1007)
static ::PlayFab::PlayFabErrorCode const InvalidUsername;

/// @brief Field InvalidUsernameOrPassword value: I32(1003)
static ::PlayFab::PlayFabErrorCode const InvalidUsernameOrPassword;

/// @brief Field InvalidVirtualCurrency value: I32(1051)
static ::PlayFab::PlayFabErrorCode const InvalidVirtualCurrency;

/// @brief Field InvalidVirtualCurrencyCode value: I32(1236)
static ::PlayFab::PlayFabErrorCode const InvalidVirtualCurrencyCode;

/// @brief Field InvalidXboxLiveToken value: I32(1188)
static ::PlayFab::PlayFabErrorCode const InvalidXboxLiveToken;

/// @brief Field ItemNotAffordable value: I32(1050)
static ::PlayFab::PlayFabErrorCode const ItemNotAffordable;

/// @brief Field ItemNotFound value: I32(1047)
static ::PlayFab::PlayFabErrorCode const ItemNotFound;

/// @brief Field ItemNotOwned value: I32(1048)
static ::PlayFab::PlayFabErrorCode const ItemNotOwned;

/// @brief Field ItemNotRecycleable value: I32(1049)
static ::PlayFab::PlayFabErrorCode const ItemNotRecycleable;

/// @brief Field JavascriptException value: I32(1099)
static ::PlayFab::PlayFabErrorCode const JavascriptException;

/// @brief Field JsonParseError value: I32(3)
static ::PlayFab::PlayFabErrorCode const JsonParseError;

/// @brief Field KeyLengthExceeded value: I32(1145)
static ::PlayFab::PlayFabErrorCode const KeyLengthExceeded;

/// @brief Field KeyNotOwned value: I32(1019)
static ::PlayFab::PlayFabErrorCode const KeyNotOwned;

/// @brief Field LeaderboardVersionNotAvailable value: I32(1277)
static ::PlayFab::PlayFabErrorCode const LeaderboardVersionNotAvailable;

/// @brief Field LimitNotAnUpgradeOption value: I32(1259)
static ::PlayFab::PlayFabErrorCode const LimitNotAnUpgradeOption;

/// @brief Field LimitNotAvailableViaAPI value: I32(1498)
static ::PlayFab::PlayFabErrorCode const LimitNotAvailableViaAPI;

/// @brief Field LimitNotFound value: I32(1497)
static ::PlayFab::PlayFabErrorCode const LimitNotFound;

/// @brief Field LimitedEditionItemUnavailable value: I32(1267)
static ::PlayFab::PlayFabErrorCode const LimitedEditionItemUnavailable;

/// @brief Field LinkedAccountAlreadyClaimed value: I32(1012)
static ::PlayFab::PlayFabErrorCode const LinkedAccountAlreadyClaimed;

/// @brief Field LinkedDeviceAlreadyClaimed value: I32(1118)
static ::PlayFab::PlayFabErrorCode const LinkedDeviceAlreadyClaimed;

/// @brief Field LinkedIdentifierAlreadyClaimed value: I32(1184)
static ::PlayFab::PlayFabErrorCode const LinkedIdentifierAlreadyClaimed;

/// @brief Field MatchmakingAlreadyJoinedTicket value: I32(2028)
static ::PlayFab::PlayFabErrorCode const MatchmakingAlreadyJoinedTicket;

/// @brief Field MatchmakingAttributeInvalid value: I32(2046)
static ::PlayFab::PlayFabErrorCode const MatchmakingAttributeInvalid;

/// @brief Field MatchmakingBadRequest value: I32(2059)
static ::PlayFab::PlayFabErrorCode const MatchmakingBadRequest;

/// @brief Field MatchmakingEntityInvalid value: I32(2001)
static ::PlayFab::PlayFabErrorCode const MatchmakingEntityInvalid;

/// @brief Field MatchmakingMatchNotFound value: I32(2017)
static ::PlayFab::PlayFabErrorCode const MatchmakingMatchNotFound;

/// @brief Field MatchmakingMemberProfileInvalid value: I32(2032)
static ::PlayFab::PlayFabErrorCode const MatchmakingMemberProfileInvalid;

/// @brief Field MatchmakingNotEnabled value: I32(2035)
static ::PlayFab::PlayFabErrorCode const MatchmakingNotEnabled;

/// @brief Field MatchmakingNumberOfPlayersInTicketTooLarge value: I32(2044)
static ::PlayFab::PlayFabErrorCode const MatchmakingNumberOfPlayersInTicketTooLarge;

/// @brief Field MatchmakingPlayerAttributesInvalid value: I32(2002)
static ::PlayFab::PlayFabErrorCode const MatchmakingPlayerAttributesInvalid;

/// @brief Field MatchmakingPlayerAttributesTooLarge value: I32(2043)
static ::PlayFab::PlayFabErrorCode const MatchmakingPlayerAttributesTooLarge;

/// @brief Field MatchmakingPlayerHasNotJoinedTicket value: I32(2053)
static ::PlayFab::PlayFabErrorCode const MatchmakingPlayerHasNotJoinedTicket;

/// @brief Field MatchmakingQueueConfigInvalid value: I32(2031)
static ::PlayFab::PlayFabErrorCode const MatchmakingQueueConfigInvalid;

/// @brief Field MatchmakingQueueLimitExceeded value: I32(2057)
static ::PlayFab::PlayFabErrorCode const MatchmakingQueueLimitExceeded;

/// @brief Field MatchmakingQueueNotFound value: I32(2016)
static ::PlayFab::PlayFabErrorCode const MatchmakingQueueNotFound;

/// @brief Field MatchmakingRateLimitExceeded value: I32(2054)
static ::PlayFab::PlayFabErrorCode const MatchmakingRateLimitExceeded;

/// @brief Field MatchmakingRequestTypeMismatch value: I32(2058)
static ::PlayFab::PlayFabErrorCode const MatchmakingRequestTypeMismatch;

/// @brief Field MatchmakingTicketAlreadyCompleted value: I32(2029)
static ::PlayFab::PlayFabErrorCode const MatchmakingTicketAlreadyCompleted;

/// @brief Field MatchmakingTicketMembershipLimitExceeded value: I32(2055)
static ::PlayFab::PlayFabErrorCode const MatchmakingTicketMembershipLimitExceeded;

/// @brief Field MatchmakingTicketNotFound value: I32(2018)
static ::PlayFab::PlayFabErrorCode const MatchmakingTicketNotFound;

/// @brief Field MatchmakingUnauthorized value: I32(2056)
static ::PlayFab::PlayFabErrorCode const MatchmakingUnauthorized;

/// @brief Field MaxActionDepthExceeded value: I32(8000)
static ::PlayFab::PlayFabErrorCode const MaxActionDepthExceeded;

/// @brief Field MaximumSegmentBulkActionJobsRunning value: I32(1251)
static ::PlayFab::PlayFabErrorCode const MaximumSegmentBulkActionJobsRunning;

/// @brief Field MembershipDefinitionInUse value: I32(1354)
static ::PlayFab::PlayFabErrorCode const MembershipDefinitionInUse;

/// @brief Field MembershipNameTooLong value: I32(1330)
static ::PlayFab::PlayFabErrorCode const MembershipNameTooLong;

/// @brief Field MembershipNotFound value: I32(1331)
static ::PlayFab::PlayFabErrorCode const MembershipNotFound;

/// @brief Field MisconfiguredIdentityProvider value: I32(1264)
static ::PlayFab::PlayFabErrorCode const MisconfiguredIdentityProvider;

/// @brief Field MissingAmazonSharedKey value: I32(1149)
static ::PlayFab::PlayFabErrorCode const MissingAmazonSharedKey;

/// @brief Field MissingLocalizedPushNotificationMessage value: I32(1410)
static ::PlayFab::PlayFabErrorCode const MissingLocalizedPushNotificationMessage;

/// @brief Field MissingTitleGoogleProperties value: I32(1090)
static ::PlayFab::PlayFabErrorCode const MissingTitleGoogleProperties;

/// @brief Field MultiplayerServerBadRequest value: I32(1382)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerBadRequest;

/// @brief Field MultiplayerServerBuildReferencedByMatchmakingQueue value: I32(6002)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerBuildReferencedByMatchmakingQueue;

/// @brief Field MultiplayerServerConflict value: I32(1386)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerConflict;

/// @brief Field MultiplayerServerError value: I32(1379)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerError;

/// @brief Field MultiplayerServerForbidden value: I32(1384)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerForbidden;

/// @brief Field MultiplayerServerInternalServerError value: I32(1387)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerInternalServerError;

/// @brief Field MultiplayerServerNoContent value: I32(1381)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerNoContent;

/// @brief Field MultiplayerServerNotFound value: I32(1385)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerNotFound;

/// @brief Field MultiplayerServerTitleQuotaCoresExceeded value: I32(1445)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerTitleQuotaCoresExceeded;

/// @brief Field MultiplayerServerTooManyRequests value: I32(1380)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerTooManyRequests;

/// @brief Field MultiplayerServerUnauthorized value: I32(1383)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerUnauthorized;

/// @brief Field MultiplayerServerUnavailable value: I32(1388)
static ::PlayFab::PlayFabErrorCode const MultiplayerServerUnavailable;

/// @brief Field NameNotAvailable value: I32(1058)
static ::PlayFab::PlayFabErrorCode const NameNotAvailable;

/// @brief Field NintendoSwitchDeviceIdNotLinked value: I32(2034)
static ::PlayFab::PlayFabErrorCode const NintendoSwitchDeviceIdNotLinked;

/// @brief Field NintendoSwitchNotEnabledForTitle value: I32(1506)
static ::PlayFab::PlayFabErrorCode const NintendoSwitchNotEnabledForTitle;

/// @brief Field NoActionsOnPlayersInSegmentJob value: I32(1252)
static ::PlayFab::PlayFabErrorCode const NoActionsOnPlayersInSegmentJob;

/// @brief Field NoContactEmailAddressFound value: I32(1325)
static ::PlayFab::PlayFabErrorCode const NoContactEmailAddressFound;

/// @brief Field NoEntityFileOperationPending value: I32(1351)
static ::PlayFab::PlayFabErrorCode const NoEntityFileOperationPending;

/// @brief Field NoGameModeParamsSet value: I32(1067)
static ::PlayFab::PlayFabErrorCode const NoGameModeParamsSet;

/// @brief Field NoLeaderboardForStatistic value: I32(1421)
static ::PlayFab::PlayFabErrorCode const NoLeaderboardForStatistic;

/// @brief Field NoMatchingCatalogItemForReceipt value: I32(1178)
static ::PlayFab::PlayFabErrorCode const NoMatchingCatalogItemForReceipt;

/// @brief Field NoPartnerEnabled value: I32(1192)
static ::PlayFab::PlayFabErrorCode const NoPartnerEnabled;

/// @brief Field NoPushNotificationARNForTitle value: I32(1083)
static ::PlayFab::PlayFabErrorCode const NoPushNotificationARNForTitle;

/// @brief Field NoRealMoneyPriceForCatalogItem value: I32(1180)
static ::PlayFab::PlayFabErrorCode const NoRealMoneyPriceForCatalogItem;

/// @brief Field NoRemainingUses value: I32(1062)
static ::PlayFab::PlayFabErrorCode const NoRemainingUses;

/// @brief Field NoSecretKeyEnabledForCloudScript value: I32(1260)
static ::PlayFab::PlayFabErrorCode const NoSecretKeyEnabledForCloudScript;

/// @brief Field NoSharedSecretKeyConfigured value: I32(1292)
static ::PlayFab::PlayFabErrorCode const NoSharedSecretKeyConfigured;

/// @brief Field NoSuchMod value: I32(1044)
static ::PlayFab::PlayFabErrorCode const NoSuchMod;

/// @brief Field NoValidCertificateForAad value: I32(1376)
static ::PlayFab::PlayFabErrorCode const NoValidCertificateForAad;

/// @brief Field NoWritePermissionsForEvent value: I32(1207)
static ::PlayFab::PlayFabErrorCode const NoWritePermissionsForEvent;

/// @brief Field NonPositiveValue value: I32(1054)
static ::PlayFab::PlayFabErrorCode const NonPositiveValue;

/// @brief Field NotAuthenticated value: I32(1074)
static ::PlayFab::PlayFabErrorCode const NotAuthenticated;

/// @brief Field NotAuthorized value: I32(1089)
static ::PlayFab::PlayFabErrorCode const NotAuthorized;

/// @brief Field NotAuthorizedByTitle value: I32(1191)
static ::PlayFab::PlayFabErrorCode const NotAuthorizedByTitle;

/// @brief Field NullTokenResultFromAad value: I32(1374)
static ::PlayFab::PlayFabErrorCode const NullTokenResultFromAad;

/// @brief Field OperationNotSupportedForPlatform value: I32(1219)
static ::PlayFab::PlayFabErrorCode const OperationNotSupportedForPlatform;

/// @brief Field OutstandingApplicationAcceptedInstead value: I32(1364)
static ::PlayFab::PlayFabErrorCode const OutstandingApplicationAcceptedInstead;

/// @brief Field OutstandingInvitationAcceptedInstead value: I32(1363)
static ::PlayFab::PlayFabErrorCode const OutstandingInvitationAcceptedInstead;

/// @brief Field OverLimit value: I32(1214)
static ::PlayFab::PlayFabErrorCode const OverLimit;

/// @brief Field PIIContentDetected value: I32(1390)
static ::PlayFab::PlayFabErrorCode const PIIContentDetected;

/// @brief Field PSNInaccessible value: I32(1152)
static ::PlayFab::PlayFabErrorCode const PSNInaccessible;

/// @brief Field PartialFailure value: I32(1121)
static ::PlayFab::PlayFabErrorCode const PartialFailure;

/// @brief Field PartyBadRequest value: I32(1434)
static ::PlayFab::PlayFabErrorCode const PartyBadRequest;

/// @brief Field PartyConflict value: I32(1438)
static ::PlayFab::PlayFabErrorCode const PartyConflict;

/// @brief Field PartyError value: I32(1431)
static ::PlayFab::PlayFabErrorCode const PartyError;

/// @brief Field PartyForbidden value: I32(1436)
static ::PlayFab::PlayFabErrorCode const PartyForbidden;

/// @brief Field PartyInternalServerError value: I32(1439)
static ::PlayFab::PlayFabErrorCode const PartyInternalServerError;

/// @brief Field PartyNoContent value: I32(1433)
static ::PlayFab::PlayFabErrorCode const PartyNoContent;

/// @brief Field PartyNotFound value: I32(1437)
static ::PlayFab::PlayFabErrorCode const PartyNotFound;

/// @brief Field PartyRequests value: I32(1432)
static ::PlayFab::PlayFabErrorCode const PartyRequests;

/// @brief Field PartyRequestsThrottledFromRateLimiter value: I32(1504)
static ::PlayFab::PlayFabErrorCode const PartyRequestsThrottledFromRateLimiter;

/// @brief Field PartyTooManyRequests value: I32(1441)
static ::PlayFab::PlayFabErrorCode const PartyTooManyRequests;

/// @brief Field PartyUnauthorized value: I32(1435)
static ::PlayFab::PlayFabErrorCode const PartyUnauthorized;

/// @brief Field PartyUnavailable value: I32(1440)
static ::PlayFab::PlayFabErrorCode const PartyUnavailable;

/// @brief Field PartyVersionNotFound value: I32(6001)
static ::PlayFab::PlayFabErrorCode const PartyVersionNotFound;

/// @brief Field PaymentPageNotConfigured value: I32(1355)
static ::PlayFab::PlayFabErrorCode const PaymentPageNotConfigured;

/// @brief Field PerEntityEventRateLimitExceeded value: I32(1392)
static ::PlayFab::PlayFabErrorCode const PerEntityEventRateLimitExceeded;

/// @brief Field PhotonApplicationNotAssociatedWithTitle value: I32(1141)
static ::PlayFab::PlayFabErrorCode const PhotonApplicationNotAssociatedWithTitle;

/// @brief Field PhotonApplicationNotFound value: I32(1140)
static ::PlayFab::PlayFabErrorCode const PhotonApplicationNotFound;

/// @brief Field PhotonNotEnabledForTitle value: I32(1139)
static ::PlayFab::PlayFabErrorCode const PhotonNotEnabledForTitle;

/// @brief Field PlayerNotInGame value: I32(1033)
static ::PlayFab::PlayFabErrorCode const PlayerNotInGame;

/// @brief Field PlayerSecretAlreadyConfigured value: I32(1294)
static ::PlayFab::PlayFabErrorCode const PlayerSecretAlreadyConfigured;

/// @brief Field PlayerSecretNotConfigured value: I32(1323)
static ::PlayFab::PlayFabErrorCode const PlayerSecretNotConfigured;

/// @brief Field PlayerTagCountLimitExceeded value: I32(1248)
static ::PlayFab::PlayFabErrorCode const PlayerTagCountLimitExceeded;

/// @brief Field PrizeTableHasMissingRanks value: I32(1281)
static ::PlayFab::PlayFabErrorCode const PrizeTableHasMissingRanks;

/// @brief Field PrizeTableHasNoRanks value: I32(1297)
static ::PlayFab::PlayFabErrorCode const PrizeTableHasNoRanks;

/// @brief Field PrizeTableHasOverlappingRanks value: I32(1280)
static ::PlayFab::PlayFabErrorCode const PrizeTableHasOverlappingRanks;

/// @brief Field PrizeTableRankStartsAtZero value: I32(1282)
static ::PlayFab::PlayFabErrorCode const PrizeTableRankStartsAtZero;

/// @brief Field ProfaneDisplayName value: I32(1234)
static ::PlayFab::PlayFabErrorCode const ProfaneDisplayName;

/// @brief Field ProfileDoesNotExist value: I32(1298)
static ::PlayFab::PlayFabErrorCode const ProfileDoesNotExist;

/// @brief Field PublisherNotSet value: I32(1122)
static ::PlayFab::PlayFabErrorCode const PublisherNotSet;

/// @brief Field PurchaseDoesNotExist value: I32(1080)
static ::PlayFab::PlayFabErrorCode const PurchaseDoesNotExist;

/// @brief Field PurchaseInitializationFailure value: I32(1064)
static ::PlayFab::PlayFabErrorCode const PurchaseInitializationFailure;

/// @brief Field PushNotEnabledForAccount value: I32(1094)
static ::PlayFab::PlayFabErrorCode const PushNotEnabledForAccount;

/// @brief Field PushNotificationTemplateAndroidPayloadMissingNotificationBody value: I32(1416)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateAndroidPayloadMissingNotificationBody;

/// @brief Field PushNotificationTemplateContainsInvalidAndroidPayload value: I32(1414)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateContainsInvalidAndroidPayload;

/// @brief Field PushNotificationTemplateContainsInvalidIosPayload value: I32(1413)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateContainsInvalidIosPayload;

/// @brief Field PushNotificationTemplateInvalidPayload value: I32(1408)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateInvalidPayload;

/// @brief Field PushNotificationTemplateInvalidSyntax value: I32(1419)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateInvalidSyntax;

/// @brief Field PushNotificationTemplateIosPayloadMissingNotificationBody value: I32(1415)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateIosPayloadMissingNotificationBody;

/// @brief Field PushNotificationTemplateMissingDefaultVersion value: I32(1418)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateMissingDefaultVersion;

/// @brief Field PushNotificationTemplateMissingName value: I32(1442)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateMissingName;

/// @brief Field PushNotificationTemplateMissingPlatformPayload value: I32(1411)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateMissingPlatformPayload;

/// @brief Field PushNotificationTemplateNoCustomPayloadForV1 value: I32(1420)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateNoCustomPayloadForV1;

/// @brief Field PushNotificationTemplateNotFound value: I32(1417)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplateNotFound;

/// @brief Field PushNotificationTemplatePayloadContainsInvalidJson value: I32(1412)
static ::PlayFab::PlayFabErrorCode const PushNotificationTemplatePayloadContainsInvalidJson;

/// @brief Field PushServiceError value: I32(1095)
static ::PlayFab::PlayFabErrorCode const PushServiceError;

/// @brief Field QueryRateLimitExceeded value: I32(1452)
static ::PlayFab::PlayFabErrorCode const QueryRateLimitExceeded;

/// @brief Field ReceiptAlreadyUsed value: I32(1022)
static ::PlayFab::PlayFabErrorCode const ReceiptAlreadyUsed;

/// @brief Field ReceiptCancelled value: I32(1023)
static ::PlayFab::PlayFabErrorCode const ReceiptCancelled;

/// @brief Field ReceiptContainsMultipleInAppItems value: I32(1097)
static ::PlayFab::PlayFabErrorCode const ReceiptContainsMultipleInAppItems;

/// @brief Field ReceiptDoesNotContainInAppItems value: I32(1096)
static ::PlayFab::PlayFabErrorCode const ReceiptDoesNotContainInAppItems;

/// @brief Field RegionAtCapacity value: I32(1056)
static ::PlayFab::PlayFabErrorCode const RegionAtCapacity;

/// @brief Field RegistrationIncomplete value: I32(1037)
static ::PlayFab::PlayFabErrorCode const RegistrationIncomplete;

/// @brief Field RegistrationSessionNotFound value: I32(1043)
static ::PlayFab::PlayFabErrorCode const RegistrationSessionNotFound;

/// @brief Field ReportNotAvailable value: I32(1112)
static ::PlayFab::PlayFabErrorCode const ReportNotAvailable;

/// @brief Field RequestAlreadyRunning value: I32(1249)
static ::PlayFab::PlayFabErrorCode const RequestAlreadyRunning;

/// @brief Field RequestMultiplayerServersThrottledFromRateLimiter value: I32(1507)
static ::PlayFab::PlayFabErrorCode const RequestMultiplayerServersThrottledFromRateLimiter;

/// @brief Field RequestViewConstraintParamsNotAllowed value: I32(1303)
static ::PlayFab::PlayFabErrorCode const RequestViewConstraintParamsNotAllowed;

/// @brief Field ReservedEventName value: I32(1072)
static ::PlayFab::PlayFabErrorCode const ReservedEventName;

/// @brief Field ReservedWordInBody value: I32(1069)
static ::PlayFab::PlayFabErrorCode const ReservedWordInBody;

/// @brief Field ResettableStatisticVersionRequired value: I32(1190)
static ::PlayFab::PlayFabErrorCode const ResettableStatisticVersionRequired;

/// @brief Field RestrictedEmailDomain value: I32(1288)
static ::PlayFab::PlayFabErrorCode const RestrictedEmailDomain;

/// @brief Field RevisionNotFound value: I32(1125)
static ::PlayFab::PlayFabErrorCode const RevisionNotFound;

/// @brief Field RoleDoesNotExist value: I32(1358)
static ::PlayFab::PlayFabErrorCode const RoleDoesNotExist;

/// @brief Field RoleIsGroupAdmin value: I32(1366)
static ::PlayFab::PlayFabErrorCode const RoleIsGroupAdmin;

/// @brief Field RoleIsGroupDefaultMember value: I32(1365)
static ::PlayFab::PlayFabErrorCode const RoleIsGroupDefaultMember;

/// @brief Field RoleNameNotAvailable value: I32(1367)
static ::PlayFab::PlayFabErrorCode const RoleNameNotAvailable;

/// @brief Field ScheduledTaskCreateConflict value: I32(1255)
static ::PlayFab::PlayFabErrorCode const ScheduledTaskCreateConflict;

/// @brief Field ScheduledTaskNameConflict value: I32(1254)
static ::PlayFab::PlayFabErrorCode const ScheduledTaskNameConflict;

/// @brief Field SecretKeyNotFound value: I32(1293)
static ::PlayFab::PlayFabErrorCode const SecretKeyNotFound;

/// @brief Field SegmentNotFound value: I32(1220)
static ::PlayFab::PlayFabErrorCode const SegmentNotFound;

/// @brief Field ServerFailedToStart value: I32(1057)
static ::PlayFab::PlayFabErrorCode const ServerFailedToStart;

/// @brief Field ServiceLimitLevelInTransition value: I32(1225)
static ::PlayFab::PlayFabErrorCode const ServiceLimitLevelInTransition;

/// @brief Field ServiceUnavailable value: I32(1123)
static ::PlayFab::PlayFabErrorCode const ServiceUnavailable;

/// @brief Field SessionLogNotFound value: I32(1244)
static ::PlayFab::PlayFabErrorCode const SessionLogNotFound;

/// @brief Field SignedRequestNotAllowed value: I32(1302)
static ::PlayFab::PlayFabErrorCode const SignedRequestNotAllowed;

/// @brief Field SmtpAddonNotEnabled value: I32(1341)
static ::PlayFab::PlayFabErrorCode const SmtpAddonNotEnabled;

/// @brief Field SmtpServerAuthenticationError value: I32(1311)
static ::PlayFab::PlayFabErrorCode const SmtpServerAuthenticationError;

/// @brief Field SmtpServerCommunicationError value: I32(1314)
static ::PlayFab::PlayFabErrorCode const SmtpServerCommunicationError;

/// @brief Field SmtpServerGeneralFailure value: I32(1315)
static ::PlayFab::PlayFabErrorCode const SmtpServerGeneralFailure;

/// @brief Field SmtpServerInsufficientStorage value: I32(1313)
static ::PlayFab::PlayFabErrorCode const SmtpServerInsufficientStorage;

/// @brief Field SmtpServerLimitExceeded value: I32(1312)
static ::PlayFab::PlayFabErrorCode const SmtpServerLimitExceeded;

/// @brief Field SnapshotNotFound value: I32(11000)
static ::PlayFab::PlayFabErrorCode const SnapshotNotFound;

/// @brief Field StatisticAlreadyHasPrizeTable value: I32(1279)
static ::PlayFab::PlayFabErrorCode const StatisticAlreadyHasPrizeTable;

/// @brief Field StatisticChildNameInvalid value: I32(1402)
static ::PlayFab::PlayFabErrorCode const StatisticChildNameInvalid;

/// @brief Field StatisticCountLimitExceeded value: I32(1203)
static ::PlayFab::PlayFabErrorCode const StatisticCountLimitExceeded;

/// @brief Field StatisticNameConflict value: I32(1196)
static ::PlayFab::PlayFabErrorCode const StatisticNameConflict;

/// @brief Field StatisticNotFound value: I32(1195)
static ::PlayFab::PlayFabErrorCode const StatisticNotFound;

/// @brief Field StatisticUpdateInProgress value: I32(1276)
static ::PlayFab::PlayFabErrorCode const StatisticUpdateInProgress;

/// @brief Field StatisticValueAggregationOverflow value: I32(1308)
static ::PlayFab::PlayFabErrorCode const StatisticValueAggregationOverflow;

/// @brief Field StatisticVersionAlreadyIncrementedForScheduledInterval value: I32(1202)
static ::PlayFab::PlayFabErrorCode const StatisticVersionAlreadyIncrementedForScheduledInterval;

/// @brief Field StatisticVersionClosedForWrites value: I32(1197)
static ::PlayFab::PlayFabErrorCode const StatisticVersionClosedForWrites;

/// @brief Field StatisticVersionIncrementRateExceeded value: I32(1204)
static ::PlayFab::PlayFabErrorCode const StatisticVersionIncrementRateExceeded;

/// @brief Field StatisticVersionInvalid value: I32(1198)
static ::PlayFab::PlayFabErrorCode const StatisticVersionInvalid;

/// @brief Field SteamApplicationNotOwned value: I32(1040)
static ::PlayFab::PlayFabErrorCode const SteamApplicationNotOwned;

/// @brief Field SteamNotEnabledForTitle value: I32(1258)
static ::PlayFab::PlayFabErrorCode const SteamNotEnabledForTitle;

/// @brief Field StoreNotFound value: I32(1221)
static ::PlayFab::PlayFabErrorCode const StoreNotFound;

/// @brief Field StreamAlreadyExists value: I32(1075)
static ::PlayFab::PlayFabErrorCode const StreamAlreadyExists;

/// @brief Field StreamNotFound value: I32(1077)
static ::PlayFab::PlayFabErrorCode const StreamNotFound;

/// @brief Field StudioActivated value: I32(1462)
static ::PlayFab::PlayFabErrorCode const StudioActivated;

/// @brief Field StudioCreationInProgress value: I32(1457)
static ::PlayFab::PlayFabErrorCode const StudioCreationInProgress;

/// @brief Field StudioCreationRateLimited value: I32(1456)
static ::PlayFab::PlayFabErrorCode const StudioCreationRateLimited;

/// @brief Field StudioDeactivated value: I32(1461)
static ::PlayFab::PlayFabErrorCode const StudioDeactivated;

/// @brief Field StudioDeleted value: I32(1460)
static ::PlayFab::PlayFabErrorCode const StudioDeleted;

/// @brief Field StudioNotFound value: I32(1459)
static ::PlayFab::PlayFabErrorCode const StudioNotFound;

/// @brief Field SubscriptionAlreadyTaken value: I32(1340)
static ::PlayFab::PlayFabErrorCode const SubscriptionAlreadyTaken;

/// @brief Field Success value: I32(0)
static ::PlayFab::PlayFabErrorCode const Success;

/// @brief Field TaskInstanceNotFound value: I32(1262)
static ::PlayFab::PlayFabErrorCode const TaskInstanceNotFound;

/// @brief Field TaskNotFound value: I32(1261)
static ::PlayFab::PlayFabErrorCode const TaskNotFound;

/// @brief Field TelemetryIngestionKeyNotFound value: I32(1400)
static ::PlayFab::PlayFabErrorCode const TelemetryIngestionKeyNotFound;

/// @brief Field TelemetryIngestionKeyPending value: I32(1399)
static ::PlayFab::PlayFabErrorCode const TelemetryIngestionKeyPending;

/// @brief Field TemplateVersionNotDefined value: I32(1345)
static ::PlayFab::PlayFabErrorCode const TemplateVersionNotDefined;

/// @brief Field TemplateVersionTooOld value: I32(1353)
static ::PlayFab::PlayFabErrorCode const TemplateVersionTooOld;

/// @brief Field TitleActivated value: I32(1469)
static ::PlayFab::PlayFabErrorCode const TitleActivated;

/// @brief Field TitleActivationInProgress value: I32(1467)
static ::PlayFab::PlayFabErrorCode const TitleActivationInProgress;

/// @brief Field TitleActivationRateLimited value: I32(1466)
static ::PlayFab::PlayFabErrorCode const TitleActivationRateLimited;

/// @brief Field TitleConfigNotFound value: I32(3001)
static ::PlayFab::PlayFabErrorCode const TitleConfigNotFound;

/// @brief Field TitleConfigSerializationError value: I32(3003)
static ::PlayFab::PlayFabErrorCode const TitleConfigSerializationError;

/// @brief Field TitleConfigUpdateConflict value: I32(3002)
static ::PlayFab::PlayFabErrorCode const TitleConfigUpdateConflict;

/// @brief Field TitleContainsUserAccounts value: I32(1348)
static ::PlayFab::PlayFabErrorCode const TitleContainsUserAccounts;

/// @brief Field TitleCreationInProgress value: I32(1464)
static ::PlayFab::PlayFabErrorCode const TitleCreationInProgress;

/// @brief Field TitleCreationRateLimited value: I32(1463)
static ::PlayFab::PlayFabErrorCode const TitleCreationRateLimited;

/// @brief Field TitleDataInstanceNotFound value: I32(1508)
static ::PlayFab::PlayFabErrorCode const TitleDataInstanceNotFound;

/// @brief Field TitleDeactivated value: I32(1468)
static ::PlayFab::PlayFabErrorCode const TitleDeactivated;

/// @brief Field TitleDefaultLanguageNotSet value: I32(1393)
static ::PlayFab::PlayFabErrorCode const TitleDefaultLanguageNotSet;

/// @brief Field TitleDeleted value: I32(1347)
static ::PlayFab::PlayFabErrorCode const TitleDeleted;

/// @brief Field TitleDeletionPlayerCleanupFailure value: I32(1349)
static ::PlayFab::PlayFabErrorCode const TitleDeletionPlayerCleanupFailure;

/// @brief Field TitleNameConflicts value: I32(1029)
static ::PlayFab::PlayFabErrorCode const TitleNameConflicts;

/// @brief Field TitleNewsDuplicateLanguage value: I32(1424)
static ::PlayFab::PlayFabErrorCode const TitleNewsDuplicateLanguage;

/// @brief Field TitleNewsInvalidLanguage value: I32(1426)
static ::PlayFab::PlayFabErrorCode const TitleNewsInvalidLanguage;

/// @brief Field TitleNewsItemCountLimitExceeded value: I32(1231)
static ::PlayFab::PlayFabErrorCode const TitleNewsItemCountLimitExceeded;

/// @brief Field TitleNewsMissingDefaultLanguage value: I32(1422)
static ::PlayFab::PlayFabErrorCode const TitleNewsMissingDefaultLanguage;

/// @brief Field TitleNewsMissingTitleOrBody value: I32(1425)
static ::PlayFab::PlayFabErrorCode const TitleNewsMissingTitleOrBody;

/// @brief Field TitleNewsNotFound value: I32(1423)
static ::PlayFab::PlayFabErrorCode const TitleNewsNotFound;

/// @brief Field TitleNotActivated value: I32(1042)
static ::PlayFab::PlayFabErrorCode const TitleNotActivated;

/// @brief Field TitleNotEnabledForParty value: I32(6000)
static ::PlayFab::PlayFabErrorCode const TitleNotEnabledForParty;

/// @brief Field TitleNotOnUpdatedPricingPlan value: I32(9000)
static ::PlayFab::PlayFabErrorCode const TitleNotOnUpdatedPricingPlan;

/// @brief Field TitleNotQualifiedForLimit value: I32(1223)
static ::PlayFab::PlayFabErrorCode const TitleNotQualifiedForLimit;

/// @brief Field TooManyKeys value: I32(1147)
static ::PlayFab::PlayFabErrorCode const TooManyKeys;

/// @brief Field TotalDataSizeExceeded value: I32(1186)
static ::PlayFab::PlayFabErrorCode const TotalDataSizeExceeded;

/// @brief Field TradeAcceptedCatalogItemInvalid value: I32(1170)
static ::PlayFab::PlayFabErrorCode const TradeAcceptedCatalogItemInvalid;

/// @brief Field TradeAcceptedCatalogItemIsNotTradable value: I32(1182)
static ::PlayFab::PlayFabErrorCode const TradeAcceptedCatalogItemIsNotTradable;

/// @brief Field TradeAcceptedItemIsBundle value: I32(1167)
static ::PlayFab::PlayFabErrorCode const TradeAcceptedItemIsBundle;

/// @brief Field TradeAcceptedItemIsStackable value: I32(1168)
static ::PlayFab::PlayFabErrorCode const TradeAcceptedItemIsStackable;

/// @brief Field TradeAcceptedItemsMismatch value: I32(1175)
static ::PlayFab::PlayFabErrorCode const TradeAcceptedItemsMismatch;

/// @brief Field TradeAcceptingUserNotAllowed value: I32(1156)
static ::PlayFab::PlayFabErrorCode const TradeAcceptingUserNotAllowed;

/// @brief Field TradeAllowedUsersInvalid value: I32(1171)
static ::PlayFab::PlayFabErrorCode const TradeAllowedUsersInvalid;

/// @brief Field TradeAlreadyFilled value: I32(1163)
static ::PlayFab::PlayFabErrorCode const TradeAlreadyFilled;

/// @brief Field TradeCancelled value: I32(1162)
static ::PlayFab::PlayFabErrorCode const TradeCancelled;

/// @brief Field TradeDoesNotExist value: I32(1161)
static ::PlayFab::PlayFabErrorCode const TradeDoesNotExist;

/// @brief Field TradeInventoryItemDoesNotExist value: I32(1172)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemDoesNotExist;

/// @brief Field TradeInventoryItemExpired value: I32(1165)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemExpired;

/// @brief Field TradeInventoryItemInvalidStatus value: I32(1169)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemInvalidStatus;

/// @brief Field TradeInventoryItemIsAssignedToCharacter value: I32(1157)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemIsAssignedToCharacter;

/// @brief Field TradeInventoryItemIsBundle value: I32(1158)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemIsBundle;

/// @brief Field TradeInventoryItemIsConsumed value: I32(1173)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemIsConsumed;

/// @brief Field TradeInventoryItemIsNotTradable value: I32(1181)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemIsNotTradable;

/// @brief Field TradeInventoryItemIsStackable value: I32(1174)
static ::PlayFab::PlayFabErrorCode const TradeInventoryItemIsStackable;

/// @brief Field TradeMissingOfferedAndAcceptedItems value: I32(1166)
static ::PlayFab::PlayFabErrorCode const TradeMissingOfferedAndAcceptedItems;

/// @brief Field TradeStatusNotValidForAccepting value: I32(1160)
static ::PlayFab::PlayFabErrorCode const TradeStatusNotValidForAccepting;

/// @brief Field TradeStatusNotValidForCancelling value: I32(1159)
static ::PlayFab::PlayFabErrorCode const TradeStatusNotValidForCancelling;

/// @brief Field TradeWaitForStatusTimeout value: I32(1164)
static ::PlayFab::PlayFabErrorCode const TradeWaitForStatusTimeout;

/// @brief Field TwitchResponseError value: I32(1233)
static ::PlayFab::PlayFabErrorCode const TwitchResponseError;

/// @brief Field TwoFactorAuthenticationTokenRequired value: I32(1246)
static ::PlayFab::PlayFabErrorCode const TwoFactorAuthenticationTokenRequired;

/// @brief Field UnableToConnectToDatabase value: I32(1101)
static ::PlayFab::PlayFabErrorCode const UnableToConnectToDatabase;

/// @brief Field Unknown value: I32(1)
static ::PlayFab::PlayFabErrorCode const Unknown;

/// @brief Field UnknownError value: I32(1039)
static ::PlayFab::PlayFabErrorCode const UnknownError;

/// @brief Field UnkownError value: I32(500)
static ::PlayFab::PlayFabErrorCode const UnkownError;

/// @brief Field UpdateInventoryRateLimitExceeded value: I32(1455)
static ::PlayFab::PlayFabErrorCode const UpdateInventoryRateLimitExceeded;

/// @brief Field UserAlreadyAdded value: I32(1235)
static ::PlayFab::PlayFabErrorCode const UserAlreadyAdded;

/// @brief Field UserIsNotPartOfDeveloper value: I32(1027)
static ::PlayFab::PlayFabErrorCode const UserIsNotPartOfDeveloper;

/// @brief Field UserNotFriend value: I32(1272)
static ::PlayFab::PlayFabErrorCode const UserNotFriend;

/// @brief Field UserisNotValid value: I32(1030)
static ::PlayFab::PlayFabErrorCode const UserisNotValid;

/// @brief Field UsernameNotAvailable value: I32(1009)
static ::PlayFab::PlayFabErrorCode const UsernameNotAvailable;

/// @brief Field UsersAlreadyFriends value: I32(1183)
static ::PlayFab::PlayFabErrorCode const UsersAlreadyFriends;

/// @brief Field ValueAlreadyExists value: I32(1031)
static ::PlayFab::PlayFabErrorCode const ValueAlreadyExists;

/// @brief Field VariableNotDefined value: I32(1344)
static ::PlayFab::PlayFabErrorCode const VariableNotDefined;

/// @brief Field VersionNotFound value: I32(1124)
static ::PlayFab::PlayFabErrorCode const VersionNotFound;

/// @brief Field VirtualCurrencyBetaCreateError value: I32(1475)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaCreateError;

/// @brief Field VirtualCurrencyBetaDeleteError value: I32(1478)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaDeleteError;

/// @brief Field VirtualCurrencyBetaGetError value: I32(1474)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaGetError;

/// @brief Field VirtualCurrencyBetaInitialDepositSaveError value: I32(1476)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaInitialDepositSaveError;

/// @brief Field VirtualCurrencyBetaRestoreError value: I32(1479)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaRestoreError;

/// @brief Field VirtualCurrencyBetaSaveConflict value: I32(1480)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaSaveConflict;

/// @brief Field VirtualCurrencyBetaSaveError value: I32(1477)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaSaveError;

/// @brief Field VirtualCurrencyBetaUpdateError value: I32(1481)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyBetaUpdateError;

/// @brief Field VirtualCurrencyCannotBeDeleted value: I32(1237)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyCannotBeDeleted;

/// @brief Field VirtualCurrencyCannotBeSetToOlderVersion value: I32(1404)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyCannotBeSetToOlderVersion;

/// @brief Field VirtualCurrencyCodeExists value: I32(1230)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyCodeExists;

/// @brief Field VirtualCurrencyCountLimitExceeded value: I32(1229)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyCountLimitExceeded;

/// @brief Field VirtualCurrencyMustBeWithinIntegerRange value: I32(1405)
static ::PlayFab::PlayFabErrorCode const VirtualCurrencyMustBeWithinIntegerRange;

/// @brief Field WriteAttemptedDuringExport value: I32(1444)
static ::PlayFab::PlayFabErrorCode const WriteAttemptedDuringExport;

/// @brief Field WrongPrice value: I32(1053)
static ::PlayFab::PlayFabErrorCode const WrongPrice;

/// @brief Field WrongSteamAccount value: I32(1041)
static ::PlayFab::PlayFabErrorCode const WrongSteamAccount;

/// @brief Field WrongVirtualCurrency value: I32(1052)
static ::PlayFab::PlayFabErrorCode const WrongVirtualCurrency;

/// @brief Field XboxBPCertificateFailure value: I32(1305)
static ::PlayFab::PlayFabErrorCode const XboxBPCertificateFailure;

/// @brief Field XboxInaccessible value: I32(1339)
static ::PlayFab::PlayFabErrorCode const XboxInaccessible;

/// @brief Field XboxRejectedXSTSExchangeRequest value: I32(1343)
static ::PlayFab::PlayFabErrorCode const XboxRejectedXSTSExchangeRequest;

/// @brief Field XboxServiceTooManyRequests value: I32(1505)
static ::PlayFab::PlayFabErrorCode const XboxServiceTooManyRequests;

/// @brief Field XboxXASSExchangeFailure value: I32(1306)
static ::PlayFab::PlayFabErrorCode const XboxXASSExchangeFailure;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabErrorCode) == 0x4, "Size mismatch!");

} // namespace end def PlayFab
