#pragma once
// IWYU pragma private; include "PlayFab/PlayFabMultiplayerInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabMultiplayerInstanceAPI)
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
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabAuthenticationContext;
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
class PlayFabMultiplayerInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabMultiplayerInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabMultiplayerInstanceAPI*, "PlayFab", "PlayFabMultiplayerInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabMultiplayerInstanceAPI
class CORDL_TYPE PlayFabMultiplayerInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method CancelAllMatchmakingTicketsForPlayer, addr 0xa7d4740, size 0x18c, virtual false, abstract: false, final false
inline void CancelAllMatchmakingTicketsForPlayer(::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CancelAllServerBackfillTicketsForPlayer, addr 0xa7d48cc, size 0x18c, virtual false, abstract: false, final false
inline void CancelAllServerBackfillTicketsForPlayer(::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CancelMatchmakingTicket, addr 0xa7d4a58, size 0x18c, virtual false, abstract: false, final false
inline void CancelMatchmakingTicket(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CancelServerBackfillTicket, addr 0xa7d4be4, size 0x18c, virtual false, abstract: false, final false
inline void CancelServerBackfillTicket(::PlayFab::MultiplayerModels::CancelServerBackfillTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateBuildAlias, addr 0xa7d4d70, size 0x18c, virtual false, abstract: false, final false
inline void CreateBuildAlias(::PlayFab::MultiplayerModels::CreateBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateBuildWithCustomContainer, addr 0xa7d4efc, size 0x18c, virtual false, abstract: false, final false
inline void CreateBuildWithCustomContainer(::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateBuildWithCustomContainerResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateBuildWithManagedContainer, addr 0xa7d5088, size 0x18c, virtual false, abstract: false, final false
inline void CreateBuildWithManagedContainer(::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateBuildWithManagedContainerResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateMatchmakingTicket, addr 0xa7d5214, size 0x18c, virtual false, abstract: false, final false
inline void CreateMatchmakingTicket(::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateRemoteUser, addr 0xa7d53a0, size 0x18c, virtual false, abstract: false, final false
inline void CreateRemoteUser(::PlayFab::MultiplayerModels::CreateRemoteUserRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateRemoteUserResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateServerBackfillTicket, addr 0xa7d552c, size 0x18c, virtual false, abstract: false, final false
inline void CreateServerBackfillTicket(::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateServerBackfillTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method CreateServerMatchmakingTicket, addr 0xa7d56b8, size 0x18c, virtual false, abstract: false, final false
inline void CreateServerMatchmakingTicket(::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteAsset, addr 0xa7d5844, size 0x18c, virtual false, abstract: false, final false
inline void DeleteAsset(::PlayFab::MultiplayerModels::DeleteAssetRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteBuild, addr 0xa7d59d0, size 0x18c, virtual false, abstract: false, final false
inline void DeleteBuild(::PlayFab::MultiplayerModels::DeleteBuildRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteBuildAlias, addr 0xa7d5b5c, size 0x18c, virtual false, abstract: false, final false
inline void DeleteBuildAlias(::PlayFab::MultiplayerModels::DeleteBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteBuildRegion, addr 0xa7d5ce8, size 0x18c, virtual false, abstract: false, final false
inline void DeleteBuildRegion(::PlayFab::MultiplayerModels::DeleteBuildRegionRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteCertificate, addr 0xa7d5e74, size 0x18c, virtual false, abstract: false, final false
inline void DeleteCertificate(::PlayFab::MultiplayerModels::DeleteCertificateRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteContainerImageRepository, addr 0xa7d6000, size 0x18c, virtual false, abstract: false, final false
inline void DeleteContainerImageRepository(::PlayFab::MultiplayerModels::DeleteContainerImageRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteRemoteUser, addr 0xa7d618c, size 0x18c, virtual false, abstract: false, final false
inline void DeleteRemoteUser(::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method EnableMultiplayerServersForTitle, addr 0xa7d6318, size 0x18c, virtual false, abstract: false, final false
inline void EnableMultiplayerServersForTitle(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7d4730, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetAssetUploadUrl, addr 0xa7d64a4, size 0x18c, virtual false, abstract: false, final false
inline void GetAssetUploadUrl(::PlayFab::MultiplayerModels::GetAssetUploadUrlRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetAssetUploadUrlResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetBuild, addr 0xa7d6630, size 0x18c, virtual false, abstract: false, final false
inline void GetBuild(::PlayFab::MultiplayerModels::GetBuildRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetBuildResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetBuildAlias, addr 0xa7d67bc, size 0x18c, virtual false, abstract: false, final false
inline void GetBuildAlias(::PlayFab::MultiplayerModels::GetBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetContainerRegistryCredentials, addr 0xa7d6948, size 0x18c, virtual false, abstract: false, final false
inline void GetContainerRegistryCredentials(::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMatch, addr 0xa7d6ad4, size 0x18c, virtual false, abstract: false, final false
inline void GetMatch(::PlayFab::MultiplayerModels::GetMatchRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMatchResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMatchmakingQueue, addr 0xa7d6c60, size 0x18c, virtual false, abstract: false, final false
inline void GetMatchmakingQueue(::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMatchmakingQueueResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMatchmakingTicket, addr 0xa7d6dec, size 0x18c, virtual false, abstract: false, final false
inline void GetMatchmakingTicket(::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMultiplayerServerDetails, addr 0xa7d6f78, size 0x18c, virtual false, abstract: false, final false
inline void GetMultiplayerServerDetails(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMultiplayerServerLogs, addr 0xa7d7104, size 0x18c, virtual false, abstract: false, final false
inline void GetMultiplayerServerLogs(::PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetMultiplayerSessionLogsBySessionId, addr 0xa7d7290, size 0x18c, virtual false, abstract: false, final false
inline void GetMultiplayerSessionLogsBySessionId(::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetMultiplayerServerLogsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetQueueStatistics, addr 0xa7d741c, size 0x18c, virtual false, abstract: false, final false
inline void GetQueueStatistics(::PlayFab::MultiplayerModels::GetQueueStatisticsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetQueueStatisticsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetRemoteLoginEndpoint, addr 0xa7d75a8, size 0x18c, virtual false, abstract: false, final false
inline void GetRemoteLoginEndpoint(::PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetServerBackfillTicket, addr 0xa7d7734, size 0x18c, virtual false, abstract: false, final false
inline void GetServerBackfillTicket(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetServerBackfillTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTitleEnabledForMultiplayerServersStatus, addr 0xa7d78c0, size 0x18c, virtual false, abstract: false, final false
inline void GetTitleEnabledForMultiplayerServersStatus(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTitleMultiplayerServersQuotas, addr 0xa7d7a4c, size 0x18c, virtual false, abstract: false, final false
inline void GetTitleMultiplayerServersQuotas(::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7d4708, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

/// @brief Method JoinMatchmakingTicket, addr 0xa7d7bd8, size 0x18c, virtual false, abstract: false, final false
inline void JoinMatchmakingTicket(::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListArchivedMultiplayerServers, addr 0xa7d7d64, size 0x18c, virtual false, abstract: false, final false
inline void ListArchivedMultiplayerServers(::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListAssetSummaries, addr 0xa7d7ef0, size 0x18c, virtual false, abstract: false, final false
inline void ListAssetSummaries(::PlayFab::MultiplayerModels::ListAssetSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListAssetSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListBuildAliases, addr 0xa7d807c, size 0x18c, virtual false, abstract: false, final false
inline void ListBuildAliases(::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListBuildAliasesForTitleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListBuildSummaries, addr 0xa7d8208, size 0x18c, virtual false, abstract: false, final false
inline void ListBuildSummaries(::PlayFab::MultiplayerModels::ListBuildSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListBuildSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListCertificateSummaries, addr 0xa7d8394, size 0x18c, virtual false, abstract: false, final false
inline void ListCertificateSummaries(::PlayFab::MultiplayerModels::ListCertificateSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListCertificateSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListContainerImageTags, addr 0xa7d86ac, size 0x18c, virtual false, abstract: false, final false
inline void ListContainerImageTags(::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListContainerImageTagsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListContainerImages, addr 0xa7d8520, size 0x18c, virtual false, abstract: false, final false
inline void ListContainerImages(::PlayFab::MultiplayerModels::ListContainerImagesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListContainerImagesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMatchmakingQueues, addr 0xa7d8838, size 0x18c, virtual false, abstract: false, final false
inline void ListMatchmakingQueues(::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMatchmakingTicketsForPlayer, addr 0xa7d89c4, size 0x18c, virtual false, abstract: false, final false
inline void ListMatchmakingTicketsForPlayer(::PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListMultiplayerServers, addr 0xa7d8b50, size 0x18c, virtual false, abstract: false, final false
inline void ListMultiplayerServers(::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListPartyQosServers, addr 0xa7d8cdc, size 0x12c, virtual false, abstract: false, final false
inline void ListPartyQosServers(::PlayFab::MultiplayerModels::ListPartyQosServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListPartyQosServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// [Obsolete("Use \'ListQosServersForTitle\' instead", false)]
/// @brief Method ListQosServers, addr 0xa7d8e08, size 0x12c, virtual false, abstract: false, final false
inline void ListQosServers(::PlayFab::MultiplayerModels::ListQosServersRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListQosServersResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListQosServersForTitle, addr 0xa7d8f34, size 0x18c, virtual false, abstract: false, final false
inline void ListQosServersForTitle(::PlayFab::MultiplayerModels::ListQosServersForTitleRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListQosServersForTitleResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListServerBackfillTicketsForPlayer, addr 0xa7d90c0, size 0x18c, virtual false, abstract: false, final false
inline void ListServerBackfillTicketsForPlayer(::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ListVirtualMachineSummaries, addr 0xa7d924c, size 0x18c, virtual false, abstract: false, final false
inline void ListVirtualMachineSummaries(::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

static inline ::PlayFab::PlayFabMultiplayerInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabMultiplayerInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method RemoveMatchmakingQueue, addr 0xa7d93d8, size 0x18c, virtual false, abstract: false, final false
inline void RemoveMatchmakingQueue(::PlayFab::MultiplayerModels::RemoveMatchmakingQueueRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RequestMultiplayerServer, addr 0xa7d9564, size 0x18c, virtual false, abstract: false, final false
inline void RequestMultiplayerServer(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::RequestMultiplayerServerResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method RolloverContainerRegistryCredentials, addr 0xa7d96f0, size 0x18c, virtual false, abstract: false, final false
inline void RolloverContainerRegistryCredentials(::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetMatchmakingQueue, addr 0xa7d987c, size 0x18c, virtual false, abstract: false, final false
inline void SetMatchmakingQueue(::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::SetMatchmakingQueueResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ShutdownMultiplayerServer, addr 0xa7d9a08, size 0x18c, virtual false, abstract: false, final false
inline void ShutdownMultiplayerServer(::PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UntagContainerImage, addr 0xa7d9b94, size 0x18c, virtual false, abstract: false, final false
inline void UntagContainerImage(::PlayFab::MultiplayerModels::UntagContainerImageRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateBuildAlias, addr 0xa7d9d20, size 0x18c, virtual false, abstract: false, final false
inline void UpdateBuildAlias(::PlayFab::MultiplayerModels::UpdateBuildAliasRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::BuildAliasDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateBuildRegion, addr 0xa7d9eac, size 0x18c, virtual false, abstract: false, final false
inline void UpdateBuildRegion(::PlayFab::MultiplayerModels::UpdateBuildRegionRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateBuildRegions, addr 0xa7da038, size 0x18c, virtual false, abstract: false, final false
inline void UpdateBuildRegions(::PlayFab::MultiplayerModels::UpdateBuildRegionsRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UploadCertificate, addr 0xa7da1c4, size 0x18c, virtual false, abstract: false, final false
inline void UploadCertificate(::PlayFab::MultiplayerModels::UploadCertificateRequest*  request, ::System::Action_1<::PlayFab::MultiplayerModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7d45fc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7d4678, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabMultiplayerInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabMultiplayerInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabMultiplayerInstanceAPI(PlayFabMultiplayerInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabMultiplayerInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabMultiplayerInstanceAPI(PlayFabMultiplayerInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19506};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabMultiplayerInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabMultiplayerInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabMultiplayerInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
