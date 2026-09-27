#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModIOManager_def.hpp"
#include "GlobalNamespace/zzzz__AssociateMotherhsipAndModIOAccountsRequest_def.hpp"
#include "GlobalNamespace/zzzz__AssociateMotherhsipAndModIOAccountsResponse_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager_ModIOAuthMethod_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__AddFavorite_d__69_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__ContinuePlatformLogin_d__95_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__DownloadMod_d__109_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetFavoriteMods_d__68_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetFeaturedMaps_d__52_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetInstalledMods_d__72_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetModLogo_d__78_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetModStatus_d__108_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetMod_d__77_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetMods_d__76_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetMods_d__79_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetOculusAccessToken_d__98_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetOculusUserId_d__97_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetOculusUserProof_d__99_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetSubscribedModProfile_d__107_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetSubscribedModStatus_d__106_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetSubscribedMods_d__103_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__HasAcceptedLatestTerms_d__55_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__InitInternal_d__54_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__Initialize_d__53_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__InitiatePlatformLogin_d__94_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__IsModOutdated_d__65_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__PrefetchFeaturedMaps_d__49_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__RefreshModCache_d__63_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__RefreshUserProfile_d__75_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__RequestAccountLinkCode_d__91_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__RequestPlatformLogin_d__93_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__SaveAcceptedTermsIds_d__57_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__ShowModIOTermsOfUse_d__58_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__ShowTermsOfUseAtGameLoad_d__56_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__SubscribeToMod_d__104_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__UnsubscribeFromMod_d__105_def.hpp"
#include "GlobalNamespace/zzzz__ModIOManager_def.hpp"
#include "GlobalNamespace/zzzz__ModIORequestResultAnd_1_def.hpp"
#include "Modio/API/zzzz__ModioAPI_def.hpp"
#include "Modio/Customizations/zzzz__IOculusCredentialProvider_def.hpp"
#include "Modio/Customizations/zzzz__ISteamCredentialProvider_def.hpp"
#include "Modio/Customizations/zzzz__IWssAuthPrompter_def.hpp"
#include "Modio/Customizations/zzzz__ModioWssAuthService_def.hpp"
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/Mods/zzzz__ModioPage_1_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::Awake)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x59c7720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59c7ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::OnDestroy)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x59c7c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59c7ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnUGCEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::OnUGCEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c7f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnUGCEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnUGCDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::OnUGCDisabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c7f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnUGCDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnMapAccessEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::OnMapAccessEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59c7f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnMapAccessEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.PrefetchFeaturedMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::PrefetchFeaturedMaps)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59c7f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"PrefetchFeaturedMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ModIOManager::IsInitialized)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59c8018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsFeaturedMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModIOManager::IsFeaturedMap)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59c8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsFeaturedMap", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetFeaturedMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>* (*)(bool)>(&::GlobalNamespace::ModIOManager::GetFeaturedMaps)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59c8124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetFeaturedMaps", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::GlobalNamespace::ModIOManager::Initialize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59c8228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.InitInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::GlobalNamespace::ModIOManager::InitInternal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59c8314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"InitInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.HasAcceptedLatestTerms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,bool>>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::HasAcceptedLatestTerms)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59c8400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"HasAcceptedLatestTerms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.ShowTermsOfUseAtGameLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::GlobalNamespace::ModIOManager::ShowTermsOfUseAtGameLoad)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59c84ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ShowTermsOfUseAtGameLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.SaveAcceptedTermsIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::ModIOManager::SaveAcceptedTermsIds)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59c85dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SaveAcceptedTermsIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.ShowModIOTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::ShowModIOTermsOfUse)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59c86a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ShowModIOTermsOfUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnModIOTermsOfUseAcknowledged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)(bool)>(&::GlobalNamespace::ModIOManager::OnModIOTermsOfUseAcknowledged)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x59c87ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnModIOTermsOfUseAcknowledged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.EnableModManagement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::EnableModManagement)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59c8910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"EnableModManagement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.DisableModManagement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::DisableModManagement)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59c8a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"DisableModManagement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.HandleModManagementEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase)>(&::GlobalNamespace::ModIOManager::HandleModManagementEvent)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x59c8c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.RefreshModCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::ModIOManager::RefreshModCache)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59c932c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RefreshModCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsRefreshing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ModIOManager::IsRefreshing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59c93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsRefreshing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsModOutdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int32_t>>* (*)(::Modio::Mods::ModId)>(&::GlobalNamespace::ModIOManager::IsModOutdated)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59c9448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsModOutdated", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsModOutdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,int32_t> (*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModIOManager::IsModOutdated)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x59c9058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsModOutdated", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.SaveFavoriteMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::SaveFavoriteMods)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x59c9cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SaveFavoriteMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetFavoriteMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>* (*)(bool)>(&::GlobalNamespace::ModIOManager::GetFavoriteMods)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59ca210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetFavoriteMods", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.AddFavorite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::Modio::Mods::ModId, ::System::Action_1<::Modio::Error*>*)>(&::GlobalNamespace::ModIOManager::AddFavorite)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59ca310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"AddFavorite", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<::Modio::Error*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.RemoveFavorite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (*)(::Modio::Mods::ModId)>(&::GlobalNamespace::ModIOManager::RemoveFavorite)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x59ca420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RemoveFavorite", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsModFavorited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::ModId)>(&::GlobalNamespace::ModIOManager::IsModFavorited)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59ca55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsModFavorited", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetInstalledMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>* (*)(bool)>(&::GlobalNamespace::ModIOManager::GetInstalledMods)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59ca5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetInstalledMods", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.ValidateInstalledMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModIOManager::ValidateInstalledMod)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59ca6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ValidateInstalledMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsInstalledModOutdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,int32_t> (*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::ModIOManager::IsInstalledModOutdated)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x59c9544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsInstalledModOutdated", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.RefreshUserProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Action_1<bool>*, bool)>(&::GlobalNamespace::ModIOManager::RefreshUserProfile)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59ca778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RefreshUserProfile", {}, {::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>* (*)(::System::Collections::Generic::ICollection_1<int64_t>*, bool, ::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*)>(&::GlobalNamespace::ModIOManager::GetMods)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59ca868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetMods", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* (*)(::Modio::Mods::ModId, bool, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*)>(&::GlobalNamespace::ModIOManager::GetMod)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x59ca998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetModLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* (*)(::Modio::Mods::Mod*, ::System::Action_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>*)>(&::GlobalNamespace::ModIOManager::GetModLogo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59caac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetModLogo", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* (*)(::Modio::API::Mods_ModioAPI_GetModsFilter*)>(&::GlobalNamespace::ModIOManager::GetMods)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59cabe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetMods", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.ModIOUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Users::User*)>(&::GlobalNamespace::ModIOManager::ModIOUserChanged)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59cace8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.ModIOUserSyncComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::ModIOUserSyncComplete)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59cae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ModIOUserSyncComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ModIOManager::IsLoggedIn)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59caf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsLoggingIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ModIOManager::IsLoggingIn)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59caf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsLoggingIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsLoggingOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ModIOManager::IsLoggingOut)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59cafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsLoggingOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetCurrentUsername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::ModIOManager::GetCurrentUsername)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59cb00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetCurrentUsername", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetCurrentUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::ModIOManager::GetCurrentUserId)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59cb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetCurrentUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetCurrentAuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::ModIOManager::GetCurrentAuthToken)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59cb350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetCurrentAuthToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::GlobalNamespace::ModIOManager::IsAuthenticated)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x59cb408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.LogoutFromModIO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::LogoutFromModIO)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x59cb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"LogoutFromModIO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.SetAccountLinkPrompter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Customizations::IWssAuthPrompter*)>(&::GlobalNamespace::ModIOManager::SetAccountLinkPrompter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59cbbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SetAccountLinkPrompter", {}, {::i2c::type_of<::Modio::Customizations::IWssAuthPrompter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.RequestAccountLinkCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::GlobalNamespace::ModIOManager::RequestAccountLinkCode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59cbc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RequestAccountLinkCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.CancelExternalAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ModIOManager::CancelExternalAuthentication)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x59cba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"CancelExternalAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.RequestPlatformLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::GlobalNamespace::ModIOManager::RequestPlatformLogin)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59cbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RequestPlatformLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.InitiatePlatformLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::InitiatePlatformLogin)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59cbe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"InitiatePlatformLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.ContinuePlatformLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::ContinuePlatformLogin)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59cbf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ContinuePlatformLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.RequestEncryptedAppTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)(::System::Action_2<bool,::StringW>*)>(&::GlobalNamespace::ModIOManager::RequestEncryptedAppTicket)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59cc01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RequestEncryptedAppTicket", {}, {::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetOculusUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::GetOculusUserId)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59cc080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetOculusAccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::GetOculusAccessToken)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59cc168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusAccessToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetOculusUserProof
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::GetOculusUserProof)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59cc250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusUserProof", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetOculusDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::GetOculusDevice)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59cc338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnAuthenticationComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Error*)>(&::GlobalNamespace::ModIOManager::OnAuthenticationComplete)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59cc378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnAuthenticationComplete", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetLastAuthMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModIOManager_ModIOAuthMethod (*)()>(&::GlobalNamespace::ModIOManager::GetLastAuthMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59cc4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetLastAuthMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetSubscribedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>* (*)()>(&::GlobalNamespace::ModIOManager::GetSubscribedMods)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59cc4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetSubscribedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.SubscribeToMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::Modio::Mods::ModId, ::System::Action_1<::Modio::Error*>*)>(&::GlobalNamespace::ModIOManager::SubscribeToMod)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59cc5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SubscribeToMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<::Modio::Error*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.UnsubscribeFromMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::Modio::Mods::ModId, ::System::Action_1<::Modio::Error*>*)>(&::GlobalNamespace::ModIOManager::UnsubscribeFromMod)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59cc6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"UnsubscribeFromMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<::Modio::Error*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetSubscribedModStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::ModFileState>>* (*)(::Modio::Mods::ModId)>(&::GlobalNamespace::ModIOManager::GetSubscribedModStatus)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59cc808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetSubscribedModStatus", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetSubscribedModProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::Mod*>>* (*)(::Modio::Mods::ModId, ::System::Action_2<bool,::Modio::Mods::Mod*>*)>(&::GlobalNamespace::ModIOManager::GetSubscribedModProfile)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59cc908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetSubscribedModProfile", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_2<bool,::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.GetModStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Mods::ModFileState>* (*)(::Modio::Mods::ModId)>(&::GlobalNamespace::ModIOManager::GetModStatus)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59cca18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetModStatus", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.DownloadMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::Modio::Mods::ModId, ::System::Action_1<bool>*)>(&::GlobalNamespace::ModIOManager::DownloadMod)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59ccb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"DownloadMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x59ccc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.TryGetNewMapsModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Modio::Mods::ModId>)>(&::GlobalNamespace::ModIOManager::TryGetNewMapsModId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59ccdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"TryGetNewMapsModId", {}, {::i2c::type_of<::by_ref<::Modio::Mods::ModId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager.AssociateMothershipAndModIOAccounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*, ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*)>(&::GlobalNamespace::ModIOManager::AssociateMothershipAndModIOAccounts)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59cce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"AssociateMothershipAndModIOAccounts", {}, {::i2c::type_of<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager::*)()>(&::GlobalNamespace::ModIOManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ccf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ModIOManager::__cordl_internal_get_modIOTermsOfUsePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modIOTermsOfUsePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ModIOManager::__cordl_internal_get_modIOTermsOfUsePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modIOTermsOfUsePrefab;
}
constexpr void GlobalNamespace::ModIOManager::__cordl_internal_set_modIOTermsOfUsePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modIOTermsOfUsePrefab = value;
}
constexpr int64_t& GlobalNamespace::ModIOManager::__cordl_internal_get_newMapsModId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapsModId;
}
constexpr int64_t const& GlobalNamespace::ModIOManager::__cordl_internal_get_newMapsModId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newMapsModId;
}
constexpr void GlobalNamespace::ModIOManager::__cordl_internal_set_newMapsModId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newMapsModId = value;
}
inline void GlobalNamespace::ModIOManager::setStaticF_instance(::UnityW<::GlobalNamespace::ModIOManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ModIOManager>, "instance", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityW<::GlobalNamespace::ModIOManager>>(value));
}
inline ::UnityW<::GlobalNamespace::ModIOManager> GlobalNamespace::ModIOManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ModIOManager>, "instance", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_ModIODirectory(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ModIODirectory", ::GlobalNamespace::ModIOManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::ModIOManager::getStaticF_ModIODirectory()  {
return ::cordl_internals::getStaticField<::StringW, "ModIODirectory", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_accountLinkingAuthService(::Modio::Customizations::ModioWssAuthService*  value)  {
::cordl_internals::setStaticField<::Modio::Customizations::ModioWssAuthService*, "accountLinkingAuthService", ::GlobalNamespace::ModIOManager*>(std::forward<::Modio::Customizations::ModioWssAuthService*>(value));
}
inline ::Modio::Customizations::ModioWssAuthService* GlobalNamespace::ModIOManager::getStaticF_accountLinkingAuthService()  {
return ::cordl_internals::getStaticField<::Modio::Customizations::ModioWssAuthService*, "accountLinkingAuthService", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "initialized", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_initialized()  {
return ::cordl_internals::getStaticField<bool, "initialized", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_featuredMapsPrefetchStarted(bool  value)  {
::cordl_internals::setStaticField<bool, "featuredMapsPrefetchStarted", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_featuredMapsPrefetchStarted()  {
return ::cordl_internals::getStaticField<bool, "featuredMapsPrefetchStarted", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_featuredMapsRetrieved(bool  value)  {
::cordl_internals::setStaticField<bool, "featuredMapsRetrieved", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_featuredMapsRetrieved()  {
return ::cordl_internals::getStaticField<bool, "featuredMapsRetrieved", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_retrievedFeaturedMaps(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*, "retrievedFeaturedMaps", ::GlobalNamespace::ModIOManager*>(std::forward<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* GlobalNamespace::ModIOManager::getStaticF_retrievedFeaturedMaps()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*, "retrievedFeaturedMaps", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_refreshing(bool  value)  {
::cordl_internals::setStaticField<bool, "refreshing", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_refreshing()  {
return ::cordl_internals::getStaticField<bool, "refreshing", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_modManagementEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "modManagementEnabled", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_modManagementEnabled()  {
return ::cordl_internals::getStaticField<bool, "modManagementEnabled", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_loggingIn(bool  value)  {
::cordl_internals::setStaticField<bool, "loggingIn", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_loggingIn()  {
return ::cordl_internals::getStaticField<bool, "loggingIn", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_loggingOut(bool  value)  {
::cordl_internals::setStaticField<bool, "loggingOut", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_loggingOut()  {
return ::cordl_internals::getStaticField<bool, "loggingOut", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_refreshingModCache(bool  value)  {
::cordl_internals::setStaticField<bool, "refreshingModCache", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_refreshingModCache()  {
return ::cordl_internals::getStaticField<bool, "refreshingModCache", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_favoriteModsLoaded(bool  value)  {
::cordl_internals::setStaticField<bool, "favoriteModsLoaded", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_favoriteModsLoaded()  {
return ::cordl_internals::getStaticField<bool, "favoriteModsLoaded", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_restartRefreshModCache(bool  value)  {
::cordl_internals::setStaticField<bool, "restartRefreshModCache", ::GlobalNamespace::ModIOManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ModIOManager::getStaticF_restartRefreshModCache()  {
return ::cordl_internals::getStaticField<bool, "restartRefreshModCache", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_refreshDisabledCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Coroutine*, "refreshDisabledCoroutine", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Coroutine*>(value));
}
inline ::UnityEngine::Coroutine* GlobalNamespace::ModIOManager::getStaticF_refreshDisabledCoroutine()  {
return ::cordl_internals::getStaticField<::UnityEngine::Coroutine*, "refreshDisabledCoroutine", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_lastRefreshTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "lastRefreshTime", ::GlobalNamespace::ModIOManager*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::ModIOManager::getStaticF_lastRefreshTime()  {
return ::cordl_internals::getStaticField<float_t, "lastRefreshTime", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_currentRefreshCallbacks(::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<bool>*>*, "currentRefreshCallbacks", ::GlobalNamespace::ModIOManager*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<bool>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action_1<bool>*>* GlobalNamespace::ModIOManager::getStaticF_currentRefreshCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<bool>*>*, "currentRefreshCallbacks", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_modIOTermsAcknowledgedCallback(::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>*, "modIOTermsAcknowledgedCallback", ::GlobalNamespace::ModIOManager*>(std::forward<::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>* GlobalNamespace::ModIOManager::getStaticF_modIOTermsAcknowledgedCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::ModIORequestResultAnd_1<bool>>*, "modIOTermsAcknowledgedCallback", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_favoriteMods(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*, "favoriteMods", ::GlobalNamespace::ModIOManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>* GlobalNamespace::ModIOManager::getStaticF_favoriteMods()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*, "favoriteMods", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_outdatedModCMSVersions(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>*, "outdatedModCMSVersions", ::GlobalNamespace::ModIOManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>* GlobalNamespace::ModIOManager::getStaticF_outdatedModCMSVersions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,int32_t>*, "outdatedModCMSVersions", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOLoginStarted(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOLoginStarted", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::ModIOManager::getStaticF_OnModIOLoginStarted()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOLoginStarted", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOLoggedIn(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOLoggedIn", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::ModIOManager::getStaticF_OnModIOLoggedIn()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOLoggedIn", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOLoginFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnModIOLoginFailed", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent_1<::StringW>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* GlobalNamespace::ModIOManager::getStaticF_OnModIOLoginFailed()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::StringW>*, "OnModIOLoginFailed", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOLoggedOut(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOLoggedOut", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::ModIOManager::getStaticF_OnModIOLoggedOut()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOLoggedOut", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOUserChanged(::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>*, "OnModIOUserChanged", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>* GlobalNamespace::ModIOManager::getStaticF_OnModIOUserChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_1<::Modio::Users::User*>*, "OnModIOUserChanged", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModManagementEvent(::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>*, "OnModManagementEvent", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>*>(value));
}
inline ::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>* GlobalNamespace::ModIOManager::getStaticF_OnModManagementEvent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent_4<::Modio::Mods::Mod*,::Modio::Mods::Modfile*,::GlobalNamespace::ModInstallationManagement_OperationType,::GlobalNamespace::ModInstallationManagement_OperationPhase>*, "OnModManagementEvent", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOCacheRefreshing(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOCacheRefreshing", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::ModIOManager::getStaticF_OnModIOCacheRefreshing()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOCacheRefreshing", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_OnModIOCacheRefreshed(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOCacheRefreshed", ::GlobalNamespace::ModIOManager*>(std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::ModIOManager::getStaticF_OnModIOCacheRefreshed()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityEvent*, "OnModIOCacheRefreshed", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_associationMaxRetries(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "associationMaxRetries", ::GlobalNamespace::ModIOManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ModIOManager::getStaticF_associationMaxRetries()  {
return ::cordl_internals::getStaticField<int32_t, "associationMaxRetries", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::setStaticF_currentAssociationRetries(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "currentAssociationRetries", ::GlobalNamespace::ModIOManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ModIOManager::getStaticF_currentAssociationRetries()  {
return ::cordl_internals::getStaticField<int32_t, "currentAssociationRetries", ::GlobalNamespace::ModIOManager*>();
}
inline void GlobalNamespace::ModIOManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::OnUGCEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnUGCEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::OnUGCDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnUGCDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::OnMapAccessEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnMapAccessEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::PrefetchFeaturedMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"PrefetchFeaturedMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsFeaturedMap(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsFeaturedMap", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>* GlobalNamespace::ModIOManager::GetFeaturedMaps(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetFeaturedMaps", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, forceRefresh);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::InitInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"InitInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,bool>>* GlobalNamespace::ModIOManager::HasAcceptedLatestTerms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"HasAcceptedLatestTerms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,bool>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::ShowTermsOfUseAtGameLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ShowTermsOfUseAtGameLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModIOManager::SaveAcceptedTermsIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SaveAcceptedTermsIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::ShowModIOTermsOfUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ShowModIOTermsOfUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::OnModIOTermsOfUseAcknowledged(bool  accepted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnModIOTermsOfUseAcknowledged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accepted);
}
inline void GlobalNamespace::ModIOManager::EnableModManagement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"EnableModManagement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::DisableModManagement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"DisableModManagement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod, modfile, jobType, jobPhase);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModIOManager::RefreshModCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RefreshModCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsRefreshing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsRefreshing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int32_t>>* GlobalNamespace::ModIOManager::IsModOutdated(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsModOutdated", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int32_t>>*>(nullptr, ___internal_method, modId);
}
inline ::System::ValueTuple_2<bool,int32_t> GlobalNamespace::ModIOManager::IsModOutdated(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsModOutdated", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,int32_t>>(nullptr, ___internal_method, mod);
}
inline void GlobalNamespace::ModIOManager::SaveFavoriteMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SaveFavoriteMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>* GlobalNamespace::ModIOManager::GetFavoriteMods(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetFavoriteMods", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, forceRefresh);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::AddFavorite(::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"AddFavorite", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<::Modio::Error*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, modId, callback);
}
inline ::Modio::Error* GlobalNamespace::ModIOManager::RemoveFavorite(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RemoveFavorite", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(nullptr, ___internal_method, modId);
}
inline bool GlobalNamespace::ModIOManager::IsModFavorited(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsModFavorited", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, modId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>* GlobalNamespace::ModIOManager::GetInstalledMods(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetInstalledMods", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>*>(nullptr, ___internal_method, forceRefresh);
}
inline bool GlobalNamespace::ModIOManager::ValidateInstalledMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ValidateInstalledMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mod);
}
inline ::System::ValueTuple_2<bool,int32_t> GlobalNamespace::ModIOManager::IsInstalledModOutdated(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsInstalledModOutdated", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,int32_t>>(nullptr, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ModIOManager::RefreshUserProfile(::System::Action_1<bool>*  callback, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RefreshUserProfile", {}, {::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, callback, force);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>* GlobalNamespace::ModIOManager::GetMods(::System::Collections::Generic::ICollection_1<int64_t>*  modIds, bool  forceRefresh, ::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetMods", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, modIds, forceRefresh, callback);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* GlobalNamespace::ModIOManager::GetMod(::Modio::Mods::ModId  modId, bool  forceUpdate, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>*>(nullptr, ___internal_method, modId, forceUpdate, callback);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>* GlobalNamespace::ModIOManager::GetModLogo(::Modio::Mods::Mod*  mod, ::System::Action_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetModLogo", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>*>(nullptr, ___internal_method, mod, callback);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* GlobalNamespace::ModIOManager::GetMods(::Modio::API::Mods_ModioAPI_GetModsFilter*  searchFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetMods", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, searchFilter);
}
inline void GlobalNamespace::ModIOManager::ModIOUserChanged(::Modio::Users::User*  currentUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentUser);
}
inline void GlobalNamespace::ModIOManager::ModIOUserSyncComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ModIOUserSyncComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsLoggingIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsLoggingIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsLoggingOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsLoggingOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::ModIOManager::GetCurrentUsername()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetCurrentUsername", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::ModIOManager::GetCurrentUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetCurrentUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::ModIOManager::GetCurrentAuthToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetCurrentAuthToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::IsAuthenticated(bool  sendEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"IsAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sendEvents);
}
inline void GlobalNamespace::ModIOManager::LogoutFromModIO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"LogoutFromModIO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::SetAccountLinkPrompter(::Modio::Customizations::IWssAuthPrompter*  prompter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SetAccountLinkPrompter", {}, {::i2c::type_of<::Modio::Customizations::IWssAuthPrompter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prompter);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::RequestAccountLinkCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RequestAccountLinkCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::CancelExternalAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"CancelExternalAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::RequestPlatformLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RequestPlatformLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::InitiatePlatformLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"InitiatePlatformLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::ContinuePlatformLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"ContinuePlatformLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::RequestEncryptedAppTicket(::System::Action_2<bool,::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"RequestEncryptedAppTicket", {}, {::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* GlobalNamespace::ModIOManager::GetOculusUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::ModIOManager::GetOculusAccessToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusAccessToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::ModIOManager::GetOculusUserProof()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusUserProof", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ModIOManager::GetOculusDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetOculusDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager::OnAuthenticationComplete(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnAuthenticationComplete", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline ::GlobalNamespace::ModIOManager_ModIOAuthMethod GlobalNamespace::ModIOManager::GetLastAuthMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetLastAuthMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModIOManager_ModIOAuthMethod>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>* GlobalNamespace::ModIOManager::GetSubscribedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetSubscribedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::Mod*>>>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::SubscribeToMod(::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"SubscribeToMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<::Modio::Error*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, modId, callback);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GlobalNamespace::ModIOManager::UnsubscribeFromMod(::Modio::Mods::ModId  modId, ::System::Action_1<::Modio::Error*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"UnsubscribeFromMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<::Modio::Error*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, modId, callback);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::ModFileState>>* GlobalNamespace::ModIOManager::GetSubscribedModStatus(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetSubscribedModStatus", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::ModFileState>>*>(nullptr, ___internal_method, modId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::Mod*>>* GlobalNamespace::ModIOManager::GetSubscribedModProfile(::Modio::Mods::ModId  modId, ::System::Action_2<bool,::Modio::Mods::Mod*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetSubscribedModProfile", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_2<bool,::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::Modio::Mods::Mod*>>*>(nullptr, ___internal_method, modId, callback);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Mods::ModFileState>* GlobalNamespace::ModIOManager::GetModStatus(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"GetModStatus", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Mods::ModFileState>*>(nullptr, ___internal_method, modId);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::ModIOManager::DownloadMod(::Modio::Mods::ModId  modId, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"DownloadMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, modId, callback);
}
inline void GlobalNamespace::ModIOManager::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager::TryGetNewMapsModId(::by_ref<::Modio::Mods::ModId>  newMapsModId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"TryGetNewMapsModId", {}, {::i2c::type_of<::by_ref<::Modio::Mods::ModId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newMapsModId);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ModIOManager::AssociateMothershipAndModIOAccounts(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*  data, ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {"AssociateMothershipAndModIOAccounts", {}, {::i2c::type_of<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, data, callback);
}
inline void GlobalNamespace::ModIOManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModIOManager* GlobalNamespace::ModIOManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModIOManager*>());
}
/// @brief Convert operator to "::Modio::Customizations::ISteamCredentialProvider"
constexpr  GlobalNamespace::ModIOManager::operator ::Modio::Customizations::ISteamCredentialProvider*() noexcept {
return static_cast<::Modio::Customizations::ISteamCredentialProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Customizations::ISteamCredentialProvider"
constexpr ::Modio::Customizations::ISteamCredentialProvider* GlobalNamespace::ModIOManager::i___Modio__Customizations__ISteamCredentialProvider() noexcept {
return static_cast<::Modio::Customizations::ISteamCredentialProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Customizations::IOculusCredentialProvider"
constexpr  GlobalNamespace::ModIOManager::operator ::Modio::Customizations::IOculusCredentialProvider*() noexcept {
return static_cast<::Modio::Customizations::IOculusCredentialProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Customizations::IOculusCredentialProvider"
constexpr ::Modio::Customizations::IOculusCredentialProvider* GlobalNamespace::ModIOManager::i___Modio__Customizations__IOculusCredentialProvider() noexcept {
return static_cast<::Modio::Customizations::IOculusCredentialProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOManager::ModIOManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::*)(int32_t)>(&::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59ccef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::*)()>(&::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59cd730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::*)()>(&::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::MoveNext)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x59cd734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::*)()>(&::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cde54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::*)()>(&::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cde5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::*)()>(&::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cde94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* const& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_set_data(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>* const& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114* GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOManager__AssociateMothershipAndModIOAccounts_d__114::ModIOManager__AssociateMothershipAndModIOAccounts_d__114()   {
}
