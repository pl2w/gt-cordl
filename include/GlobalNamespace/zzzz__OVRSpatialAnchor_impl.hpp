#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_EraseOptions_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_SaveOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_EraseResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_SaveResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_EraseOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_InvertedCapture_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_LoadOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_MultiAnchorActionType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_MultiAnchorDelegatePair_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_SaveOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__WhenCreatedAsync_d__19_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__WhenLocalizedAsync_d__22_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.add__onLocalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::add__onLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa63fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"add__onLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.remove__onLocalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::remove__onLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa63fdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"remove__onLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get__anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get__anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa63fe68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get__anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.set__anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSpatialAnchor::set__anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa63fe7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"set__anchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.add_OnLocalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::add_OnLocalize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa63fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"add_OnLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.remove_OnLocalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa64006c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"remove_OnLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Uuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa640070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Uuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Created
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Created)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa63ff84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Created", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_PendingCreation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_PendingCreation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6400cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_PendingCreation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.WhenCreatedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::WhenCreatedAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa640140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"WhenCreatedAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Localized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Localized)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa640224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Localized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.WhenLocalizedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::WhenLocalizedAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa6402e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"WhenLocalizedAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa6403c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa6405d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa640700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa640888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa640a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa640af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0xa640c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xa641438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0xa641864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsyncInternal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa640494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsyncInternal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetListToStoreTheShareRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa641ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"GetListToStoreTheShareRequest", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.AreSortedUserListsEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa642238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"AreSortedUserListsEqual", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::SaveAnchorsAsync)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa6424d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAnchorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveAnchorAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa64283c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAnchorAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAnchorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::EraseAnchorAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6428b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAnchorAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpatialAnchor::EraseAnchorsAsync)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xa642924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ThrowIfBound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ThrowIfBound)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa642cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ThrowIfBound", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa642df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InitializeUnchecked", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa643174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa64330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa643330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareBatchAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa643560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareBatchAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa643dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetTrackingSpacePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa643f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"GetTrackingSpacePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CreateSpatialAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6431a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"CreateSpatialAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.TryGetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::by_ref<::GlobalNamespace::OVRPose>)>(&::GlobalNamespace::OVRSpatialAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa643fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"TryGetPose", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa64308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa6441a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InvokeMultiAnchorDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType)>(&::GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa644784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InvokeMultiAnchorDelegate", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpatialAnchorCreateComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa644b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpatialAnchorCreateComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa644d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundSharedAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa644f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundSharedAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundSharedAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> (*)(::System::Guid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa645080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundSharedAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> (*)(::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa645178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> (*)(::GlobalNamespace::OVRAnchor_FetchOptions, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa644e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchorsAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.FromOVRAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>)>(&::GlobalNamespace::OVRSpatialAnchor::FromOVRAnchor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa645290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"FromOVRAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.TryGetUnbound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>)>(&::GlobalNamespace::OVRSpatialAnchor::TryGetUnbound)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa6453e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"TryGetUnbound", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSetComponentStatusComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa645514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceSetComponentStatusComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnShareSpacesComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6455f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnShareSpacesComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeFromExisting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa645680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InitializeFromExisting", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6458b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Save", {}, {::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_SaveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6458c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Save", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Space)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa645adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Space", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa645b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa645bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa645c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa645d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa645e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa645eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Erase", {}, {::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_EraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa645ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Erase", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa64607c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchors", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), ::i2c::type_of<::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xa6437b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa646610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Save", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6468c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_EraseOptions)>(&::GlobalNamespace::OVRSpatialAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa645f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6468d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_SaveOptions)>(&::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa645970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions)>(&::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xa6468d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>> (*)(::GlobalNamespace::OVRSpatialAnchor_LoadOptions)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa646170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchorsAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ToNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::ToNativeArray)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa6462f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ToNativeArray", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CopyAnchorListIntoListFromPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa646598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"CopyAnchorListIntoListFromPool", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveBatchAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa643380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveBatchAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSaveComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa646e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceSaveComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceEraseComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa646e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceEraseComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceQueryComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0xa646e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceQueryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceListSaveComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6473f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceListSaveComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa647480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__startCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startCalled;
}
constexpr bool const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__startCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startCalled;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__startCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startCalled = value;
}
constexpr uint64_t& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__requestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__requestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestId;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__requestId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestId = value;
}
constexpr bool& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__creationFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____creationFailed;
}
constexpr bool const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__creationFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____creationFailed;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__creationFailed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____creationFailed = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__onLocalize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onLocalize;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__onLocalize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onLocalize;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onLocalize = value;
}
constexpr ::GlobalNamespace::OVRAnchor& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get___anchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____anchor_k__BackingField;
}
constexpr ::GlobalNamespace::OVRAnchor const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get___anchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____anchor_k__BackingField;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set___anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____anchor_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultSaveOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSaveOptions;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultSaveOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSaveOptions;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__defaultSaveOptions(::GlobalNamespace::OVRSpatialAnchor_SaveOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultSaveOptions = value;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultEraseOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultEraseOptions;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultEraseOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultEraseOptions;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__defaultEraseOptions(::GlobalNamespace::OVRSpatialAnchor_EraseOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultEraseOptions = value;
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "SpatialAnchors", ::GlobalNamespace::OVRSpatialAnchor*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_SpatialAnchors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "SpatialAnchors", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "CreationRequests", ::GlobalNamespace::OVRSpatialAnchor*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_CreationRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "CreationRequests", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>*, "AsyncRequestTaskIds", ::GlobalNamespace::OVRSpatialAnchor*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>* GlobalNamespace::OVRSpatialAnchor::getStaticF_AsyncRequestTaskIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>*, "AsyncRequestTaskIds", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_ShareRequests(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*, "ShareRequests", ::GlobalNamespace::OVRSpatialAnchor*>(std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_ShareRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*, "ShareRequests", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_MultiAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates", ::GlobalNamespace::OVRSpatialAnchor*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* GlobalNamespace::OVRSpatialAnchor::getStaticF_MultiAnchorCompletionDelegates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SaveRequests(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*, "SaveRequests", ::GlobalNamespace::OVRSpatialAnchor*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* GlobalNamespace::OVRSpatialAnchor::getStaticF_SaveRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*, "SaveRequests", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::add__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"add__onLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::remove__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"remove__onLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRAnchor GlobalNamespace::OVRSpatialAnchor::get__anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get__anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::set__anchor(::GlobalNamespace::OVRAnchor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"set__anchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::add_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"add_OnLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"remove_OnLocalize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Uuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Created()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Created", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_PendingCreation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_PendingCreation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::WhenCreatedAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"WhenCreatedAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Localized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Localized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::WhenLocalizedAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"WhenLocalizedAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user1, user2);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user1, user2, user3);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3, ::GlobalNamespace::OVRSpaceUser  user4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user1, user2, user3, user4);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(this, ___internal_method, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(nullptr, ___internal_method, anchors, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  groupUuids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuids);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareAsyncInternal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, users);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*  users)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"GetListToStoreTheShareRequest", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(this, ___internal_method, users);
}
inline bool GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*  sortedList1, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*  sortedList2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"AreSortedUserListsEqual", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sortedList1, sortedList2);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRSpatialAnchor::SaveAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(nullptr, ___internal_method, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRSpatialAnchor::SaveAnchorAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAnchorAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRSpatialAnchor::EraseAnchorAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAnchorAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRSpatialAnchor::EraseAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(nullptr, ___internal_method, anchors, uuids);
}
inline void GlobalNamespace::OVRSpatialAnchor::ThrowIfBound(::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ThrowIfBound", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked(::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InitializeUnchecked", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ShareBatchAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"GetTrackingSpacePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"CreateSpatialAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::TryGetPose(::GlobalNamespace::OVRSpace  space, ::by_ref<::GlobalNamespace::OVRPose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"TryGetPose", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, space, pose);
}
inline void GlobalNamespace::OVRSpatialAnchor::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate(uint64_t  requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType  actionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InvokeMultiAnchorDelegate", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, actionType);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete(uint64_t  requestId, bool  success, ::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpatialAnchorCreateComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, success, space, uuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  onIncrementalResultsAvailable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(nullptr, ___internal_method, uuids, unboundAnchors, onIncrementalResultsAvailable);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundSharedAnchorsAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>>(nullptr, ___internal_method, uuids, unboundAnchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>>(nullptr, ___internal_method, groupUuid, unboundAnchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundSharedAnchorsAsync", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>>(nullptr, ___internal_method, groupUuid, allowedAnchorUuids, unboundAnchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(::GlobalNamespace::OVRAnchor_FetchOptions  fetchOptions, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  resultsHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchorsAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>>(nullptr, ___internal_method, fetchOptions, unboundAnchors, resultsHandler);
}
inline bool GlobalNamespace::OVRSpatialAnchor::FromOVRAnchor(::GlobalNamespace::OVRAnchor  anchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  unboundAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"FromOVRAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anchor, unboundAnchor);
}
inline bool GlobalNamespace::OVRSpatialAnchor::TryGetUnbound(::GlobalNamespace::OVRAnchor  anchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  unboundAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"TryGetUnbound", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anchor, unboundAnchor);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete(uint64_t  requestId, bool  result, ::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceSetComponentStatusComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, space, uuid, componentType, enabled);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete(uint64_t  requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnShareSpacesComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting(::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"InitializeFromExisting", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Save", {}, {::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Save", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveOptions, onComplete);
}
inline ::GlobalNamespace::OVRSpace GlobalNamespace::OVRSpatialAnchor::get_Space()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"get_Space", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser  user, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user1, user2, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user1, user2, user3, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3, ::GlobalNamespace::OVRSpaceUser  user4, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user1, user2, user3, user4, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, users, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Erase", {}, {::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::GlobalNamespace::OVRSpatialAnchor_EraseOptions  eraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Erase", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eraseOptions, onComplete);
}
inline bool GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors(::GlobalNamespace::OVRSpatialAnchor_LoadOptions  options, ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchors", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), ::i2c::type_of<::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, options, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*  users, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Share", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, users, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"Save", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(), ::i2c::type_of<::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, saveOptions, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::EraseAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::EraseAsync(::GlobalNamespace::OVRSpatialAnchor_EraseOptions  eraseOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"EraseAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, eraseOptions);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::SaveAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::SaveAsync(::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, saveOptions);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::SaveAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveAsync", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(nullptr, ___internal_method, anchors, saveOptions);
}
inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>> GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(::GlobalNamespace::OVRSpatialAnchor_LoadOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"LoadUnboundAnchorsAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>>(nullptr, ___internal_method, options);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> GlobalNamespace::OVRSpatialAnchor::ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"ToNativeArray", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(nullptr, ___internal_method, anchors);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchorList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"CopyAnchorListIntoListFromPool", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(nullptr, ___internal_method, anchorList);
}
inline void GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"SaveBatchAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete(uint64_t  requestId, ::GlobalNamespace::OVRSpace  space, bool  result, ::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceSaveComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, space, result, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete(uint64_t  requestId, bool  result, ::System::Guid  uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceEraseComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, uuid, location);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete(uint64_t  requestId, bool  queryResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceQueryComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, queryResult);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete(uint64_t  requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {"OnSpaceListSaveComplete", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSpatialAnchor* GlobalNamespace::OVRSpatialAnchor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSpatialAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor::OVRSpatialAnchor()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::*)()>(&::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6483e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0._LoadUnboundAnchorsAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t)>(&::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_LoadUnboundAnchorsAsync_b__0)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa6483f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(),
                        {"<LoadUnboundAnchorsAsync>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*& GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_unboundAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unboundAnchors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* const& GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_unboundAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unboundAnchors;
}
constexpr void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_set_unboundAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unboundAnchors = value;
}
constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*& GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_resultsHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultsHandler;
}
constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>* const& GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_resultsHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultsHandler;
}
constexpr void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_set_resultsHandler(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultsHandler = value;
}
inline void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_LoadUnboundAnchorsAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  incrementalResults, int32_t  staringIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(),
                        {"<LoadUnboundAnchorsAsync>b__0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incrementalResults, staringIndex);
}
inline ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::OVRSpatialAnchor___c__DisplayClass65_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c::*)()>(&::GlobalNamespace::OVRSpatialAnchor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6483a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c._GetListToStoreTheShareRequest_b__33_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpatialAnchor___c::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor___c::_GetListToStoreTheShareRequest_b__33_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6483ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(),
                        {"<GetListToStoreTheShareRequest>b__33_0", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor___c::setStaticF___9(::GlobalNamespace::OVRSpatialAnchor___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRSpatialAnchor___c*, "<>9", ::GlobalNamespace::OVRSpatialAnchor___c*>(std::forward<::GlobalNamespace::OVRSpatialAnchor___c*>(value));
}
inline ::GlobalNamespace::OVRSpatialAnchor___c* GlobalNamespace::OVRSpatialAnchor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRSpatialAnchor___c*, "<>9", ::GlobalNamespace::OVRSpatialAnchor___c*>();
}
inline void GlobalNamespace::OVRSpatialAnchor___c::setStaticF___9__33_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__33_0", ::GlobalNamespace::OVRSpatialAnchor___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* GlobalNamespace::OVRSpatialAnchor___c::getStaticF___9__33_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__33_0", ::GlobalNamespace::OVRSpatialAnchor___c*>();
}
inline void GlobalNamespace::OVRSpatialAnchor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSpatialAnchor___c::_GetListToStoreTheShareRequest_b__33_0(::GlobalNamespace::OVRSpaceUser  x, ::GlobalNamespace::OVRSpaceUser  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(),
                        {"<GetListToStoreTheShareRequest>b__33_0", {}, {::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::OVRSpatialAnchor___c* GlobalNamespace::OVRSpatialAnchor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSpatialAnchor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor___c::OVRSpatialAnchor___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa647f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogWarning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa648008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa648094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequestOrError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result, ::StringW, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequestOrError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa648120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogRequestOrError", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa648178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogRequest", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequestResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::StringW, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequestResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa64817c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogRequestResult", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor_Development::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogWarning(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequestOrError(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result, ::StringW  successMessage, ::StringW  failureMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogRequestOrError", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequest(uint64_t  requestId, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogRequest", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequestResult(uint64_t  requestId, bool  result, ::StringW  successMessage, ::StringW  failureMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                        {"LogRequestResult", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_Development::OVRSpatialAnchor_Development()   {
}
