#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipServerApiClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipApiClient_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipServerApiClient)
namespace GlobalNamespace {
class AccountLinkLookupVector;
}
namespace GlobalNamespace {
class AddSharedGroupMembersCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class BulkGetAccountLinksCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class BulkGetPlayersCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class CreateAccountAssociationDelegateWrapper;
}
namespace GlobalNamespace {
class CreateSharedGroupCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class DeleteSharedGroupCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class DeleteUserDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ExplicitAccountLinkCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class GetFileCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class GetLastTransactionCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class GetProgressionTreesForPlayerCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class GetSharedGroupDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class GetUserDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class GetUserInventoryCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ListAccountAssociationsCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ListBansBulkCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ListGameSessionsCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ListMothershipTitleDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ListUserDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class LockProgressionTreeNodeServerCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class MatchmakingPlayerVector;
}
namespace GlobalNamespace {
class MothershipWriteEventsRequest;
}
namespace GlobalNamespace {
class PlatformAndSkuVector;
}
namespace GlobalNamespace {
class PlayerLookupVector;
}
namespace GlobalNamespace {
class RegisterGameSessionCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class RemoveSharedGroupMembersCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class RunTransactionCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class SendNotificationCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ServerConsumeConsumableCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ServerCreateBanCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ServerCreateReportCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ServerGetBulkSubscriptionsCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ServerGetPermissionsCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ServerValidateUsernameCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class SetUserDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class StartMatchBackfillCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class StopMatchmakingCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class StringKeyValueMap;
}
namespace GlobalNamespace {
class StringVector;
}
namespace GlobalNamespace {
class UnlockProgressionTreeNodeCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class UnregisterGameSessionCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class UpdateGameSessionCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class UpdateSharedGroupDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class VerifyTokenCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class WriteEventsCompleteServerDelegateWrapper;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipServerApiClient;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipServerApiClient*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipServerApiClient*, "", "MothershipServerApiClient");
// Dependencies MothershipApiClient, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipServerApiClient
class CORDL_TYPE MothershipServerApiClient : public ::GlobalNamespace::MothershipApiClient {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method AddSharedGroupMembers, addr 0x52c080c, size 0x134, virtual false, abstract: false, final false
inline bool AddSharedGroupMembers(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData) ;

/// @brief Method BulkGetAccountLinks, addr 0x52bee00, size 0x10c, virtual false, abstract: false, final false
inline bool BulkGetAccountLinks(::GlobalNamespace::AccountLinkLookupVector*  lookups, ::System::IntPtr  userData) ;

/// @brief Method BulkGetPlayers, addr 0x52bf020, size 0x10c, virtual false, abstract: false, final false
inline bool BulkGetPlayers(::GlobalNamespace::PlayerLookupVector*  lookups, ::System::IntPtr  userData) ;

/// @brief Method ConsumeConsumable, addr 0x52c164c, size 0x114, virtual false, abstract: false, final false
inline bool ConsumeConsumable(::StringW  titleId, ::StringW  envId, ::StringW  callerId, ::StringW  entitlementId, ::System::IntPtr  userData) ;

/// @brief Method CreateAccountAssociation, addr 0x52bf68c, size 0x124, virtual false, abstract: false, final false
inline bool CreateAccountAssociation(::StringW  mothershipPlayerId, ::StringW  externalServiceName, ::StringW  externalServiceOrgScopedId, ::StringW  externalServiceUserId, ::StringW  externalServiceUserName, ::System::IntPtr  userData) ;

/// @brief Method CreateExplicitAccountLink, addr 0x52bf240, size 0x138, virtual false, abstract: false, final false
inline bool CreateExplicitAccountLink(::StringW  titleId, ::StringW  envId, ::StringW  playerId, ::StringW  externalServiceName, ::StringW  appScopedAccountId, ::StringW  orgScopedAccountId, ::StringW  username, ::System::IntPtr  userData) ;

/// @brief Method CreateSharedGroup, addr 0x52c011c, size 0x104, virtual false, abstract: false, final false
inline bool CreateSharedGroup(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::System::IntPtr  userData) ;

/// @brief Method DeleteSharedGroup, addr 0x52c0c9c, size 0x104, virtual false, abstract: false, final false
inline bool DeleteSharedGroup(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::System::IntPtr  userData) ;

/// @brief Method DeleteUserData, addr 0x52bfd04, size 0x104, virtual false, abstract: false, final false
inline bool DeleteUserData(::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData) ;

/// @brief Method Dispose, addr 0x52be864, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method ForceUnlockProgressionTreeNode, addr 0x52c2e14, size 0x104, virtual false, abstract: false, final false
inline bool ForceUnlockProgressionTreeNode(::StringW  treeId, ::StringW  nodeId, ::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method GetLastTransactionRun, addr 0x52c1424, size 0x114, virtual false, abstract: false, final false
inline bool GetLastTransactionRun(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::StringW  transactionId, ::System::IntPtr  userData) ;

/// @brief Method GetProgressionTrackValuesForPlayer, addr 0x52c28c0, size 0x104, virtual false, abstract: false, final false
inline bool GetProgressionTrackValuesForPlayer(::StringW  titleId, ::StringW  envId, ::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method GetProgressionTreesForPlayer, addr 0x52c302c, size 0xec, virtual false, abstract: false, final false
inline bool GetProgressionTreesForPlayer(::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method GetSharedGroupData, addr 0x52c0334, size 0x140, virtual false, abstract: false, final false
inline bool GetSharedGroupData(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  keys, bool  getMembers, ::System::IntPtr  userData) ;

/// @brief Method GetUserData, addr 0x52bfaec, size 0x104, virtual false, abstract: false, final false
inline bool GetUserData(::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData) ;

/// @brief Method GetUserInventory, addr 0x52c0eb4, size 0x104, virtual false, abstract: false, final false
inline bool GetUserInventory(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method IncrementProgressionTrackForPlayer, addr 0x52c2ad8, size 0x124, virtual false, abstract: false, final false
inline bool IncrementProgressionTrackForPlayer(::StringW  titleId, ::StringW  envId, ::StringW  playerId, ::StringW  trackId, int32_t  additionalProgress, ::System::IntPtr  userData) ;

/// @brief Method ListAccountAssociationsForPlayer, addr 0x52bf48c, size 0xec, virtual false, abstract: false, final false
inline bool ListAccountAssociationsForPlayer(::StringW  mothershipPlayerId, ::System::IntPtr  userData) ;

/// @brief Method ListBansBulk, addr 0x52c1db4, size 0x124, virtual false, abstract: false, final false
inline bool ListBansBulk(::GlobalNamespace::StringVector*  playerIds, int32_t  category, bool  includeExpired, ::System::IntPtr  userData) ;

/// @brief Method ListGameSessions, addr 0x52c3b10, size 0x138, virtual false, abstract: false, final false
inline bool ListGameSessions(int32_t  page_size, int32_t  page_offset, ::StringW  region, ::StringW  partition, int32_t  min_empty_slots, int32_t  max_empty_slots, ::StringW  session_name_search, ::System::IntPtr  userData) ;

/// @brief Method ListMothershipTitleData, addr 0x52c1874, size 0x134, virtual false, abstract: false, final false
inline bool ListMothershipTitleData(::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::GlobalNamespace::StringVector*  keys, ::System::IntPtr  userData) ;

/// @brief Method ListUserData, addr 0x52bff1c, size 0xec, virtual false, abstract: false, final false
inline bool ListUserData(::StringW  userId, ::System::IntPtr  userData) ;

/// @brief Method LockProgressionTreeNode, addr 0x52c322c, size 0x13c, virtual false, abstract: false, final false
inline bool LockProgressionTreeNode(::StringW  titleId, ::StringW  envId, ::StringW  treeId, ::StringW  nodeId, ::StringW  playerId, bool  refund_costs, bool  rewind_rewards, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::MothershipServerApiClient* New_ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  apiKey, bool  enableRetryQueue) ;

static inline ::GlobalNamespace::MothershipServerApiClient* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method RefreshSubscriptionsForPlayer, addr 0x52c369c, size 0xec, virtual false, abstract: false, final false
inline bool RefreshSubscriptionsForPlayer(::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method RegisterGameSession, addr 0x52c3f94, size 0x160, virtual false, abstract: false, final false
inline bool RegisterGameSession(::StringW  gameSessionId, ::StringW  provider, ::StringW  gameSessionName, ::StringW  ip, int32_t  port, ::StringW  requiredTags, int32_t  maxPlayerCount, ::StringW  region, ::StringW  partition, ::GlobalNamespace::StringKeyValueMap*  extraProperties, ::System::IntPtr  userData) ;

/// @brief Method RemoveSharedGroupMembers, addr 0x52c0a54, size 0x134, virtual false, abstract: false, final false
inline bool RemoveSharedGroupMembers(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData) ;

/// @brief Method RunTransaction, addr 0x52c10cc, size 0x114, virtual false, abstract: false, final false
inline bool RunTransaction(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::StringW  transactionId, ::System::IntPtr  userData) ;

/// @brief Method RunTransactionWithRef, addr 0x52c11e0, size 0x130, virtual false, abstract: false, final false
inline bool RunTransactionWithRef(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::StringW  transactionId, ::StringW  refId, ::StringW  externalServiceName, ::System::IntPtr  userData) ;

/// @brief Method SendNotification, addr 0x52c2688, size 0x124, virtual false, abstract: false, final false
inline bool SendNotification(::GlobalNamespace::StringVector*  playerIds, ::StringW  title, ::StringW  body, ::System::IntPtr  userData) ;

/// @brief Method ServerBulkGetSubscriptions, addr 0x52c389c, size 0x160, virtual false, abstract: false, final false
inline bool ServerBulkGetSubscriptions(::GlobalNamespace::StringVector*  players, ::GlobalNamespace::PlatformAndSkuVector*  platformSkus, ::GlobalNamespace::StringVector*  catalogIds, ::System::IntPtr  userData) ;

/// @brief Method ServerCreateBan, addr 0x52c2430, size 0x144, virtual false, abstract: false, final false
inline bool ServerCreateBan(::StringW  playerId, int32_t  category, ::StringW  reason, int32_t  durationMinutes, bool  orgWide, ::StringW  metadata, ::StringW  source, bool  isHardwareBan, ::System::IntPtr  userData) ;

/// @brief Method ServerCreateReport, addr 0x52c1fec, size 0x130, virtual false, abstract: false, final false
inline bool ServerCreateReport(::StringW  reportingUserId, ::StringW  reportedUserId, int32_t  category, ::StringW  platform, bool  moddedClient, ::StringW  metadata, ::System::IntPtr  userData) ;

/// @brief Method ServerGetFileById, addr 0x52c4408, size 0xec, virtual false, abstract: false, final false
inline bool ServerGetFileById(::StringW  fileId, ::System::IntPtr  userData) ;

/// @brief Method ServerGetFileByNameOrAliasAndVersion, addr 0x52c44f4, size 0xfc, virtual false, abstract: false, final false
inline bool ServerGetFileByNameOrAliasAndVersion(::StringW  fileNameOrAlias, ::StringW  versionOrLatest, ::System::IntPtr  userData) ;

/// @brief Method ServerGetPermissions, addr 0x52c347c, size 0x10c, virtual false, abstract: false, final false
inline bool ServerGetPermissions(::GlobalNamespace::StringVector*  playerIds, ::System::IntPtr  userData) ;

/// @brief Method ServerStartMatchBackfill, addr 0x52c4704, size 0x124, virtual false, abstract: false, final false
inline bool ServerStartMatchBackfill(::StringW  ticketId, ::StringW  gamemode, ::GlobalNamespace::MatchmakingPlayerVector*  players, ::System::IntPtr  userData) ;

/// @brief Method ServerStopMatchmaking, addr 0x52c493c, size 0xec, virtual false, abstract: false, final false
inline bool ServerStopMatchmaking(::StringW  ticketId, ::System::IntPtr  userData) ;

/// @brief Method ServerValidateUsername, addr 0x52c2230, size 0xec, virtual false, abstract: false, final false
inline bool ServerValidateUsername(::StringW  username, ::System::IntPtr  userData) ;

/// @brief Method SetAcceptLanguage, addr 0x52c19a8, size 0xd8, virtual false, abstract: false, final false
inline void SetAcceptLanguage(::StringW  language) ;

/// @brief Method SetAddSharedGroupMembersCompleteDelegateWrapper, addr 0x52c06f8, size 0x114, virtual false, abstract: false, final false
inline void SetAddSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::AddSharedGroupMembersCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetBulkGetAccountLinksCompleteDelegateWrapper, addr 0x52becec, size 0x114, virtual false, abstract: false, final false
inline void SetBulkGetAccountLinksCompleteDelegateWrapper(::GlobalNamespace::BulkGetAccountLinksCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetBulkGetPlayersCompleteDelegateWrapper, addr 0x52bef0c, size 0x114, virtual false, abstract: false, final false
inline void SetBulkGetPlayersCompleteDelegateWrapper(::GlobalNamespace::BulkGetPlayersCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetConsumeConsumableCompleteServerDelegateWrapper, addr 0x52c1538, size 0x114, virtual false, abstract: false, final false
inline void SetConsumeConsumableCompleteServerDelegateWrapper(::GlobalNamespace::ServerConsumeConsumableCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetCreateAccountAssociationsCompleteDelegateWrapper, addr 0x52bf578, size 0x114, virtual false, abstract: false, final false
inline void SetCreateAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::CreateAccountAssociationDelegateWrapper*  wrapper) ;

/// @brief Method SetCreateExplicitAccountLinkCompleteDelegateWrapper, addr 0x52bf12c, size 0x114, virtual false, abstract: false, final false
inline void SetCreateExplicitAccountLinkCompleteDelegateWrapper(::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetCreateSharedGroupCompleteDelegateWrapper, addr 0x52c0008, size 0x114, virtual false, abstract: false, final false
inline void SetCreateSharedGroupCompleteDelegateWrapper(::GlobalNamespace::CreateSharedGroupCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetDeleteSharedGroupCompleteDelegateWrapper, addr 0x52c0b88, size 0x114, virtual false, abstract: false, final false
inline void SetDeleteSharedGroupCompleteDelegateWrapper(::GlobalNamespace::DeleteSharedGroupCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetDeleteUserDataCompleteServerDelegateWrapper, addr 0x52bfbf0, size 0x114, virtual false, abstract: false, final false
inline void SetDeleteUserDataCompleteServerDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetFileCompleteDelegateWrapper, addr 0x52c42f4, size 0x114, virtual false, abstract: false, final false
inline void SetGetFileCompleteDelegateWrapper(::GlobalNamespace::GetFileCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetLastTransactionRunCompleteServerDelegateWrapper, addr 0x52c1310, size 0x114, virtual false, abstract: false, final false
inline void SetGetLastTransactionRunCompleteServerDelegateWrapper(::GlobalNamespace::GetLastTransactionCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper, addr 0x52c27ac, size 0x114, virtual false, abstract: false, final false
inline void SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper, addr 0x52c2f18, size 0x114, virtual false, abstract: false, final false
inline void SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::GetProgressionTreesForPlayerCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetSharedGroupDataCompleteDelegateWrapper, addr 0x52c0220, size 0x114, virtual false, abstract: false, final false
inline void SetGetSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::GetSharedGroupDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetUserDataCompleteServerDelegateWrapper, addr 0x52bf9d8, size 0x114, virtual false, abstract: false, final false
inline void SetGetUserDataCompleteServerDelegateWrapper(::GlobalNamespace::GetUserDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetGetUserInventoryCompleteServerDelegateWrapper, addr 0x52c0da0, size 0x114, virtual false, abstract: false, final false
inline void SetGetUserInventoryCompleteServerDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper, addr 0x52c29c4, size 0x114, virtual false, abstract: false, final false
inline void SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetListAccountAssociationsCompleteDelegateWrapper, addr 0x52bf378, size 0x114, virtual false, abstract: false, final false
inline void SetListAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetListBansBulkCompleteServerDelegateWrapper, addr 0x52c1ca0, size 0x114, virtual false, abstract: false, final false
inline void SetListBansBulkCompleteServerDelegateWrapper(::GlobalNamespace::ListBansBulkCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetListGameSessionsCompleteDelegateWrapper, addr 0x52c39fc, size 0x114, virtual false, abstract: false, final false
inline void SetListGameSessionsCompleteDelegateWrapper(::GlobalNamespace::ListGameSessionsCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetListMothershipTitleDataCompleteServerDelegateWrapper, addr 0x52c1760, size 0x114, virtual false, abstract: false, final false
inline void SetListMothershipTitleDataCompleteServerDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetListUserDataCompleteServerDelegateWrapper, addr 0x52bfe08, size 0x114, virtual false, abstract: false, final false
inline void SetListUserDataCompleteServerDelegateWrapper(::GlobalNamespace::ListUserDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetLockProgressionTreeNodeCompleteDelegateWrapper, addr 0x52c3118, size 0x114, virtual false, abstract: false, final false
inline void SetLockProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::LockProgressionTreeNodeServerCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper, addr 0x52c3588, size 0x114, virtual false, abstract: false, final false
inline void SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetRegisterGameSessionCompleteDelegateWrapper, addr 0x52c3e80, size 0x114, virtual false, abstract: false, final false
inline void SetRegisterGameSessionCompleteDelegateWrapper(::GlobalNamespace::RegisterGameSessionCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetRemoveSharedGroupMembersCompleteDelegateWrapper, addr 0x52c0940, size 0x114, virtual false, abstract: false, final false
inline void SetRemoveSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::RemoveSharedGroupMembersCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetRunTransactionCompleteServerDelegateWrapper, addr 0x52c0fb8, size 0x114, virtual false, abstract: false, final false
inline void SetRunTransactionCompleteServerDelegateWrapper(::GlobalNamespace::RunTransactionCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetSendNotificationServerDelegateWrapper, addr 0x52c2574, size 0x114, virtual false, abstract: false, final false
inline void SetSendNotificationServerDelegateWrapper(::GlobalNamespace::SendNotificationCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetServerBulkGetSubscriptionsCompleteDelegateWrapper, addr 0x52c3788, size 0x114, virtual false, abstract: false, final false
inline void SetServerBulkGetSubscriptionsCompleteDelegateWrapper(::GlobalNamespace::ServerGetBulkSubscriptionsCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetServerCreateBanCompleteDelegateWrapper, addr 0x52c231c, size 0x114, virtual false, abstract: false, final false
inline void SetServerCreateBanCompleteDelegateWrapper(::GlobalNamespace::ServerCreateBanCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetServerCreateReportCompleteDelegateWrapper, addr 0x52c1ed8, size 0x114, virtual false, abstract: false, final false
inline void SetServerCreateReportCompleteDelegateWrapper(::GlobalNamespace::ServerCreateReportCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetServerGetPermissionsCompleteDelegateWrapper, addr 0x52c3368, size 0x114, virtual false, abstract: false, final false
inline void SetServerGetPermissionsCompleteDelegateWrapper(::GlobalNamespace::ServerGetPermissionsCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetServerStartMatchBackfillCompleteDelegateWrapper, addr 0x52c45f0, size 0x114, virtual false, abstract: false, final false
inline void SetServerStartMatchBackfillCompleteDelegateWrapper(::GlobalNamespace::StartMatchBackfillCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetServerStopMatchmakingCompleteDelegateWrapper, addr 0x52c4828, size 0x114, virtual false, abstract: false, final false
inline void SetServerStopMatchmakingCompleteDelegateWrapper(::GlobalNamespace::StopMatchmakingCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetServerValidateUsernameCompleteDelegateWrapper, addr 0x52c211c, size 0x114, virtual false, abstract: false, final false
inline void SetServerValidateUsernameCompleteDelegateWrapper(::GlobalNamespace::ServerValidateUsernameCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetSetUserDataCompleteServerDelegateWrapper, addr 0x52bf7b0, size 0x114, virtual false, abstract: false, final false
inline void SetSetUserDataCompleteServerDelegateWrapper(::GlobalNamespace::SetUserDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper, addr 0x52c2bfc, size 0x114, virtual false, abstract: false, final false
inline void SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper(::GlobalNamespace::UnlockProgressionTreeNodeCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetUnregisterGameSessionCompleteDelegateWrapper, addr 0x52c40f4, size 0x114, virtual false, abstract: false, final false
inline void SetUnregisterGameSessionCompleteDelegateWrapper(::GlobalNamespace::UnregisterGameSessionCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetUpdateGameSessionCompleteDelegateWrapper, addr 0x52c3c48, size 0x114, virtual false, abstract: false, final false
inline void SetUpdateGameSessionCompleteDelegateWrapper(::GlobalNamespace::UpdateGameSessionCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetUpdateSharedGroupDataCompleteDelegateWrapper, addr 0x52c0474, size 0x114, virtual false, abstract: false, final false
inline void SetUpdateSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::UpdateSharedGroupDataCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method SetUserData, addr 0x52bf8c4, size 0x114, virtual false, abstract: false, final false
inline bool SetUserData(::StringW  userId, ::StringW  keyName, ::StringW  value, int32_t  generation, ::System::IntPtr  userData) ;

/// @brief Method SetVerifyTokenCompleteDelegateWrapper, addr 0x52beadc, size 0x114, virtual false, abstract: false, final false
inline void SetVerifyTokenCompleteDelegateWrapper(::GlobalNamespace::VerifyTokenCompleteDelegateWrapper*  wrapper) ;

/// @brief Method SetWriteEventsCompleteServerDelegateWrapper, addr 0x52c1a80, size 0x114, virtual false, abstract: false, final false
inline void SetWriteEventsCompleteServerDelegateWrapper(::GlobalNamespace::WriteEventsCompleteServerDelegateWrapper*  wrapper) ;

/// @brief Method UnlockProgressionTreeNode, addr 0x52c2d10, size 0x104, virtual false, abstract: false, final false
inline bool UnlockProgressionTreeNode(::StringW  treeId, ::StringW  nodeId, ::StringW  playerId, ::System::IntPtr  userData) ;

/// @brief Method UnregisterGameSession, addr 0x52c4208, size 0xec, virtual false, abstract: false, final false
inline bool UnregisterGameSession(::StringW  id, ::System::IntPtr  userData) ;

/// @brief Method UpdateGameSession, addr 0x52c3d5c, size 0x124, virtual false, abstract: false, final false
inline bool UpdateGameSession(::StringW  id, int32_t  currentPlayerCount, ::GlobalNamespace::StringKeyValueMap*  extraProperties, ::System::IntPtr  userData) ;

/// @brief Method UpdateSharedGroupData, addr 0x52c0588, size 0x170, virtual false, abstract: false, final false
inline bool UpdateSharedGroupData(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringKeyValueMap*  data, ::GlobalNamespace::StringKeyValueMap*  customTags, ::GlobalNamespace::StringVector*  keysToRemove, ::StringW  permission, ::System::IntPtr  userData) ;

/// @brief Method VerifyToken, addr 0x52bebf0, size 0xfc, virtual false, abstract: false, final false
inline bool VerifyToken(::StringW  mothershipPlayerId, ::StringW  token, ::System::IntPtr  userData) ;

/// @brief Method WriteEvents, addr 0x52c1b94, size 0x10c, virtual false, abstract: false, final false
inline bool WriteEvents(::GlobalNamespace::MothershipWriteEventsRequest*  request, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52be9d0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  apiKey, bool  enableRetryQueue) ;

/// @brief Method .ctor, addr 0x52be6d4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52be788, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipServerApiClient*  obj) ;

/// @brief Method swigRelease, addr 0x52be7c8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipServerApiClient*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipServerApiClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipServerApiClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipServerApiClient(MothershipServerApiClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipServerApiClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipServerApiClient(MothershipServerApiClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9368};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipServerApiClient, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipServerApiClient) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
