#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_StartingMapConfig_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_def.hpp"
#include "GlobalNamespace/zzzz__BuilderTableSerializationConfig_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipUserData_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataResponse_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_GetMapDataFromPlayerRequestData_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_LocalPublishInfo_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_MapSortMethod_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_StartingMapConfig_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager__Start_d__100_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager__WaitForMothership_d__149_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager__WaitForPlayfabSessionToken_d__130_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserDataRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserDataResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnGetTableConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnGetTableConfiguration)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c362ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnGetTableConfiguration", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnGetTableConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnGetTableConfiguration)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3639c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnGetTableConfiguration", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnGetTitleDataBuildComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnGetTitleDataBuildComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3644c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnGetTitleDataBuildComplete", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnGetTitleDataBuildComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnGetTitleDataBuildComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c364fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnGetTitleDataBuildComplete", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnSavePrivateScanSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<int32_t>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnSavePrivateScanSuccess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c365ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnSavePrivateScanSuccess", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnSavePrivateScanSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<int32_t>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnSavePrivateScanSuccess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3665c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnSavePrivateScanSuccess", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnSavePrivateScanFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_2<int32_t,::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnSavePrivateScanFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3670c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnSavePrivateScanFailed", {}, {::i2c::type_of<::System::Action_2<int32_t,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnSavePrivateScanFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_2<int32_t,::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnSavePrivateScanFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c367bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnSavePrivateScanFailed", {}, {::i2c::type_of<::System::Action_2<int32_t,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnFetchPrivateScanComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_2<int32_t,bool>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnFetchPrivateScanComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnFetchPrivateScanComplete", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnFetchPrivateScanComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_2<int32_t,bool>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnFetchPrivateScanComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3691c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnFetchPrivateScanComplete", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnFoundDefaultSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnFoundDefaultSharedBlocksMap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c369cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnFoundDefaultSharedBlocksMap", {}, {::i2c::type_of<::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnFoundDefaultSharedBlocksMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnFoundDefaultSharedBlocksMap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c36a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnFoundDefaultSharedBlocksMap", {}, {::i2c::type_of<::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnGetPopularMapsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<bool>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnGetPopularMapsComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c36b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnGetPopularMapsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnGetPopularMapsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Action_1<bool>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnGetPopularMapsComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c36bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnGetPopularMapsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnRecentMapIdsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnRecentMapIdsUpdated)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c36c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnRecentMapIdsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnRecentMapIdsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnRecentMapIdsUpdated)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c36d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnRecentMapIdsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.add_OnSaveTimeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::add_OnSaveTimeUpdated)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c36e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnSaveTimeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.remove_OnSaveTimeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::remove_OnSaveTimeUpdated)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c36f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnSaveTimeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.get_LatestPopularMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::get_LatestPopularMaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c36ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"get_LatestPopularMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.get_BuildData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::get_BuildData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c37004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"get_BuildData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.IsWaitingOnRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::IsWaitingOnRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c3700c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"IsWaitingOnRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c3702c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c371d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnDestroy)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5c37278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c373c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.TryGetCachedSharedBlocksMapByMapID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW, ::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>)>(&::GorillaTagScripts::Builder::SharedBlocksManager::TryGetCachedSharedBlocksMapByMapID)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c37534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"TryGetCachedSharedBlocksMapByMapID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.AddMapToResponseCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::AddMapToResponseCache)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5c376c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"AddMapToResponseCache", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.IsMapIDValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::IsMapIDValid)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c379a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"IsMapIDValid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetRecentUpVotes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedList_1<::StringW>* (*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetRecentUpVotes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c37ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetRecentUpVotes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetLocalMapIDs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetLocalMapIDs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c37b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetLocalMapIDs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.SetPublishTimeForSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::DateTime)>(&::GorillaTagScripts::Builder::SharedBlocksManager::SetPublishTimeForSlot)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c37b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SetPublishTimeForSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.SetMapIDAndPublishTimeForSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW, ::System::DateTime)>(&::GorillaTagScripts::Builder::SharedBlocksManager::SetMapIDAndPublishTimeForSlot)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c37d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SetMapIDAndPublishTimeForSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetPublishInfoForSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SharedBlocksManager_LocalPublishInfo (*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetPublishInfoForSlot)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c37e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPublishInfoForSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.LoadPlayerPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::LoadPlayerPrefs)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x5c37f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"LoadPlayerPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.SaveRecentVotesToPlayerPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::SaveRecentVotesToPlayerPrefs)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c38940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SaveRecentVotesToPlayerPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.SaveLocalMapIdsToPlayerPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::SaveLocalMapIdsToPlayerPrefs)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c389f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SaveLocalMapIdsToPlayerPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW, bool, ::System::Action_2<bool,::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestVote)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5c38aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestVote", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.PostVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*, ::System::Action_2<bool,::StringW>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::PostVote)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c38cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PostVote", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*>(), ::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RefreshPopularMapsForRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::RefreshPopularMapsForRandom)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c37438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RefreshPopularMapsForRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestGetConfiguredTopMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestGetConfiguredTopMaps)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c38db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestGetConfiguredTopMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestPublishMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestPublishMap)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5c38fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestPublishMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.PublishMapComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(bool, ::StringW, ::StringW, int64_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::PublishMapComplete)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5c392a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PublishMapComplete", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.PostPublishMapRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*, ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::PostPublishMapRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c39790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PostPublishMapRequest", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestMapDataFromID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestMapDataFromID)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c3985c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestMapDataFromID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetMapDataFromID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetMapDataFromID)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c39a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetMapDataFromID", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetMapDataFromIDComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW, ::StringW, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetMapDataFromIDComplete)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c39b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetMapDataFromIDComplete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestGetTopMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t, int32_t, ::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestGetTopMaps)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c38dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestGetTopMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetTopMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*, ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetTopMaps)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c39c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetTopMaps", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetTopMapsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetTopMapsComplete)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5c39d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetTopMapsComplete", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestUpdateMapActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW, bool)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestUpdateMapActive)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c3a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestUpdateMapActive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.PostUpdateMapActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*, ::System::Action_1<bool>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::PostUpdateMapActive)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c3a408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PostUpdateMapActive", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnUpdatedMapActiveComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(bool)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnUpdatedMapActiveComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3a4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnUpdatedMapActiveComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.WaitForPlayfabSessionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::WaitForPlayfabSessionToken)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c3a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"WaitForPlayfabSessionToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestTableConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestTableConfiguration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c3a598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestTableConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.FetchConfigurationFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::FetchConfigurationFromTitleData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c3a5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"FetchConfigurationFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetConfigurationSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetConfigurationSuccess)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c3a6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetConfigurationSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetConfigurationFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetConfigurationFail)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c3a7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetConfigurationFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RetryAfterWaitTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(float_t, ::System::Action*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RetryAfterWaitTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c3a98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RetryAfterWaitTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.FetchTitleDataBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::FetchTitleDataBuild)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c3aa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"FetchTitleDataBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetTitleDataBuildSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetTitleDataBuildSuccess)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c3ab98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetTitleDataBuildSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetTitleDataBuildFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetTitleDataBuildFail)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5c3aca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetTitleDataBuildFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetPlayfabKeyForSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetPlayfabKeyForSlot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c3ae78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPlayfabKeyForSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetPlayfabSlotTimeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetPlayfabSlotTimeKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c3aeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPlayfabSlotTimeKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.GetPlayfabLastSaveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::GetPlayfabLastSaveTime)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5c38688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPlayfabLastSaveTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetLastSaveTimeSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::ClientModels::GetUserDataResult*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetLastSaveTimeSuccess)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c3b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetLastSaveTimeSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetLastSaveTimeFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetLastSaveTimeFailure)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c3af6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetLastSaveTimeFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.FetchBuildFromPlayfab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::FetchBuildFromPlayfab)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5c3b220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"FetchBuildFromPlayfab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.SendPlayfabUserDataRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::ClientModels::GetUserDataRequest*, ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::SendPlayfabUserDataRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c3b488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SendPlayfabUserDataRequest", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnFetchBuildFromPlayfabSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::ClientModels::GetUserDataResult*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnFetchBuildFromPlayfabSuccess)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c3b54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnFetchBuildFromPlayfabSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnFetchBuildFromPlayfabFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnFetchBuildFromPlayfabFail)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5c3b904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnFetchBuildFromPlayfabFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.TryGetRandomPopularMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>)>(&::GorillaTagScripts::Builder::SharedBlocksManager::TryGetRandomPopularMap)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5c3bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"TryGetRandomPopularMap", {}, {::i2c::type_of<::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.WaitForMothership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::WaitForMothership)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c3bdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"WaitForMothership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestSavePrivateScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t, ::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestSavePrivateScan)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c3b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestSavePrivateScan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.PullMothershipPrivateScanThenPush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::PullMothershipPrivateScanThenPush)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c3be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PullMothershipPrivateScanThenPush", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.PushMothershipPrivateScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t, bool)>(&::GorillaTagScripts::Builder::SharedBlocksManager::PushMothershipPrivateScan)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c3c778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PushMothershipPrivateScan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestSetMothershipUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::StringW, ::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestSetMothershipUserData)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5c3bfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestSetMothershipUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnSetMothershipUserDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GlobalNamespace::SetUserDataResponse*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnSetMothershipUserDataSuccess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c3c998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnSetMothershipUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnSetMothershipUserDataFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnSetMothershipUserDataFail)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c3ca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnSetMothershipUserDataFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnSetMothershipDataComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(bool)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnSetMothershipDataComplete)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c3c87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnSetMothershipDataComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.TryGetPrivateScanResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t, ::by_ref<::StringW>)>(&::GorillaTagScripts::Builder::SharedBlocksManager::TryGetPrivateScanResponse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c3cb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"TryGetPrivateScanResponse", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.RequestFetchPrivateScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::RequestFetchPrivateScan)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5c3c294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestFetchPrivateScan", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetMothershipPrivateScanSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GlobalNamespace::MothershipUserData*)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetMothershipPrivateScanSuccess)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5c3cbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetMothershipPrivateScanSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager.OnGetMothershipPrivateScanFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager::OnGetMothershipPrivateScanFail)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c3cee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetMothershipPrivateScanFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5c3d090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnGetTableConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetTableConfiguration;
}
constexpr ::System::Action_1<::StringW>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnGetTableConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetTableConfiguration;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnGetTableConfiguration(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetTableConfiguration = value;
}
constexpr ::System::Action_1<::StringW>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnGetTitleDataBuildComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetTitleDataBuildComplete;
}
constexpr ::System::Action_1<::StringW>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnGetTitleDataBuildComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetTitleDataBuildComplete;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnGetTitleDataBuildComplete(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetTitleDataBuildComplete = value;
}
constexpr ::System::Action_1<int32_t>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnSavePrivateScanSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSavePrivateScanSuccess;
}
constexpr ::System::Action_1<int32_t>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnSavePrivateScanSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSavePrivateScanSuccess;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnSavePrivateScanSuccess(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSavePrivateScanSuccess = value;
}
constexpr ::System::Action_2<int32_t,::StringW>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnSavePrivateScanFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSavePrivateScanFailed;
}
constexpr ::System::Action_2<int32_t,::StringW>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnSavePrivateScanFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSavePrivateScanFailed;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnSavePrivateScanFailed(::System::Action_2<int32_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSavePrivateScanFailed = value;
}
constexpr ::System::Action_2<int32_t,bool>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnFetchPrivateScanComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFetchPrivateScanComplete;
}
constexpr ::System::Action_2<int32_t,bool>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnFetchPrivateScanComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFetchPrivateScanComplete;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnFetchPrivateScanComplete(::System::Action_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFetchPrivateScanComplete = value;
}
constexpr ::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnFoundDefaultSharedBlocksMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFoundDefaultSharedBlocksMap;
}
constexpr ::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnFoundDefaultSharedBlocksMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFoundDefaultSharedBlocksMap;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnFoundDefaultSharedBlocksMap(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFoundDefaultSharedBlocksMap = value;
}
constexpr ::System::Action_1<bool>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnGetPopularMapsComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetPopularMapsComplete;
}
constexpr ::System::Action_1<bool>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_OnGetPopularMapsComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetPopularMapsComplete;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_OnGetPopularMapsComplete(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetPopularMapsComplete = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderTableSerializationConfig>& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_serializationConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializationConfig;
}
constexpr ::UnityW<::GlobalNamespace::BuilderTableSerializationConfig> const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_serializationConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializationConfig;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_serializationConfig(::UnityW<::GlobalNamespace::BuilderTableSerializationConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializationConfig = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_maxRetriesOnFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_maxRetriesOnFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_maxRetriesOnFail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetriesOnFail = value;
}
constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_startingMapConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapConfig;
}
constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_startingMapConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingMapConfig;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_startingMapConfig(::GlobalNamespace::SharedBlocksManager_StartingMapConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingMapConfig = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasQueriedSaveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasQueriedSaveTime;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasQueriedSaveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasQueriedSaveTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_hasQueriedSaveTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasQueriedSaveTime = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchedTableConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchedTableConfig;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchedTableConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchedTableConfig;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_fetchedTableConfig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchedTableConfig = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTableConfigRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTableConfigRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTableConfigRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTableConfigRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_fetchTableConfigRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchTableConfigRetryCount = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_tableConfigResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableConfigResponse;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_tableConfigResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableConfigResponse;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_tableConfigResponse(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableConfigResponse = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTitleDataBuildInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTitleDataBuildInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTitleDataBuildInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTitleDataBuildInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_fetchTitleDataBuildInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchTitleDataBuildInProgress = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTitleDataBuildComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTitleDataBuildComplete;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTitleDataBuildComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTitleDataBuildComplete;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_fetchTitleDataBuildComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchTitleDataBuildComplete = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTitleDataRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTitleDataRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchTitleDataRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchTitleDataRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_fetchTitleDataRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchTitleDataRetryCount = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_titleDataBuildCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataBuildCache;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_titleDataBuildCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataBuildCache;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_titleDataBuildCache(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataBuildCache = value;
}
constexpr ::ArrayW<bool>& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasPulledPrivateScanPlayfab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledPrivateScanPlayfab;
}
constexpr ::ArrayW<bool> const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasPulledPrivateScanPlayfab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledPrivateScanPlayfab;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_hasPulledPrivateScanPlayfab(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPulledPrivateScanPlayfab = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchPlayfabBuildsRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchPlayfabBuildsRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_fetchPlayfabBuildsRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchPlayfabBuildsRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_fetchPlayfabBuildsRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchPlayfabBuildsRetryCount = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_publicSlotIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicSlotIndex;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_publicSlotIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicSlotIndex;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_publicSlotIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publicSlotIndex = value;
}
constexpr ::ArrayW<::StringW>& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_privateScanDataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateScanDataCache;
}
constexpr ::ArrayW<::StringW> const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_privateScanDataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateScanDataCache;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_privateScanDataCache(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateScanDataCache = value;
}
constexpr ::ArrayW<bool>& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasPulledPrivateScanMothership()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledPrivateScanMothership;
}
constexpr ::ArrayW<bool> const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasPulledPrivateScanMothership() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledPrivateScanMothership;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_hasPulledPrivateScanMothership(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPulledPrivateScanMothership = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasPulledDevScan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledDevScan;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasPulledDevScan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledDevScan;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_hasPulledDevScan(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPulledDevScan = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_devScanDataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devScanDataCache;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_devScanDataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devScanDataCache;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_devScanDataCache(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devScanDataCache = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_saveScanInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveScanInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_saveScanInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveScanInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_saveScanInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveScanInProgress = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_currentSaveScanIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSaveScanIndex;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_currentSaveScanIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSaveScanIndex;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_currentSaveScanIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSaveScanIndex = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_currentSaveScanData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSaveScanData;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_currentSaveScanData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSaveScanData;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_currentSaveScanData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSaveScanData = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getScanInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getScanInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getScanInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getScanInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_getScanInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getScanInProgress = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_currentGetScanIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGetScanIndex;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_currentGetScanIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGetScanIndex;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_currentGetScanIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGetScanIndex = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_voteRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_voteRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_voteRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voteRetryCount = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_voteInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_voteInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_voteInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voteInProgress = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_publishRequestInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publishRequestInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_publishRequestInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publishRequestInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_publishRequestInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___publishRequestInProgress = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_postPublishMapRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postPublishMapRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_postPublishMapRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postPublishMapRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_postPublishMapRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postPublishMapRetryCount = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getMapDataFromIDInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getMapDataFromIDInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getMapDataFromIDInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getMapDataFromIDInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_getMapDataFromIDInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getMapDataFromIDInProgress = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getMapDataFromIDRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getMapDataFromIDRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getMapDataFromIDRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getMapDataFromIDRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_getMapDataFromIDRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getMapDataFromIDRetryCount = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getTopMapsInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getTopMapsInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getTopMapsInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getTopMapsInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_getTopMapsInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getTopMapsInProgress = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getTopMapsRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getTopMapsRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getTopMapsRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getTopMapsRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_getTopMapsRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getTopMapsRetryCount = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasCachedTopMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCachedTopMaps;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasCachedTopMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCachedTopMaps;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_hasCachedTopMaps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCachedTopMaps = value;
}
constexpr double_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_lastGetTopMapsTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetTopMapsTime;
}
constexpr double_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_lastGetTopMapsTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetTopMapsTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_lastGetTopMapsTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGetTopMapsTime = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_updateMapActiveInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMapActiveInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_updateMapActiveInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMapActiveInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_updateMapActiveInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateMapActiveInProgress = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_updateMapActiveRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMapActiveRetryCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_updateMapActiveRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMapActiveRetryCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_updateMapActiveRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateMapActiveRetryCount = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_latestPopularMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestPopularMaps;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_latestPopularMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestPopularMaps;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_latestPopularMaps(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestPopularMaps = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_mapResponseCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapResponseCache;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_mapResponseCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapResponseCache;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_mapResponseCache(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapResponseCache = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_defaultMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMap;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_defaultMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMap;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_defaultMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMap = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasDefaultMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDefaultMap;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_hasDefaultMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDefaultMap;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_hasDefaultMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasDefaultMap = value;
}
constexpr double_t& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_defaultMapCacheTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMapCacheTime;
}
constexpr double_t const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_defaultMapCacheTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMapCacheTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_defaultMapCacheTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMapCacheTime = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getDefaultMapInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getDefaultMapInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_get_getDefaultMapInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getDefaultMapInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager::__cordl_internal_set_getDefaultMapInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getDefaultMapInProgress = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_instance(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>, "instance", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>, "instance", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_OnRecentMapIdsUpdated(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnRecentMapIdsUpdated", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_OnRecentMapIdsUpdated()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnRecentMapIdsUpdated", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_OnSaveTimeUpdated(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSaveTimeUpdated", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_OnSaveTimeUpdated()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSaveTimeUpdated", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_saveDateKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "saveDateKeys", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_saveDateKeys()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "saveDateKeys", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_recentUpVotes(::System::Collections::Generic::LinkedList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::StringW>*, "recentUpVotes", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::System::Collections::Generic::LinkedList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::StringW>* GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_recentUpVotes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::StringW>*, "recentUpVotes", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_localPublishData(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>*, "localPublishData", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>* GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_localPublishData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>*, "localPublishData", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::setStaticF_localMapIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "localMapIds", ::GorillaTagScripts::Builder::SharedBlocksManager*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTagScripts::Builder::SharedBlocksManager::getStaticF_localMapIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "localMapIds", ::GorillaTagScripts::Builder::SharedBlocksManager*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnGetTableConfiguration(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnGetTableConfiguration", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnGetTableConfiguration(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnGetTableConfiguration", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnGetTitleDataBuildComplete(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnGetTitleDataBuildComplete", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnGetTitleDataBuildComplete(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnGetTitleDataBuildComplete", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnSavePrivateScanSuccess(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnSavePrivateScanSuccess", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnSavePrivateScanSuccess(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnSavePrivateScanSuccess", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnSavePrivateScanFailed(::System::Action_2<int32_t,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnSavePrivateScanFailed", {}, {::i2c::type_of<::System::Action_2<int32_t,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnSavePrivateScanFailed(::System::Action_2<int32_t,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnSavePrivateScanFailed", {}, {::i2c::type_of<::System::Action_2<int32_t,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnFetchPrivateScanComplete(::System::Action_2<int32_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnFetchPrivateScanComplete", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnFetchPrivateScanComplete(::System::Action_2<int32_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnFetchPrivateScanComplete", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnFoundDefaultSharedBlocksMap(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnFoundDefaultSharedBlocksMap", {}, {::i2c::type_of<::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnFoundDefaultSharedBlocksMap(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnFoundDefaultSharedBlocksMap", {}, {::i2c::type_of<::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnGetPopularMapsComplete(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnGetPopularMapsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnGetPopularMapsComplete(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnGetPopularMapsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnRecentMapIdsUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnRecentMapIdsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnRecentMapIdsUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnRecentMapIdsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::add_OnSaveTimeUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"add_OnSaveTimeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::remove_OnSaveTimeUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"remove_OnSaveTimeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* GorillaTagScripts::Builder::SharedBlocksManager::get_LatestPopularMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"get_LatestPopularMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GorillaTagScripts::Builder::SharedBlocksManager::get_BuildData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"get_BuildData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::IsWaitingOnRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"IsWaitingOnRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::TryGetCachedSharedBlocksMapByMapID(::StringW  mapID, ::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"TryGetCachedSharedBlocksMapByMapID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mapID, result);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::AddMapToResponseCache(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"AddMapToResponseCache", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::IsMapIDValid(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"IsMapIDValid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mapID);
}
inline ::System::Collections::Generic::LinkedList_1<::StringW>* GorillaTagScripts::Builder::SharedBlocksManager::GetRecentUpVotes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetRecentUpVotes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaTagScripts::Builder::SharedBlocksManager::GetLocalMapIDs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetLocalMapIDs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::SetPublishTimeForSlot(int32_t  slotID, ::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SetPublishTimeForSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slotID, time);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::SetMapIDAndPublishTimeForSlot(int32_t  slotID, ::StringW  mapID, ::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SetMapIDAndPublishTimeForSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slotID, mapID, time);
}
inline ::GlobalNamespace::SharedBlocksManager_LocalPublishInfo GorillaTagScripts::Builder::SharedBlocksManager::GetPublishInfoForSlot(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPublishInfoForSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>(nullptr, ___internal_method, slot);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::LoadPlayerPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"LoadPlayerPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::SaveRecentVotesToPlayerPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SaveRecentVotesToPlayerPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::SaveLocalMapIdsToPlayerPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SaveLocalMapIdsToPlayerPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestVote(::StringW  mapID, bool  up, ::System::Action_2<bool,::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestVote", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID, up, callback);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::PostVote(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*  data, ::System::Action_2<bool,::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PostVote", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*>(), ::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RefreshPopularMapsForRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RefreshPopularMapsForRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::RequestGetConfiguredTopMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestGetConfiguredTopMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestPublishMap(::StringW  userMetadataKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestPublishMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userMetadataKey);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::PublishMapComplete(bool  success, ::StringW  key, /* [CanBeNull] */ ::StringW  mapID, int64_t  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PublishMapComplete", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, key, mapID, response);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::PostPublishMapRequest(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*  data, ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PostPublishMapRequest", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestMapDataFromID(::StringW  mapID, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestMapDataFromID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID, callback);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::GetMapDataFromID(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*  data, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetMapDataFromID", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::GetMapDataFromIDComplete(::StringW  mapID, /* [CanBeNull] */ ::StringW  response, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetMapDataFromIDComplete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID, response, callback);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::RequestGetTopMaps(int32_t  pageNum, int32_t  pageSize, ::StringW  sort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestGetTopMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pageNum, pageSize, sort);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::GetTopMaps(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*  data, ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetTopMaps", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::GetTopMapsComplete(/* [CanBeNull] */ ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*  maps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetTopMapsComplete", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maps);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestUpdateMapActive(::StringW  userMetadataKey, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestUpdateMapActive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userMetadataKey, active);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::PostUpdateMapActive(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*  data, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PostUpdateMapActive", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnUpdatedMapActiveComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnUpdatedMapActiveComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline ::System::Threading::Tasks::Task* GorillaTagScripts::Builder::SharedBlocksManager::WaitForPlayfabSessionToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"WaitForPlayfabSessionToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestTableConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestTableConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::FetchConfigurationFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"FetchConfigurationFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetConfigurationSuccess(::StringW  dataRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetConfigurationSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataRecord);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetConfigurationFail(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetConfigurationFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::RetryAfterWaitTime(float_t  waitTime, ::System::Action*  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RetryAfterWaitTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, waitTime, function);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::FetchTitleDataBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"FetchTitleDataBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetTitleDataBuildSuccess(::StringW  dataRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetTitleDataBuildSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataRecord);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetTitleDataBuildFail(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetTitleDataBuildFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksManager::GetPlayfabKeyForSlot(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPlayfabKeyForSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, slot);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksManager::GetPlayfabSlotTimeKey(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPlayfabSlotTimeKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, slot);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::GetPlayfabLastSaveTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"GetPlayfabLastSaveTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetLastSaveTimeSuccess(::PlayFab::ClientModels::GetUserDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetLastSaveTimeSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetLastSaveTimeFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetLastSaveTimeFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::FetchBuildFromPlayfab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"FetchBuildFromPlayfab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager::SendPlayfabUserDataRequest(::PlayFab::ClientModels::GetUserDataRequest*  request, ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"SendPlayfabUserDataRequest", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, request, resultCallback, errorCallback);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnFetchBuildFromPlayfabSuccess(::PlayFab::ClientModels::GetUserDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnFetchBuildFromPlayfabSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnFetchBuildFromPlayfabFail(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnFetchBuildFromPlayfabFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::TryGetRandomPopularMap(::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"TryGetRandomPopularMap", {}, {::i2c::type_of<::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, map);
}
inline ::System::Threading::Tasks::Task* GorillaTagScripts::Builder::SharedBlocksManager::WaitForMothership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"WaitForMothership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestSavePrivateScan(int32_t  scanIndex, ::StringW  scanData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestSavePrivateScan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scanIndex, scanData);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::PullMothershipPrivateScanThenPush(int32_t  scanIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PullMothershipPrivateScanThenPush", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scanIndex);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::PushMothershipPrivateScan(int32_t  scan, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"PushMothershipPrivateScan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scan, success);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestSetMothershipUserData(::StringW  keyName, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestSetMothershipUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnSetMothershipUserDataSuccess(::GlobalNamespace::SetUserDataResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnSetMothershipUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnSetMothershipUserDataFail(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnSetMothershipUserDataFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnSetMothershipDataComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnSetMothershipDataComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager::TryGetPrivateScanResponse(int32_t  scanSlot, ::by_ref<::StringW>  scanData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"TryGetPrivateScanResponse", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scanSlot, scanData);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::RequestFetchPrivateScan(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"RequestFetchPrivateScan", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetMothershipPrivateScanSuccess(::GlobalNamespace::MothershipUserData*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetMothershipPrivateScanSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::OnGetMothershipPrivateScanFail(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {"OnGetMothershipPrivateScanFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager* GorillaTagScripts::Builder::SharedBlocksManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager::SharedBlocksManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c3b524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::MoveNext)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c3f3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3f608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::PlayFab::ClientModels::GetUserDataRequest*& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::PlayFab::ClientModels::GetUserDataRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_set_request(::PlayFab::ClientModels::GetUserDataRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get_resultCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultCallback;
}
constexpr ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>* const& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get_resultCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultCallback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_set_resultCallback(::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultCallback = value;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::__cordl_internal_set_errorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145* GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145::SharedBlocksManager__SendPlayfabUserDataRequest_d__145()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c3aa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3f2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c3f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3f380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3f388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3f3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get_waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get_waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_set_waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTime = value;
}
constexpr ::System::Action*& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr ::System::Action* const& GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::__cordl_internal_set_function(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___function = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135* GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135::SharedBlocksManager__RetryAfterWaitTime_d__135()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c38d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x5c3ebd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3f2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_2<bool,::StringW>*& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_2<bool,::StringW>* const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set_callback(::System::Action_2<bool,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115* GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115::SharedBlocksManager__PostVote_d__115()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c3a4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3e7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5c3e7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3eb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3eb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3ebcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<bool>*& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<bool>* const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set_callback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128* GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128::SharedBlocksManager__PostUpdateMapActive_d__128()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c39834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3e0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::MoveNext)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x5c3e0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3e790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3e798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData* const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback* const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set_callback(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120* GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120::SharedBlocksManager__PostPublishMapRequest_d__120()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c39cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3dbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::MoveNext)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5c3dbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3e098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3e0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>* const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set_callback(::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125* GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125::SharedBlocksManager__GetTopMaps_d__125()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c39b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3d770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5c3d774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3dba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback* const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set_callback(::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122* GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122::SharedBlocksManager__GetMapDataFromID_d__122()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3799c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0._AddMapToResponseCache_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::_AddMapToResponseCache_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c3d744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*>(),
                        {"<AddMapToResponseCache>b__0", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::__cordl_internal_set_map(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::_AddMapToResponseCache_b__0(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*>(),
                        {"<AddMapToResponseCache>b__0", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0* GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0::SharedBlocksManager___c__DisplayClass104_0()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::*)(::System::Object*, ::System::IntPtr)>(&::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c3d5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c3d704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c3d718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::*)(::System::IAsyncResult*)>(&::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c3d738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::Invoke(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::System::IAsyncResult* GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::BeginInvoke(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  response, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, response, callback, object);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback* GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback::SharedBlocksManager_BlocksMapRequestCallback()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::*)(::System::Object*, ::System::IntPtr)>(&::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c396f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::*)(bool, ::StringW, ::StringW, int64_t)>(&::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c3d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::*)(bool, ::StringW, ::StringW, int64_t, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c3d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::*)(::System::IAsyncResult*)>(&::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c3d5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::Invoke(bool  success, ::StringW  key, ::StringW  mapID, int64_t  responseCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, key, mapID, responseCode);
}
inline ::System::IAsyncResult* GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::BeginInvoke(bool  success, ::StringW  key, ::StringW  mapID, int64_t  responseCode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, success, key, mapID, responseCode, callback, object);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback* GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback::SharedBlocksManager_PublishMapRequestCallback()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3a400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::__cordl_internal_get_userdataMetadataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userdataMetadataKey;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::__cordl_internal_get_userdataMetadataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userdataMetadataKey;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::__cordl_internal_set_userdataMetadataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userdataMetadataKey = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::__cordl_internal_get_setActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setActive;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::__cordl_internal_get_setActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setActive;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::__cordl_internal_set_setActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setActive = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest* GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest::SharedBlocksManager_UpdateMapActiveRequest()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_mapId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_mapId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_mapId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapId = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_userDataMetadataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userDataMetadataKey;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_userDataMetadataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userDataMetadataKey;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_userDataMetadataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userDataMetadataKey = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_nickname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickname;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_nickname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickname;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_nickname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nickname = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_createdTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createdTime;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_createdTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createdTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_createdTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createdTime = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_updatedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedTime;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_updatedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_updatedTime(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatedTime = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_voteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_voteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteCount;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_voteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voteCount = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData* GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData::SharedBlocksManager_SharedBlocksMapMetaData()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData* const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_set_result(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_get_statusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCode;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_get_statusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCode;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_set_statusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusCode = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::__cordl_internal_set_error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse* GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse::SharedBlocksManager_GetMapIDFromPlayerResponse()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::__cordl_internal_get_requestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::__cordl_internal_get_requestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::__cordl_internal_set_requestId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestId = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::__cordl_internal_get_requestUserDataMetaKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestUserDataMetaKey;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::__cordl_internal_get_requestUserDataMetaKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestUserDataMetaKey;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::__cordl_internal_set_requestUserDataMetaKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestUserDataMetaKey = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest* GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest::SharedBlocksManager_GetMapIDFromPlayerRequest()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c39a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::__cordl_internal_get_mapId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::__cordl_internal_get_mapId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::__cordl_internal_set_mapId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapId = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest* GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest::SharedBlocksManager_GetMapDataFromIDRequest()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c39c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_page()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___page;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_page() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___page;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_set_page(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___page = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_pageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSize;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_pageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSize;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_set_pageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageSize = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_sort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sort;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_sort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sort;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_set_sort(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sort = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_ShowInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowInactive;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_get_ShowInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowInactive;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::__cordl_internal_set_ShowInactive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowInactive = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest* GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest::SharedBlocksManager_GetMapsRequest()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c396e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::__cordl_internal_get_userdataMetadataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userdataMetadataKey;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::__cordl_internal_get_userdataMetadataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userdataMetadataKey;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::__cordl_internal_set_userdataMetadataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userdataMetadataKey = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::__cordl_internal_get_playerNickname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNickname;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::__cordl_internal_get_playerNickname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNickname;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::__cordl_internal_set_playerNickname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNickname = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData* GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData::SharedBlocksManager_PublishMapRequestData()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c38ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::__cordl_internal_get_mapId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::__cordl_internal_get_mapId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::__cordl_internal_set_mapId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapId = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::__cordl_internal_get_vote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vote;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::__cordl_internal_get_vote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vote;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::__cordl_internal_set_vote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vote = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest* GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest::SharedBlocksManager_VoteRequest()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_get_mothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_get_mothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_set_mothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipToken = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_get_mothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_get_mothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::__cordl_internal_set_mothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipEnvId = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase* GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase::SharedBlocksManager_SharedBlocksRequestBase()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.get_MapID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_MapID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_MapID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.set_MapID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_MapID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_MapID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.get_CreatorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_CreatorID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_CreatorID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.set_CreatorID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_CreatorID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_CreatorID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.get_CreatorNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_CreatorNickName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_CreatorNickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.set_CreatorNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_CreatorNickName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_CreatorNickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.get_CreateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_CreateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_CreateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.set_CreateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)(::System::DateTime)>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_CreateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_CreateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.get_UpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_UpdateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_UpdateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.set_UpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)(::System::DateTime)>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_UpdateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_UpdateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.get_MapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_MapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_MapData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap.set_MapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_MapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3d524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_MapData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::*)()>(&::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c3982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__MapID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MapID_k__BackingField;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__MapID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MapID_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_set__MapID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MapID_k__BackingField = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__CreatorID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatorID_k__BackingField;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__CreatorID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatorID_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_set__CreatorID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CreatorID_k__BackingField = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__CreatorNickName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatorNickName_k__BackingField;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__CreatorNickName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreatorNickName_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_set__CreatorNickName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CreatorNickName_k__BackingField = value;
}
constexpr ::System::DateTime& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__CreateTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreateTime_k__BackingField;
}
constexpr ::System::DateTime const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__CreateTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreateTime_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_set__CreateTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CreateTime_k__BackingField = value;
}
constexpr ::System::DateTime& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__UpdateTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateTime_k__BackingField;
}
constexpr ::System::DateTime const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__UpdateTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateTime_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_set__UpdateTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateTime_k__BackingField = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__MapData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MapData_k__BackingField;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_get__MapData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MapData_k__BackingField;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::__cordl_internal_set__MapData_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MapData_k__BackingField = value;
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_MapID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_MapID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_MapID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_MapID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_CreatorID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_CreatorID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_CreatorID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_CreatorID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_CreatorNickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_CreatorNickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_CreatorNickName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_CreatorNickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_CreateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_CreateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_CreateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_CreateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_UpdateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_UpdateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_UpdateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_UpdateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::get_MapData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"get_MapData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::set_MapData(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {"set_MapData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap::SharedBlocksManager_SharedBlocksMap()   {
}
