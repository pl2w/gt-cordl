#pragma once
// IWYU pragma private; include "Oculus/Platform/Message.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_MessageType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Message)
namespace GlobalNamespace {
struct Message_MessageType;
}
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform::Models {
class Error;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class PartyID;
}
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace Oculus::Platform::Models {
class Party;
}
namespace Oculus::Platform::Models {
class PidList;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform::Models {
class PushNotificationResult;
}
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class UserReportID;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
class Message_Callback;
}
namespace Oculus::Platform {
class Message_ExtraMessageTypesHandler;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Message_Callback;
}
namespace Oculus::Platform {
class Message_ExtraMessageTypesHandler;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Message*);
MARK_REF_T(::Oculus::Platform::Message_Callback*);
MARK_REF_T(::Oculus::Platform::Message_ExtraMessageTypesHandler*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Message*, "Oculus.Platform", "Message");
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Message_Callback*, "Oculus.Platform", "Message/Callback");
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Message_ExtraMessageTypesHandler*, "Oculus.Platform", "Message/ExtraMessageTypesHandler");
// Dependencies Oculus.Platform.Message::MessageType, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Message
class CORDL_TYPE Message : public ::System::Object {
public:
// Declarations
using MessageType = ::GlobalNamespace::Message_MessageType;

using Callback = ::Oculus::Platform::Message_Callback;

using ExtraMessageTypesHandler = ::Oculus::Platform::Message_ExtraMessageTypesHandler;

 __declspec(property(get=get_IsError)) bool  IsError;

 __declspec(property(get=get_RequestID)) uint64_t  RequestID;

