#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaServer.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaServer_def.hpp"
#include "GorillaNetworking/zzzz__BroadcastMyRoomRequest_def.hpp"
#include "GorillaNetworking/zzzz__CheckForBadNameRequest_def.hpp"
#include "GorillaNetworking/zzzz__GetAcceptedAgreementsRequest_def.hpp"
#include "GorillaNetworking/zzzz__GorillaServer_def.hpp"
#include "GorillaNetworking/zzzz__ReturnCurrentVersionRequest_def.hpp"
#include "GorillaNetworking/zzzz__ReturnQueueStatsRequest_def.hpp"
#include "GorillaNetworking/zzzz__ReturnVstumpMapStatsRequest_def.hpp"
#include "GorillaNetworking/zzzz__SubmitAcceptedAgreementsRequest_def.hpp"
#include "GorillaNetworking/zzzz__TitleDataFeatureFlags_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "PlayFab/ClientModels/zzzz__ExecuteCloudScriptResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.get_FeatureFlagsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::get_FeatureFlagsReady)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c8c27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"get_FeatureFlagsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.get_playerEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::CloudScriptModels::EntityKey* (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::get_playerEntity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c8c294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"get_playerEntity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::Start)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c8c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c8c480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.ReturnCurrentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::ReturnCurrentVersionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::ReturnCurrentVersion)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c8c554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReturnCurrentVersion", {}, {::i2c::type_of<::GorillaNetworking::ReturnCurrentVersionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.TryDistributeCurrency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::TryDistributeCurrency)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c8c6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"TryDistributeCurrency", {}, {::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.ReconcileBundleRewards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*, ::System::Action_1<::StringW>*)>(&::GorillaNetworking::GorillaServer::ReconcileBundleRewards)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c8c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReconcileBundleRewards", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.SendReconcileBundleRewards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::GorillaServer::*)(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*, ::System::Action_1<::StringW>*)>(&::GorillaNetworking::GorillaServer::SendReconcileBundleRewards)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c8c9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"SendReconcileBundleRewards", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.ClaimItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::StringW, ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*, ::System::Action_1<::StringW>*)>(&::GorillaNetworking::GorillaServer::ClaimItem)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c8ca74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ClaimItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.SendClaimItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::GorillaServer::*)(::StringW, ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*, ::System::Action_1<::StringW>*)>(&::GorillaNetworking::GorillaServer::SendClaimItem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c8cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"SendClaimItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.AddOrRemoveDLCOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::AddOrRemoveDLCOwnership)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c8cc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"AddOrRemoveDLCOwnership", {}, {::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.BroadcastMyRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::BroadcastMyRoomRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::BroadcastMyRoom)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c8ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"BroadcastMyRoom", {}, {::i2c::type_of<::GorillaNetworking::BroadcastMyRoomRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.UpdateUserCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::UpdateUserCosmetics)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5c8cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"UpdateUserCosmetics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.GetAcceptedAgreements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::GetAcceptedAgreementsRequest*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::GetAcceptedAgreements)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5c8d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"GetAcceptedAgreements", {}, {::i2c::type_of<::GorillaNetworking::GetAcceptedAgreementsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.SubmitAcceptedAgreements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::SubmitAcceptedAgreementsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::SubmitAcceptedAgreements)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c8d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"SubmitAcceptedAgreements", {}, {::i2c::type_of<::GorillaNetworking::SubmitAcceptedAgreementsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.UploadGorillanalytics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::System::Object*)>(&::GorillaNetworking::GorillaServer::UploadGorillanalytics)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5c8d6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"UploadGorillanalytics", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckForBadName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::CheckForBadNameRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::CheckForBadName)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5c8d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckForBadName", {}, {::i2c::type_of<::GorillaNetworking::CheckForBadNameRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.GetRandomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::GetRandomName)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c8db5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"GetRandomName", {}, {::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.ReturnQueueStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::ReturnQueueStatsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::ReturnQueueStats)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5c8dd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReturnQueueStats", {}, {::i2c::type_of<::GorillaNetworking::ReturnQueueStatsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.ReturnVstumpMapStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)(::GorillaNetworking::ReturnVstumpMapStatsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::GorillaServer::ReturnVstumpMapStats)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5c8df20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReturnVstumpMapStats", {}, {::i2c::type_of<::GorillaNetworking::ReturnVstumpMapStatsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.toFunctionResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::CloudScriptModels::ExecuteFunctionResult* (::GorillaNetworking::GorillaServer::*)(::PlayFab::ClientModels::ExecuteCloudScriptResult*)>(&::GorillaNetworking::GorillaServer::toFunctionResult)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5c8e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"toFunctionResult", {}, {::i2c::type_of<::PlayFab::ClientModels::ExecuteCloudScriptResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5c8e348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c8e564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckIsInKIDOptInCohort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckIsInKIDOptInCohort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsInKIDOptInCohort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckIsInKIDRequiredCohort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckIsInKIDRequiredCohort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8e7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsInKIDRequiredCohort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckOptedInKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckOptedInKID)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c8e814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckOptedInKID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckIsTZE_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckIsTZE_Enabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8e89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsTZE_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckIsMothershipTelemetryEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckIsMothershipTelemetryEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8e8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsMothershipTelemetryEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckIsVStumpGrabbablesFixEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckIsVStumpGrabbablesFixEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c8e93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsVStumpGrabbablesFixEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckIsSuppressZonesInVStumpEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckIsSuppressZonesInVStumpEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c8e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsSuppressZonesInVStumpEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckRoomControlsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckRoomControlsEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckRoomControlsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckRoomControlsEnabledForUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)(::StringW)>(&::GorillaNetworking::GorillaServer::CheckRoomControlsEnabledForUser)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c8eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckRoomControlsEnabledForUser", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckRoomControlsEnabledForAnyone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckRoomControlsEnabledForAnyone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8ed0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckRoomControlsEnabledForAnyone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer.CheckAlarmClocksEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::CheckAlarmClocksEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8ee78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckAlarmClocksEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer::*)()>(&::GorillaNetworking::GorillaServer::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c8eec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::GorillaServer::__cordl_internal_get_FeatureFlagsTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FeatureFlagsTitleDataKey;
}
constexpr ::StringW const& GorillaNetworking::GorillaServer::__cordl_internal_get_FeatureFlagsTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FeatureFlagsTitleDataKey;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_FeatureFlagsTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FeatureFlagsTitleDataKey = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::GorillaServer::__cordl_internal_get_DefaultDeployFeatureFlagsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultDeployFeatureFlagsEnabled;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::GorillaServer::__cordl_internal_get_DefaultDeployFeatureFlagsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultDeployFeatureFlagsEnabled;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_DefaultDeployFeatureFlagsEnabled(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultDeployFeatureFlagsEnabled = value;
}
constexpr ::GorillaNetworking::TitleDataFeatureFlags*& GorillaNetworking::GorillaServer::__cordl_internal_get_featureFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureFlags;
}
constexpr ::GorillaNetworking::TitleDataFeatureFlags* const& GorillaNetworking::GorillaServer::__cordl_internal_get_featureFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureFlags;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_featureFlags(::GorillaNetworking::TitleDataFeatureFlags*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featureFlags = value;
}
constexpr bool& GorillaNetworking::GorillaServer::__cordl_internal_get_debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr bool const& GorillaNetworking::GorillaServer::__cordl_internal_get_debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debug = value;
}
constexpr ::Newtonsoft::Json::JsonSerializerSettings*& GorillaNetworking::GorillaServer::__cordl_internal_get_serializationSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializationSettings;
}
constexpr ::Newtonsoft::Json::JsonSerializerSettings* const& GorillaNetworking::GorillaServer::__cordl_internal_get_serializationSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializationSettings;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_serializationSettings(::Newtonsoft::Json::JsonSerializerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializationSettings = value;
}
constexpr ::System::ValueTuple_2<bool,bool>& GorillaNetworking::GorillaServer::__cordl_internal_get_cachedVStumpGrabbablesFix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedVStumpGrabbablesFix;
}
constexpr ::System::ValueTuple_2<bool,bool> const& GorillaNetworking::GorillaServer::__cordl_internal_get_cachedVStumpGrabbablesFix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedVStumpGrabbablesFix;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_cachedVStumpGrabbablesFix(::System::ValueTuple_2<bool,bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedVStumpGrabbablesFix = value;
}
constexpr ::System::ValueTuple_2<bool,bool>& GorillaNetworking::GorillaServer::__cordl_internal_get_cachedSuppressZonesInVStump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSuppressZonesInVStump;
}
constexpr ::System::ValueTuple_2<bool,bool> const& GorillaNetworking::GorillaServer::__cordl_internal_get_cachedSuppressZonesInVStump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSuppressZonesInVStump;
}
constexpr void GorillaNetworking::GorillaServer::__cordl_internal_set_cachedSuppressZonesInVStump(::System::ValueTuple_2<bool,bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSuppressZonesInVStump = value;
}
inline void GorillaNetworking::GorillaServer::setStaticF_Instance(::UnityW<::GorillaNetworking::GorillaServer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::GorillaServer>, "Instance", ::GorillaNetworking::GorillaServer*>(std::forward<::UnityW<::GorillaNetworking::GorillaServer>>(value));
}
inline ::UnityW<::GorillaNetworking::GorillaServer> GorillaNetworking::GorillaServer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::GorillaServer>, "Instance", ::GorillaNetworking::GorillaServer*>();
}
inline bool GorillaNetworking::GorillaServer::get_FeatureFlagsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"get_FeatureFlagsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::EntityKey* GorillaNetworking::GorillaServer::get_playerEntity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"get_playerEntity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::CloudScriptModels::EntityKey*>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer::ReturnCurrentVersion(::GorillaNetworking::ReturnCurrentVersionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReturnCurrentVersion", {}, {::i2c::type_of<::GorillaNetworking::ReturnCurrentVersionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::TryDistributeCurrency(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"TryDistributeCurrency", {}, {::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::ReconcileBundleRewards(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReconcileBundleRewards", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successCallback, errorCallback);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::GorillaServer::SendReconcileBundleRewards(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"SendReconcileBundleRewards", {}, {::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::ClaimItem(::StringW  playFabItemId, ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ClaimItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabItemId, successCallback, errorCallback);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::GorillaServer::SendClaimItem(::StringW  playFabItemId, ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"SendClaimItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, playFabItemId, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::AddOrRemoveDLCOwnership(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"AddOrRemoveDLCOwnership", {}, {::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::BroadcastMyRoom(::GorillaNetworking::BroadcastMyRoomRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"BroadcastMyRoom", {}, {::i2c::type_of<::GorillaNetworking::BroadcastMyRoomRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::UpdateUserCosmetics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"UpdateUserCosmetics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer::GetAcceptedAgreements(::GorillaNetworking::GetAcceptedAgreementsRequest*  request, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"GetAcceptedAgreements", {}, {::i2c::type_of<::GorillaNetworking::GetAcceptedAgreementsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::SubmitAcceptedAgreements(::GorillaNetworking::SubmitAcceptedAgreementsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"SubmitAcceptedAgreements", {}, {::i2c::type_of<::GorillaNetworking::SubmitAcceptedAgreementsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::UploadGorillanalytics(::System::Object*  uploadData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"UploadGorillanalytics", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uploadData);
}
inline void GorillaNetworking::GorillaServer::CheckForBadName(::GorillaNetworking::CheckForBadNameRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckForBadName", {}, {::i2c::type_of<::GorillaNetworking::CheckForBadNameRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::GetRandomName(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"GetRandomName", {}, {::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::ReturnQueueStats(::GorillaNetworking::ReturnQueueStatsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReturnQueueStats", {}, {::i2c::type_of<::GorillaNetworking::ReturnQueueStatsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
inline void GorillaNetworking::GorillaServer::ReturnVstumpMapStats(::GorillaNetworking::ReturnVstumpMapStatsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  successCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"ReturnVstumpMapStats", {}, {::i2c::type_of<::GorillaNetworking::ReturnVstumpMapStatsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, successCallback, errorCallback);
}
template<typename T>
inline ::System::Action_1<T>* GorillaNetworking::GorillaServer::DebugWrapCb(::System::Action_1<T>*  cb, ::StringW  label)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                    {"DebugWrapCb", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*>(this, ___internal_method, cb, label);
}
inline ::PlayFab::CloudScriptModels::ExecuteFunctionResult* GorillaNetworking::GorillaServer::toFunctionResult(::PlayFab::ClientModels::ExecuteCloudScriptResult*  csResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"toFunctionResult", {}, {::i2c::type_of<::PlayFab::ClientModels::ExecuteCloudScriptResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>(this, ___internal_method, csResult);
}
inline void GorillaNetworking::GorillaServer::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckIsInKIDOptInCohort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsInKIDOptInCohort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckIsInKIDRequiredCohort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsInKIDRequiredCohort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckOptedInKID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckOptedInKID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckIsTZE_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsTZE_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckIsMothershipTelemetryEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsMothershipTelemetryEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckIsVStumpGrabbablesFixEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsVStumpGrabbablesFixEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckIsSuppressZonesInVStumpEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckIsSuppressZonesInVStumpEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckRoomControlsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckRoomControlsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckRoomControlsEnabledForUser(::StringW  playFabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckRoomControlsEnabledForUser", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playFabId);
}
inline bool GorillaNetworking::GorillaServer::CheckRoomControlsEnabledForAnyone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckRoomControlsEnabledForAnyone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer::CheckAlarmClocksEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {"CheckAlarmClocksEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaServer* GorillaNetworking::GorillaServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  GorillaNetworking::GorillaServer::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* GorillaNetworking::GorillaServer::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer::GorillaServer()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)(int32_t)>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c8ca4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)()>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c8fd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)()>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x5c8fd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)()>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c90348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)()>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c903f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)()>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c90400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::*)()>(&::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Action_1<::StringW>*& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::StringW>* const& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>* const& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_set_successCallback(::System::Action_1<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get__www_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_get__www_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____www_5__2 = value;
}
inline void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16* GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer__SendReconcileBundleRewards_d__16::GorillaServer__SendReconcileBundleRewards_d__16()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)(int32_t)>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c8cc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)()>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c8f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)()>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x5c8f5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)()>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c8fc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)()>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)()>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c8fcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer__SendClaimItem_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::GorillaServer__SendClaimItem_d__19::*)()>(&::GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get_playFabItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabItemId;
}
constexpr ::StringW const& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get_playFabItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabItemId;
}
constexpr void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_set_playFabItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabItemId = value;
}
constexpr ::System::Action_1<::StringW>*& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::StringW>* const& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>* const& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_set_successCallback(::System::Action_1<::GorillaNetworking::GorillaServer_ClaimItemResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get__www_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_get__www_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____www_5__2 = value;
}
inline void GorillaNetworking::GorillaServer__SendClaimItem_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::GorillaServer__SendClaimItem_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer__SendClaimItem_d__19::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::GorillaServer__SendClaimItem_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::GorillaServer__SendClaimItem_d__19* GorillaNetworking::GorillaServer__SendClaimItem_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer__SendClaimItem_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::GorillaServer__SendClaimItem_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::GorillaServer__SendClaimItem_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::GorillaServer__SendClaimItem_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::GorillaServer__SendClaimItem_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::GorillaServer__SendClaimItem_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::GorillaServer__SendClaimItem_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer__SendClaimItem_d__19::GorillaServer__SendClaimItem_d__19()   {
}
template<typename T>
constexpr ::UnityW<::GorillaNetworking::GorillaServer>& GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::UnityW<::GorillaNetworking::GorillaServer> const& GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::GorillaServer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::__cordl_internal_get_cb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cb;
}
template<typename T>
constexpr ::System::Action_1<T>* const& GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::__cordl_internal_get_cb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cb;
}
template<typename T>
constexpr void GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::__cordl_internal_set_cb(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cb = value;
}
template<typename T>
inline void GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::_DebugWrapCb_b__0(T  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>*>(),
                        {"<DebugWrapCb>b__0", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
template<typename T>
inline ::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>* GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaNetworking::GorillaServer___c__DisplayClass30_0_1<T>::GorillaServer___c__DisplayClass30_0_1()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c__DisplayClass23_0::*)()>(&::GorillaNetworking::GorillaServer___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8d4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c__DisplayClass23_0._GetAcceptedAgreements_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c__DisplayClass23_0::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaServer___c__DisplayClass23_0::_GetAcceptedAgreements_b__0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5c8f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c__DisplayClass23_0*>(),
                        {"<GetAcceptedAgreements>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*& GorillaNetworking::GorillaServer___c__DisplayClass23_0::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* const& GorillaNetworking::GorillaServer___c__DisplayClass23_0::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void GorillaNetworking::GorillaServer___c__DisplayClass23_0::__cordl_internal_set_successCallback(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& GorillaNetworking::GorillaServer___c__DisplayClass23_0::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& GorillaNetworking::GorillaServer___c__DisplayClass23_0::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void GorillaNetworking::GorillaServer___c__DisplayClass23_0::__cordl_internal_set_errorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
inline void GorillaNetworking::GorillaServer___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer___c__DisplayClass23_0::_GetAcceptedAgreements_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c__DisplayClass23_0*>(),
                        {"<GetAcceptedAgreements>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaNetworking::GorillaServer___c__DisplayClass23_0* GorillaNetworking::GorillaServer___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer___c__DisplayClass23_0::GorillaServer___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c::*)()>(&::GorillaNetworking::GorillaServer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c._UpdateUserCosmetics_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaServer___c::_UpdateUserCosmetics_b__22_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c8f334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UpdateUserCosmetics>b__22_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c._UpdateUserCosmetics_b__22_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::GorillaServer___c::_UpdateUserCosmetics_b__22_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8f404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UpdateUserCosmetics>b__22_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c._UploadGorillanalytics_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GorillaNetworking::GorillaServer___c::_UploadGorillanalytics_b__25_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8f408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UploadGorillanalytics>b__25_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer___c._UploadGorillanalytics_b__25_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::GorillaServer___c::_UploadGorillanalytics_b__25_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8f40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UploadGorillanalytics>b__25_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::GorillaServer___c::setStaticF___9(::GorillaNetworking::GorillaServer___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::GorillaServer___c*, "<>9", ::GorillaNetworking::GorillaServer___c*>(std::forward<::GorillaNetworking::GorillaServer___c*>(value));
}
inline ::GorillaNetworking::GorillaServer___c* GorillaNetworking::GorillaServer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::GorillaServer___c*, "<>9", ::GorillaNetworking::GorillaServer___c*>();
}
inline void GorillaNetworking::GorillaServer___c::setStaticF___9__22_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__22_0", ::GorillaNetworking::GorillaServer___c*>(std::forward<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(value));
}
inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* GorillaNetworking::GorillaServer___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__22_0", ::GorillaNetworking::GorillaServer___c*>();
}
inline void GorillaNetworking::GorillaServer___c::setStaticF___9__22_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__22_1", ::GorillaNetworking::GorillaServer___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::GorillaServer___c::getStaticF___9__22_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__22_1", ::GorillaNetworking::GorillaServer___c*>();
}
inline void GorillaNetworking::GorillaServer___c::setStaticF___9__25_0(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__25_0", ::GorillaNetworking::GorillaServer___c*>(std::forward<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(value));
}
inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* GorillaNetworking::GorillaServer___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, "<>9__25_0", ::GorillaNetworking::GorillaServer___c*>();
}
inline void GorillaNetworking::GorillaServer___c::setStaticF___9__25_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__25_1", ::GorillaNetworking::GorillaServer___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::GorillaServer___c::getStaticF___9__25_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__25_1", ::GorillaNetworking::GorillaServer___c*>();
}
inline void GorillaNetworking::GorillaServer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer___c::_UpdateUserCosmetics_b__22_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UpdateUserCosmetics>b__22_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaServer___c::_UpdateUserCosmetics_b__22_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UpdateUserCosmetics>b__22_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::GorillaServer___c::_UploadGorillanalytics_b__25_0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UploadGorillanalytics>b__25_0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::GorillaServer___c::_UploadGorillanalytics_b__25_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer___c*>(),
                        {"<UploadGorillanalytics>b__25_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::GorillaServer___c* GorillaNetworking::GorillaServer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer___c::GorillaServer___c()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ClaimItemResponse.get_granted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer_ClaimItemResponse::*)()>(&::GorillaNetworking::GorillaServer_ClaimItemResponse::get_granted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(),
                        {"get_granted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ClaimItemResponse.set_granted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ClaimItemResponse::*)(bool)>(&::GorillaNetworking::GorillaServer_ClaimItemResponse::set_granted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(),
                        {"set_granted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ClaimItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ClaimItemResponse::*)()>(&::GorillaNetworking::GorillaServer_ClaimItemResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::GorillaServer_ClaimItemResponse::__cordl_internal_get__granted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____granted_k__BackingField;
}
constexpr bool const& GorillaNetworking::GorillaServer_ClaimItemResponse::__cordl_internal_get__granted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____granted_k__BackingField;
}
constexpr void GorillaNetworking::GorillaServer_ClaimItemResponse::__cordl_internal_set__granted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____granted_k__BackingField = value;
}
inline bool GorillaNetworking::GorillaServer_ClaimItemResponse::get_granted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(),
                        {"get_granted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer_ClaimItemResponse::set_granted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(),
                        {"set_granted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::GorillaServer_ClaimItemResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ClaimItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaServer_ClaimItemResponse* GorillaNetworking::GorillaServer_ClaimItemResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer_ClaimItemResponse*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer_ClaimItemResponse::GorillaServer_ClaimItemResponse()   {
}
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.get_success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)()>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_success", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.set_success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)(bool)>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_success", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.get_errorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)()>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_errorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_errorMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.set_errorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)(::StringW)>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_errorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_errorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.get_reconciledBundleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)()>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_reconciledBundleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_reconciledBundleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.set_reconciledBundleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)(::System::Nullable_1<int32_t>)>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_reconciledBundleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_reconciledBundleCount", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.get_grantedBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)()>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_grantedBundles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_grantedBundles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse.set_grantedBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_grantedBundles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_grantedBundles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::*)()>(&::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8f2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__success_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success_k__BackingField;
}
constexpr bool const& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__success_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success_k__BackingField;
}
constexpr void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_set__success_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____success_k__BackingField = value;
}
constexpr ::StringW& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__errorMessage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessage_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__errorMessage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessage_k__BackingField;
}
constexpr void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_set__errorMessage_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorMessage_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__reconciledBundleCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reconciledBundleCount_k__BackingField;
}
constexpr ::System::Nullable_1<int32_t> const& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__reconciledBundleCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reconciledBundleCount_k__BackingField;
}
constexpr void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_set__reconciledBundleCount_k__BackingField(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reconciledBundleCount_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__grantedBundles_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grantedBundles_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_get__grantedBundles_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grantedBundles_k__BackingField;
}
constexpr void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::__cordl_internal_set__grantedBundles_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grantedBundles_k__BackingField = value;
}
inline bool GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_success(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_success", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_errorMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_errorMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_errorMessage(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_errorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_reconciledBundleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_reconciledBundleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_reconciledBundleCount(::System::Nullable_1<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_reconciledBundleCount", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::get_grantedBundles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"get_grantedBundles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::set_grantedBundles(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {"set_grantedBundles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse* GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaServer_ReconcileBundleRewardsResponse::GorillaServer_ReconcileBundleRewardsResponse()   {
}
