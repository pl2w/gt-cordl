#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LoadSceneModelResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_LogForwarder_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_Metrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_RoomLayoutUuids_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__FetchAnchorsAsync_d__36_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__FetchAnchorsAsync_d__37_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__FilterByActiveRoom_d__46_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__LoadSceneModelAsync_d__45_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__OnApplicationPause_d__38_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__ProcessBatch_d__44_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__QueryForExistingAnchorsTransform_d__39_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager___LoadSceneModel_g__AwaitTask|40_0_d_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePrefabOverride_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_InitialAnchorParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::get_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa62ebb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"get_InitialAnchorParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.set_InitialAnchorParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::set_InitialAnchorParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa62ebc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"set_InitialAnchorParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.add_LoadSceneModelFailedPermissionNotGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::System::Action*)>(&::GlobalNamespace::OVRSceneManager::add_LoadSceneModelFailedPermissionNotGranted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa62ebc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"add_LoadSceneModelFailedPermissionNotGranted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.remove_LoadSceneModelFailedPermissionNotGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::System::Action*)>(&::GlobalNamespace::OVRSceneManager::remove_LoadSceneModelFailedPermissionNotGranted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa62ec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"remove_LoadSceneModelFailedPermissionNotGranted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.get_Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::get_Verbose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa62ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"get_Verbose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager::Log)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa62ed68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager::LogWarning)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa62ed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager::LogError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa62ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Awake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa62ed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Start)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa62ef58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LogResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRAnchor_FetchResult)>(&::GlobalNamespace::OVRSceneManager::LogResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa62f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LogResult", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.FetchAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa62f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(bool)>(&::GlobalNamespace::OVRSceneManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa62f2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.QueryForExistingAnchorsTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa62f39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"QueryForExistingAnchorsTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSceneModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSceneModel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa62f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LoadSceneModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.ProcessBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics> (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t)>(&::GlobalNamespace::OVRSceneManager::ProcessBatch)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa62f9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"ProcessBatch", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.LoadSceneModelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::LoadSceneModelAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa62f7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LoadSceneModelAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.FilterByActiveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*)>(&::GlobalNamespace::OVRSceneManager::FilterByActiveRoom)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa62fabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"FilterByActiveRoom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.IsUserInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSceneManager::IsUserInRoom)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa62fbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"IsUserInRoom", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DestroyExistingAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::DestroyExistingAnchors)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa62f524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"DestroyExistingAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.RequestSceneCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::RequestSceneCapture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa62ff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"RequestSceneCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.DoesRoomSetupExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSceneManager::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::DoesRoomSetupExist)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa62ffd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"DoesRoomSetupExist", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfClassificationsAreValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xa630214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CheckIfClassificationsAreValid", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetUuidsToQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRAnchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*)>(&::GlobalNamespace::OVRSceneManager::GetUuidsToQuery)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa6305fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"GetUuidsToQuery", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckClassificationsInRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(&::GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xa630728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CheckClassificationsInRooms", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CheckIfAnchorsContainClassifications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::GlobalNamespace::OVRTask_1<bool>)>(&::GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xa630b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CheckIfAnchorsContainClassifications", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.CollectLabelsFromAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa630fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CollectLabelsFromAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnTrackingSpaceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa631160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnTrackingSpaceChanged", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa631394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateAllSceneAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa631164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"UpdateAllSceneAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.UpdateSomeSceneAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa631398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"UpdateSomeSceneAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.GetRoomLayoutInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa63184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"GetRoomLayoutInformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnEnable)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa631a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::OnDisable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa631d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.PointInPolygon2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, ::UnityEngine::Vector2)>(&::GlobalNamespace::OVRSceneManager::PointInPolygon2D)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa62feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"PointInPolygon2D", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.OVRManager_SceneCaptureComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(uint64_t, bool)>(&::GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa631f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OVRManager_SceneCaptureComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager.InstantiateSceneAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRSceneAnchor> (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRSceneAnchor*)>(&::GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0xa632104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"InstantiateSceneAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRSceneAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)()>(&::GlobalNamespace::OVRSceneManager::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa632708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._LoadSceneModel_g__AwaitTask_40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>)>(&::GlobalNamespace::OVRSceneManager::_LoadSceneModel_g__AwaitTask_40_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa62f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"<LoadSceneModel>g__AwaitTask|40_0", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager._LoadSceneModel_g__InterpretResult_40_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneManager::*)(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult)>(&::GlobalNamespace::OVRSceneManager::_LoadSceneModel_g__InterpretResult_40_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa62f94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"<LoadSceneModel>g__InterpretResult|40_1", {}, {::i2c::type_of<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PlanePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlanePrefab;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PlanePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlanePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlanePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VolumePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumePrefab;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VolumePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumePrefab;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumePrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PrefabOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabOverrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_PrefabOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabOverrides;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrefabOverrides = value;
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get_ActiveRoomsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveRoomsOnly;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_ActiveRoomsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveRoomsOnly;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_ActiveRoomsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveRoomsOnly = value;
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VerboseLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerboseLogging;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_VerboseLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerboseLogging;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_VerboseLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerboseLogging = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSceneAnchorUpdatesPerFrame;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxSceneAnchorUpdatesPerFrame = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRSceneManager::__cordl_internal_get__initialAnchorParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialAnchorParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__initialAnchorParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialAnchorParent;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__initialAnchorParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialAnchorParent = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneModelLoadedSuccessfully()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneModelLoadedSuccessfully;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneModelLoadedSuccessfully() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneModelLoadedSuccessfully;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneModelLoadedSuccessfully = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NoSceneModelToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoSceneModelToLoad;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NoSceneModelToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoSceneModelToLoad;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_NoSceneModelToLoad(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoSceneModelToLoad = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_LoadSceneModelFailedPermissionNotGranted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadSceneModelFailedPermissionNotGranted;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_LoadSceneModelFailedPermissionNotGranted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadSceneModelFailedPermissionNotGranted;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_LoadSceneModelFailedPermissionNotGranted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoadSceneModelFailedPermissionNotGranted = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneCaptureReturnedWithoutError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneCaptureReturnedWithoutError;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_SceneCaptureReturnedWithoutError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneCaptureReturnedWithoutError;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneCaptureReturnedWithoutError = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_UnexpectedErrorWithSceneCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnexpectedErrorWithSceneCapture;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_UnexpectedErrorWithSceneCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnexpectedErrorWithSceneCapture;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnexpectedErrorWithSceneCapture = value;
}
constexpr ::System::Action*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NewSceneModelAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSceneModelAvailable;
}
constexpr ::System::Action* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_NewSceneModelAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSceneModelAvailable;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_NewSceneModelAvailable(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewSceneModelAvailable = value;
}
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*& GlobalNamespace::OVRSceneManager::__cordl_internal_get_RoomLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLayout;
}
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* const& GlobalNamespace::OVRSceneManager::__cordl_internal_get_RoomLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomLayout;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set_RoomLayout(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomLayout = value;
}
constexpr uint64_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneCaptureRequestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneCaptureRequestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneCaptureRequestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneCaptureRequestId;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneCaptureRequestId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneCaptureRequestId = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRSceneManager::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRig = value;
}
constexpr int32_t& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneAnchorUpdateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchorUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__sceneAnchorUpdateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchorUpdateIndex;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__sceneAnchorUpdateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneAnchorUpdateIndex = value;
}
constexpr bool& GlobalNamespace::OVRSceneManager::__cordl_internal_get__hasLoadBeenRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLoadBeenRequested;
}
constexpr bool const& GlobalNamespace::OVRSceneManager::__cordl_internal_get__hasLoadBeenRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLoadBeenRequested;
}
constexpr void GlobalNamespace::OVRSceneManager::__cordl_internal_set__hasLoadBeenRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasLoadBeenRequested = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRSceneManager::get_InitialAnchorParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"get_InitialAnchorParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::set_InitialAnchorParent(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"set_InitialAnchorParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSceneManager::add_LoadSceneModelFailedPermissionNotGranted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"add_LoadSceneModelFailedPermissionNotGranted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSceneManager::remove_LoadSceneModelFailedPermissionNotGranted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"remove_LoadSceneModelFailedPermissionNotGranted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> GlobalNamespace::OVRSceneManager::get_Verbose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"get_Verbose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::Log(::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager::LogWarning(::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager::LogError(::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::LogResult(::GlobalNamespace::OVRAnchor_FetchResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LogResult", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneManager::FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                    {"FetchAnchorsAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, anchors, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneManager::FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, uuids, anchors);
}
inline void GlobalNamespace::OVRSceneManager::OnApplicationPause(bool  isPaused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPaused);
}
inline void GlobalNamespace::OVRSceneManager::QueryForExistingAnchorsTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"QueryForExistingAnchorsTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::LoadSceneModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LoadSceneModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics> GlobalNamespace::OVRSceneManager::ProcessBatch(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, int32_t  startingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"ProcessBatch", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>(this, ___internal_method, rooms, startingIndex);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> GlobalNamespace::OVRSceneManager::LoadSceneModelAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"LoadSceneModelAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>> GlobalNamespace::OVRSceneManager::FilterByActiveRoom(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  layouts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"FilterByActiveRoom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>>>(nullptr, ___internal_method, rooms, layouts);
}
inline bool GlobalNamespace::OVRSceneManager::IsUserInRoom(::UnityEngine::Vector3  userPosition, ::GlobalNamespace::OVRAnchor  floor, ::GlobalNamespace::OVRAnchor  ceiling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"IsUserInRoom", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, userPosition, floor, ceiling);
}
inline void GlobalNamespace::OVRSceneManager::DestroyExistingAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"DestroyExistingAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::RequestSceneCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"RequestSceneCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneManager::DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"DoesRoomSetupExist", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CheckIfClassificationsAreValid", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestedAnchorClassifications);
}
inline void GlobalNamespace::OVRSceneManager::GetUuidsToQuery(::GlobalNamespace::OVRAnchor  anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*  uuidsToQuery)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"GetUuidsToQuery", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchor, uuidsToQuery);
}
inline void GlobalNamespace::OVRSceneManager::CheckClassificationsInRooms(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CheckClassificationsInRooms", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, success, rooms, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CheckIfAnchorsContainClassifications(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CheckIfAnchorsContainClassifications", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::GlobalNamespace::OVRTask_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, success, roomAnchors, requestedAnchorClassifications, task);
}
inline void GlobalNamespace::OVRSceneManager::CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::List_1<::StringW>*  labels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"CollectLabelsFromAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, labels);
}
inline void GlobalNamespace::OVRSceneManager::OnTrackingSpaceChanged(::UnityEngine::Transform*  trackingSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnTrackingSpaceChanged", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trackingSpace);
}
inline void GlobalNamespace::OVRSceneManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateAllSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"UpdateAllSceneAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::UpdateSomeSceneAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"UpdateSomeSceneAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GlobalNamespace::OVRSceneManager::GetRoomLayoutInformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"GetRoomLayoutInformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneManager::PointInPolygon2D(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  boundaryVertices, ::UnityEngine::Vector2  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"PointInPolygon2D", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boundaryVertices, target);
}
inline void GlobalNamespace::OVRSceneManager::OVRManager_SceneCaptureComplete(uint64_t  requestId, bool  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"OVRManager_SceneCaptureComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, result);
}
inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> GlobalNamespace::OVRSceneManager::InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRSceneAnchor*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"InstantiateSceneAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRSceneAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRSceneAnchor>>(this, ___internal_method, anchor, prefab);
}
inline void GlobalNamespace::OVRSceneManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager::_LoadSceneModel_g__AwaitTask_40_0(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"<LoadSceneModel>g__AwaitTask|40_0", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline bool GlobalNamespace::OVRSceneManager::_LoadSceneModel_g__InterpretResult_40_1(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager*>(),
                        {"<LoadSceneModel>g__InterpretResult|40_1", {}, {::i2c::type_of<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OVRSceneManager* GlobalNamespace::OVRSceneManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager::OVRSceneManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::*)()>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa630b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0._CheckClassificationsInRooms_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::*)(bool)>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::_CheckClassificationsInRooms_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa633240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*>(),
                        {"<CheckClassificationsInRooms>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_get_requestedAnchorClassifications()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_get_requestedAnchorClassifications() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestedAnchorClassifications = value;
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_get_roomAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomAnchors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_get_roomAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomAnchors;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::__cordl_internal_set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomAnchors = value;
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::_CheckClassificationsInRooms_b__0(bool  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*>(),
                        {"<CheckClassificationsInRooms>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0* GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0::OVRSceneManager___c__DisplayClass53_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::*)()>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63020c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0._DoesRoomSetupExist_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::*)(bool, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::_DoesRoomSetupExist_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa633228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*>(),
                        {"<DoesRoomSetupExist>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::__cordl_internal_get_requestedAnchorClassifications()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::__cordl_internal_get_requestedAnchorClassifications() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedAnchorClassifications;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::__cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestedAnchorClassifications = value;
}
constexpr ::GlobalNamespace::OVRTask_1<bool>& GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::GlobalNamespace::OVRTask_1<bool> const& GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::__cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::_DoesRoomSetupExist_b__0(bool  result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*>(),
                        {"<DoesRoomSetupExist>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, anchors);
}
inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0* GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0::OVRSceneManager___c__DisplayClass50_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::*)()>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63314c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0._LoadSceneModelAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t)>(&::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::_LoadSceneModelAsync_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa633154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*>(),
                        {"<LoadSceneModelAsync>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*& GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::__cordl_internal_get_tasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tasks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>* const& GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::__cordl_internal_get_tasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tasks;
}
constexpr void GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::__cordl_internal_set_tasks(::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tasks = value;
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::_LoadSceneModelAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, int32_t  startingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*>(),
                        {"<LoadSceneModelAsync>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms, startingIndex);
}
inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0* GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0::OVRSceneManager___c__DisplayClass45_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Development.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_Development::Log)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa632ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Development*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Development.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_Development::LogWarning)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa632d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Development*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Development.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::GameObject*)>(&::GlobalNamespace::OVRSceneManager_Development::LogError)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa632e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Development*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager_Development::Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Development*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_Development::LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Development*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, message, gameObject);
}
inline void GlobalNamespace::OVRSceneManager_Development::LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Development*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, message, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_Development::OVRSceneManager_Development()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager_RoomLayoutInformation::*)()>(&::GlobalNamespace::OVRSceneManager_RoomLayoutInformation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa631a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Floor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Floor;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Floor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Floor;
}
constexpr void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Floor = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Ceiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ceiling;
}
constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Ceiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ceiling;
}
constexpr void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ceiling = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Walls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Walls;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* const& GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_get_Walls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Walls;
}
constexpr void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::__cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Walls = value;
}
inline void GlobalNamespace::OVRSceneManager_RoomLayoutInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GlobalNamespace::OVRSceneManager_RoomLayoutInformation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation::OVRSceneManager_RoomLayoutInformation()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Classification.get_List
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (*)()>(&::GlobalNamespace::OVRSceneManager_Classification::get_List)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6327a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Classification*>(),
                        {"get_List", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Classification.get_Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)()>(&::GlobalNamespace::OVRSceneManager_Classification::get_Set)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa632800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Classification*>(),
                        {"get_Set", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager_Classification::setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField", ::GlobalNamespace::OVRSceneManager_Classification*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::OVRSceneManager_Classification::getStaticF__List_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, "<List>k__BackingField", ::GlobalNamespace::OVRSceneManager_Classification*>();
}
inline void GlobalNamespace::OVRSceneManager_Classification::setStaticF__Set_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "<Set>k__BackingField", ::GlobalNamespace::OVRSceneManager_Classification*>(std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::OVRSceneManager_Classification::getStaticF__Set_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "<Set>k__BackingField", ::GlobalNamespace::OVRSceneManager_Classification*>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::OVRSceneManager_Classification::get_List()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Classification*>(),
                        {"get_List", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::OVRSceneManager_Classification::get_Set()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Classification*>(),
                        {"get_Set", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_Classification::OVRSceneManager_Classification()   {
}
