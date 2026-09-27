#pragma once
// IWYU pragma private; include "Oculus/Platform/Message.hpp"
#include "Oculus/Platform/zzzz__Message_MessageType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ShareMediaResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_MessageType_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message::*)(::System::IntPtr)>(&::Oculus::Platform::Message::_ctor)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa539994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Message_MessageType (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_IsError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_IsError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa539c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_IsError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_RequestID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::get_RequestID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_RequestID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Error* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetHttpTransferUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetHttpTransferUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPlatformInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPlatformInitialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAbuseReportRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAbuseReportRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementDefinitions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementDefinitionList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementProgressList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementProgressList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAchievementUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AchievementUpdate* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAchievementUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAppDownloadProgressResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAppDownloadProgressResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAppDownloadResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAppDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationInviteList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetApplicationVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetDetailsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetailsList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetDetailsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDeleteResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDeleteResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDeleteResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadCancelResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAssetFileDownloadUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadUpdate* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetAvatarEditorResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AvatarEditorResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetAvatarEditorResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetBlockedUserList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetBlockedUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Challenge* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeEntryList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetChallengeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ChallengeList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetChallengeList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetDestinationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::DestinationList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetDestinationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceJoinIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetGroupPresenceLeaveIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInstalledApplicationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetInstalledApplicationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetInvitePanelResultInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetInvitePanelResultInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchBlockFlowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchBlockFlowResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchBlockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchFriendRequestFlowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchFriendRequestFlowResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchFriendRequestFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchInvitePanelFlowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchInvitePanelFlowResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchInvitePanelFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchReportFlowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchReportFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLaunchUnblockFlowResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLaunchUnblockFlowResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardDidUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardDidUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardEntryList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardEntryList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardEntryList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLeaderboardList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LeaderboardList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLeaderboardList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLinkedAccountList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLinkedAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingApplicationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingApplicationStatus* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingApplicationStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStartResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStartResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingStartResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingStatus* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetLivestreamingVideoStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetLivestreamingVideoStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetMicrophoneAvailabilityState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetMicrophoneAvailabilityState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSessionList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSessionsChangedNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncSetSessionPropertyResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetNetSyncVoipAttenuationValueList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetOrgScopedID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::OrgScopedID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetOrgScopedID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetParty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPartyID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPartyUpdateNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPartyUpdateNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPidList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PidList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPidList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetProductList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetProductList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Purchase* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPurchase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPurchaseList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PurchaseList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPurchaseList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetPushNotificationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PushNotificationResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetPushNotificationResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetRejoinDialogResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::RejoinDialogResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetRejoinDialogResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSdkAccountList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSendInvitesResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SendInvitesResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSendInvitesResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetShareMediaResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetShareMediaResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetSystemVoipState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetSystemVoipState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::User* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserAccountAgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserAccountAgeCategory* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserAccountAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserCapabilityList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserCapabilityList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserList* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserProof
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserProof* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserProof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.GetUserReportID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserReportID* (::Oculus::Platform::Message::*)()>(&::Oculus::Platform::Message::GetUserReportID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message*>(),
                    {::i2c::class_of<::Oculus::Platform::Message*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.ParseMessageHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (*)(::System::IntPtr)>(&::Oculus::Platform::Message::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x178c;
  constexpr static std::size_t addrs = 0xa539ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"ParseMessageHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.PopMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (*)()>(&::Oculus::Platform::Message::PopMessage)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa51af64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"PopMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.set_HandleExtraMessageTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_ExtraMessageTypesHandler*)>(&::Oculus::Platform::Message::set_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa53c8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"set_HandleExtraMessageTypes", {}, {::i2c::type_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message.get_HandleExtraMessageTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message_ExtraMessageTypesHandler* (*)()>(&::Oculus::Platform::Message::get_HandleExtraMessageTypes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa53c914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_HandleExtraMessageTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Message_MessageType& Oculus::Platform::Message::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::Message_MessageType const& Oculus::Platform::Message::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Oculus::Platform::Message::__cordl_internal_set_type(::GlobalNamespace::Message_MessageType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr uint64_t& Oculus::Platform::Message::__cordl_internal_get_requestID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestID;
}
constexpr uint64_t const& Oculus::Platform::Message::__cordl_internal_get_requestID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestID;
}
constexpr void Oculus::Platform::Message::__cordl_internal_set_requestID(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestID = value;
}
constexpr ::Oculus::Platform::Models::Error*& Oculus::Platform::Message::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::Oculus::Platform::Models::Error* const& Oculus::Platform::Message::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void Oculus::Platform::Message::__cordl_internal_set_error(::Oculus::Platform::Models::Error*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void Oculus::Platform::Message::setStaticF__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::Message_ExtraMessageTypesHandler*  value)  {
::cordl_internals::setStaticField<::Oculus::Platform::Message_ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField", ::Oculus::Platform::Message*>(std::forward<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(value));
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message::getStaticF__HandleExtraMessageTypes_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Platform::Message_ExtraMessageTypesHandler*, "<HandleExtraMessageTypes>k__BackingField", ::Oculus::Platform::Message*>();
}
inline void Oculus::Platform::Message::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline void Oculus::Platform::Message::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Message_MessageType Oculus::Platform::Message::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Message_MessageType>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::get_IsError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_IsError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint64_t Oculus::Platform::Message::get_RequestID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_RequestID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Error* Oculus::Platform::Message::GetError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Error*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::Message::GetHttpTransferUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PlatformInitialize* Oculus::Platform::Message::GetPlatformInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PlatformInitialize*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::Message::GetAbuseReportRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AbuseReportRecording*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementDefinitionList* Oculus::Platform::Message::GetAchievementDefinitions()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementDefinitionList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::Message::GetAchievementProgressList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementProgressList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AchievementUpdate* Oculus::Platform::Message::GetAchievementUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AchievementUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::Message::GetAppDownloadProgressResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadProgressResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::Message::GetAppDownloadResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::Message::GetApplicationInviteList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::Message::GetApplicationVersion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::Message::GetAssetDetails()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::Message::GetAssetDetailsList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetailsList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDeleteResult* Oculus::Platform::Message::GetAssetFileDeleteResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDeleteResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::Message::GetAssetFileDownloadCancelResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::Message::GetAssetFileDownloadResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::Message::GetAssetFileDownloadUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Message::GetAvatarEditorResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AvatarEditorResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::Message::GetBlockedUserList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::Message::GetChallenge()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Challenge*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::Message::GetChallengeEntryList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeList* Oculus::Platform::Message::GetChallengeList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::DestinationList* Oculus::Platform::Message::GetDestinationList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::DestinationList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::Message::GetGroupPresenceJoinIntent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::Message::GetGroupPresenceLeaveIntent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::Message::GetInstalledApplicationList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::Message::GetInvitePanelResultInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* Oculus::Platform::Message::GetLaunchBlockFlowResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchBlockFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::Message::GetLaunchFriendRequestFlowResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* Oculus::Platform::Message::GetLaunchInvitePanelFlowResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchReportFlowResult* Oculus::Platform::Message::GetLaunchReportFlowResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchReportFlowResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* Oculus::Platform::Message::GetLaunchUnblockFlowResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult*>(this, ___internal_method);
}
inline bool Oculus::Platform::Message::GetLeaderboardDidUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardEntryList* Oculus::Platform::Message::GetLeaderboardEntryList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardEntryList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LeaderboardList* Oculus::Platform::Message::GetLeaderboardList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LeaderboardList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::Message::GetLinkedAccountList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::Message::GetLivestreamingApplicationStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::Message::GetLivestreamingStartResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStartResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::Message::GetLivestreamingStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingStatus*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Message::GetLivestreamingVideoStats()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LivestreamingVideoStats*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::Message::GetMicrophoneAvailabilityState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::Message::GetNetSyncConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncConnection*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::Message::GetNetSyncSessionList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::Message::GetNetSyncSessionsChangedNotification()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::Message::GetNetSyncSetSessionPropertyResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::Message::GetNetSyncVoipAttenuationValueList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::OrgScopedID* Oculus::Platform::Message::GetOrgScopedID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::OrgScopedID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::Message::GetParty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyID* Oculus::Platform::Message::GetPartyID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::Message::GetPartyUpdateNotification()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyUpdateNotification*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PidList* Oculus::Platform::Message::GetPidList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PidList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::Message::GetProductList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::Message::GetPurchase()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Purchase*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PurchaseList* Oculus::Platform::Message::GetPurchaseList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PurchaseList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PushNotificationResult* Oculus::Platform::Message::GetPushNotificationResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PushNotificationResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::Message::GetRejoinDialogResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RejoinDialogResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::Message::GetSdkAccountList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SendInvitesResult* Oculus::Platform::Message::GetSendInvitesResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SendInvitesResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ShareMediaResult* Oculus::Platform::Message::GetShareMediaResult()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ShareMediaResult*>(this, ___internal_method);
}
inline ::StringW Oculus::Platform::Message::GetString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Message::GetSystemVoipState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::Message::GetUser()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::User*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserAccountAgeCategory* Oculus::Platform::Message::GetUserAccountAgeCategory()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAccountAgeCategory*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::Message::GetUserCapabilityList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserList* Oculus::Platform::Message::GetUserList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserProof* Oculus::Platform::Message::GetUserProof()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserProof*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserReportID* Oculus::Platform::Message::GetUserReportID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserReportID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::ParseMessageHandle(::System::IntPtr  messageHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"ParseMessageHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(nullptr, ___internal_method, messageHandle);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::PopMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"PopMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Message::set_HandleExtraMessageTypes(::Oculus::Platform::Message_ExtraMessageTypesHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"set_HandleExtraMessageTypes", {}, {::i2c::type_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message::get_HandleExtraMessageTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message*>(),
                        {"get_HandleExtraMessageTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message::Message()   {
}
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Platform::Message_ExtraMessageTypesHandler::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa53caa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IntPtr, ::GlobalNamespace::Message_MessageType)>(&::Oculus::Platform::Message_ExtraMessageTypesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa53cb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                    {::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IntPtr, ::GlobalNamespace::Message_MessageType, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Platform::Message_ExtraMessageTypesHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa53cb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                    {::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_ExtraMessageTypesHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (::Oculus::Platform::Message_ExtraMessageTypesHandler::*)(::System::IAsyncResult*)>(&::Oculus::Platform::Message_ExtraMessageTypesHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa53cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                    {::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Message_ExtraMessageTypesHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message_ExtraMessageTypesHandler::Invoke(::System::IntPtr  messageHandle, ::GlobalNamespace::Message_MessageType  message_type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(this, ___internal_method, messageHandle, message_type);
}
inline ::System::IAsyncResult* Oculus::Platform::Message_ExtraMessageTypesHandler::BeginInvoke(::System::IntPtr  messageHandle, ::GlobalNamespace::Message_MessageType  message_type, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, messageHandle, message_type, callback, object);
}
inline ::Oculus::Platform::Message* Oculus::Platform::Message_ExtraMessageTypesHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(this, ___internal_method, result);
}
inline ::Oculus::Platform::Message_ExtraMessageTypesHandler* Oculus::Platform::Message_ExtraMessageTypesHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message_ExtraMessageTypesHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message_ExtraMessageTypesHandler::Message_ExtraMessageTypesHandler()   {
}
//  Writing Method size for method: ::Oculus::Platform::Message_Callback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Platform::Message_Callback::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa53c95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message_Callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::Oculus::Platform::Message*)>(&::Oculus::Platform::Message_Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa53ca64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message_Callback*>(),
                    {::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Platform::Message_Callback::*)(::Oculus::Platform::Message*, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Platform::Message_Callback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa53ca78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message_Callback*>(),
                    {::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Message_Callback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Message_Callback::*)(::System::IAsyncResult*)>(&::Oculus::Platform::Message_Callback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa53ca98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Platform::Message_Callback*>(),
                    {::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Message_Callback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::Message_Callback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Oculus::Platform::Message_Callback::Invoke(::Oculus::Platform::Message*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::IAsyncResult* Oculus::Platform::Message_Callback::BeginInvoke(::Oculus::Platform::Message*  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, callback, object);
}
inline void Oculus::Platform::Message_Callback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Platform::Message_Callback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Oculus::Platform::Message_Callback* Oculus::Platform::Message_Callback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message_Callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Message_Callback::Message_Callback()   {
}
