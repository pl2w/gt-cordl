#pragma once
// IWYU pragma private; include "PlayFab/PlayFabMultiplayerAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabMultiplayerAPI)
namespace PlayFab::MultiplayerModels {
class BuildAliasDetailsResponse;
}
namespace PlayFab::MultiplayerModels {
class CancelAllMatchmakingTicketsForPlayerRequest;
}
namespace PlayFab::MultiplayerModels {
class CancelAllMatchmakingTicketsForPlayerResult;
}
namespace PlayFab::MultiplayerModels {
class CancelAllServerBackfillTicketsForPlayerRequest;
}
namespace PlayFab::MultiplayerModels {
class CancelAllServerBackfillTicketsForPlayerResult;
}
namespace PlayFab::MultiplayerModels {
class CancelMatchmakingTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class CancelMatchmakingTicketResult;
}
namespace PlayFab::MultiplayerModels {
class CancelServerBackfillTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class CancelServerBackfillTicketResult;
}
namespace PlayFab::MultiplayerModels {
class CreateBuildAliasRequest;
}
namespace PlayFab::MultiplayerModels {
class CreateBuildWithCustomContainerRequest;
}
namespace PlayFab::MultiplayerModels {
class CreateBuildWithCustomContainerResponse;
}
namespace PlayFab::MultiplayerModels {
class CreateBuildWithManagedContainerRequest;
}
namespace PlayFab::MultiplayerModels {
class CreateBuildWithManagedContainerResponse;
}
namespace PlayFab::MultiplayerModels {
class CreateMatchmakingTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class CreateMatchmakingTicketResult;
}
namespace PlayFab::MultiplayerModels {
class CreateRemoteUserRequest;
}
namespace PlayFab::MultiplayerModels {
class CreateRemoteUserResponse;
}
namespace PlayFab::MultiplayerModels {
class CreateServerBackfillTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class CreateServerBackfillTicketResult;
}
namespace PlayFab::MultiplayerModels {
class CreateServerMatchmakingTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteAssetRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteBuildAliasRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteBuildRegionRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteBuildRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteCertificateRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteContainerImageRequest;
}
namespace PlayFab::MultiplayerModels {
class DeleteRemoteUserRequest;
}
namespace PlayFab::MultiplayerModels {
class EmptyResponse;
}
namespace PlayFab::MultiplayerModels {
class EnableMultiplayerServersForTitleRequest;
}
namespace PlayFab::MultiplayerModels {
class EnableMultiplayerServersForTitleResponse;
}
namespace PlayFab::MultiplayerModels {
class GetAssetUploadUrlRequest;
}
namespace PlayFab::MultiplayerModels {
class GetAssetUploadUrlResponse;
}
namespace PlayFab::MultiplayerModels {
class GetBuildAliasRequest;
}
namespace PlayFab::MultiplayerModels {
class GetBuildRequest;
}
namespace PlayFab::MultiplayerModels {
class GetBuildResponse;
}
namespace PlayFab::MultiplayerModels {
class GetContainerRegistryCredentialsRequest;
}
namespace PlayFab::MultiplayerModels {
class GetContainerRegistryCredentialsResponse;
}
namespace PlayFab::MultiplayerModels {
class GetMatchRequest;
}
namespace PlayFab::MultiplayerModels {
class GetMatchResult;
}
namespace PlayFab::MultiplayerModels {
class GetMatchmakingQueueRequest;
}
namespace PlayFab::MultiplayerModels {
class GetMatchmakingQueueResult;
}
namespace PlayFab::MultiplayerModels {
class GetMatchmakingTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class GetMatchmakingTicketResult;
}
namespace PlayFab::MultiplayerModels {
class GetMultiplayerServerDetailsRequest;
}
namespace PlayFab::MultiplayerModels {
class GetMultiplayerServerDetailsResponse;
}
namespace PlayFab::MultiplayerModels {
class GetMultiplayerServerLogsRequest;
}
namespace PlayFab::MultiplayerModels {
class GetMultiplayerServerLogsResponse;
}
namespace PlayFab::MultiplayerModels {
class GetMultiplayerSessionLogsBySessionIdRequest;
}
namespace PlayFab::MultiplayerModels {
class GetQueueStatisticsRequest;
}
namespace PlayFab::MultiplayerModels {
class GetQueueStatisticsResult;
}
namespace PlayFab::MultiplayerModels {
class GetRemoteLoginEndpointRequest;
}
namespace PlayFab::MultiplayerModels {
class GetRemoteLoginEndpointResponse;
}
namespace PlayFab::MultiplayerModels {
class GetServerBackfillTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class GetServerBackfillTicketResult;
}
namespace PlayFab::MultiplayerModels {
class GetTitleEnabledForMultiplayerServersStatusRequest;
}
namespace PlayFab::MultiplayerModels {
class GetTitleEnabledForMultiplayerServersStatusResponse;
}
namespace PlayFab::MultiplayerModels {
class GetTitleMultiplayerServersQuotasRequest;
}
namespace PlayFab::MultiplayerModels {
class GetTitleMultiplayerServersQuotasResponse;
}
namespace PlayFab::MultiplayerModels {
class JoinMatchmakingTicketRequest;
}
namespace PlayFab::MultiplayerModels {
class JoinMatchmakingTicketResult;
}
namespace PlayFab::MultiplayerModels {
class ListAssetSummariesRequest;
}
namespace PlayFab::MultiplayerModels {
class ListAssetSummariesResponse;
}
namespace PlayFab::MultiplayerModels {
class ListBuildAliasesForTitleResponse;
}
namespace PlayFab::MultiplayerModels {
class ListBuildSummariesRequest;
}
namespace PlayFab::MultiplayerModels {
class ListBuildSummariesResponse;
}
namespace PlayFab::MultiplayerModels {
class ListCertificateSummariesRequest;
}
namespace PlayFab::MultiplayerModels {
class ListCertificateSummariesResponse;
}
namespace PlayFab::MultiplayerModels {
class ListContainerImageTagsRequest;
}
namespace PlayFab::MultiplayerModels {
class ListContainerImageTagsResponse;
}
namespace PlayFab::MultiplayerModels {
class ListContainerImagesRequest;
}
namespace PlayFab::MultiplayerModels {
class ListContainerImagesResponse;
}
namespace PlayFab::MultiplayerModels {
class ListMatchmakingQueuesRequest;
}
namespace PlayFab::MultiplayerModels {
class ListMatchmakingQueuesResult;
}
namespace PlayFab::MultiplayerModels {
class ListMatchmakingTicketsForPlayerRequest;
}
namespace PlayFab::MultiplayerModels {
class ListMatchmakingTicketsForPlayerResult;
}
namespace PlayFab::MultiplayerModels {
class ListMultiplayerServersRequest;
}
namespace PlayFab::MultiplayerModels {
class ListMultiplayerServersResponse;
}
namespace PlayFab::MultiplayerModels {
class ListPartyQosServersRequest;
}
namespace PlayFab::MultiplayerModels {
class ListPartyQosServersResponse;
}
namespace PlayFab::MultiplayerModels {
class ListQosServersForTitleRequest;
}
namespace PlayFab::MultiplayerModels {
class ListQosServersForTitleResponse;
}
namespace PlayFab::MultiplayerModels {
class ListQosServersRequest;
}
namespace PlayFab::MultiplayerModels {
class ListQosServersResponse;
}
namespace PlayFab::MultiplayerModels {
class ListServerBackfillTicketsForPlayerRequest;
}
namespace PlayFab::MultiplayerModels {
class ListServerBackfillTicketsForPlayerResult;
}
namespace PlayFab::MultiplayerModels {
class ListVirtualMachineSummariesRequest;
}
namespace PlayFab::MultiplayerModels {
class ListVirtualMachineSummariesResponse;
}
namespace PlayFab::MultiplayerModels {
class MultiplayerEmptyRequest;
}
namespace PlayFab::MultiplayerModels {
class RemoveMatchmakingQueueRequest;
}
namespace PlayFab::MultiplayerModels {
class RemoveMatchmakingQueueResult;
}
namespace PlayFab::MultiplayerModels {
class RequestMultiplayerServerRequest;
}
namespace PlayFab::MultiplayerModels {
class RequestMultiplayerServerResponse;
}
namespace PlayFab::MultiplayerModels {
class RolloverContainerRegistryCredentialsRequest;
}
namespace PlayFab::MultiplayerModels {
class RolloverContainerRegistryCredentialsResponse;
}
namespace PlayFab::MultiplayerModels {
class SetMatchmakingQueueRequest;
}
namespace PlayFab::MultiplayerModels {
class SetMatchmakingQueueResult;
}
namespace PlayFab::MultiplayerModels {
class ShutdownMultiplayerServerRequest;
}
namespace PlayFab::MultiplayerModels {
class UntagContainerImageRequest;
}
namespace PlayFab::MultiplayerModels {
class UpdateBuildAliasRequest;
}
namespace PlayFab::MultiplayerModels {
class UpdateBuildRegionRequest;
}
namespace PlayFab::MultiplayerModels {
class UpdateBuildRegionsRequest;
}
namespace PlayFab::MultiplayerModels {
class UploadCertificateRequest;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class PlayFabMultiplayerAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabMultiplayerAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabMultiplayerAPI*, "PlayFab", "PlayFabMultiplayerAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabMultiplayerAPI
class CORDL_TYPE PlayFabMultiplayerAPI : public ::System::Object {
public:
// Declarations
/// @brief Method CancelAllMatchmakingTicketsForPlayer, addr 0xa7ce804, size 0x194, virtual false, abstract: false, final false
static inline void CancelAllMatchmakingTicketsForPlayer(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CancelAllServerBackfillTicketsForPlayer, addr 0xa7ce998, size 0x194, virtual false, abstract: false, final false
static inline void CancelAllServerBackfillTicketsForPlayer(::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CancelMatchmakingTicket, addr 0xa7ceb2c, size 0x194, virtual false, abstract: false, final false
static inline void CancelMatchmakingTicket(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CancelServerBackfillTicket, addr 0xa7cecc0, size 0x194, virtual false, abstract: false, final false
static inline void CancelServerBackfillTicket(::PlayFab::MultiplayerModels::CancelServerBackfillTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateBuildAlias, addr 0xa7cee54, size 0x194, virtual false, abstract: false, final false
static inline void CreateBuildAlias(::PlayFab::MultiplayerModels::CreateBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateBuildWithCustomContainer, addr 0xa7cefe8, size 0x194, virtual false, abstract: false, final false
static inline void CreateBuildWithCustomContainer(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateBuildWithManagedContainer, addr 0xa7cf17c, size 0x194, virtual false, abstract: false, final false
static inline void CreateBuildWithManagedContainer(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateMatchmakingTicket, addr 0xa7cf310, size 0x194, virtual false, abstract: false, final false
static inline void CreateMatchmakingTicket(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateRemoteUser, addr 0xa7cf4a4, size 0x194, virtual false, abstract: false, final false
static inline void CreateRemoteUser(::PlayFab::MultiplayerModels::CreateRemoteUserRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateRemoteUserResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateServerBackfillTicket, addr 0xa7cf638, size 0x194, virtual false, abstract: false, final false
static inline void CreateServerBackfillTicket(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateServerBackfillTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateServerMatchmakingTicket, addr 0xa7cf7cc, size 0x194, virtual false, abstract: false, final false
static inline void CreateServerMatchmakingTicket(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteAsset, addr 0xa7cf960, size 0x194, virtual false, abstract: false, final false
static inline void DeleteAsset(::PlayFab::MultiplayerModels::DeleteAssetRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteBuild, addr 0xa7cfaf4, size 0x194, virtual false, abstract: false, final false
static inline void DeleteBuild(::PlayFab::MultiplayerModels::DeleteBuildRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteBuildAlias, addr 0xa7cfc88, size 0x194, virtual false, abstract: false, final false
static inline void DeleteBuildAlias(::PlayFab::MultiplayerModels::DeleteBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteBuildRegion, addr 0xa7cfe1c, size 0x194, virtual false, abstract: false, final false
static inline void DeleteBuildRegion(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteCertificate, addr 0xa7cffb0, size 0x194, virtual false, abstract: false, final false
static inline void DeleteCertificate(::PlayFab::MultiplayerModels::DeleteCertificateRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteContainerImageRepository, addr 0xa7d0144, size 0x194, virtual false, abstract: false, final false
static inline void DeleteContainerImageRepository(::PlayFab::MultiplayerModels::DeleteContainerImageRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteRemoteUser, addr 0xa7d02d8, size 0x194, virtual false, abstract: false, final false
static inline void DeleteRemoteUser(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method EnableMultiplayerServersForTitle, addr 0xa7d046c, size 0x194, virtual false, abstract: false, final false
static inline void EnableMultiplayerServersForTitle(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7ce7a4, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetAssetUploadUrl, addr 0xa7d0600, size 0x194, virtual false, abstract: false, final false
static inline void GetAssetUploadUrl(::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetBuild, addr 0xa7d0794, size 0x194, virtual false, abstract: false, final false
static inline void GetBuild(::PlayFab::MultiplayerModels::GetBuildRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetBuildResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetBuildAlias, addr 0xa7d0928, size 0x194, virtual false, abstract: false, final false
static inline void GetBuildAlias(::PlayFab::MultiplayerModels::GetBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetContainerRegistryCredentials, addr 0xa7d0abc, size 0x194, virtual false, abstract: false, final false
static inline void GetContainerRegistryCredentials(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMatch, addr 0xa7d0c50, size 0x194, virtual false, abstract: false, final false
static inline void GetMatch(::PlayFab::MultiplayerModels::GetMatchRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMatchResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMatchmakingQueue, addr 0xa7d0de4, size 0x194, virtual false, abstract: false, final false
static inline void GetMatchmakingQueue(::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMatchmakingTicket, addr 0xa7d0f78, size 0x194, virtual false, abstract: false, final false
static inline void GetMatchmakingTicket(::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMultiplayerServerDetails, addr 0xa7d110c, size 0x194, virtual false, abstract: false, final false
static inline void GetMultiplayerServerDetails(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMultiplayerServerLogs, addr 0xa7d12a0, size 0x194, virtual false, abstract: false, final false
static inline void GetMultiplayerServerLogs(::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMultiplayerSessionLogsBySessionId, addr 0xa7d1434, size 0x194, virtual false, abstract: false, final false
static inline void GetMultiplayerSessionLogsBySessionId(::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetQueueStatistics, addr 0xa7d15c8, size 0x194, virtual false, abstract: false, final false
static inline void GetQueueStatistics(::PlayFab::MultiplayerModels::GetQueueStatisticsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetQueueStatisticsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetRemoteLoginEndpoint, addr 0xa7d175c, size 0x194, virtual false, abstract: false, final false
static inline void GetRemoteLoginEndpoint(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetServerBackfillTicket, addr 0xa7d18f0, size 0x194, virtual false, abstract: false, final false
static inline void GetServerBackfillTicket(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetServerBackfillTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTitleEnabledForMultiplayerServersStatus, addr 0xa7d1a84, size 0x194, virtual false, abstract: false, final false
static inline void GetTitleEnabledForMultiplayerServersStatus(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTitleMultiplayerServersQuotas, addr 0xa7d1c18, size 0x194, virtual false, abstract: false, final false
static inline void GetTitleMultiplayerServersQuotas(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7ce730, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method JoinMatchmakingTicket, addr 0xa7d1dac, size 0x194, virtual false, abstract: false, final false
static inline void JoinMatchmakingTicket(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListArchivedMultiplayerServers, addr 0xa7d1f40, size 0x194, virtual false, abstract: false, final false
static inline void ListArchivedMultiplayerServers(::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListAssetSummaries, addr 0xa7d20d4, size 0x194, virtual false, abstract: false, final false
static inline void ListAssetSummaries(::PlayFab::MultiplayerModels::ListAssetSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListAssetSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListBuildAliases, addr 0xa7d2268, size 0x194, virtual false, abstract: false, final false
static inline void ListBuildAliases(::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListBuildSummaries, addr 0xa7d23fc, size 0x194, virtual false, abstract: false, final false
static inline void ListBuildSummaries(::PlayFab::MultiplayerModels::ListBuildSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListBuildSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListCertificateSummaries, addr 0xa7d2590, size 0x194, virtual false, abstract: false, final false
static inline void ListCertificateSummaries(::PlayFab::MultiplayerModels::ListCertificateSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListCertificateSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListContainerImageTags, addr 0xa7d28b8, size 0x194, virtual false, abstract: false, final false
static inline void ListContainerImageTags(::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListContainerImageTagsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListContainerImages, addr 0xa7d2724, size 0x194, virtual false, abstract: false, final false
static inline void ListContainerImages(::PlayFab::MultiplayerModels::ListContainerImagesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListContainerImagesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMatchmakingQueues, addr 0xa7d2a4c, size 0x194, virtual false, abstract: false, final false
static inline void ListMatchmakingQueues(::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMatchmakingTicketsForPlayer, addr 0xa7d2be0, size 0x194, virtual false, abstract: false, final false
static inline void ListMatchmakingTicketsForPlayer(::PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMultiplayerServers, addr 0xa7d2d74, size 0x194, virtual false, abstract: false, final false
static inline void ListMultiplayerServers(::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListPartyQosServers, addr 0xa7d2f08, size 0x138, virtual false, abstract: false, final false
static inline void ListPartyQosServers(::PlayFab::MultiplayerModels::ListPartyQosServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListPartyQosServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// [Obsolete("Use \'ListQosServersForTitle\' instead", false)]
/// @brief Method ListQosServers, addr 0xa7d3040, size 0x138, virtual false, abstract: false, final false
static inline void ListQosServers(::PlayFab::MultiplayerModels::ListQosServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListQosServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListQosServersForTitle, addr 0xa7d3178, size 0x194, virtual false, abstract: false, final false
static inline void ListQosServersForTitle(::PlayFab::MultiplayerModels::ListQosServersForTitleRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListQosServersForTitleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListServerBackfillTicketsForPlayer, addr 0xa7d330c, size 0x194, virtual false, abstract: false, final false
static inline void ListServerBackfillTicketsForPlayer(::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListVirtualMachineSummaries, addr 0xa7d34a0, size 0x194, virtual false, abstract: false, final false
static inline void ListVirtualMachineSummaries(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RemoveMatchmakingQueue, addr 0xa7d3634, size 0x194, virtual false, abstract: false, final false
static inline void RemoveMatchmakingQueue(::PlayFab::MultiplayerModels::RemoveMatchmakingQueueRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RequestMultiplayerServer, addr 0xa7d37c8, size 0x194, virtual false, abstract: false, final false
static inline void RequestMultiplayerServer(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::RequestMultiplayerServerResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RolloverContainerRegistryCredentials, addr 0xa7d395c, size 0x194, virtual false, abstract: false, final false
static inline void RolloverContainerRegistryCredentials(::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetMatchmakingQueue, addr 0xa7d3af0, size 0x194, virtual false, abstract: false, final false
static inline void SetMatchmakingQueue(::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ShutdownMultiplayerServer, addr 0xa7d3c84, size 0x194, virtual false, abstract: false, final false
static inline void ShutdownMultiplayerServer(::PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UntagContainerImage, addr 0xa7d3e18, size 0x194, virtual false, abstract: false, final false
static inline void UntagContainerImage(::PlayFab::MultiplayerModels::UntagContainerImageRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateBuildAlias, addr 0xa7d3fac, size 0x194, virtual false, abstract: false, final false
static inline void UpdateBuildAlias(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateBuildRegion, addr 0xa7d4140, size 0x194, virtual false, abstract: false, final false
static inline void UpdateBuildRegion(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateBuildRegions, addr 0xa7d42d4, size 0x194, virtual false, abstract: false, final false
static inline void UpdateBuildRegions(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UploadCertificate, addr 0xa7d4468, size 0x194, virtual false, abstract: false, final false
static inline void UploadCertificate(::PlayFab::MultiplayerModels::UploadCertificateRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabMultiplayerAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabMultiplayerAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabMultiplayerAPI(PlayFabMultiplayerAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabMultiplayerAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabMultiplayerAPI(PlayFabMultiplayerAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19505};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabMultiplayerAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
