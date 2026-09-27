#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawner.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneTrackingSettings_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_AlignMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_AnchorPrefabGroup_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_ScalingMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_SelectionMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ICustomAnchorPrefabSpawner_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.get_AnchorPrefabSpawnerObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::get_AnchorPrefabSpawnerObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f038e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"get_AnchorPrefabSpawnerObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.get_SpawnedPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::get_SpawnedPrefabs)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f038e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"get_SpawnedPrefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::Start)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9f03988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9f03bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::OnDisable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9f03de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ReceiveRemovedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveRemovedRoom)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f03ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.UnRegisterAnchorUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::UnRegisterAnchorUpdates)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9f04030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.RegisterAnchorUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::RegisterAnchorUpdates)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9f04148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ReceiveAnchorUpdatedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveAnchorUpdatedCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9f04260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ReceiveAnchorRemovedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveAnchorRemovedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f0435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ReceiveAnchorCreatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveAnchorCreatedEvent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f0436c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ReceiveCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveCreatedRoom)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f043f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ClearPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefabs)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x9f04460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ClearPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefab)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f0482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ClearPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefab)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9f04884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.ClearPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefabs)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f0497c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.SpawnPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(bool)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefabs)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9f04ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.SpawnPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*, bool)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefabs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f04df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.SpawnPrefabsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefabsInternal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9f04ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"SpawnPrefabsInternal", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.SpawnPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefab)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x9f04ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.LabelToPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::GlobalNamespace::MRUKAnchor_SceneLabels, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::LabelToPrefab)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9f057d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"LabelToPrefab", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.InitializeRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::by_ref<int32_t>)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::InitializeRandom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f04e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"InitializeRandom", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.CustomPrefabSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabSelection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f0686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.CustomPrefabScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabScaling)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f068b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.CustomPrefabScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabScaling)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f06904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.CustomPrefabAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::UnityEngine::Bounds, ::System::Nullable_1<::UnityEngine::Bounds>)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabAlignment)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f06950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.CustomPrefabAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)(::UnityEngine::Rect, ::System::Nullable_1<::UnityEngine::Bounds>)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabAlignment)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f0699c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f069e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f06a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner._Start_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::*)()>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::_Start_b__22_0)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f06b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"<Start>b__22_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MRUK_RoomFilter& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_SpawnOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnOnStart;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_SpawnOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnOnStart;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set_SpawnOnStart(::GlobalNamespace::MRUK_RoomFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnOnStart = value;
}
constexpr bool& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_TrackUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr bool const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_TrackUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackUpdates;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set_TrackUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackUpdates = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_SeedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SeedValue;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_SeedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SeedValue;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set_SeedValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SeedValue = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__AnchorPrefabSpawnerObjects_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorPrefabSpawnerObjects_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__AnchorPrefabSpawnerObjects_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnchorPrefabSpawnerObjects_k__BackingField;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__AnchorPrefabSpawnerObjects_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnchorPrefabSpawnerObjects_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_onPrefabSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPrefabSpawned;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_onPrefabSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPrefabSpawned;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set_onPrefabSpawned(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPrefabSpawned = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_PrefabsToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabsToSpawn;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_PrefabsToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabsToSpawn;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set_PrefabsToSpawn(::System::Collections::Generic::List_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrefabsToSpawn = value;
}
constexpr ::System::Random*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr ::System::Random* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____random = value;
}
constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_SceneTrackingSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneTrackingSettings;
}
constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get_SceneTrackingSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneTrackingSettings;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set_SceneTrackingSettings(::GlobalNamespace::MRUK_SceneTrackingSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneTrackingSettings = value;
}
constexpr ::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabScalingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabScalingVolume;
}
constexpr ::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabScalingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabScalingVolume;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__customPrefabScalingVolume(::System::Func_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customPrefabScalingVolume = value;
}
constexpr ::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabAlignmentVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabAlignmentVolume;
}
constexpr ::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabAlignmentVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabAlignmentVolume;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__customPrefabAlignmentVolume(::System::Func_3<::UnityEngine::Bounds,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customPrefabAlignmentVolume = value;
}
constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabScalingPlaneRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabScalingPlaneRect;
}
constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabScalingPlaneRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabScalingPlaneRect;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__customPrefabScalingPlaneRect(::System::Func_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customPrefabScalingPlaneRect = value;
}
constexpr ::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabAlignmentPlaneRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabAlignmentPlaneRect;
}
constexpr ::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabAlignmentPlaneRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabAlignmentPlaneRect;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__customPrefabAlignmentPlaneRect(::System::Func_3<::UnityEngine::Rect,::System::Nullable_1<::UnityEngine::Bounds>,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector2>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customPrefabAlignmentPlaneRect = value;
}
constexpr ::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabSelection;
}
constexpr ::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_get__customPrefabSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customPrefabSelection;
}
constexpr void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::__cordl_internal_set__customPrefabSelection(::System::Func_3<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customPrefabSelection = value;
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::setStaticF_Suffix(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Suffix", ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::XR::MRUtilityKit::AnchorPrefabSpawner::getStaticF_Suffix()  {
return ::cordl_internals::getStaticField<::StringW, "Suffix", ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>();
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>* Meta::XR::MRUtilityKit::AnchorPrefabSpawner::get_AnchorPrefabSpawnerObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"get_AnchorPrefabSpawnerObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* Meta::XR::MRUtilityKit::AnchorPrefabSpawner::get_SpawnedPrefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"get_SpawnedPrefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::UnRegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveAnchorUpdatedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorInfo);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveAnchorRemovedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorInfo);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveAnchorCreatedEvent(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorInfo);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefabs(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefab(::UnityEngine::GameObject*  go)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefab(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorInfo);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::ClearPrefabs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefabs(bool  clearPrefabs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearPrefabs);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefabs(::Meta::XR::MRUtilityKit::MRUKRoom*  room, bool  clearPrefabs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, clearPrefabs);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefabsInternal(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"SpawnPrefabsInternal", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::SpawnPrefab(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorInfo);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::AnchorPrefabSpawner::LabelToPrefab(::GlobalNamespace::MRUKAnchor_SceneLabels  labels, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::by_ref<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>  prefabGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"LabelToPrefab", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, labels, anchor, prefabGroup);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::InitializeRandom(::by_ref<int32_t>  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"InitializeRandom", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabSelection(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, anchor, prefabs);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabScaling(::UnityEngine::Vector3  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, localScale);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabScaling(::UnityEngine::Vector2  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, localScale);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabAlignment(::UnityEngine::Bounds  anchorVolumeBounds, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, anchorVolumeBounds, prefabBounds);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawner::CustomPrefabAlignment(::UnityEngine::Rect  anchorPlaneRect, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, anchorPlaneRect, prefabBounds);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawner::_Start_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>(),
                        {"<Start>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner* Meta::XR::MRUtilityKit::AnchorPrefabSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::AnchorPrefabSpawner*>());
}
/// @brief Convert operator to "::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner"
constexpr  Meta::XR::MRUtilityKit::AnchorPrefabSpawner::operator ::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner*() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner"
constexpr ::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner* Meta::XR::MRUtilityKit::AnchorPrefabSpawner::i___Meta__XR__MRUtilityKit__ICustomAnchorPrefabSpawner() noexcept {
return static_cast<::Meta::XR::MRUtilityKit::ICustomAnchorPrefabSpawner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::AnchorPrefabSpawner::AnchorPrefabSpawner()   {
}
