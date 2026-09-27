#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneDataSource_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_Classification_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLabel_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLogLevel_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukPlane_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukRoomAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukSceneAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukVolume_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKTrackable_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_AnchorRepresentation_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_PositioningMethod_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneDataSource_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneTrackingSettings_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SharedRoomsData_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SurfaceType_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_TrackableState_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__ConfigureTrackerAndLogResult_d__135_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__HasSceneModel_d__48_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromDeviceInternal_d__78_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromDeviceSharedLib_d__93_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromDevice_d__77_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromJsonSharedLib_d__94_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromJsonString_d__83_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromPrefabSharedLib_d__96_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromPrefab_d__80_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadSceneFromSharedRooms_d__73_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LoadScene_d__69_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__LocalizeTrackable_d__138_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__ShareRoomsAsync_d__76_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK__WaitForDiscoveryFinished_d__121_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SerializationHelpers_CoordinateSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(bool)>(&::Meta::XR::MRUtilityKit::MRUK::set_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_SceneLoadedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_SceneLoadedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_SceneLoadedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set_SceneLoadedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityEvent*)>(&::Meta::XR::MRUtilityKit::MRUK::set_SceneLoadedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_SceneLoadedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_RoomCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_RoomCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_RoomCreatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set_RoomCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::set_RoomCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_RoomCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_RoomUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_RoomUpdatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_RoomUpdatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set_RoomUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::set_RoomUpdatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_RoomUpdatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_RoomRemovedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_RoomRemovedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_RoomRemovedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set_RoomRemovedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::set_RoomRemovedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_RoomRemovedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_IsWorldLockActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_IsWorldLockActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f21170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_IsWorldLockActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get__cameraRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRCameraRig> (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get__cameraRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get__cameraRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set__cameraRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::GlobalNamespace::OVRCameraRig*)>(&::Meta::XR::MRUtilityKit::MRUK::set__cameraRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set__cameraRig", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.InitializeScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::InitializeScene)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f211a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"InitializeScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.RegisterSceneLoadedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityAction*)>(&::Meta::XR::MRUtilityKit::MRUK::RegisterSceneLoadedCallback)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f19ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterSceneLoadedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.RegisterRoomCreatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::RegisterRoomCreatedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f2126c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterRoomCreatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.RegisterRoomUpdatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::RegisterRoomUpdatedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f212c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterRoomUpdatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.RegisterRoomRemovedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::RegisterRoomRemovedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f2131c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterRoomRemovedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::GetRooms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetRooms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::GetAnchors)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f2137c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetCurrentRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::GetCurrentRoom)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x9f17f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetCurrentRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.HasSceneModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)()>(&::Meta::XR::MRUtilityKit::MRUK::HasSceneModel)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f21398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"HasSceneModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_Rooms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f21488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_Rooms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUK> (*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f21490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::MRUK*)>(&::Meta::XR::MRUtilityKit::MRUK::set_Instance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f214e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUK*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::Awake)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x9f21550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::OnDestroy)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9f22140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f223b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnSharedLibLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel, char16_t*, uint32_t)>(&::Meta::XR::MRUtilityKit::MRUK::OnSharedLibLog)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9f1f6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSharedLibLog", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetTrackingSpacePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)()>(&::Meta::XR::MRUtilityKit::MRUK::GetTrackingSpacePose)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9f1f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetTrackingSpacePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.SetTrackingSpacePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::MRUK::SetTrackingSpacePose)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9f1fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SetTrackingSpacePose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetTrackingSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)()>(&::Meta::XR::MRUtilityKit::MRUK::GetTrackingSpace)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9f223bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetTrackingSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::Update)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x9f22648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::XR::MRUtilityKit::MRUK::*)(::GlobalNamespace::MRUK_SceneDataSource)>(&::Meta::XR::MRUtilityKit::MRUK::LoadScene)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f22054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadScene", {}, {::i2c::type_of<::GlobalNamespace::MRUK_SceneDataSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetRoomIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::MRUtilityKit::MRUK::*)(bool)>(&::Meta::XR::MRUtilityKit::MRUK::GetRoomIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f23874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetRoomIndex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnRoomDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::MRUK::OnRoomDestroyed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f238c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomDestroyed", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ClearScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::ClearScene)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f23970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ClearScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromSharedRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Guid, ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>, bool)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromSharedRooms)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9f239d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromSharedRooms", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromSharedRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(::System::Guid, ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>, bool)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromSharedRooms)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f23b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromSharedRooms", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ShareRoomsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::Meta::XR::MRUtilityKit::MRUK::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*, ::System::Guid)>(&::Meta::XR::MRUtilityKit::MRUK::ShareRoomsAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f23b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ShareRoomsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(bool, bool)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromDevice)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f1f314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromDevice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromDeviceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(bool, bool, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromDeviceInternal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9f23c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromDeviceInternal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FindAllObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::GameObject*, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>)>(&::Meta::XR::MRUtilityKit::MRUK::FindAllObjects)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x9f23dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FindAllObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::GameObject*, bool)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromPrefab)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f2456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.SaveSceneToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MRUtilityKit::MRUK::*)(::GlobalNamespace::SerializationHelpers_CoordinateSystem, bool, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::SaveSceneToJsonString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f2469c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SaveSceneToJsonString", {}, {::i2c::type_of<::GlobalNamespace::SerializationHelpers_CoordinateSystem>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.SaveSceneToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MRUtilityKit::MRUK::*)(bool, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::SaveSceneToJsonString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f1bbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SaveSceneToJsonString", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(::StringW, bool)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromJsonString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f248a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromJsonString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FindObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::StringW, ::UnityEngine::Transform*, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>)>(&::Meta::XR::MRUtilityKit::MRUK::FindObjects)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x9f24218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FindObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_IsOpenXRAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_IsOpenXRAvailable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f249d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_IsOpenXRAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.InitializeAnchorStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::InitializeAnchorStore)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x9f21a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"InitializeAnchorStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.DestroyAnchorStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::DestroyAnchorStore)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f222bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"DestroyAnchorStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.UpdateAnchorStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::UpdateAnchorStore)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9f22d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"UpdateAnchorStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromDeviceSharedLib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(bool, bool, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromDeviceSharedLib)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9f24a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromDeviceSharedLib", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromJsonSharedLib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(::StringW, bool)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromJsonSharedLib)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9f24b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromJsonSharedLib", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.SaveSceneToJsonSharedLib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::MRUtilityKit::MRUK::*)(bool, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*)>(&::Meta::XR::MRUtilityKit::MRUK::SaveSceneToJsonSharedLib)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9f246a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SaveSceneToJsonSharedLib", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LoadSceneFromPrefabSharedLib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::MRUK::LoadSceneFromPrefabSharedLib)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9f24cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromPrefabSharedLib", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetAdjacentMrukSceneWall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor (::Meta::XR::MRUtilityKit::MRUK::*)(::by_ref<int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>*)>(&::Meta::XR::MRUtilityKit::MRUK::GetAdjacentMrukSceneWall)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x9f24dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetAdjacentMrukSceneWall", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.CreateMrukSceneAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor (::Meta::XR::MRUtilityKit::MRUK::*)(::StringW, ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::GlobalNamespace::MRUK_AnchorRepresentation)>(&::Meta::XR::MRUtilityKit::MRUK::CreateMrukSceneAnchor)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9f25184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"CreateMrukSceneAnchor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::MRUK_AnchorRepresentation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ClearSceneSharedLib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::ClearSceneSharedLib)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f23974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ClearSceneSharedLib", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::MRUK::FlipX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f2552c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipX", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::MRUK::FlipX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f25534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipX", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::MRUK::FlipZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f2553c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Meta::XR::MRUtilityKit::MRUK::FlipZ)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f25544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZ", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipZRotateY180
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Meta::XR::MRUtilityKit::MRUK::FlipZRotateY180)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f25550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZRotateY180", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::MRUK::FlipZ)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f22eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZ", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FlipZRotateY180
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::MRUK::FlipZRotateY180)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f225a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZRotateY180", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ConvertVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukVolume (*)(::GlobalNamespace::MRUKNativeFuncs_MrukVolume)>(&::Meta::XR::MRUtilityKit::MRUK::ConvertVolume)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f2556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertVolume", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukVolume>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ConvertPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKNativeFuncs_MrukPlane (*)(::GlobalNamespace::MRUKNativeFuncs_MrukPlane)>(&::Meta::XR::MRUtilityKit::MRUK::ConvertPlane)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f25598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertPlane", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukPlane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.FindRoomByUuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> (::Meta::XR::MRUtilityKit::MRUK::*)(::System::Guid)>(&::Meta::XR::MRUtilityKit::MRUK::FindRoomByUuid)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9f255a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FindRoomByUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.UpdateAnchorProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>)>(&::Meta::XR::MRUtilityKit::MRUK::UpdateAnchorProperties)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x9f25744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"UpdateAnchorProperties", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnOpenXrEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnOpenXrEvent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f1fc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnOpenXrEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnPreRoomAnchorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnPreRoomAnchorAdded)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x9f1fd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnPreRoomAnchorAdded", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnRoomAnchorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnRoomAnchorAdded)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9f20198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomAnchorAdded", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnRoomAnchorUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::by_ref<::System::Guid>, bool, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnRoomAnchorUpdated)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9f2036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomAnchorUpdated", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnRoomAnchorRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnRoomAnchorRemoved)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9f205b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomAnchorRemoved", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnSceneAnchorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnSceneAnchorAdded)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x9f20838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSceneAnchorAdded", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnSceneAnchorUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, bool, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnSceneAnchorUpdated)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9f20bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSceneAnchorUpdated", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnSceneAnchorRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnSceneAnchorRemoved)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9f20d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSceneAnchorRemoved", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnDiscoveryFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnDiscoveryFinished)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9f20f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnDiscoveryFinished", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnEnvironmentRaycasterCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult, ::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUK::OnEnvironmentRaycasterCreated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f2111c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnEnvironmentRaycasterCreated", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.WaitForDiscoveryFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::WaitForDiscoveryFinished)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f25d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"WaitForDiscoveryFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ConvertResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUK_LoadDeviceResult (*)(::GlobalNamespace::MRUKNativeFuncs_MrukResult)>(&::Meta::XR::MRUtilityKit::MRUK::ConvertResult)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f25d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertResult", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ConvertLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKAnchor_SceneLabels (*)(::GlobalNamespace::MRUKNativeFuncs_MrukLabel)>(&::Meta::XR::MRUtilityKit::MRUK::ConvertLabel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f25d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertLabel", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukLabel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.get_TrackerConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackerConfiguration (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::get_TrackerConfiguration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f25e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_TrackerConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.GetTrackables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*)>(&::Meta::XR::MRUtilityKit::MRUK::GetTrackables)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9f25eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetTrackables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f26178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.UpdateTrackables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::UpdateTrackables)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x9f22f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"UpdateTrackables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::OnDisable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f2621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.ConfigureTrackerAndLogResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::Meta::XR::MRUtilityKit::MRUK::ConfigureTrackerAndLogResult)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f26260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConfigureTrackerAndLogResult", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.TrackerCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::TrackerCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f261a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"TrackerCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK.LocalizeTrackable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRLocatable)>(&::Meta::XR::MRUtilityKit::MRUK::LocalizeTrackable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f26318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LocalizeTrackable", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)()>(&::Meta::XR::MRUtilityKit::MRUK::_ctor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9f263e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK._Awake_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::StringW)>(&::Meta::XR::MRUtilityKit::MRUK::_Awake_b__61_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f2673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"<Awake>b__61_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK._Awake_b__61_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK::*)(::StringW)>(&::Meta::XR::MRUtilityKit::MRUK::_Awake_b__61_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f267e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"<Awake>b__61_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__SceneLoadedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SceneLoadedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__SceneLoadedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SceneLoadedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__SceneLoadedEvent_k__BackingField(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SceneLoadedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__RoomCreatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomCreatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__RoomCreatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomCreatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__RoomCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomCreatedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__RoomUpdatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomUpdatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__RoomUpdatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomUpdatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__RoomUpdatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomUpdatedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__RoomRemovedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomRemovedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__RoomRemovedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomRemovedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__RoomRemovedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomRemovedEvent_k__BackingField = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get_EnableWorldLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableWorldLock;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get_EnableWorldLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableWorldLock;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set_EnableWorldLock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableWorldLock = value;
}
constexpr ::UnityEngine::Matrix4x4& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get_TrackingSpaceOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSpaceOffset;
}
constexpr ::UnityEngine::Matrix4x4 const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get_TrackingSpaceOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSpaceOffset;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set_TrackingSpaceOffset(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingSpaceOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get___cameraRig_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____cameraRig_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get___cameraRig_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____cameraRig_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set___cameraRig_k__BackingField(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____cameraRig_k__BackingField = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__worldLockActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldLockActive;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__worldLockActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldLockActive;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__worldLockActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldLockActive = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__worldLockWasEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldLockWasEnabled;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__worldLockWasEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldLockWasEnabled;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__worldLockWasEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldLockWasEnabled = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__loadSceneCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSceneCalled;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__loadSceneCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSceneCalled;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__loadSceneCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadSceneCalled = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Pose>& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__prevTrackingSpacePose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevTrackingSpacePose;
}
constexpr ::System::Nullable_1<::UnityEngine::Pose> const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__prevTrackingSpacePose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevTrackingSpacePose;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__prevTrackingSpacePose(::System::Nullable_1<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevTrackingSpacePose = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__classificationsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classificationsBuffer;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__classificationsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____classificationsBuffer;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__classificationsBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____classificationsBuffer = value;
}
constexpr ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get_SceneSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneSettings;
}
constexpr ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get_SceneSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneSettings;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set_SceneSettings(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneSettings = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__cachedCurrentRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCurrentRoom;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__cachedCurrentRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCurrentRoom;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__cachedCurrentRoom(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedCurrentRoom = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__cachedCurrentRoomFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCurrentRoomFrame;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__cachedCurrentRoomFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCurrentRoomFrame;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__cachedCurrentRoomFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedCurrentRoomFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__Rooms_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__Rooms_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__Rooms_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rooms_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__immersiveSceneDebuggerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____immersiveSceneDebuggerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__immersiveSceneDebuggerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____immersiveSceneDebuggerPrefab;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__immersiveSceneDebuggerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____immersiveSceneDebuggerPrefab = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>>& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__loadSceneTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSceneTask;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>> const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__loadSceneTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSceneTask;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__loadSceneTask(::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadSceneTask = value;
}
constexpr uint64_t& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__currentAppSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAppSpace;
}
constexpr uint64_t const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__currentAppSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAppSpace;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__currentAppSpace(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentAppSpace = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__openXrInitialised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXrInitialised;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__openXrInitialised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openXrInitialised;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__openXrInitialised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openXrInitialised = value;
}
constexpr ::GlobalNamespace::OVRAnchor_Tracker*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__tracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracker;
}
constexpr ::GlobalNamespace::OVRAnchor_Tracker* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__tracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracker;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__tracker(::GlobalNamespace::OVRAnchor_Tracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tracker = value;
}
constexpr ::UnityEngine::Coroutine*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__trackerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__trackerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackerCoroutine;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__trackerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackerCoroutine = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__trackableStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackableStates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__trackableStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackableStates;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__trackableStates(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackableStates = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>*& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__trackableTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackableTransforms;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>* const& Meta::XR::MRUtilityKit::MRUK::__cordl_internal_get__trackableTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackableTransforms;
}
constexpr void Meta::XR::MRUtilityKit::MRUK::__cordl_internal_set__trackableTransforms(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackableTransforms = value;
}
inline void Meta::XR::MRUtilityKit::MRUK::setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUK>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::XR::MRUtilityKit::MRUK>, "<Instance>k__BackingField", ::Meta::XR::MRUtilityKit::MRUK*>(std::forward<::UnityW<::Meta::XR::MRUtilityKit::MRUK>>(value));
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUK> Meta::XR::MRUtilityKit::MRUK::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::MRUtilityKit::MRUK>, "<Instance>k__BackingField", ::Meta::XR::MRUtilityKit::MRUK*>();
}
inline void Meta::XR::MRUtilityKit::MRUK::setStaticF_TimeBetweenFetchTrackables(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "TimeBetweenFetchTrackables", ::Meta::XR::MRUtilityKit::MRUK*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Meta::XR::MRUtilityKit::MRUK::getStaticF_TimeBetweenFetchTrackables()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "TimeBetweenFetchTrackables", ::Meta::XR::MRUtilityKit::MRUK*>();
}
inline bool Meta::XR::MRUtilityKit::MRUK::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent* Meta::XR::MRUtilityKit::MRUK::get_SceneLoadedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_SceneLoadedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set_SceneLoadedEvent(::UnityEngine::Events::UnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_SceneLoadedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* Meta::XR::MRUtilityKit::MRUK::get_RoomCreatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_RoomCreatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set_RoomCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_RoomCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* Meta::XR::MRUtilityKit::MRUK::get_RoomUpdatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_RoomUpdatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set_RoomUpdatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_RoomUpdatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* Meta::XR::MRUtilityKit::MRUK::get_RoomRemovedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_RoomRemovedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set_RoomRemovedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_RoomRemovedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MRUtilityKit::MRUK::get_IsWorldLockActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_IsWorldLockActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRCameraRig> Meta::XR::MRUtilityKit::MRUK::get__cameraRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get__cameraRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRCameraRig>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set__cameraRig(::GlobalNamespace::OVRCameraRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set__cameraRig", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MRUtilityKit::MRUK::InitializeScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"InitializeScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::RegisterSceneLoadedCallback(::UnityEngine::Events::UnityAction*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterSceneLoadedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUK::RegisterRoomCreatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterRoomCreatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUK::RegisterRoomUpdatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterRoomUpdatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUK::RegisterRoomRemovedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"RegisterRoomRemovedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* Meta::XR::MRUtilityKit::MRUK::GetRooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetRooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUK::GetAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> Meta::XR::MRUtilityKit::MRUK::GetCurrentRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetCurrentRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MRUtilityKit::MRUK::HasSceneModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"HasSceneModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* Meta::XR::MRUtilityKit::MRUK::get_Rooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_Rooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUK> Meta::XR::MRUtilityKit::MRUK::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUK>>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::set_Instance(::Meta::XR::MRUtilityKit::MRUK*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"set_Instance", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUK*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MRUtilityKit::MRUK::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnSharedLibLog(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  logLevel, char16_t*  message, uint32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSharedLibLog", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel, message, length);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUK::GetTrackingSpacePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetTrackingSpacePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::SetTrackingSpacePose(::UnityEngine::Pose  openXrPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SetTrackingSpacePose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, openXrPose);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::MRUtilityKit::MRUK::GetTrackingSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetTrackingSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::MRUtilityKit::MRUK::LoadScene(::GlobalNamespace::MRUK_SceneDataSource  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadScene", {}, {::i2c::type_of<::GlobalNamespace::MRUK_SceneDataSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, dataSource);
}
inline int32_t Meta::XR::MRUtilityKit::MRUK::GetRoomIndex(bool  fromPrefabs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetRoomIndex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, fromPrefabs);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnRoomDestroyed(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomDestroyed", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::MRUK::ClearScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ClearScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromSharedRooms(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids, ::System::Guid  groupUuid, /* [TupleElementNames(new[] { "alignmentRoomUuid", "floorWorldPoseOnHost" })] */ ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData, bool  removeMissingRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromSharedRooms", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, roomUuids, groupUuid, alignmentData, removeMissingRooms);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromSharedRooms(::System::Guid  groupUuid, /* [TupleElementNames(new[] { "alignmentRoomUuid", "floorWorldPoseOnHost" })] */ ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData, bool  removeMissingRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromSharedRooms", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, groupUuid, alignmentData, removeMissingRooms);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> Meta::XR::MRUtilityKit::MRUK::ShareRoomsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ShareRoomsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(this, ___internal_method, rooms, groupUuid);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromDevice(bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromDevice", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, requestSceneCaptureIfNoDataFound, removeMissingRooms);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromDeviceInternal(bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromDeviceInternal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, requestSceneCaptureIfNoDataFound, removeMissingRooms, sharedRoomsData);
}
inline void Meta::XR::MRUtilityKit::MRUK::FindAllObjects(::UnityEngine::GameObject*  roomPrefab, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  walls, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  volumes, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FindAllObjects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomPrefab, walls, volumes, planes);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromPrefab(::UnityEngine::GameObject*  scenePrefab, bool  clearSceneFirst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, scenePrefab, clearSceneFirst);
}
inline ::StringW Meta::XR::MRUtilityKit::MRUK::SaveSceneToJsonString(::GlobalNamespace::SerializationHelpers_CoordinateSystem  coordinateSystem, bool  includeGlobalMesh, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SaveSceneToJsonString", {}, {::i2c::type_of<::GlobalNamespace::SerializationHelpers_CoordinateSystem>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, coordinateSystem, includeGlobalMesh, rooms);
}
inline ::StringW Meta::XR::MRUtilityKit::MRUK::SaveSceneToJsonString(bool  includeGlobalMesh, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SaveSceneToJsonString", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includeGlobalMesh, rooms);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromJsonString(::StringW  jsonString, bool  removeMissingRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromJsonString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, jsonString, removeMissingRooms);
}
inline void Meta::XR::MRUtilityKit::MRUK::FindObjects(::StringW  objName, ::UnityEngine::Transform*  rootTransform, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  objList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FindObjects", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objName, rootTransform, objList);
}
inline bool Meta::XR::MRUtilityKit::MRUK::get_IsOpenXRAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_IsOpenXRAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::InitializeAnchorStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"InitializeAnchorStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::DestroyAnchorStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"DestroyAnchorStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::UpdateAnchorStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"UpdateAnchorStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromDeviceSharedLib(bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromDeviceSharedLib", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, requestSceneCaptureIfNoDataFound, removeMissingRooms, sharedRoomsData);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromJsonSharedLib(::StringW  jsonString, bool  removeMissingRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromJsonSharedLib", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, jsonString, removeMissingRooms);
}
inline ::StringW Meta::XR::MRUtilityKit::MRUK::SaveSceneToJsonSharedLib(bool  includeGlobalMesh, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"SaveSceneToJsonSharedLib", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includeGlobalMesh, rooms);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::LoadSceneFromPrefabSharedLib(::UnityEngine::GameObject*  scenePrefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LoadSceneFromPrefabSharedLib", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method, scenePrefab);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor Meta::XR::MRUtilityKit::MRUK::GetAdjacentMrukSceneWall(::by_ref<int32_t>  thisID, ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>*  randomWalls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetAdjacentMrukSceneWall", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>(this, ___internal_method, thisID, randomWalls);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor Meta::XR::MRUtilityKit::MRUK::CreateMrukSceneAnchor(::StringW  semanticLabel, ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*  handles, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  objScale, ::GlobalNamespace::MRUK_AnchorRepresentation  representation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"CreateMrukSceneAnchor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::MRUK_AnchorRepresentation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>(this, ___internal_method, semanticLabel, handles, position, rotation, objScale, representation);
}
inline void Meta::XR::MRUtilityKit::MRUK::ClearSceneSharedLib()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ClearSceneSharedLib", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::MRUK::FlipX(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipX", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUK::FlipX(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipX", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUK::FlipZ(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Quaternion Meta::XR::MRUtilityKit::MRUK::FlipZ(::UnityEngine::Quaternion  quaternion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZ", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, quaternion);
}
inline ::UnityEngine::Quaternion Meta::XR::MRUtilityKit::MRUK::FlipZRotateY180(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZRotateY180", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUK::FlipZ(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZ", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUK::FlipZRotateY180(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FlipZRotateY180", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukVolume Meta::XR::MRUtilityKit::MRUK::ConvertVolume(::GlobalNamespace::MRUKNativeFuncs_MrukVolume  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertVolume", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukVolume>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukVolume>(nullptr, ___internal_method, volume);
}
inline ::GlobalNamespace::MRUKNativeFuncs_MrukPlane Meta::XR::MRUtilityKit::MRUK::ConvertPlane(::GlobalNamespace::MRUKNativeFuncs_MrukPlane  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertPlane", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukPlane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKNativeFuncs_MrukPlane>(nullptr, ___internal_method, plane);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> Meta::XR::MRUtilityKit::MRUK::FindRoomByUuid(::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"FindRoomByUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>(this, ___internal_method, uuid);
}
inline void Meta::XR::MRUtilityKit::MRUK::UpdateAnchorProperties(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"UpdateAnchorProperties", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchor, sceneAnchor);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnOpenXrEvent(::System::IntPtr  data, ::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnOpenXrEvent", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnPreRoomAnchorAdded(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnPreRoomAnchorAdded", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomAnchor, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnRoomAnchorAdded(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomAnchorAdded", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomAnchor, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnRoomAnchorUpdated(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, bool  significantChange, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomAnchorUpdated", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomAnchor, oldRoomAnchorUuid, significantChange, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnRoomAnchorRemoved(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnRoomAnchorRemoved", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, roomAnchor, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnSceneAnchorAdded(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSceneAnchorAdded", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneAnchor, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnSceneAnchorUpdated(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, bool  significantChange, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSceneAnchorUpdated", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneAnchor, significantChange, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnSceneAnchorRemoved(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnSceneAnchorRemoved", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sceneAnchor, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnDiscoveryFinished(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnDiscoveryFinished", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, userContext);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnEnvironmentRaycasterCreated(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnEnvironmentRaycasterCreated", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukResult>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, userContext);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* Meta::XR::MRUtilityKit::MRUK::WaitForDiscoveryFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"WaitForDiscoveryFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>*>(this, ___internal_method);
}
inline ::GlobalNamespace::MRUK_LoadDeviceResult Meta::XR::MRUtilityKit::MRUK::ConvertResult(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertResult", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUK_LoadDeviceResult>(nullptr, ___internal_method, result);
}
inline ::GlobalNamespace::MRUKAnchor_SceneLabels Meta::XR::MRUtilityKit::MRUK::ConvertLabel(::GlobalNamespace::MRUKNativeFuncs_MrukLabel  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConvertLabel", {}, {::i2c::type_of<::GlobalNamespace::MRUKNativeFuncs_MrukLabel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKAnchor_SceneLabels>(nullptr, ___internal_method, label);
}
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration Meta::XR::MRUtilityKit::MRUK::get_TrackerConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"get_TrackerConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::GetTrackables(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  trackables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"GetTrackables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackables);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::UpdateTrackables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"UpdateTrackables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::ConfigureTrackerAndLogResult(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"ConfigureTrackerAndLogResult", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::System::Collections::IEnumerator* Meta::XR::MRUtilityKit::MRUK::TrackerCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"TrackerCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::LocalizeTrackable(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRLocatable  locatable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"LocalizeTrackable", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, locatable);
}
inline void Meta::XR::MRUtilityKit::MRUK::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK::_Awake_b__61_0(::StringW  permissionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"<Awake>b__61_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline void Meta::XR::MRUtilityKit::MRUK::_Awake_b__61_1(::StringW  permissionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK*>(),
                        {"<Awake>b__61_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionId);
}
inline ::Meta::XR::MRUtilityKit::MRUK* Meta::XR::MRUtilityKit::MRUK::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUK*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUK::MRUK()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::*)(int32_t)>(&::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f2ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::*)()>(&::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f2ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::*)()>(&::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::MoveNext)> {
  constexpr static std::size_t size = 0x109c;
  constexpr static std::size_t addrs = 0x9f2ec28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::*)()>(&::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f304c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::*)()>(&::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f304c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::*)()>(&::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUK>& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUK> const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::MRUK>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__anchors_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchors_5__2;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__anchors_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchors_5__2;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__anchors_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anchors_5__2 = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>*& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__removed_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removed_5__3;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>* const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__removed_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removed_5__3;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__removed_5__3(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____removed_5__3 = value;
}
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__lastConfig_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastConfig_5__4;
}
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__lastConfig_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastConfig_5__4;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__lastConfig_5__4(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastConfig_5__4 = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__hasScenePermission_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasScenePermission_5__5;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__hasScenePermission_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasScenePermission_5__5;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__hasScenePermission_5__5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasScenePermission_5__5 = value;
}
constexpr double_t& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__nextFetchTime_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFetchTime_5__6;
}
constexpr double_t const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__nextFetchTime_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextFetchTime_5__6;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__nextFetchTime_5__6(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextFetchTime_5__6 = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__startFrame_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startFrame_5__7;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__startFrame_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startFrame_5__7;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__startFrame_5__7(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startFrame_5__7 = value;
}
constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__task_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task_5__8;
}
constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> const& Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_get__task_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task_5__8;
}
constexpr void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::__cordl_internal_set__task_5__8(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____task_5__8 = value;
}
inline void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137* Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137::MRUK__TrackerCoroutine_d__137()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings.get_TrackerConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackerConfiguration (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)()>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::get_TrackerConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f26800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"get_TrackerConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings.set_TrackerConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::set_TrackerConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f26808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"set_TrackerConfiguration", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings.get_TrackableAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)()>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::get_TrackableAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f26810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"get_TrackableAdded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings.set_TrackableAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*)>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::set_TrackableAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f26818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"set_TrackableAdded", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings.get_TrackableRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)()>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::get_TrackableRemoved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f26820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"get_TrackableRemoved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings.set_TrackableRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*)>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::set_TrackableRemoved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f26828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"set_TrackableRemoved", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::*)()>(&::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f26830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MRUK_SceneDataSource& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_DataSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataSource;
}
constexpr ::GlobalNamespace::MRUK_SceneDataSource const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_DataSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataSource;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_DataSource(::GlobalNamespace::MRUK_SceneDataSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataSource = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_RoomIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomIndex;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_RoomIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomIndex;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_RoomIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_RoomPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomPrefabs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_RoomPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomPrefabs;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_RoomPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomPrefabs = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>>& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_SceneJsons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneJsons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>> const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_SceneJsons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneJsons;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_SceneJsons(::ArrayW<::UnityW<::UnityEngine::TextAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneJsons = value;
}
constexpr bool& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_LoadSceneOnStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadSceneOnStartup;
}
constexpr bool const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_LoadSceneOnStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadSceneOnStartup;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_LoadSceneOnStartup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoadSceneOnStartup = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_SeatWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SeatWidth;
}
constexpr float_t const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_SeatWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SeatWidth;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_SeatWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SeatWidth = value;
}
constexpr ::StringW& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_SceneJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneJson;
}
constexpr ::StringW const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get_SceneJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneJson;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set_SceneJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneJson = value;
}
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get__TrackerConfiguration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackerConfiguration_k__BackingField;
}
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get__TrackerConfiguration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackerConfiguration_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set__TrackerConfiguration_k__BackingField(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackerConfiguration_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get__TrackableAdded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackableAdded_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get__TrackableAdded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackableAdded_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set__TrackableAdded_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackableAdded_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get__TrackableRemoved_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackableRemoved_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* const& Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_get__TrackableRemoved_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackableRemoved_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::__cordl_internal_set__TrackableRemoved_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackableRemoved_k__BackingField = value;
}
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration Meta::XR::MRUtilityKit::MRUK_MRUKSettings::get_TrackerConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"get_TrackerConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::set_TrackerConfiguration(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"set_TrackerConfiguration", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* Meta::XR::MRUtilityKit::MRUK_MRUKSettings::get_TrackableAdded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"get_TrackableAdded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::set_TrackableAdded(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"set_TrackableAdded", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* Meta::XR::MRUtilityKit::MRUK_MRUKSettings::get_TrackableRemoved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"get_TrackableRemoved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::set_TrackableRemoved(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {"set_TrackableRemoved", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MRUtilityKit::MRUK_MRUKSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings* Meta::XR::MRUtilityKit::MRUK_MRUKSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings::MRUK_MRUKSettings()   {
}
