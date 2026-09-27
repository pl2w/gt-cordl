#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ShareResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__LabelFilter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_CouchSeat_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_Surface_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom__ShareRoomAsync_d__56_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_PositioningMethod_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SurfaceType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_Anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f32fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_Anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::GlobalNamespace::OVRAnchor)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_Anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f32fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_Anchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_IsLocal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f2eb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_InitialPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_InitialPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f32fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_InitialPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_InitialPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_InitialPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f32fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_InitialPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_DeltaPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_DeltaPose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f32ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_DeltaPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_Anchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_Anchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f33164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_Anchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_WallAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_WallAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f3316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_WallAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_FloorAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_FloorAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f33174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_FloorAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_FloorAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_FloorAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f3317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_FloorAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_CeilingAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_CeilingAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f33184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_CeilingAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_CeilingAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_CeilingAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f3318c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_CeilingAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_GlobalMeshAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_GlobalMeshAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f33194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_GlobalMeshAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_GlobalMeshAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_GlobalMeshAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f3319c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_GlobalMeshAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_SeatPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_SeatPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_SeatPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_AnchorCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_AnchorCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_AnchorCreatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_AnchorCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_AnchorCreatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_AnchorCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_AnchorUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_AnchorUpdatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_AnchorUpdatedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_AnchorUpdatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_AnchorUpdatedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_AnchorUpdatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.get_AnchorRemovedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::get_AnchorRemovedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_AnchorRemovedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.set_AnchorRemovedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::set_AnchorRemovedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f331d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_AnchorRemovedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.RegisterAnchorCreatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::RegisterAnchorCreatedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f331dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RegisterAnchorCreatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.RegisterAnchorUpdatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::RegisterAnchorUpdatedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f33234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RegisterAnchorUpdatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.RegisterAnchorRemovedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::RegisterAnchorRemovedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f3328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RegisterAnchorRemovedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.UnRegisterAnchorCreatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::UnRegisterAnchorCreatedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f332e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"UnRegisterAnchorCreatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.UnRegisterAnchorUpdatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::UnRegisterAnchorUpdatedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f3333c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"UnRegisterAnchorUpdatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.UnRegisterAnchorRemovedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::UnRegisterAnchorRemovedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f33394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"UnRegisterAnchorRemovedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.ShareRoomAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::System::Guid)>(&::Meta::XR::MRUtilityKit::MRUKRoom::ShareRoomAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9f333ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"ShareRoomAsync", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.FindAnchorByUuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::System::Guid)>(&::Meta::XR::MRUtilityKit::MRUKRoom::FindAnchorByUuid)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9f334e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"FindAnchorByUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.ComputeRoomInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::ComputeRoomInfo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9f33684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"ComputeRoomInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetRoomAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetRoomAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f34df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetRoomAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.RemoveAndDestroyAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::RemoveAndDestroyAnchor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f34dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RemoveAndDestroyAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetFloorAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetFloorAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f34f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetFloorAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetCeilingAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetCeilingAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f34f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetCeilingAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetGlobalMeshAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetGlobalMeshAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f34f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetGlobalMeshAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetWallAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetWallAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f34f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetWallAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.CalculateSeatPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::CalculateSeatPoses)> {
  constexpr static std::size_t size = 0x9f8;
  constexpr static std::size_t addrs = 0x9f337d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"CalculateSeatPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetRoomOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetRoomOutline)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f34ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetRoomOutline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetKeyWall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::by_ref<::UnityEngine::Vector2>, float_t)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetKeyWall)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x9f35610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetKeyWall", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.SortWallsByWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::SortWallsByWidth)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9f358f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"SortWallsByWidth", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.RaycastAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::Meta::XR::MRUtilityKit::LabelFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::RaycastAll)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x9f35b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::Meta::XR::MRUtilityKit::LabelFilter, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::Raycast)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9f35e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::Raycast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f360dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::Meta::XR::MRUtilityKit::LabelFilter, ::by_ref<::UnityEngine::RaycastHit>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::Raycast)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f3611c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::Raycast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f36150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetBestPoseFromRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::Meta::XR::MRUtilityKit::LabelFilter, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>, ::by_ref<::UnityEngine::Vector3>, ::GlobalNamespace::MRUK_PositioningMethod)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetBestPoseFromRaycast)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x9f36190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetBestPoseFromRaycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::GlobalNamespace::MRUK_PositioningMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetBestPoseFromRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, float_t, ::Meta::XR::MRUtilityKit::LabelFilter, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>, ::GlobalNamespace::MRUK_PositioningMethod)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetBestPoseFromRaycast)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f36b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetBestPoseFromRaycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::GlobalNamespace::MRUK_PositioningMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.IsPositionInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, bool)>(&::Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInRoom)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f36b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInRoom", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.TestVerticalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, ::UnityEngine::Bounds)>(&::Meta::XR::MRUtilityKit::MRUKRoom::TestVerticalBounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f36cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TestVerticalBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetRoomBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetRoomBounds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f36c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetRoomBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.CalculateRoomOutlineAndBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::CalculateRoomOutlineAndBounds)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x9f35008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"CalculateRoomOutlineAndBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.IsPositionInSceneVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>, bool, float_t)>(&::Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInSceneVolume)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9f36cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInSceneVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetFacingDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetFacingDirection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f34f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetFacingDirection", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetDirectionAwayFromClosestWall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<int32_t>, ::System::Collections::Generic::List_1<int32_t>*)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetDirectionAwayFromClosestWall)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9f36e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetDirectionAwayFromClosestWall", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.IsPositionInSceneVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, float_t)>(&::Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInSceneVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f37288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInSceneVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.IsPositionInSceneVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, bool, float_t)>(&::Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInSceneVolume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f372a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInSceneVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.TryGetClosestSeatPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::TryGetClosestSeatPose)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x9f372c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetClosestSeatPose", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GetSeatPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Pose> (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::GetSeatPoses)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x9f376d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetSeatPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.TryGetAnchorParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::TryGetAnchorParent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f37ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetAnchorParent", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.TryGetAnchorChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<::ArrayW<::Meta::XR::MRUtilityKit::MRUKAnchor*>>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::TryGetAnchorChildren)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f37b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetAnchorChildren", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::ArrayW<::Meta::XR::MRUtilityKit::MRUKAnchor*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.CalculateHierarchyReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::CalculateHierarchyReferences)> {
  constexpr static std::size_t size = 0xc28;
  constexpr static std::size_t addrs = 0x9f341cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"CalculateHierarchyReferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.DoesRoomHave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::ArrayW<::StringW>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::DoesRoomHave)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f37bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"DoesRoomHave", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.HasAllLabels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::GlobalNamespace::MRUKAnchor_SceneLabels)>(&::Meta::XR::MRUtilityKit::MRUKRoom::HasAllLabels)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9f37c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"HasAllLabels", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.TryGetClosestSurfacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>, ::Meta::XR::MRUtilityKit::LabelFilter)>(&::Meta::XR::MRUtilityKit::MRUKRoom::TryGetClosestSurfacePosition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f37d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.TryGetClosestSurfacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>, ::by_ref<::UnityEngine::Vector3>, ::Meta::XR::MRUtilityKit::LabelFilter)>(&::Meta::XR::MRUtilityKit::MRUKRoom::TryGetClosestSurfacePosition)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9f37da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.FindLargestSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::StringW)>(&::Meta::XR::MRUtilityKit::MRUKRoom::FindLargestSurface)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f38084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"FindLargestSurface", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.FindLargestSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::GlobalNamespace::MRUKAnchor_SceneLabels)>(&::Meta::XR::MRUtilityKit::MRUKRoom::FindLargestSurface)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9f380f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"FindLargestSurface", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GenerateRandomPositionInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::Meta::XR::MRUtilityKit::MRUKRoom::*)(float_t, bool)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GenerateRandomPositionInRoom)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9f38340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GenerateRandomPositionInRoom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.GenerateRandomPositionOnSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKRoom::*)(::GlobalNamespace::MRUK_SurfaceType, float_t, ::Meta::XR::MRUtilityKit::LabelFilter, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Meta::XR::MRUtilityKit::MRUKRoom::GenerateRandomPositionOnSurface)> {
  constexpr static std::size_t size = 0x131c;
  constexpr static std::size_t addrs = 0x9f385dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GenerateRandomPositionOnSurface", {}, {::i2c::type_of<::GlobalNamespace::MRUK_SurfaceType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f398f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKRoom::*)()>(&::Meta::XR::MRUtilityKit::MRUKRoom::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9f399c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRAnchor& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__Anchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchor_k__BackingField;
}
constexpr ::GlobalNamespace::OVRAnchor const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__Anchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchor_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Anchor_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__InitialPose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitialPose_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__InitialPose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitialPose_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__InitialPose_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InitialPose_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__Anchors_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchors_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__Anchors_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchors_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__Anchors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Anchors_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__WallAnchors_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WallAnchors_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__WallAnchors_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WallAnchors_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__WallAnchors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WallAnchors_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__FloorAnchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FloorAnchor_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__FloorAnchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FloorAnchor_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__FloorAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FloorAnchor_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__CeilingAnchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CeilingAnchor_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__CeilingAnchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CeilingAnchor_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__CeilingAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CeilingAnchor_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__GlobalMeshAnchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalMeshAnchor_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__GlobalMeshAnchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalMeshAnchor_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__GlobalMeshAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalMeshAnchor_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__SeatPoses_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SeatPoses_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__SeatPoses_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SeatPoses_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__SeatPoses_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SeatPoses_k__BackingField = value;
}
constexpr ::UnityEngine::Bounds& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__roomBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomBounds;
}
constexpr ::UnityEngine::Bounds const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__roomBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomBounds;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__roomBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomBounds = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__corners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____corners;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__corners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____corners;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__corners(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____corners = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Pose>& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__prevRoomPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevRoomPose;
}
constexpr ::System::Nullable_1<::UnityEngine::Pose> const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__prevRoomPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevRoomPose;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__prevRoomPose(::System::Nullable_1<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevRoomPose = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__AnchorCreatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorCreatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__AnchorCreatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorCreatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__AnchorCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorCreatedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__AnchorUpdatedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorUpdatedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__AnchorUpdatedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorUpdatedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__AnchorUpdatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorUpdatedEvent_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__AnchorRemovedEvent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorRemovedEvent_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_get__AnchorRemovedEvent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorRemovedEvent_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKRoom::__cordl_internal_set__AnchorRemovedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorRemovedEvent_k__BackingField = value;
}
inline ::GlobalNamespace::OVRAnchor Meta::XR::MRUtilityKit::MRUKRoom::get_Anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_Anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_Anchor(::GlobalNamespace::OVRAnchor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_Anchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::get_IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKRoom::get_InitialPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_InitialPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_InitialPose(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_InitialPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKRoom::get_DeltaPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_DeltaPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::get_Anchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_Anchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::get_WallAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_WallAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::get_FloorAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_FloorAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_FloorAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_FloorAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::get_CeilingAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_CeilingAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_CeilingAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_CeilingAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::get_GlobalMeshAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_GlobalMeshAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_GlobalMeshAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_GlobalMeshAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>* Meta::XR::MRUtilityKit::MRUKRoom::get_SeatPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_SeatPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::get_AnchorCreatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_AnchorCreatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_AnchorCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_AnchorCreatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::get_AnchorUpdatedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_AnchorUpdatedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_AnchorUpdatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_AnchorUpdatedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::get_AnchorRemovedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"get_AnchorRemovedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::set_AnchorRemovedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"set_AnchorRemovedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::RegisterAnchorCreatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RegisterAnchorCreatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::RegisterAnchorUpdatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RegisterAnchorUpdatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::RegisterAnchorRemovedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RegisterAnchorRemovedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::UnRegisterAnchorCreatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"UnRegisterAnchorCreatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::UnRegisterAnchorUpdatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"UnRegisterAnchorUpdatedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::UnRegisterAnchorRemovedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"UnRegisterAnchorRemovedCallback", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> Meta::XR::MRUtilityKit::MRUKRoom::ShareRoomAsync(::System::Guid  groupUuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"ShareRoomAsync", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(this, ___internal_method, groupUuid);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::FindAnchorByUuid(::System::Guid  uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"FindAnchorByUuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method, uuid);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::ComputeRoomInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"ComputeRoomInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::GetRoomAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetRoomAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::RemoveAndDestroyAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RemoveAndDestroyAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::GetFloorAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetFloorAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::GetCeilingAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetCeilingAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::GetGlobalMeshAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetGlobalMeshAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::GetWallAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetWallAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::CalculateSeatPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"CalculateSeatPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Meta::XR::MRUtilityKit::MRUKRoom::GetRoomOutline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetRoomOutline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::GetKeyWall(::by_ref<::UnityEngine::Vector2>  wallScale, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetKeyWall", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method, wallScale, tolerance);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKRoom::SortWallsByWidth(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  walls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"SortWallsByWidth", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(nullptr, ___internal_method, walls);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::RaycastAll(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHits, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  anchorList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"RaycastAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, maxDist, labelFilter, raycastHits, anchorList);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::UnityEngine::RaycastHit>  hit, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  outAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, maxDist, labelFilter, hit, outAnchor);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hit, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, maxDist, hit, anchor);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::UnityEngine::RaycastHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, maxDist, labelFilter, hit);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, maxDist, hit);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKRoom::GetBestPoseFromRaycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  sceneAnchor, ::by_ref<::UnityEngine::Vector3>  surfaceNormal, ::GlobalNamespace::MRUK_PositioningMethod  positioningMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetBestPoseFromRaycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::GlobalNamespace::MRUK_PositioningMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, ray, maxDist, labelFilter, sceneAnchor, surfaceNormal, positioningMethod);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKRoom::GetBestPoseFromRaycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  sceneAnchor, ::GlobalNamespace::MRUK_PositioningMethod  positioningMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetBestPoseFromRaycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::GlobalNamespace::MRUK_PositioningMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, ray, maxDist, labelFilter, sceneAnchor, positioningMethod);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInRoom(::UnityEngine::Vector3  queryPosition, bool  testVerticalBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInRoom", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, queryPosition, testVerticalBounds);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::TestVerticalBounds(::UnityEngine::Vector3  queryPosition, ::UnityEngine::Bounds  roomBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TestVerticalBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, queryPosition, roomBounds);
}
inline ::UnityEngine::Bounds Meta::XR::MRUtilityKit::MRUKRoom::GetRoomBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetRoomBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::CalculateRoomOutlineAndBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"CalculateRoomOutlineAndBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInSceneVolume(::UnityEngine::Vector3  worldPosition, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  sceneObject, bool  testVerticalBounds, float_t  distanceBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInSceneVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition, sceneObject, testVerticalBounds, distanceBuffer);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUKRoom::GetFacingDirection(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetFacingDirection", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, anchor);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUKRoom::GetDirectionAwayFromClosestWall(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::by_ref<int32_t>  cardinalAxisIndex, ::System::Collections::Generic::List_1<int32_t>*  excludedAxes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetDirectionAwayFromClosestWall", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, anchor, cardinalAxisIndex, excludedAxes);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInSceneVolume(::UnityEngine::Vector3  worldPosition, float_t  distanceBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInSceneVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition, distanceBuffer);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::IsPositionInSceneVolume(::UnityEngine::Vector3  worldPosition, bool  testVerticalBounds, float_t  distanceBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"IsPositionInSceneVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition, testVerticalBounds, distanceBuffer);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::TryGetClosestSeatPose(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Pose>  seatPose, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  couch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetClosestSeatPose", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, seatPose, couch);
}
inline ::ArrayW<::UnityEngine::Pose> Meta::XR::MRUtilityKit::MRUKRoom::GetSeatPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GetSeatPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Pose>>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::TryGetAnchorParent(::Meta::XR::MRUtilityKit::MRUKAnchor*  queryAnchor, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  parentAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetAnchorParent", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, queryAnchor, parentAnchor);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::TryGetAnchorChildren(::Meta::XR::MRUtilityKit::MRUKAnchor*  queryAnchor, ::by_ref<::ArrayW<::Meta::XR::MRUtilityKit::MRUKAnchor*>>  childAnchors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetAnchorChildren", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::ArrayW<::Meta::XR::MRUtilityKit::MRUKAnchor*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, queryAnchor, childAnchors);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::CalculateHierarchyReferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"CalculateHierarchyReferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::DoesRoomHave(::ArrayW<::StringW>  labels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"DoesRoomHave", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, labels);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::HasAllLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"HasAllLabels", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, labelFlags);
}
inline float_t Meta::XR::MRUtilityKit::MRUKRoom::TryGetClosestSurfacePosition(::UnityEngine::Vector3  worldPosition, ::by_ref<::UnityEngine::Vector3>  surfacePosition, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  closestAnchor, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPosition, surfacePosition, closestAnchor, labelFilter);
}
inline float_t Meta::XR::MRUtilityKit::MRUKRoom::TryGetClosestSurfacePosition(::UnityEngine::Vector3  worldPosition, ::by_ref<::UnityEngine::Vector3>  surfacePosition, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  closestAnchor, ::by_ref<::UnityEngine::Vector3>  normal, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"TryGetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPosition, surfacePosition, closestAnchor, normal, labelFilter);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::FindLargestSurface(::StringW  anchorLabel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"FindLargestSurface", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method, anchorLabel);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKRoom::FindLargestSurface(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"FindLargestSurface", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method, labelFlags);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> Meta::XR::MRUtilityKit::MRUKRoom::GenerateRandomPositionInRoom(float_t  minDistanceToSurface, bool  avoidVolumes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GenerateRandomPositionInRoom", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(this, ___internal_method, minDistanceToSurface, avoidVolumes);
}
inline bool Meta::XR::MRUtilityKit::MRUKRoom::GenerateRandomPositionOnSurface(::GlobalNamespace::MRUK_SurfaceType  surfaceTypes, float_t  minDistanceToEdge, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"GenerateRandomPositionOnSurface", {}, {::i2c::type_of<::GlobalNamespace::MRUK_SurfaceType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::LabelFilter>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, surfaceTypes, minDistanceToEdge, labelFilter, position, normal);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::MRUKRoom* Meta::XR::MRUtilityKit::MRUKRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKRoom*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKRoom::MRUKRoom()   {
}