 __declspec(property(get=get_Type)) ::GlobalNamespace::Message_MessageType  Type;

/// @brief Field <HandleExtraMessageTypes>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__HandleExtraMessageTypes_k__BackingField, put=setStaticF__HandleExtraMessageTypes_k__BackingField)) ::Oculus::Platform::Message_ExtraMessageTypesHandler*  _HandleExtraMessageTypes_k__BackingField;

/// @brief Field error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::Oculus::Platform::Models::Error*  error;

/// @brief Field requestID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestID, put=__cordl_internal_set_requestID)) uint64_t  requestID;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::Message_MessageType  type;

/// @brief Method Finalize, addr 0xa539c60, size 0x8, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetAbuseReportRecording, addr 0xa539ca0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording() ;

/// @brief Method GetAchievementDefinitions, addr 0xa539ca8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AchievementDefinitionList* GetAchievementDefinitions() ;

/// @brief Method GetAchievementProgressList, addr 0xa539cb0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList() ;

/// @brief Method GetAchievementUpdate, addr 0xa539cb8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AchievementUpdate* GetAchievementUpdate() ;

/// @brief Method GetAppDownloadProgressResult, addr 0xa539cc0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult() ;

/// @brief Method GetAppDownloadResult, addr 0xa539cc8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AppDownloadResult* GetAppDownloadResult() ;

/// @brief Method GetApplicationInviteList, addr 0xa539cd0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList() ;

/// @brief Method GetApplicationVersion, addr 0xa539cd8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion() ;

/// @brief Method GetAssetDetails, addr 0xa539ce0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetDetails* GetAssetDetails() ;

/// @brief Method GetAssetDetailsList, addr 0xa539ce8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetDetailsList* GetAssetDetailsList() ;

/// @brief Method GetAssetFileDeleteResult, addr 0xa539cf0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetAssetFileDeleteResult() ;

/// @brief Method GetAssetFileDownloadCancelResult, addr 0xa539cf8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult() ;

/// @brief Method GetAssetFileDownloadResult, addr 0xa539d00, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult() ;

/// @brief Method GetAssetFileDownloadUpdate, addr 0xa539d08, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate() ;

/// @brief Method GetAvatarEditorResult, addr 0xa539d10, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult() ;

/// @brief Method GetBlockedUserList, addr 0xa539d18, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList() ;

/// @brief Method GetChallenge, addr 0xa539d20, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::Challenge* GetChallenge() ;

/// @brief Method GetChallengeEntryList, addr 0xa539d28, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::ChallengeEntryList* GetChallengeEntryList() ;

/// @brief Method GetChallengeList, addr 0xa539d30, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::ChallengeList* GetChallengeList() ;

/// @brief Method GetDestinationList, addr 0xa539d38, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::DestinationList* GetDestinationList() ;

/// @brief Method GetError, addr 0xa539c88, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::Error* GetError() ;

/// @brief Method GetGroupPresenceJoinIntent, addr 0xa539d40, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* GetGroupPresenceJoinIntent() ;

/// @brief Method GetGroupPresenceLeaveIntent, addr 0xa539d48, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent() ;

/// @brief Method GetHttpTransferUpdate, addr 0xa539c90, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate() ;

/// @brief Method GetInstalledApplicationList, addr 0xa539d50, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList() ;

/// @brief Method GetInvitePanelResultInfo, addr 0xa539d58, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo() ;

/// @brief Method GetLaunchBlockFlowResult, addr 0xa539d60, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult() ;

/// @brief Method GetLaunchFriendRequestFlowResult, addr 0xa539d68, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult() ;

/// @brief Method GetLaunchInvitePanelFlowResult, addr 0xa539d70, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* GetLaunchInvitePanelFlowResult() ;

/// @brief Method GetLaunchReportFlowResult, addr 0xa539d78, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult() ;

/// @brief Method GetLaunchUnblockFlowResult, addr 0xa539d80, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult() ;

/// @brief Method GetLeaderboardDidUpdate, addr 0xa539d88, size 0x8, virtual true, abstract: false, final false
inline bool GetLeaderboardDidUpdate() ;

/// @brief Method GetLeaderboardEntryList, addr 0xa539d90, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList() ;

/// @brief Method GetLeaderboardList, addr 0xa539d98, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList() ;

/// @brief Method GetLinkedAccountList, addr 0xa539da0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList() ;

/// @brief Method GetLivestreamingApplicationStatus, addr 0xa539da8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus() ;

/// @brief Method GetLivestreamingStartResult, addr 0xa539db0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult() ;

/// @brief Method GetLivestreamingStatus, addr 0xa539db8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LivestreamingStatus* GetLivestreamingStatus() ;

/// @brief Method GetLivestreamingVideoStats, addr 0xa539dc0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats() ;

/// @brief Method GetMicrophoneAvailabilityState, addr 0xa539dc8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* GetMicrophoneAvailabilityState() ;

/// @brief Method GetNetSyncConnection, addr 0xa539dd0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection() ;

/// @brief Method GetNetSyncSessionList, addr 0xa539dd8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList() ;

/// @brief Method GetNetSyncSessionsChangedNotification, addr 0xa539de0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* GetNetSyncSessionsChangedNotification() ;

/// @brief Method GetNetSyncSetSessionPropertyResult, addr 0xa539de8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult() ;

/// @brief Method GetNetSyncVoipAttenuationValueList, addr 0xa539df0, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList() ;

/// @brief Method GetOrgScopedID, addr 0xa539df8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::OrgScopedID* GetOrgScopedID() ;

/// @brief Method GetParty, addr 0xa539e00, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::Party* GetParty() ;

/// @brief Method GetPartyID, addr 0xa539e08, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PartyID* GetPartyID() ;

/// @brief Method GetPartyUpdateNotification, addr 0xa539e10, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification() ;

/// @brief Method GetPidList, addr 0xa539e18, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PidList* GetPidList() ;

/// @brief Method GetPlatformInitialize, addr 0xa539c98, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize() ;

/// @brief Method GetProductList, addr 0xa539e20, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::ProductList* GetProductList() ;

/// @brief Method GetPurchase, addr 0xa539e28, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::Purchase* GetPurchase() ;

/// @brief Method GetPurchaseList, addr 0xa539e30, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PurchaseList* GetPurchaseList() ;

/// @brief Method GetPushNotificationResult, addr 0xa539e38, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::PushNotificationResult* GetPushNotificationResult() ;

/// @brief Method GetRejoinDialogResult, addr 0xa539e40, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult() ;

/// @brief Method GetSdkAccountList, addr 0xa539e48, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::SdkAccountList* GetSdkAccountList() ;

/// @brief Method GetSendInvitesResult, addr 0xa539e50, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::SendInvitesResult* GetSendInvitesResult() ;

/// @brief Method GetShareMediaResult, addr 0xa539e58, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult() ;

/// @brief Method GetString, addr 0xa539e60, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetString() ;

/// @brief Method GetSystemVoipState, addr 0xa539e68, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::SystemVoipState* GetSystemVoipState() ;

/// @brief Method GetUser, addr 0xa539e70, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::User* GetUser() ;

/// @brief Method GetUserAccountAgeCategory, addr 0xa539e78, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserAccountAgeCategory* GetUserAccountAgeCategory() ;

/// @brief Method GetUserCapabilityList, addr 0xa539e80, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserCapabilityList* GetUserCapabilityList() ;

/// @brief Method GetUserList, addr 0xa539e88, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserList* GetUserList() ;

/// @brief Method GetUserProof, addr 0xa539e90, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserProof* GetUserProof() ;

/// @brief Method GetUserReportID, addr 0xa539e98, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::UserReportID* GetUserReportID() ;

static inline ::Oculus::Platform::Message* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method ParseMessageHandle, addr 0xa539ea0, size 0x178c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr  messageHandle) ;

