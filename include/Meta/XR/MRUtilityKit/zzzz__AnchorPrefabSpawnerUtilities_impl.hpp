#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawnerUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawnerUtilities_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_AlignMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_ScalingMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_SelectionMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetTransformationMatrixMatchingAnchorVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, bool, bool, ::System::Nullable_1<::UnityEngine::Bounds>, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetTransformationMatrixMatchingAnchorVolume)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f06ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetTransformationMatrixMatchingAnchorVolume", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.ScalePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::ScalePrefab)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f05e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"ScalePrefab", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.AlignPrefabPivot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Bounds, ::System::Nullable_1<::UnityEngine::Bounds>, ::UnityEngine::Vector3, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::AlignPrefabPivot)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9f05fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"AlignPrefabPivot", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetPrefabWithClosestSizeToAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::by_ref<::UnityEngine::GameObject*>)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPrefabWithClosestSizeToAnchor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x9f073e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPrefabWithClosestSizeToAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetTransformationMatrixMatchingAnchorPlaneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::System::Nullable_1<::UnityEngine::Bounds>, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetTransformationMatrixMatchingAnchorPlaneRect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f0777c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetTransformationMatrixMatchingAnchorPlaneRect", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.SelectPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::System::Random*)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::SelectPrefab)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9f06698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"SelectPrefab", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_SelectionMode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.AlignPrefabPivot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Rect, ::System::Nullable_1<::UnityEngine::Bounds>, ::UnityEngine::Vector2, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::AlignPrefabPivot)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x9f063a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"AlignPrefabPivot", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.ScalePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::ScalePrefab)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f0625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"ScalePrefab", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetPrefabScaleBasedOnAnchorVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, bool, bool, ::System::Nullable_1<::UnityEngine::Bounds>, ::by_ref<int32_t>, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPrefabScaleBasedOnAnchorVolume)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9f06fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPrefabScaleBasedOnAnchorVolume", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetPoseBasedOnAnchorVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::System::Nullable_1<::UnityEngine::Bounds>, int32_t, ::UnityEngine::Vector3, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPoseBasedOnAnchorVolume)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9f071f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPoseBasedOnAnchorVolume", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.MatchAspectRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<int32_t>, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Vector3>)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::MatchAspectRatio)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x9f05afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"MatchAspectRatio", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.RotateVolumeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Bounds, int32_t)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::RotateVolumeBounds)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f05a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"RotateVolumeBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetPrefabScaleBasedOnAnchorPlaneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::System::Nullable_1<::UnityEngine::Bounds>, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPrefabScaleBasedOnAnchorPlaneRect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9f07844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPrefabScaleBasedOnAnchorPlaneRect", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities.GetPoseBasedOnAnchorPlaneRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode, ::System::Nullable_1<::UnityEngine::Bounds>, ::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPoseBasedOnAnchorPlaneRect)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9f079b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPoseBasedOnAnchorPlaneRect", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetTransformationMatrixMatchingAnchorVolume(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  matchAspectRatio, bool  calculateFacingDirection, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetTransformationMatrixMatchingAnchorVolume", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, anchorInfo, matchAspectRatio, calculateFacingDirection, prefabBounds, scalingMode, alignMode);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::ScalePrefab(::UnityEngine::Vector3  localScale, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"ScalePrefab", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, localScale, scalingMode);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::AlignPrefabPivot(::UnityEngine::Bounds  anchorVolumeBounds, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::UnityEngine::Vector3  localScale, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"AlignPrefabPivot", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, anchorVolumeBounds, prefabBounds, localScale, alignMode);
}
inline bool Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPrefabWithClosestSizeToAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabList, ::by_ref<::UnityEngine::GameObject*>  sizeMatchingPrefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPrefabWithClosestSizeToAnchor", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anchor, prefabList, sizeMatchingPrefab);
}
inline ::UnityEngine::Matrix4x4 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetTransformationMatrixMatchingAnchorPlaneRect(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scaling, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetTransformationMatrixMatchingAnchorPlaneRect", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, anchorInfo, prefabBounds, scaling, alignment);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::SelectPrefab(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  prefabSelectionMode, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabs, ::System::Random*  random)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"SelectPrefab", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_SelectionMode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Random*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, anchor, prefabSelectionMode, prefabs, random);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::AlignPrefabPivot(::UnityEngine::Rect  planeRect, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::UnityEngine::Vector2  localScale, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"AlignPrefabPivot", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, planeRect, prefabBounds, localScale, alignMode);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::ScalePrefab(::UnityEngine::Vector2  localScale, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"ScalePrefab", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, localScale, scalingMode);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPrefabScaleBasedOnAnchorVolume(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  matchAspectRatio, bool  calculateFacingDirection, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::by_ref<int32_t>  cardinalAxisIndex, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scaling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPrefabScaleBasedOnAnchorVolume", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, anchorInfo, matchAspectRatio, calculateFacingDirection, prefabBounds, cardinalAxisIndex, scaling);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPoseBasedOnAnchorVolume(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, int32_t  cardinalAxisIndex, ::UnityEngine::Vector3  localScale, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPoseBasedOnAnchorVolume", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, anchorInfo, prefabBounds, cardinalAxisIndex, localScale, alignment);
}
inline void Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::MatchAspectRatio(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  calculateFacingDirection, ::UnityEngine::Vector3  prefabSize, ::UnityEngine::Vector3  volumeSize, ::by_ref<int32_t>  cardinalAxisIndex, ::by_ref<::UnityEngine::Bounds>  volumeBounds, ::by_ref<::UnityEngine::Vector3>  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"MatchAspectRatio", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchorInfo, calculateFacingDirection, prefabSize, volumeSize, cardinalAxisIndex, volumeBounds, localScale);
}
inline ::UnityEngine::Bounds Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::RotateVolumeBounds(::UnityEngine::Bounds  bounds, int32_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"RotateVolumeBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, bounds, rotation);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPrefabScaleBasedOnAnchorPlaneRect(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPrefabScaleBasedOnAnchorPlaneRect", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_ScalingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, anchorInfo, prefabBounds, scalingMode);
}
inline ::UnityEngine::Pose Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::GetPoseBasedOnAnchorPlaneRect(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignmentMode, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::UnityEngine::Vector2  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*>(),
                        {"GetPoseBasedOnAnchorPlaneRect", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::GlobalNamespace::AnchorPrefabSpawner_AlignMode>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, anchorInfo, alignmentMode, prefabBounds, localScale);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities::AnchorPrefabSpawnerUtilities()   {
}
