#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_ComponentType_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_AnchorLabels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_AnchorLabels)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f308b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_AnchorLabels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_InitialPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_InitialPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f30910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_InitialPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_InitialPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Pose)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_InitialPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f30924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_InitialPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_DeltaPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_DeltaPose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f30940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_DeltaPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKAnchor_SceneLabels (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Label", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_Label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::GlobalNamespace::MRUKAnchor_SceneLabels)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Label", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_PlaneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Rect> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_PlaneRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f30abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_PlaneRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_PlaneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::System::Nullable_1<::UnityEngine::Rect>)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_PlaneRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f30ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_PlaneRect", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_VolumeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Bounds> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_VolumeBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f30ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_VolumeBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_VolumeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::System::Nullable_1<::UnityEngine::Bounds>)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_VolumeBounds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f30af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_VolumeBounds", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_PlaneBoundary2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector2>* (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_PlaneBoundary2D)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_PlaneBoundary2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_PlaneBoundary2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_PlaneBoundary2D)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_PlaneBoundary2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_Anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f30b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_Anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f30b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Anchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_Room)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Room", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_Room)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Room", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_ParentAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_ParentAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_ParentAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_ParentAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_ParentAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_ParentAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_ChildAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_ChildAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_ChildAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_ChildAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_ChildAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_ChildAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_HasPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_HasPlane)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f30b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_HasPlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_HasVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_HasVolume)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f30bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_HasVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_IsLocal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f30c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_HasValidHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_HasValidHandle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f30c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_HasValidHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_Mesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_Mesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f30c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Mesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_Mesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Mesh*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Mesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.get_GlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::get_GlobalMesh)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f30c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_GlobalMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.set_GlobalMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Mesh*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::set_GlobalMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f30d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_GlobalMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, ::GlobalNamespace::MRUKAnchor_ComponentType)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::Raycast)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9f30d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.IsPositionInBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::IsPositionInBoundary)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f31670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"IsPositionInBoundary", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.AddChildReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::AddChildReference)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f31710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"AddChildReference", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.ClearChildReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::ClearChildReferences)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f31810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"ClearChildReferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetDistanceToSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Vector3, ::GlobalNamespace::MRUKAnchor_ComponentType)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetDistanceToSurface)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f31880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetDistanceToSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetClosestSurfacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::GlobalNamespace::MRUKAnchor_ComponentType)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetClosestSurfacePosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f31f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetClosestSurfacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::GlobalNamespace::MRUKAnchor_ComponentType)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetClosestSurfacePosition)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x9f318b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetAnchorCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetAnchorCenter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f31f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetAnchorCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetAnchorSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetAnchorSize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9f32008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetAnchorSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.RaycastPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::RaycastPlane)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9f30fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"RaycastPlane", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.RaycastVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::RaycastVolume)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x9f31274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"RaycastVolume", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetBoundsFaceCenters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetBoundsFaceCenters)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9f32198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetBoundsFaceCenters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.IsPositionInVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::UnityEngine::Vector3, bool, float_t)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::IsPositionInVolume)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9f32518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"IsPositionInVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.LoadGlobalMeshTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::LoadGlobalMeshTriangles)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f30cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"LoadGlobalMeshTriangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.LoadObjectMeshTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::LoadObjectMeshTriangles)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x9f326a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"LoadObjectMeshTriangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.HasLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::StringW)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::HasLabel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f329d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"HasLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.HasAnyLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::HasAnyLabel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f32a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"HasAnyLabel", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.HasAnyLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::MRUKAnchor::*)(::GlobalNamespace::MRUKAnchor_SceneLabels)>(&::Meta::XR::MRUtilityKit::MRUKAnchor::HasAnyLabel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f32690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"HasAnyLabel", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor.GetLabelsAsEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKAnchor_SceneLabels (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::GetLabelsAsEnum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f32abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetLabelsAsEnum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKAnchor::*)()>(&::Meta::XR::MRUtilityKit::MRUKAnchor::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9f32ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__InitialPose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitialPose_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__InitialPose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitialPose_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__InitialPose_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InitialPose_k__BackingField = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__Label_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__Label_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Label_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__Label_k__BackingField(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Label_k__BackingField = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Rect>& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__PlaneRect_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaneRect_k__BackingField;
}
constexpr ::System::Nullable_1<::UnityEngine::Rect> const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__PlaneRect_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaneRect_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__PlaneRect_k__BackingField(::System::Nullable_1<::UnityEngine::Rect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaneRect_k__BackingField = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Bounds>& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__VolumeBounds_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeBounds_k__BackingField;
}
constexpr ::System::Nullable_1<::UnityEngine::Bounds> const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__VolumeBounds_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VolumeBounds_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__VolumeBounds_k__BackingField(::System::Nullable_1<::UnityEngine::Bounds>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VolumeBounds_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__PlaneBoundary2D_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaneBoundary2D_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__PlaneBoundary2D_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaneBoundary2D_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__PlaneBoundary2D_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaneBoundary2D_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRAnchor& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__Anchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchor_k__BackingField;
}
constexpr ::GlobalNamespace::OVRAnchor const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__Anchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchor_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Anchor_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__Room_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Room_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__Room_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Room_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__Room_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Room_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__ParentAnchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentAnchor_k__BackingField;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__ParentAnchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentAnchor_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__ParentAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParentAnchor_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__ChildAnchors_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildAnchors_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__ChildAnchors_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildAnchors_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__ChildAnchors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChildAnchors_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void Meta::XR::MRUtilityKit::MRUKAnchor::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::XR::MRUtilityKit::MRUKAnchor::get_AnchorLabels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_AnchorLabels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKAnchor::get_InitialPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_InitialPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_InitialPose(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_InitialPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::MRUKAnchor::get_DeltaPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_DeltaPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::GlobalNamespace::MRUKAnchor_SceneLabels Meta::XR::MRUtilityKit::MRUKAnchor::get_Label()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Label", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKAnchor_SceneLabels>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_Label(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Label", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::Rect> Meta::XR::MRUtilityKit::MRUKAnchor::get_PlaneRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_PlaneRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Rect>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_PlaneRect(::System::Nullable_1<::UnityEngine::Rect>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_PlaneRect", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::Bounds> Meta::XR::MRUtilityKit::MRUKAnchor::get_VolumeBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_VolumeBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Bounds>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_VolumeBounds(::System::Nullable_1<::UnityEngine::Bounds>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_VolumeBounds", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Meta::XR::MRUtilityKit::MRUKAnchor::get_PlaneBoundary2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_PlaneBoundary2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_PlaneBoundary2D(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_PlaneBoundary2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRAnchor Meta::XR::MRUtilityKit::MRUKAnchor::get_Anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_Anchor(::GlobalNamespace::OVRAnchor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Anchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> Meta::XR::MRUtilityKit::MRUKAnchor::get_Room()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Room", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_Room(::Meta::XR::MRUtilityKit::MRUKRoom*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Room", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> Meta::XR::MRUtilityKit::MRUKAnchor::get_ParentAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_ParentAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_ParentAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_ParentAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::MRUKAnchor::get_ChildAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_ChildAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_ChildAnchors(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_ChildAnchors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::get_HasPlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_HasPlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::get_HasVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_HasVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::get_IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::get_HasValidHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_HasValidHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> Meta::XR::MRUtilityKit::MRUKAnchor::get_Mesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_Mesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_Mesh(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_Mesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> Meta::XR::MRUtilityKit::MRUKAnchor::get_GlobalMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"get_GlobalMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::set_GlobalMesh(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"set_GlobalMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, maxDist, hitInfo, componentTypes);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::IsPositionInBoundary(::UnityEngine::Vector2  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"IsPositionInBoundary", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::AddChildReference(::Meta::XR::MRUtilityKit::MRUKAnchor*  childObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"AddChildReference", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childObj);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::ClearChildReferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"ClearChildReferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Meta::XR::MRUtilityKit::MRUKAnchor::GetDistanceToSurface(::UnityEngine::Vector3  position, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetDistanceToSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, position, componentTypes);
}
inline float_t Meta::XR::MRUtilityKit::MRUKAnchor::GetClosestSurfacePosition(::UnityEngine::Vector3  testPosition, ::by_ref<::UnityEngine::Vector3>  closestPosition, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, testPosition, closestPosition, componentTypes);
}
inline float_t Meta::XR::MRUtilityKit::MRUKAnchor::GetClosestSurfacePosition(::UnityEngine::Vector3  testPosition, ::by_ref<::UnityEngine::Vector3>  closestPosition, ::by_ref<::UnityEngine::Vector3>  normal, ::GlobalNamespace::MRUKAnchor_ComponentType  componentTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetClosestSurfacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_ComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, testPosition, closestPosition, normal, componentTypes);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUKAnchor::GetAnchorCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetAnchorCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::MRUKAnchor::GetAnchorSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetAnchorSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::RaycastPlane(::UnityEngine::Ray  localRay, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"RaycastPlane", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localRay, maxDist, hitInfo);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::RaycastVolume(::UnityEngine::Ray  localRay, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"RaycastVolume", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localRay, maxDist, hitInfo);
}
inline ::ArrayW<::UnityEngine::Vector3> Meta::XR::MRUtilityKit::MRUKAnchor::GetBoundsFaceCenters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetBoundsFaceCenters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::IsPositionInVolume(::UnityEngine::Vector3  worldPosition, bool  testVerticalBounds, float_t  distanceBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"IsPositionInVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition, testVerticalBounds, distanceBuffer);
}
inline ::UnityW<::UnityEngine::Mesh> Meta::XR::MRUtilityKit::MRUKAnchor::LoadGlobalMeshTriangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"LoadGlobalMeshTriangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> Meta::XR::MRUtilityKit::MRUKAnchor::LoadObjectMeshTriangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"LoadObjectMeshTriangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::HasLabel(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"HasLabel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, label);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::HasAnyLabel(::System::Collections::Generic::List_1<::StringW>*  labels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"HasAnyLabel", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, labels);
}
inline bool Meta::XR::MRUtilityKit::MRUKAnchor::HasAnyLabel(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"HasAnyLabel", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, labelFlags);
}
inline ::GlobalNamespace::MRUKAnchor_SceneLabels Meta::XR::MRUtilityKit::MRUKAnchor::GetLabelsAsEnum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {"GetLabelsAsEnum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKAnchor_SceneLabels>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::MRUKAnchor* Meta::XR::MRUtilityKit::MRUKAnchor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKAnchor*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKAnchor::MRUKAnchor()   {
}