/// @brief Method PopMessage, addr 0xa51af64, size 0xd4, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Message* PopMessage() ;

constexpr ::Oculus::Platform::Models::Error* const& __cordl_internal_get_error() const;

constexpr ::Oculus::Platform::Models::Error*& __cordl_internal_get_error() ;

constexpr uint64_t const& __cordl_internal_get_requestID() const;

constexpr uint64_t& __cordl_internal_get_requestID() ;

constexpr ::GlobalNamespace::Message_MessageType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::Message_MessageType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_error(::Oculus::Platform::Models::Error*  value) ;

constexpr void __cordl_internal_set_requestID(uint64_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::Message_MessageType  value) ;

/// @brief Method .ctor, addr 0xa539994, size 0x2cc, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* getStaticF__HandleExtraMessageTypes_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_HandleExtraMessageTypes, addr 0xa53c914, size 0x48, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* get_HandleExtraMessageTypes() ;

/// @brief Method get_IsError, addr 0xa539c70, size 0x10, virtual false, abstract: false, final false
inline bool get_IsError() ;

/// @brief Method get_RequestID, addr 0xa539c80, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_RequestID() ;

/// @brief Method get_Type, addr 0xa539c68, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Message_MessageType get_Type() ;

static inline void setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::Message_ExtraMessageTypesHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandleExtraMessageTypes, addr 0xa53c8bc, size 0x58, virtual false, abstract: false, final false
static inline void set_HandleExtraMessageTypes(::Oculus::Platform::Message_ExtraMessageTypesHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Message() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Message(Message && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message(Message const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26786};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Message_MessageType  ___type;

/// @brief Field requestID, offset: 0x18, size: 0x8, def value: None
 uint64_t  ___requestID;

/// @brief Field error, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Platform::Models::Error*  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Message, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Message, ___requestID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Message, ___error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Platform::Message) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies System.MulticastDelegate
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Message/ExtraMessageTypesHandler
class CORDL_TYPE Message_ExtraMessageTypesHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa53cb58, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  messageHandle, ::GlobalNamespace::Message_MessageType  message_type, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa53cc00, size 0xc, virtual true, abstract: false, final false
inline ::Oculus::Platform::Message* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa53cb44, size 0x14, virtual true, abstract: false, final false
inline ::Oculus::Platform::Message* Invoke(::System::IntPtr  messageHandle, ::GlobalNamespace::Message_MessageType  message_type) ;

static inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa53caa4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Message_ExtraMessageTypesHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Message_ExtraMessageTypesHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Message_ExtraMessageTypesHandler(Message_ExtraMessageTypesHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message_ExtraMessageTypesHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message_ExtraMessageTypesHandler(Message_ExtraMessageTypesHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26785};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Message_ExtraMessageTypesHandler) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies System.MulticastDelegate
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Message/Callback
class CORDL_TYPE Message_Callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa53ca78, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message*  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa53ca98, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa53ca64, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Oculus::Platform::Message*  message) ;

static inline ::Oculus::Platform::Message_Callback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa53c95c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Message_Callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Message_Callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Message_Callback(Message_Callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Message_Callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Message_Callback(Message_Callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26783};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Message_Callback) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Platform
