#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SceneDecorator.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecorator_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerSingleton_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecorator_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Start)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x9f5458c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::OnDestroy)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9f54fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.InitPools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::InitPools)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9f54a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"InitPools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::OnEnable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9f551e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::OnDisable)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9f55408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ReceiveRoomRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveRoomRemoved)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f55630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveRoomRemoved", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ReceiveRoomCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveRoomCreated)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f55b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveRoomCreated", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.UnRegisterAnchorUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::UnRegisterAnchorUpdates)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f559c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"UnRegisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ReceiveAnchorUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveAnchorUpdated)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f55ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveAnchorUpdated", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ReceiveAnchorRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveAnchorRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f5616c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveAnchorRemoved", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ReceiveAnchorCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveAnchorCreated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f56170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveAnchorCreated", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.RegisterAnchorUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::RegisterAnchorUpdates)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f55b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"RegisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ClearDecorations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ClearDecorations)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9f55cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ClearDecorations", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ClearDecorations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ClearDecorations)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x9f55658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ClearDecorations", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ClearDecorations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ClearDecorations)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9f56174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ClearDecorations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.DecorateScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f55b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.DecorateScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9f562bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.DecorateScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*, int32_t)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9f54e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.DecorateScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*, int32_t)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9f54d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.Decorate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Decorate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9f56038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Decorate", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.Decorate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Decorate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f56864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Decorate", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.Decorate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Decorate)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x9f56450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Decorate", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Distribute)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f56894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.TestCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::by_ref<::UnityEngine::RaycastHit>)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::TestCollider)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9f56c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"TestCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.TestPhysicsLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::by_ref<::UnityEngine::RaycastHit>)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::TestPhysicsLayers)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x9f56ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"TestPhysicsLayers", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.TestConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::TestConstraints)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9f57234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"TestConstraints", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.ApplyModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ApplyModifiers)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f57394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ApplyModifiers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.GenerateOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::GenerateOn)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f4fde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"GenerateOn", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.GenerateAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::GenerateAt)> {
  constexpr static std::size_t size = 0xdbc;
  constexpr static std::size_t addrs = 0x9f5745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"GenerateAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator.GetAnchorsWithLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)(::Meta::XR::MRUtilityKit::MRUKRoom*, ::GlobalNamespace::MRUKAnchor_SceneLabels)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::GetAnchorsWithLabel)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9f56a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"GetAnchorsWithLabel", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f58218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator._Start_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::_Start_b__13_0)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9f58308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"<Start>b__13_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>*& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_sceneDecorations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneDecorations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>* const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_sceneDecorations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneDecorations;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set_sceneDecorations(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneDecorations = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_customColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_customColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customColliders;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set_customColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customColliders = value;
}
constexpr ::ArrayW<::StringW>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_customTargetTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customTargetTags;
}
constexpr ::ArrayW<::StringW> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_customTargetTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customTargetTags;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set_customTargetTags(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customTargetTags = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_recursionLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recursionLimit;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_recursionLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recursionLimit;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set_recursionLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recursionLimit = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__recursionDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recursionDepth;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__recursionDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recursionDepth;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set__recursionDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recursionDepth = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set__parent(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_DecorateOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecorateOnStart;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_DecorateOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecorateOnStart;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set_DecorateOnStart(::GlobalNamespace::MRUK_RoomFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecorateOnStart = value;
}
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_TrackUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get_TrackUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set_TrackUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackUpdates = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__poolManagerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poolManagerComponent;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__poolManagerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poolManagerComponent;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set__poolManagerComponent(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poolManagerComponent = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__poolManagerSingleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poolManagerSingleton;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton> const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__poolManagerSingleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poolManagerSingleton;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set__poolManagerSingleton(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poolManagerSingleton = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__spawnedDecorations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedDecorations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_get__spawnedDecorations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedDecorations;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::__cordl_internal_set__spawnedDecorations(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnedDecorations = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::setStaticF_PI(float_t  value)  {
::cordl_internals::setStaticField<float_t, "PI", ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(std::forward<float_t>(value));
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::getStaticF_PI()  {
return ::cordl_internals::getStaticField<float_t, "PI", ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>();
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::InitPools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"InitPools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveRoomRemoved(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveRoomRemoved", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveRoomCreated(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveRoomCreated", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::UnRegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"UnRegisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveAnchorUpdated(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveAnchorUpdated", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveAnchorRemoved(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveAnchorRemoved", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ReceiveAnchorCreated(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ReceiveAnchorCreated", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"RegisterAnchorUpdates", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ClearDecorations(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ClearDecorations", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ClearDecorations(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ClearDecorations", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ClearDecorations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ClearDecorations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, int32_t  recursionDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms, recursionDepth);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::DecorateScene(::Meta::XR::MRUtilityKit::MRUKRoom*  room, int32_t  recursionDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"DecorateScene", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, recursionDepth);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Decorate(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Decorate", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Decorate(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Decorate", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Decorate(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Decorate", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::Distribute(::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"Distribute", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneAnchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::TestCollider(::UnityEngine::Collider*  c, ::UnityEngine::Vector3  worldPos, ::UnityEngine::Vector3  rayDir, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::by_ref<::UnityEngine::RaycastHit>  closestHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"TestCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, worldPos, rayDir, sceneDecoration, closestHit);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::TestPhysicsLayers(::UnityEngine::Vector3  worldPos, ::UnityEngine::Vector3  rayDir, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::by_ref<::UnityEngine::RaycastHit>  closestHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"TestPhysicsLayers", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldPos, rayDir, sceneDecoration, closestHit);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::TestConstraints(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"TestConstraints", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneDecoration, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::ApplyModifiers(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"ApplyModifiers", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::GenerateOn(::UnityEngine::Vector2  localPos, ::UnityEngine::Vector2  localPosNormalized, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"GenerateOn", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPos, localPosNormalized, sceneAnchor, sceneDecoration);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::GenerateAt(::UnityEngine::Vector3  worldPos, ::UnityEngine::Vector2  localPos, ::UnityEngine::Vector2  localPosNormalized, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"GenerateAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPos, localPos, localPosNormalized, sceneAnchor, sceneDecoration);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::GetAnchorsWithLabel(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::GlobalNamespace::MRUKAnchor_SceneLabels  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"GetAnchorsWithLabel", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*>(this, ___internal_method, room, label);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::_Start_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>(),
                        {"<Start>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator* Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator::SceneDecorator()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution::*)(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution::Distribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution::Distribute(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator*  sceneDecorator, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecorator_IDistribution*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneDecorator, sceneAnchor, sceneDecoration);
}
