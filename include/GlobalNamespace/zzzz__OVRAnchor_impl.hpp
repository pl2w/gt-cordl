#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_<>c__DisplayClass54_0___FetchAnchorsAsync_g__execute|0_d_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ConfigureTrackerResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_DeferredKey_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_DeferredValue_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_EraseResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchTaskData_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FilterUnion_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_SaveResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Telemetry_Key_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Telemetry_MarkerId_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker__ConfigureAsync_d__9_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker__Dispose_d__12_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker__SetupDynamicObjectTracker_d__7_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker__SetupMarkerTracker_d__5_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync|7_1_d_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker___SetupMarkerTracker_g__CreateTrackerAsync|5_0_d_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor__FetchAnchorsAsync_d__56_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor__FetchSharedAnchorsAsync_d__10_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor__FetchSharedAnchorsAsync_d__9_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor__FetchTrackablesAsync_d__66_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync|66_0_d_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceDiscoveryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceDiscoveryResultsData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceEraseCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceListSaveResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceQueryCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpaceSetComponentStatusCompleteData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpacesEraseResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_SpacesSaveResultData_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceDiscoveryComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceDiscoveryComplete)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa5667c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceDiscoveryComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceDiscoveryResultsAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData)>(&::GlobalNamespace::OVRAnchor::OnSpaceDiscoveryResultsAvailable)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xa566cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceDiscoveryResultsAvailable", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchOptions, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*)>(&::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa567054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchSharedAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (*)(::System::Guid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa567ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchSharedAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (*)(::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa567bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateSpatialAnchorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Pose)>(&::GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa567ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"CreateSpatialAnchorAsync", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateSpatialAnchorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(&::GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa567e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"CreateSpatialAnchorAsync", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa567ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa568260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveSpacesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(::System::ReadOnlySpan_1<uint64_t>)>(&::GlobalNamespace::OVRAnchor::SaveSpacesAsync)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa568078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveSpacesAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSaveSpacesResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData)>(&::GlobalNamespace::OVRAnchor::OnSaveSpacesResult)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa5687b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSaveSpacesResult", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa568820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0xa568b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseSpacesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<::System::Guid>)>(&::GlobalNamespace::OVRAnchor::EraseSpacesAsync)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa5688a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseSpacesAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnEraseSpacesResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData)>(&::GlobalNamespace::OVRAnchor::OnEraseSpacesResult)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa569058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnEraseSpacesResult", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::GlobalNamespace::OVRAnchor::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa5690c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0xa5695e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareSpacesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<uint64_t>)>(&::GlobalNamespace::OVRAnchor::ShareSpacesAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa5694cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareSpacesAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::GlobalNamespace::OVRAnchor::*)(::System::Guid)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa569ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Guid)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0xa569ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<::System::Guid>)>(&::GlobalNamespace::OVRAnchor::ShareAsyncInternal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa569d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsyncInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnShareAnchorsToGroupsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRAnchor::OnShareAnchorsToGroupsComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa56a278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnShareAnchorsToGroupsComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.get_Uuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa56a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"get_Uuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor::*)(uint64_t, ::System::Guid)>(&::GlobalNamespace::OVRAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa567048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetSupportedComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*)>(&::GlobalNamespace::OVRAnchor::GetSupportedComponents)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa56a30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"GetSupportedComponents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa56a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa56a60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::op_Equality)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa56a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::op_Inequality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa56a734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa56a7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa56a854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa56a8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRAnchor::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa56a944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2)>(&::GlobalNamespace::OVRAnchor::FetchAnchors)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0xa56aa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchors", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateDeferredSpaceComponentStatusTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(uint64_t, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool, double_t)>(&::GlobalNamespace::OVRAnchor::CreateDeferredSpaceComponentStatusTask)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa56aee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"CreateDeferredSpaceComponentStatusTask", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceSetComponentStatusComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xa56b0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceSetComponentStatusComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace_StorageLocation, double_t)>(&::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa56b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceQueryComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xa56b710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceQueryComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace_StorageLocation, int32_t, double_t)>(&::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa56be74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveSpaceList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(uint64_t*, uint32_t, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation, ::by_ref<uint64_t>)>(&::GlobalNamespace::OVRAnchor::SaveSpaceList)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa56bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveSpaceList", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceListSaveResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData)>(&::GlobalNamespace::OVRAnchor::OnSpaceListSaveResult)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa56c13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceListSaveResult", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(uint64_t, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation, ::by_ref<uint64_t>)>(&::GlobalNamespace::OVRAnchor::EraseSpace)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa56c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseSpace", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceEraseComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa56c308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceEraseComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetTrackableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackableType (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::GetTrackableType)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xa56c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"GetTrackableType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetRequiredComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*)>(&::GlobalNamespace::OVRAnchor::GetRequiredComponents)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa56c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"GetRequiredComponents", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchTrackablesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*)>(&::GlobalNamespace::OVRAnchor::FetchTrackablesAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa56c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchTrackablesAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*)>(&::GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa56ce48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType)>(&::GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa56cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"<FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor::setStaticF_Null(::GlobalNamespace::OVRAnchor  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRAnchor, "Null", ::GlobalNamespace::OVRAnchor>(std::forward<::GlobalNamespace::OVRAnchor>(value));
}
inline ::GlobalNamespace::OVRAnchor GlobalNamespace::OVRAnchor::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRAnchor, "Null", ::GlobalNamespace::OVRAnchor>();
}
inline void GlobalNamespace::OVRAnchor::setStaticF__deferredTasks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*, "_deferredTasks", ::GlobalNamespace::OVRAnchor>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>* GlobalNamespace::OVRAnchor::getStaticF__deferredTasks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*, "_deferredTasks", ::GlobalNamespace::OVRAnchor>();
}
inline void GlobalNamespace::OVRAnchor::setStaticF__typeMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>*, "_typeMap", ::GlobalNamespace::OVRAnchor>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>* GlobalNamespace::OVRAnchor::getStaticF__typeMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>*, "_typeMap", ::GlobalNamespace::OVRAnchor>();
}
inline void GlobalNamespace::OVRAnchor::OnSpaceDiscoveryComplete(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceDiscoveryComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceDiscoveryResultsAvailable(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceDiscoveryResultsAvailable", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRAnchor_FetchOptions  options, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(nullptr, ___internal_method, anchors, options, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(nullptr, ___internal_method, groupUuid, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(nullptr, ___internal_method, groupUuid, allowedAnchorUuids, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync(::UnityEngine::Pose  trackingSpacePose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"CreateSpatialAnchorAsync", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>>(nullptr, ___internal_method, trackingSpacePose);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync(::UnityEngine::Transform*  transform, ::UnityEngine::Camera*  centerEyeCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"CreateSpatialAnchorAsync", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>>(nullptr, ___internal_method, transform, centerEyeCamera);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(nullptr, ___internal_method, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveSpacesAsync(::System::ReadOnlySpan_1<uint64_t>  spaces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveSpacesAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(nullptr, ___internal_method, spaces);
}
inline void GlobalNamespace::OVRAnchor::OnSaveSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSaveSpacesResult", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRAnchor::EraseAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRAnchor::EraseAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(nullptr, ___internal_method, anchors, uuids);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRAnchor::EraseSpacesAsync(::System::ReadOnlySpan_1<uint64_t>  spaces, ::System::ReadOnlySpan_1<::System::Guid>  uuids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseSpacesAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(nullptr, ___internal_method, spaces, uuids);
}
inline void GlobalNamespace::OVRAnchor::OnEraseSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnEraseSpacesResult", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(*this, ___internal_method, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareSpacesAsync(::System::ReadOnlySpan_1<uint64_t>  spaces, ::System::ReadOnlySpan_1<uint64_t>  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareSpacesAsync", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, spaces, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsync(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(*this, ___internal_method, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsyncInternal(::System::ReadOnlySpan_1<uint64_t>  anchors, ::System::ReadOnlySpan_1<::System::Guid>  groupUuids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"ShareAsyncInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuids);
}
inline void GlobalNamespace::OVRAnchor::OnShareAnchorsToGroupsComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnShareAnchorsToGroupsComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline uint64_t GlobalNamespace::OVRAnchor::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::System::Guid GlobalNamespace::OVRAnchor::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"get_Uuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::_ctor(uint64_t  handle, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, uuid);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GlobalNamespace::OVRAnchor::GetComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool GlobalNamespace::OVRAnchor::TryGetComponent(::by_ref<T>  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {"TryGetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, component);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool GlobalNamespace::OVRAnchor::SupportsComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {"SupportsComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor::GetSupportedComponents(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*  components)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"GetSupportedComponents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, components);
}
inline bool GlobalNamespace::OVRAnchor::Equals(::GlobalNamespace::OVRAnchor  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::OVRAnchor::op_Equality(::GlobalNamespace::OVRAnchor  lhs, ::GlobalNamespace::OVRAnchor  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRAnchor::op_Inequality(::GlobalNamespace::OVRAnchor  lhs, ::GlobalNamespace::OVRAnchor  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t GlobalNamespace::OVRAnchor::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRAnchor::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor::FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  queryInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchors", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(nullptr, ___internal_method, anchors, queryInfo);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::CreateDeferredSpaceComponentStatusTask(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, bool  enabledDesired, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"CreateDeferredSpaceComponentStatusTask", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, space, componentType, enabledDesired, timeout);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceSetComponentStatusComplete(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceSetComponentStatusComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRSpace_StorageLocation  location, int32_t  maxResults, double_t  timeout)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                    {"FetchAnchorsAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, anchors, location, maxResults, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRSpace_StorageLocation  location, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, uuids, anchors, location, timeout);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceQueryComplete(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceQueryComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRSpace_StorageLocation  location, int32_t  maxResults, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchAnchorsAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, type, anchors, location, maxResults, timeout);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor::SaveSpaceList(uint64_t*  spaces, uint32_t  numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"SaveSpaceList", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(nullptr, ___internal_method, spaces, numSpaces, location, requestId);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceListSaveResult(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceListSaveResult", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor::EraseSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"EraseSpace", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(nullptr, ___internal_method, space, location, requestId);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceEraseComplete(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"OnSpaceEraseComplete", {}, {::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRAnchor_TrackableType GlobalNamespace::OVRAnchor::GetTrackableType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"GetTrackableType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackableType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::GetRequiredComponents(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypesOut, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*  requiredComponentsOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"GetRequiredComponents", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trackableTypes, trackableTypesOut, requiredComponentsOut);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRAnchor::FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"FetchTrackablesAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(nullptr, ___internal_method, anchors, trackableTypes, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(nullptr, ___internal_method, anchors, trackableTypes, componentType, incrementalResultsCallback);
}
inline bool GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                        {"<FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trackableTypes, anchor, componentType);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr  GlobalNamespace::OVRAnchor::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>* GlobalNamespace::OVRAnchor::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRAnchor::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRAnchor::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor::OVRAnchor(uint64_t  _Handle_k__BackingField, ::System::Guid  _Uuid_k__BackingField) noexcept  {
this->_Handle_k__BackingField = _Handle_k__BackingField;
this->_Uuid_k__BackingField = _Uuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor::OVRAnchor()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::*)()>(&::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa57189c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0._FetchAnchorsAsync_g__execute_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::*)()>(&::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_FetchAnchorsAsync_g__execute_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa5718a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(),
                        {"<FetchAnchorsAsync>g__execute|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>*& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_uuids()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uuids;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_uuids() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uuids;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_uuids(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uuids = value;
}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_location()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_location() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_location(::GlobalNamespace::OVRSpace_StorageLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___location = value;
}
constexpr double_t& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr double_t const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_timeout(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeout = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_anchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchors;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_anchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchors;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_anchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchors = value;
}
inline void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_FetchAnchorsAsync_g__execute_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(),
                        {"<FetchAnchorsAsync>g__execute|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* GlobalNamespace::OVRAnchor___c__DisplayClass54_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::OVRAnchor___c__DisplayClass54_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackerConfiguration (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.SetupMarkerTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRAnchor_Tracker::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::SetupMarkerTracker)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa56e1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"SetupMarkerTracker", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.SetupDynamicObjectTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRAnchor_Tracker::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::SetupDynamicObjectTracker)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa56e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"SetupDynamicObjectTracker", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.ConfigureAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> (::GlobalNamespace::OVRAnchor_Tracker::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::ConfigureAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa56e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"ConfigureAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.FetchTrackablesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (::GlobalNamespace::OVRAnchor_Tracker::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*)>(&::GlobalNamespace::OVRAnchor_Tracker::FetchTrackablesAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa56e48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"FetchTrackablesAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::Finalize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa56e630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa56e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa56e7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupMarkerTracker_g__CreateTrackerAsync_5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupMarkerTracker_g__CreateTrackerAsync_5_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa56e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"<SetupMarkerTracker>g__CreateTrackerAsync|5_0", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupDynamicObjectTracker_g__SetClassesAsync_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> (*)(uint64_t, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__SetClassesAsync_7_0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa56e8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"<SetupDynamicObjectTracker>g__SetClassesAsync|7_0", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> (*)(uint64_t, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa56ea08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|7_1", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configuration;
}
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configuration;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__configuration(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configuration = value;
}
constexpr int32_t& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__asyncOperationCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOperationCount;
}
constexpr int32_t const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__asyncOperationCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOperationCount;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__asyncOperationCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncOperationCount = value;
}
constexpr uint64_t& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__markerTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____markerTracker;
}
constexpr uint64_t const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__markerTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____markerTracker;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__markerTracker(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____markerTracker = value;
}
constexpr uint64_t& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__dynamicObjectTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicObjectTracker;
}
constexpr uint64_t const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__dynamicObjectTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicObjectTracker;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__dynamicObjectTracker(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicObjectTracker = value;
}
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration GlobalNamespace::OVRAnchor_Tracker::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor_Tracker::SetupMarkerTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"SetupMarkerTracker", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(this, ___internal_method, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor_Tracker::SetupDynamicObjectTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"SetupDynamicObjectTracker", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(this, ___internal_method, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> GlobalNamespace::OVRAnchor_Tracker::ConfigureAsync(::GlobalNamespace::OVRAnchor_TrackerConfiguration  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"ConfigureAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>>(this, ___internal_method, configuration);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRAnchor_Tracker::FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"FetchTrackablesAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(this, ___internal_method, anchors, incrementalResultsCallback);
}
inline void GlobalNamespace::OVRAnchor_Tracker::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Tracker::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Tracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> GlobalNamespace::OVRAnchor_Tracker::_SetupMarkerTracker_g__CreateTrackerAsync_5_0(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"<SetupMarkerTracker>g__CreateTrackerAsync|5_0", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>>(nullptr, ___internal_method, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__SetClassesAsync_7_0(uint64_t  tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"<SetupDynamicObjectTracker>g__SetClassesAsync|7_0", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>>(nullptr, ___internal_method, tracker, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1(uint64_t  tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                        {"<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|7_1", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>>(nullptr, ___internal_method, tracker, config);
}
inline ::GlobalNamespace::OVRAnchor_Tracker* GlobalNamespace::OVRAnchor_Tracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRAnchor_Tracker*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRAnchor_Tracker::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRAnchor_Tracker::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_Tracker::OVRAnchor_Tracker()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.OnInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRAnchor_Telemetry::OnInit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa56a9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"OnInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.AddMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRTelemetryMarker)>(&::GlobalNamespace::OVRAnchor_Telemetry::AddMarker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa56d3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"AddMarker", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRAnchor_Telemetry::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa56d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"Start", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetSyncResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRTelemetryMarker, uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRAnchor_Telemetry::SetSyncResult)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa5685f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"SetSyncResult", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetAsyncResultAndSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, int64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResultAndSend)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa566bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"SetAsyncResultAndSend", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetAsyncResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, int64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResult)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa56bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"SetAsyncResult", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.GetMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::GetMarker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa566af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"GetMarker", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.TryGetMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>)>(&::GlobalNamespace::OVRAnchor_Telemetry::TryGetMarker)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa56d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"TryGetMarker", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>)>(&::GlobalNamespace::OVRAnchor_Telemetry::Remove)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa56d5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.GetRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::GetRemove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa56d67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"GetRemove", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor_Telemetry::setStaticF_s_markers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>*, "s_markers", ::GlobalNamespace::OVRAnchor_Telemetry*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>* GlobalNamespace::OVRAnchor_Telemetry::getStaticF_s_markers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>*, "s_markers", ::GlobalNamespace::OVRAnchor_Telemetry*>();
}
inline void GlobalNamespace::OVRAnchor_Telemetry::OnInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"OnInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::AddMarker(uint64_t  requestId, ::GlobalNamespace::OVRTelemetryMarker  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"AddMarker", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, marker);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRAnchor_Telemetry::Start(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"Start", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, markerId, requestId, result);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::SetSyncResult(::GlobalNamespace::OVRTelemetryMarker  marker, uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"SetSyncResult", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, requestId, result);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResultAndSend(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, int64_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"SetAsyncResultAndSend", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerId, requestId, result);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResult(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, int64_t  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"SetAsyncResult", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>>(nullptr, ___internal_method, markerId, requestId, result);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::GetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"GetMarker", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>>(nullptr, ___internal_method, markerId, requestId);
}
inline bool GlobalNamespace::OVRAnchor_Telemetry::TryGetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"TryGetMarker", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, markerId, requestId, marker);
}
inline bool GlobalNamespace::OVRAnchor_Telemetry::Remove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, markerId, requestId, marker);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::GetRemove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                        {"GetRemove", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>>(nullptr, ___internal_method, markerId, requestId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_Telemetry::OVRAnchor_Telemetry()   {
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_Annotation::Telemetry_OVRAnchor_Annotation()   {
}
