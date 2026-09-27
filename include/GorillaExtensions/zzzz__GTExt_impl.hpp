#pragma once
// IWYU pragma private; include "GorillaExtensions/GTExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "GorillaExtensions/zzzz__GTExt_def.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "GorillaExtensions/zzzz__GTExt_ParityOptions_def.hpp"
#include "GorillaExtensions/zzzz__GTExt___c__DisplayClass10_0_3_def.hpp"
#include "GorillaExtensions/zzzz__GTExt___c__DisplayClass11_0_4_def.hpp"
#include "GorillaExtensions/zzzz__GTExt___c__DisplayClass7_0_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__FindObjectsInactive_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetComponentsInHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (*)(::UnityEngine::SceneManagement::Scene, ::System::Type*, bool, int32_t)>(&::GorillaExtensions::GTExt::GetComponentsInHierarchy)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cf80b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetComponentsInHierarchy", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetGameObjectsInHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::SceneManagement::Scene, bool, int32_t)>(&::GorillaExtensions::GTExt::GetGameObjectsInHierarchy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cf81d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsInHierarchy", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetGameObjectsWithRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::SceneManagement::Scene, ::StringW, bool, int32_t)>(&::GorillaExtensions::GTExt::GetGameObjectsWithRegex)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5cf8258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsWithRegex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetGameObjectsWithRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::SceneManagement::Scene, ::ArrayW<::StringW>, bool, int32_t)>(&::GorillaExtensions::GTExt::GetGameObjectsWithRegex)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5cf84c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsWithRegex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetGameObjectsWithRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::SceneManagement::Scene, ::ArrayW<::StringW>, ::ArrayW<::StringW>, bool, int32_t)>(&::GorillaExtensions::GTExt::GetGameObjectsWithRegex)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5cf873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsWithRegex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetGameObjectsInHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)(::UnityEngine::SceneManagement::Scene, ::StringW, bool)>(&::GorillaExtensions::GTExt::GetGameObjectsInHierarchy)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5cf89b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsInHierarchy", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLossyScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::SetLossyScale)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cf8c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLossyScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(&::GorillaExtensions::GTExt::TransformRotation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cf8c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.InverseTransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(&::GorillaExtensions::GTExt::InverseTransformRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cf8d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"InverseTransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ProjectOnPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::ProjectOnPlane)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cf8dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ProjectOnPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.MultiplyBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::MultiplyBy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cf8ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MultiplyBy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.CompareAs255Unclamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::GorillaExtensions::GTExt::CompareAs255Unclamped)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cf8ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"CompareAs255Unclamped", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.QuaternionFromToVec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::QuaternionFromToVec)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5cf8f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"QuaternionFromToVec", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf92e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Position", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::Scale)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5cf92f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLocalRelativeToParentMatrixWithParityAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::GlobalNamespace::GTExt_ParityOptions)>(&::GorillaExtensions::GTExt::SetLocalRelativeToParentMatrixWithParityAxis)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cf9678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalRelativeToParentMatrixWithParityAxis", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::GlobalNamespace::GTExt_ParityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.MultiplyInPlaceWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::MultiplyInPlaceWith)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cf967c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MultiplyInPlaceWith", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.DecomposeWithXFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::DecomposeWithXFlip)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5cf96ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"DecomposeWithXFlip", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLocalMatrixRelativeToParentWithXParity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GorillaExtensions::GTExt::SetLocalMatrixRelativeToParentWithXParity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cf9950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalMatrixRelativeToParentWithXParity", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Matrix4x4Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::Matrix4x4Scale)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cf9a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Matrix4x4Scale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetColumnNoCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<int32_t>)>(&::GorillaExtensions::GTExt::GetColumnNoCopy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cf987c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetColumnNoCopy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.RotationWithScaleContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::RotationWithScaleContext)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cf9a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"RotationWithScaleContext", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::GorillaExtensions::GTExt::Rotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cf9b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Rotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.x0y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::x0y)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf9c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"x0y", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.x0y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::x0y)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf9c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"x0y", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xy0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xy0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf9c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy0", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xy0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xy0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf9c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy0", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xz0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xz0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf9c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xz0", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.x0z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::x0z)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf9c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"x0z", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.LocalMatrixRelativeToParentNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::LocalMatrixRelativeToParentNoScale)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cf9c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LocalMatrixRelativeToParentNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.LocalMatrixRelativeToParentWithScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::LocalMatrixRelativeToParentWithScale)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5cf9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LocalMatrixRelativeToParentWithScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLocalMatrixRelativeToParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::SetLocalMatrixRelativeToParent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cf9ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalMatrixRelativeToParent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLocalMatrixRelativeToParentNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::SetLocalMatrixRelativeToParentNoScale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cf9f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalMatrixRelativeToParentNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLocalToWorldMatrixNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::SetLocalToWorldMatrixNoScale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5cfa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalToWorldMatrixNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.localToWorldNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::localToWorldNoScale)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cfa0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"localToWorldNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetLocalToWorldMatrixWithScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::SetLocalToWorldMatrixWithScale)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cfa1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalToWorldMatrixWithScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Matrix4X4LerpNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GorillaExtensions::GTExt::Matrix4X4LerpNoScale)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5cfa274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Matrix4X4LerpNoScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.LerpTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GorillaExtensions::GTExt::LerpTo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cfa3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LerpTo", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::IsNaN)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cfa4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNaN", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsNan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Quaternion>)>(&::GorillaExtensions::GTExt::IsNan)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cfa518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNan", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::IsInfinity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cfa56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsInfinity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Quaternion>)>(&::GorillaExtensions::GTExt::IsInfinity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cfa5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsInfinity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ValuesInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GorillaExtensions::GTExt::ValuesInRange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5cfa604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ValuesInRange", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GorillaExtensions::GTExt::IsValid)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cfa644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsMagnitudeValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::GorillaExtensions::GTExt::IsMagnitudeValid)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5cfa770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsMagnitudeValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetValidWithFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::GetValidWithFallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cfa884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetValidWithFallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetValueSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaExtensions::GTExt::SetValueSafe)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cfa90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetValueSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::half3>)>(&::GorillaExtensions::GTExt::IsNaN)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cfa998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNaN", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::half3>)>(&::GorillaExtensions::GTExt::IsInfinity)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5cfaa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsInfinity", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ValuesInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::half3>, ::by_ref<float_t>)>(&::GorillaExtensions::GTExt::ValuesInRange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5cfaba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ValuesInRange", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::half3>, ::by_ref<float_t>)>(&::GorillaExtensions::GTExt::IsValid)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5cfacbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Quaternion>)>(&::GorillaExtensions::GTExt::IsValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cfb078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetValidWithFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::GorillaExtensions::GTExt::GetValidWithFallback)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5cfb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetValidWithFallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetValueSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::GorillaExtensions::GTExt::SetValueSafe)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5cfb2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetValueSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampMagnitudeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GorillaExtensions::GTExt::ClampMagnitudeSafe)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cfb3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampMagnitudeSafe", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampThisMagnitudeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>, float_t)>(&::GorillaExtensions::GTExt::ClampThisMagnitudeSafe)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cfb490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampThisMagnitudeSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampMagnitudeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::ClampMagnitudeSafe)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cfb588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampMagnitudeSafe", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampThisMagnitudeSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::GorillaExtensions::GTExt::ClampThisMagnitudeSafe)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5cfb65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampThisMagnitudeSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.MinSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GorillaExtensions::GTExt::MinSafe)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cfb780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MinSafe", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ThisMinSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, float_t)>(&::GorillaExtensions::GTExt::ThisMinSafe)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5cfb7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMinSafe", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.MinSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, float_t)>(&::GorillaExtensions::GTExt::MinSafe)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cfb7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MinSafe", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ThisMinSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<double_t>, float_t)>(&::GorillaExtensions::GTExt::ThisMinSafe)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cfb824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMinSafe", {}, {::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.MaxSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GorillaExtensions::GTExt::MaxSafe)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cfb870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MaxSafe", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ThisMaxSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, float_t)>(&::GorillaExtensions::GTExt::ThisMaxSafe)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5cfb898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMaxSafe", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.MaxSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, float_t)>(&::GorillaExtensions::GTExt::MaxSafe)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cfb8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MaxSafe", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ThisMaxSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<double_t>, float_t)>(&::GorillaExtensions::GTExt::ThisMaxSafe)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cfb914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMaxSafe", {}, {::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GorillaExtensions::GTExt::ClampSafe)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5cfb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampSafe", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::GorillaExtensions::GTExt::ClampSafe)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cfb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampSafe", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GorillaExtensions::GTExt::GetFinite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cfb9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetFinite", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::GorillaExtensions::GTExt::GetFinite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cfb9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetFinite", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Matrix4X4LerpHandleNegativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GorillaExtensions::GTExt::Matrix4X4LerpHandleNegativeScale)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5cfba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Matrix4X4LerpHandleNegativeScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.LerpTo_HandleNegativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GorillaExtensions::GTExt::LerpTo_HandleNegativeScale)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cfbb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LerpTo_HandleNegativeScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.LerpToUnclamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GorillaExtensions::GTExt::LerpToUnclamped)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cfbc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LerpToUnclamped", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ToLongString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::ToLongString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5cfbc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ToLongString", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t)>(&::GorillaExtensions::GTExt::xx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfbd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::yy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfbd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfbdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::ww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t)>(&::GorillaExtensions::GTExt::xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xyy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xyy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xyz)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfbe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xzz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbe68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yyz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbe7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::zzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyz)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfbed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xzz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfbf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zzw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.www
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::www)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"www", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(float_t)>(&::GorillaExtensions::GTExt::xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::xyyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfbfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfbff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xxzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xyyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xyyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xyzz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::xzzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yyzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::zzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxxx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxxy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxxz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxxw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxxw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxyw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxzw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xxww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xxww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyyy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyyz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyyw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyyw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyzz)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyzw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfc164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xyww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xyww)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xzzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xzzw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xzww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xzww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.xwww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::xwww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xwww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyyy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyyy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyyz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyyz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyyw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyyw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyzz)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyzw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yyww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yyww)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yzzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.yzww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::yzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ywww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::ywww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ywww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zzzz)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzzw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zzzw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cfc234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zzww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zzww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.zwww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::zwww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zwww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.wwww
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4)>(&::GorillaExtensions::GTExt::wwww)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cfc260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"wwww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, float_t)>(&::GorillaExtensions::GTExt::WithX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithX", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, float_t)>(&::GorillaExtensions::GTExt::WithY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithY", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, float_t)>(&::GorillaExtensions::GTExt::WithZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithZ", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, float_t)>(&::GorillaExtensions::GTExt::WithW)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithW", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::WithX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::WithY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithY", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::WithZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::WithW)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfc2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithW", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GorillaExtensions::GTExt::WithX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithX", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GorillaExtensions::GTExt::WithY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cfc2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithY", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.WithZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, float_t)>(&::GorillaExtensions::GTExt::WithZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cfc2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsShorterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, float_t)>(&::GorillaExtensions::GTExt::IsShorterThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfc2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsShorterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::IsShorterThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfc2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsShorterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::IsShorterThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfc300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsShorterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::IsShorterThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cfc324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsLongerThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, float_t)>(&::GorillaExtensions::GTExt::IsLongerThan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cfc358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsLongerThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GorillaExtensions::GTExt::IsLongerThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfc374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsLongerThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t)>(&::GorillaExtensions::GTExt::IsLongerThan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cfc398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsLongerThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::IsLongerThan)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cfc3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::GorillaExtensions::GTExt::Normalize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5cfc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Ray, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::GetClosestPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cfc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetClosestPoint", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetClosestDistSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Ray, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::GetClosestDistSqr)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cfc518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetClosestDistSqr", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetClosestDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Ray, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::GetClosestDistance)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5cfc60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetClosestDistance", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ProjectToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::ProjectToPlane)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cfc734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ProjectToPlane", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ProjectToLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::ProjectToLine)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5cfc79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ProjectToLine", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::GorillaExtensions::GTExt::IsNull)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cfca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNull", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.IsNotNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Object*)>(&::GorillaExtensions::GTExt::IsNotNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cfca7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNotNull", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::Clamp)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cfcadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Clamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClampThis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::ClampThis)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cfcba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampThis", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::GetPath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cfcbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPathQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::GetPathQ)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5cfccc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathQ", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPathQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>)>(&::GorillaExtensions::GTExt::GetPathQ)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5cf4ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathQ", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*, int32_t)>(&::GorillaExtensions::GTExt::GetPath)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cfcdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::GetPath)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5cfcf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::GameObject*)>(&::GorillaExtensions::GTExt::GetPath)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cfd028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>)>(&::GorillaExtensions::GTExt::GetPath)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cfd098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::GameObject*, int32_t)>(&::GorillaExtensions::GTExt::GetPath)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cfd110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::UnityEngine::GameObject*>)>(&::GorillaExtensions::GTExt::GetPaths)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cfd188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPaths", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTExt::GetPaths)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cfd288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPaths", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetRelativePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>)>(&::GorillaExtensions::GTExt::GetRelativePath)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5cfd388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetRelativePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::GorillaExtensions::GTExt::GetRelativePath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cfd87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetRelativePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>)>(&::GorillaExtensions::GTExt::GetRelativePath)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cfd9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetRelativePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::GetRelativePath)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5cfda5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPathWithSiblingIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>)>(&::GorillaExtensions::GTExt::GetPathWithSiblingIndexes)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5cfdbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetComponentPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Component*, int32_t)>(&::GorillaExtensions::GTExt::GetComponentPath)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5cfdd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetComponentPath", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::GetDepth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cfdefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetDepth", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPathWithSiblingIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GorillaExtensions::GTExt::GetPathWithSiblingIndexes)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5cfdf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPathWithSiblingIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>)>(&::GorillaExtensions::GTExt::GetPathWithSiblingIndexes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cfe0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.GetPathWithSiblingIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::GameObject*)>(&::GorillaExtensions::GTExt::GetPathWithSiblingIndexes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cfe140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetFromMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4, bool)>(&::GorillaExtensions::GTExt::SetFromMatrix)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5cfe1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetFromMatrix", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GorillaExtensions::GTExt::SetScale)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5cfe40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.SetScaleFromMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::GorillaExtensions::GTExt::SetScaleFromMatrix)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5cfe2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetScaleFromMatrix", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.AddDictValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*)>(&::GorillaExtensions::GTExt::AddDictValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cfe5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"AddDictValue", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ClearDicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaExtensions::GTExt::ClearDicts)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5cfe65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClearDicts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByExactPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Transform*>, ::UnityEngine::FindObjectsInactive)>(&::GorillaExtensions::GTExt::TryFindByExactPath)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5cfe72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByExactPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene, ::StringW, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTExt::TryFindByExactPath)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5cfe94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByExactPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTExt::TryFindByExactPath)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cfea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByExactPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::StringW, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTExt::TryFindByExactPath)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5cfef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByExactPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTExt::TryFindByExactPath)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5cff338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByExactPath_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, int32_t, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaExtensions::GTExt::TryFindByExactPath_Internal)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5cfeb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath_Internal", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Transform*>, bool)>(&::GorillaExtensions::GTExt::TryFindByPath)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cff664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene, ::StringW, ::by_ref<::UnityEngine::Transform*>, bool)>(&::GorillaExtensions::GTExt::TryFindByPath)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d01dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, ::by_ref<::UnityEngine::Transform*>, ::StringW, bool)>(&::GorillaExtensions::GTExt::TryFindByPath)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d01ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.TryFindByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::StringW, ::by_ref<::UnityEngine::Transform*>, bool)>(&::GorillaExtensions::GTExt::TryFindByPath)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d01ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt.ShowAllStringsUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&::GorillaExtensions::GTExt::ShowAllStringsUsed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d021c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ShowAllStringsUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt._TryFindByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, int32_t, ::by_ref<::UnityEngine::Transform*>, bool, bool, ::StringW)>(&::GorillaExtensions::GTExt::_TryFindByPath)> {
  constexpr static std::size_t size = 0x24a8;
  constexpr static std::size_t addrs = 0x5cff954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_TryFindByPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt._TryBreadthFirstSearchNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::StringW, ::by_ref<::UnityEngine::Transform*>, bool)>(&::GorillaExtensions::GTExt::_TryBreadthFirstSearchNames)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x5d02254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_TryBreadthFirstSearchNames", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt._TryFindAllByPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, bool, bool)>(&::GorillaExtensions::GTExt::_TryFindAllByPath)> {
  constexpr static std::size_t size = 0xd18;
  constexpr static std::size_t addrs = 0x5d028a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_TryFindAllByPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt._GlobPathToPathPartsRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::GorillaExtensions::GTExt::_GlobPathToPathPartsRegex)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5cff6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_GlobPathToPathPartsRegex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaExtensions::GTExt._GlobPathPartToRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GorillaExtensions::GTExt::_GlobPathPartToRegex)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d035bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_GlobPathPartToRegex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaExtensions::GTExt::setStaticF_caseSenseInner(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*, "caseSenseInner", ::GorillaExtensions::GTExt*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>* GorillaExtensions::GTExt::getStaticF_caseSenseInner()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*, "caseSenseInner", ::GorillaExtensions::GTExt*>();
}
inline void GorillaExtensions::GTExt::setStaticF_caseInsenseInner(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*, "caseInsenseInner", ::GorillaExtensions::GTExt*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>* GorillaExtensions::GTExt::getStaticF_caseInsenseInner()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>*, "caseInsenseInner", ::GorillaExtensions::GTExt*>();
}
inline void GorillaExtensions::GTExt::setStaticF_allStringsUsed(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "allStringsUsed", ::GorillaExtensions::GTExt*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GorillaExtensions::GTExt::getStaticF_allStringsUsed()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "allStringsUsed", ::GorillaExtensions::GTExt*>();
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GorillaExtensions::GTExt::GetComponentInHierarchy(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentInHierarchy", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, scene, includeInactive);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInHierarchy", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, includeInactive, capacity);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* GorillaExtensions::GTExt::GetComponentsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, ::System::Type*  type, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetComponentsInHierarchy", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(nullptr, ___internal_method, scene, type, includeInactive, capacity);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GorillaExtensions::GTExt::GetGameObjectsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsInHierarchy", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, scene, includeInactive, capacity);
}
template<typename T,typename TStop1>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInHierarchyUntil(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInHierarchyUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, includeInactive, stopAtRoot, capacity);
}
template<typename T,typename TStop1,typename TStop2>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInHierarchyUntil(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInHierarchyUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, includeInactive, stopAtRoot, capacity);
}
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInHierarchyUntil(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInHierarchyUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, includeInactive, stopAtRoot, capacity);
}
template<typename T,typename TStop1>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInChildrenUntil(::UnityEngine::Component*  root, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInChildrenUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, root, includeInactive, stopAtRoot, capacity);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<T>*> GorillaExtensions::GTExt::GTGetComponentsListPool(::UnityEngine::Component*  root, bool  includeInactive, ::by_ref<::System::Collections::Generic::List_1<T>*>  pooledList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GTGetComponentsListPool", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<T>*>>(nullptr, ___internal_method, root, includeInactive, pooledList);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<T>*> GorillaExtensions::GTExt::GTGetComponentsListPool(::UnityEngine::Component*  root, ::by_ref<::System::Collections::Generic::List_1<T>*>  pooledList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GTGetComponentsListPool", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<T>*>>(nullptr, ___internal_method, root, pooledList);
}
template<typename T,typename TStop1,typename TStop2>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInChildrenUntil(::UnityEngine::Component*  root, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInChildrenUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, root, includeInactive, stopAtRoot, capacity);
}
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsInChildrenUntil(::UnityEngine::Component*  root, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInChildrenUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, root, includeInactive, stopAtRoot, capacity);
}
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::GetComponentsInChildrenUntil(::UnityEngine::Component*  root, ::by_ref<::System::Collections::Generic::List_1<T>*>  out_included, ::by_ref<::System::Collections::Generic::HashSet_1<T>*>  out_excluded, bool  includeInactive, bool  stopAtRoot, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsInChildrenUntil", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<T>*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, root, out_included, out_excluded, includeInactive, stopAtRoot, capacity);
}
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::_GetComponentsInChildrenUntil_OutExclusions_GetRecursive(::UnityEngine::Transform*  currentTransform, ::System::Collections::Generic::List_1<T>*  included, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  excluded, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"_GetComponentsInChildrenUntil_OutExclusions_GetRecursive", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentTransform, included, excluded, includeInactive);
}
template<typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
inline bool GorillaExtensions::GTExt::_HasAnyComponents(::UnityEngine::Component*  component, ::by_ref<::UnityEngine::Component*>  stopComponent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"_HasAnyComponents", {::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::UnityEngine::Component*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component, stopComponent);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GorillaExtensions::GTExt::GetComponentWithRegex(::UnityEngine::Component*  root, ::StringW  regexString)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentWithRegex", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, root, regexString);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsWithRegex_Internal(::System::Collections::Generic::IEnumerable_1<T>*  allComponents, ::StringW  regexString, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex_Internal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, allComponents, regexString, includeInactive, capacity);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::GetComponentsWithRegex_Internal(::System::Collections::Generic::IEnumerable_1<T>*  allComponents, ::System::Text::RegularExpressions::Regex*  regex, ::by_ref<::System::Collections::Generic::List_1<T>*>  foundComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex_Internal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allComponents, regex, foundComponents);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::StringW  regexString, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, regexString, includeInactive, capacity);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsWithRegex(::UnityEngine::Component*  root, ::StringW  regexString, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, root, regexString, includeInactive, capacity);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GorillaExtensions::GTExt::GetGameObjectsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::StringW  regexString, bool  includeInactive, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsWithRegex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, scene, regexString, includeInactive, capacity);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::GetComponentsWithRegex_Internal(::System::Collections::Generic::List_1<T>*  allComponents, ::ArrayW<::System::Text::RegularExpressions::Regex*>  regexes, int32_t  maxCount, ::by_ref<::System::Collections::Generic::List_1<T>*>  foundComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex_Internal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::ArrayW<::System::Text::RegularExpressions::Regex*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allComponents, regexes, maxCount, foundComponents);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, bool  includeInactive, int32_t  maxCount, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, regexStrings, includeInactive, maxCount, capacity);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, ::ArrayW<::StringW>  excludeRegexStrings, bool  includeInactive, int32_t  maxCount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsWithRegex", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, scene, regexStrings, excludeRegexStrings, includeInactive, maxCount);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GorillaExtensions::GTExt::GetGameObjectsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, bool  includeInactive, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsWithRegex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, scene, regexStrings, includeInactive, maxCount);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GorillaExtensions::GTExt::GetGameObjectsWithRegex(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  regexStrings, ::ArrayW<::StringW>  excludeRegexStrings, bool  includeInactive, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsWithRegex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, scene, regexStrings, excludeRegexStrings, includeInactive, maxCount);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* GorillaExtensions::GTExt::GetComponentsByName(::UnityEngine::Transform*  xform, ::StringW  name, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentsByName", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, xform, name, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GorillaExtensions::GTExt::GetComponentByName(::UnityEngine::Transform*  xform, ::StringW  name, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentByName", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, xform, name, includeInactive);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GorillaExtensions::GTExt::GetGameObjectsInHierarchy(::UnityEngine::SceneManagement::Scene  scene, ::StringW  name, bool  includeInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetGameObjectsInHierarchy", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, scene, name, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GorillaExtensions::GTExt::GetOrAddComponent(::UnityEngine::GameObject*  gameObject, ::by_ref<T>  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetOrAddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject, component);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GorillaExtensions::GTExt::GetOrAddComponent(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetOrAddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
inline void GorillaExtensions::GTExt::SetLossyScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLossyScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, scale);
}
inline ::UnityEngine::Quaternion GorillaExtensions::GTExt::TransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, transform, localRotation);
}
inline ::UnityEngine::Quaternion GorillaExtensions::GTExt::InverseTransformRotation(::UnityEngine::Transform*  transform, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"InverseTransformRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, transform, localRotation);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::ProjectOnPlane(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  planeAnchorPosition, ::UnityEngine::Vector3  planeNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ProjectOnPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, planeAnchorPosition, planeNormal);
}
template<typename T>
inline int32_t GorillaExtensions::GTExt::FindIndex(::System::Collections::Generic::IReadOnlyList_1<T>*  list, ::System::Predicate_1<T>*  match)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindIndex", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<::System::Predicate_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, match);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::MultiplyBy(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  vec, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  mulitplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MultiplyBy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vec, mulitplier);
}
template<typename T>
inline void GorillaExtensions::GTExt::ForEachBackwards(::System::Collections::Generic::List_1<T>*  list, ::System::Action_1<T>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"ForEachBackwards", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, action);
}
template<typename T>
inline void GorillaExtensions::GTExt::AddSortedUnique(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"AddSortedUnique", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item);
}
template<typename T>
inline void GorillaExtensions::GTExt::RemoveSorted(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"RemoveSorted", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item);
}
template<typename T>
inline bool GorillaExtensions::GTExt::ContainsSorted(::System::Collections::Generic::List_1<T>*  list, T  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"ContainsSorted", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, item);
}
template<typename T>
inline void GorillaExtensions::GTExt::SafeForEachBackwards(::System::Collections::Generic::List_1<T>*  list, ::System::Action_1<T>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"SafeForEachBackwards", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, action);
}
template<typename T>
inline ::ArrayW<T> GorillaExtensions::GTExt::Filled(::ArrayW<T>  array, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"Filled", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, value);
}
inline bool GorillaExtensions::GTExt::CompareAs255Unclamped(::UnityEngine::Color  a, ::UnityEngine::Color  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"CompareAs255Unclamped", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Quaternion GorillaExtensions::GTExt::QuaternionFromToVec(::UnityEngine::Vector3  toVector, ::UnityEngine::Vector3  fromVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"QuaternionFromToVec", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, toVector, fromVector);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::Position(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Position", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, matrix);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::Scale(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, m);
}
inline void GorillaExtensions::GTExt::SetLocalRelativeToParentMatrixWithParityAxis(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::GlobalNamespace::GTExt_ParityOptions  parity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalRelativeToParentMatrixWithParityAxis", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::GlobalNamespace::GTExt_ParityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrix, parity);
}
inline void GorillaExtensions::GTExt::MultiplyInPlaceWith(::by_ref<::UnityEngine::Vector3>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MultiplyInPlaceWith", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void GorillaExtensions::GTExt::DecomposeWithXFlip(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::by_ref<::UnityEngine::Vector3>  transformation, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"DecomposeWithXFlip", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrix, transformation, rotation, scale);
}
inline void GorillaExtensions::GTExt::SetLocalMatrixRelativeToParentWithXParity(::UnityEngine::Transform*  transform, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix4X4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalMatrixRelativeToParentWithXParity", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix4X4);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::Matrix4x4Scale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Matrix4x4Scale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::GetColumnNoCopy(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix, /* [IsReadOnly] */ ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetColumnNoCopy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, matrix, index);
}
inline ::UnityEngine::Quaternion GorillaExtensions::GTExt::RotationWithScaleContext(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  m, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"RotationWithScaleContext", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, m, scale);
}
inline ::UnityEngine::Quaternion GorillaExtensions::GTExt::Rotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Rotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::x0y(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"x0y", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::x0y(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"x0y", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xy0(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy0", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xy0(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy0", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xz0(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xz0", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::x0z(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"x0z", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::LocalMatrixRelativeToParentNoScale(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LocalMatrixRelativeToParentNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::LocalMatrixRelativeToParentWithScale(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LocalMatrixRelativeToParentWithScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, transform);
}
inline void GorillaExtensions::GTExt::SetLocalMatrixRelativeToParent(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalMatrixRelativeToParent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix);
}
inline void GorillaExtensions::GTExt::SetLocalMatrixRelativeToParentNoScale(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalMatrixRelativeToParentNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix);
}
inline void GorillaExtensions::GTExt::SetLocalToWorldMatrixNoScale(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalToWorldMatrixNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::localToWorldNoScale(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"localToWorldNoScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, transform);
}
inline void GorillaExtensions::GTExt::SetLocalToWorldMatrixWithScale(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetLocalToWorldMatrixWithScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::Matrix4X4LerpNoScale(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Matrix4X4LerpNoScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::LerpTo(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LerpTo", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, a, b, t);
}
inline bool GorillaExtensions::GTExt::IsNaN(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNaN", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool GorillaExtensions::GTExt::IsNan(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNan", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, q);
}
inline bool GorillaExtensions::GTExt::IsInfinity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsInfinity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool GorillaExtensions::GTExt::IsInfinity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsInfinity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, q);
}
inline bool GorillaExtensions::GTExt::ValuesInRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ValuesInRange", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, maxVal);
}
inline bool GorillaExtensions::GTExt::IsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, maxVal);
}
inline bool GorillaExtensions::GTExt::IsMagnitudeValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsMagnitudeValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, magnitude);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::GetValidWithFallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  safeVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetValidWithFallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, safeVal);
}
inline void GorillaExtensions::GTExt::SetValueSafe(::by_ref<::UnityEngine::Vector3>  v, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetValueSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v, newVal);
}
inline bool GorillaExtensions::GTExt::IsNaN(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNaN", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, h);
}
inline bool GorillaExtensions::GTExt::IsInfinity(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsInfinity", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, h);
}
inline bool GorillaExtensions::GTExt::ValuesInRange(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ValuesInRange", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, h, maxVal);
}
inline bool GorillaExtensions::GTExt::IsValid(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::half3>  h, /* [IsReadOnly] */ ::by_ref<float_t>  maxVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::half3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, h, maxVal);
}
inline bool GorillaExtensions::GTExt::IsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsValid", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion GorillaExtensions::GTExt::GetValidWithFallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  q, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  safeVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetValidWithFallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q, safeVal);
}
inline void GorillaExtensions::GTExt::SetValueSafe(::by_ref<::UnityEngine::Quaternion>  q, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  newVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetValueSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, newVal);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::ClampMagnitudeSafe(::UnityEngine::Vector2  v2, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampMagnitudeSafe", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v2, magnitude);
}
inline void GorillaExtensions::GTExt::ClampThisMagnitudeSafe(::by_ref<::UnityEngine::Vector2>  v2, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampThisMagnitudeSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v2, magnitude);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::ClampMagnitudeSafe(::UnityEngine::Vector3  v3, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampMagnitudeSafe", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v3, magnitude);
}
inline void GorillaExtensions::GTExt::ClampThisMagnitudeSafe(::by_ref<::UnityEngine::Vector3>  v3, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampThisMagnitudeSafe", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v3, magnitude);
}
inline float_t GorillaExtensions::GTExt::MinSafe(float_t  value, float_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MinSafe", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, min);
}
inline void GorillaExtensions::GTExt::ThisMinSafe(::by_ref<float_t>  value, float_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMinSafe", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, min);
}
inline double_t GorillaExtensions::GTExt::MinSafe(double_t  value, float_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MinSafe", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, min);
}
inline void GorillaExtensions::GTExt::ThisMinSafe(::by_ref<double_t>  value, float_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMinSafe", {}, {::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, min);
}
inline float_t GorillaExtensions::GTExt::MaxSafe(float_t  value, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MaxSafe", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, max);
}
inline void GorillaExtensions::GTExt::ThisMaxSafe(::by_ref<float_t>  value, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMaxSafe", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, max);
}
inline double_t GorillaExtensions::GTExt::MaxSafe(double_t  value, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"MaxSafe", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, max);
}
inline void GorillaExtensions::GTExt::ThisMaxSafe(::by_ref<double_t>  value, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ThisMaxSafe", {}, {::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, max);
}
inline float_t GorillaExtensions::GTExt::ClampSafe(float_t  value, float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampSafe", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, min, max);
}
inline double_t GorillaExtensions::GTExt::ClampSafe(double_t  value, double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampSafe", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, min, max);
}
inline float_t GorillaExtensions::GTExt::GetFinite(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetFinite", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t GorillaExtensions::GTExt::GetFinite(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetFinite", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::Matrix4X4LerpHandleNegativeScale(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Matrix4X4LerpHandleNegativeScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Matrix4x4 GorillaExtensions::GTExt::LerpTo_HandleNegativeScale(::UnityEngine::Matrix4x4  a, ::UnityEngine::Matrix4x4  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LerpTo_HandleNegativeScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::LerpToUnclamped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"LerpToUnclamped", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, t);
}
inline ::StringW GorillaExtensions::GTExt::ToLongString(::UnityEngine::Vector3  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ToLongString", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, self);
}
template<typename T>
inline int32_t GorillaExtensions::GTExt::GetRandomIndex(::System::Collections::Generic::IReadOnlyList_1<T>*  self)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetRandomIndex", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
template<typename T>
inline T GorillaExtensions::GTExt::GetRandomItem(::System::Collections::Generic::IReadOnlyList_1<T>*  self)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetRandomItem", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, self);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xx(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xx(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::yy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xx(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::yy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::yz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::zz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xx(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xx", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::xw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::yy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::yz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::yw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::zz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::zw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::ww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxx(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxx(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xyy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yyy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxx(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xyy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xyz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yyy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yyz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::zzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxx(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxx", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xxw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xyy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xyz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xyw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::xww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yyy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yyz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yyw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::yww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::zzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::zzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::zww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::www(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"www", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxx(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxx(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxyy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyyy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyyy(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxx(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxyy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxyz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyyy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyyz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xzzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyyy(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyy", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyyz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yzzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::zzzz(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzzz", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxx(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxx", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxxw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxxw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxyy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxyz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxyw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xxww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xxww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyyy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyyz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyyw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xyww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xyww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xzzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xzzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xzww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xzww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::xwww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"xwww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyyy(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyy", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyyz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyyw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyyw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yyww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yyww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yzzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yzzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::yzww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"yzww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::ywww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ywww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::zzzz(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzzz", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::zzzw(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzzw", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::zzww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zzww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::zwww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"zwww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::wwww(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"wwww", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::WithX(::UnityEngine::Vector4  v, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithX", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v, x);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::WithY(::UnityEngine::Vector4  v, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithY", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v, y);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::WithZ(::UnityEngine::Vector4  v, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithZ", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v, z);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::WithW(::UnityEngine::Vector4  v, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithW", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v, w);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::WithX(::UnityEngine::Vector3  v, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, x);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::WithY(::UnityEngine::Vector3  v, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithY", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, y);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::WithZ(::UnityEngine::Vector3  v, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, z);
}
inline ::UnityEngine::Vector4 GorillaExtensions::GTExt::WithW(::UnityEngine::Vector3  v, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithW", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v, w);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::WithX(::UnityEngine::Vector2  v, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithX", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v, x);
}
inline ::UnityEngine::Vector2 GorillaExtensions::GTExt::WithY(::UnityEngine::Vector2  v, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithY", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v, y);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::WithZ(::UnityEngine::Vector2  v, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"WithZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, z);
}
inline bool GorillaExtensions::GTExt::IsShorterThan(::UnityEngine::Vector2  v, float_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, len);
}
inline bool GorillaExtensions::GTExt::IsShorterThan(::UnityEngine::Vector2  v, ::UnityEngine::Vector2  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, v2);
}
inline bool GorillaExtensions::GTExt::IsShorterThan(::UnityEngine::Vector3  v, float_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, len);
}
inline bool GorillaExtensions::GTExt::IsShorterThan(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsShorterThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, v2);
}
inline bool GorillaExtensions::GTExt::IsLongerThan(::UnityEngine::Vector2  v, float_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, len);
}
inline bool GorillaExtensions::GTExt::IsLongerThan(::UnityEngine::Vector2  v, ::UnityEngine::Vector2  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, v2);
}
inline bool GorillaExtensions::GTExt::IsLongerThan(::UnityEngine::Vector3  v, float_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, len);
}
inline bool GorillaExtensions::GTExt::IsLongerThan(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsLongerThan", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, v2);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::Normalize(::UnityEngine::Vector3  value, ::by_ref<float_t>  existingMagnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, existingMagnitude);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::GetClosestPoint(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetClosestPoint", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ray, target);
}
inline float_t GorillaExtensions::GTExt::GetClosestDistSqr(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetClosestDistSqr", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ray, target);
}
inline float_t GorillaExtensions::GTExt::GetClosestDistance(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetClosestDistance", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ray, target);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::ProjectToPlane(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  planeOrigin, ::UnityEngine::Vector3  planeNormalMustBeLength1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ProjectToPlane", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ray, planeOrigin, planeNormalMustBeLength1);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::ProjectToLine(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ProjectToLine", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ray, lineStart, lineEnd);
}
inline bool GorillaExtensions::GTExt::IsNull(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNull", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono);
}
inline bool GorillaExtensions::GTExt::IsNotNull(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"IsNotNull", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono);
}
inline ::UnityEngine::Vector3 GorillaExtensions::GTExt::Clamp(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"Clamp", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, min, max);
}
inline void GorillaExtensions::GTExt::ClampThis(::by_ref<::UnityEngine::Vector3>  value, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClampThis", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, min, max);
}
inline ::StringW GorillaExtensions::GTExt::GetPath(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, transform);
}
inline ::StringW GorillaExtensions::GTExt::GetPathQ(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathQ", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, transform);
}
inline void GorillaExtensions::GTExt::GetPathQ(::UnityEngine::Transform*  transform, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathQ", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, sb);
}
inline ::StringW GorillaExtensions::GTExt::GetPath(::UnityEngine::Transform*  transform, int32_t  maxDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, transform, maxDepth);
}
inline ::StringW GorillaExtensions::GTExt::GetPath(::UnityEngine::Transform*  transform, ::UnityEngine::Transform*  stopper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, transform, stopper);
}
inline ::StringW GorillaExtensions::GTExt::GetPath(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gameObject);
}
inline void GorillaExtensions::GTExt::GetPath(::UnityEngine::GameObject*  gameObject, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, sb);
}
inline ::StringW GorillaExtensions::GTExt::GetPath(::UnityEngine::GameObject*  gameObject, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gameObject, limit);
}
inline ::ArrayW<::StringW> GorillaExtensions::GTExt::GetPaths(::ArrayW<::UnityEngine::GameObject*>  gobj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPaths", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, gobj);
}
inline ::ArrayW<::StringW> GorillaExtensions::GTExt::GetPaths(::ArrayW<::UnityEngine::Transform*>  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPaths", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, xform);
}
inline void GorillaExtensions::GTExt::GetRelativePath(::StringW  fromPath, ::StringW  toPath, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  ZStringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromPath, toPath, ZStringBuilder);
}
inline ::StringW GorillaExtensions::GTExt::GetRelativePath(::StringW  fromPath, ::StringW  toPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fromPath, toPath);
}
inline void GorillaExtensions::GTExt::GetRelativePath(::UnityEngine::Transform*  fromXform, ::UnityEngine::Transform*  toXform, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  ZStringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromXform, toXform, ZStringBuilder);
}
inline ::StringW GorillaExtensions::GTExt::GetRelativePath(::UnityEngine::Transform*  fromXform, ::UnityEngine::Transform*  toXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetRelativePath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fromXform, toXform);
}
inline void GorillaExtensions::GTExt::GetPathWithSiblingIndexes(::UnityEngine::Transform*  transform, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  strBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, strBuilder);
}
inline ::StringW GorillaExtensions::GTExt::GetComponentPath(::UnityEngine::Component*  component, int32_t  maxDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetComponentPath", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component, maxDepth);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::StringW GorillaExtensions::GTExt::GetComponentPath(T  component, int32_t  maxDepth)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentPath", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component, maxDepth);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::GetComponentPath(T  component, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  strBuilder, int32_t  maxDepth)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentPath", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, strBuilder, maxDepth);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::GetComponentPathWithSiblingIndexes(T  component, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  strBuilder)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentPathWithSiblingIndexes", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, strBuilder);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::StringW GorillaExtensions::GTExt::GetComponentPathWithSiblingIndexes(T  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentPathWithSiblingIndexes", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GorillaExtensions::GTExt::GetComponentByPath(::UnityEngine::GameObject*  root, ::StringW  path)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"GetComponentByPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, root, path);
}
inline int32_t GorillaExtensions::GTExt::GetDepth(::UnityEngine::Transform*  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetDepth", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, xform);
}
inline ::StringW GorillaExtensions::GTExt::GetPathWithSiblingIndexes(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, transform);
}
inline void GorillaExtensions::GTExt::GetPathWithSiblingIndexes(::UnityEngine::GameObject*  gameObject, ::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>  stringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Cysharp::Text::Utf16ValueStringBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, stringBuilder);
}
inline ::StringW GorillaExtensions::GTExt::GetPathWithSiblingIndexes(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"GetPathWithSiblingIndexes", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, gameObject);
}
inline void GorillaExtensions::GTExt::SetFromMatrix(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix, bool  useLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetFromMatrix", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix, useLocal);
}
inline void GorillaExtensions::GTExt::SetScale(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetScale", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, scale);
}
inline void GorillaExtensions::GTExt::SetScaleFromMatrix(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"SetScaleFromMatrix", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, matrix);
}
inline void GorillaExtensions::GTExt::AddDictValue(::UnityEngine::Transform*  xForm, ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"AddDictValue", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xForm, dict);
}
inline void GorillaExtensions::GTExt::ClearDicts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ClearDicts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaExtensions::GTExt::TryFindByExactPath(/* [NotNull] */ ::StringW  path, ::by_ref<::UnityEngine::Transform*>  result, ::UnityEngine::FindObjectsInactive  findObjectsInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::FindObjectsInactive>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, result, findObjectsInactive);
}
inline bool GorillaExtensions::GTExt::TryFindByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  path, ::by_ref<::UnityEngine::Transform*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene, path, result);
}
inline bool GorillaExtensions::GTExt::TryFindByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  splitPath, ::by_ref<::UnityEngine::Transform*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene, splitPath, result);
}
inline bool GorillaExtensions::GTExt::TryFindByExactPath(::UnityEngine::Transform*  rootXform, ::StringW  path, ::by_ref<::UnityEngine::Transform*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rootXform, path, result);
}
inline bool GorillaExtensions::GTExt::TryFindByExactPath(::UnityEngine::Transform*  rootXform, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  splitPath, ::by_ref<::UnityEngine::Transform*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rootXform, splitPath, result);
}
inline bool GorillaExtensions::GTExt::TryFindByExactPath_Internal(::UnityEngine::Transform*  current, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  splitPath, int32_t  index, ::by_ref<::UnityEngine::Transform*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByExactPath_Internal", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, current, splitPath, index, result);
}
inline bool GorillaExtensions::GTExt::TryFindByPath(::StringW  globPath, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, globPath, result, caseSensitive);
}
inline bool GorillaExtensions::GTExt::TryFindByPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  globPath, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene, globPath, result, caseSensitive);
}
inline bool GorillaExtensions::GTExt::TryFindByPath(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  pathPartsRegex, ::by_ref<::UnityEngine::Transform*>  result, ::StringW  globPath, bool  caseSensitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene, pathPartsRegex, result, globPath, caseSensitive);
}
inline bool GorillaExtensions::GTExt::TryFindByPath(::UnityEngine::Transform*  rootXform, ::StringW  globPath, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"TryFindByPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rootXform, globPath, result, caseSensitive);
}
inline ::System::Collections::Generic::List_1<::StringW>* GorillaExtensions::GTExt::ShowAllStringsUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"ShowAllStringsUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method);
}
inline bool GorillaExtensions::GTExt::_TryFindByPath(::UnityEngine::Transform*  current, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  pathPartsRegex, int32_t  index, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive, bool  isAtSceneLevel, ::StringW  joinedPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_TryFindByPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, current, pathPartsRegex, index, result, caseSensitive, isAtSceneLevel, joinedPath);
}
inline bool GorillaExtensions::GTExt::_TryBreadthFirstSearchNames(::UnityEngine::Transform*  root, ::StringW  regexPattern, ::by_ref<::UnityEngine::Transform*>  result, bool  caseSensitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_TryBreadthFirstSearchNames", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, root, regexPattern, result, caseSensitive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByExactPath(::StringW  path)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByExactPath", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, path);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  path)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByExactPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, path);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByExactPath(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  splitPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByExactPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, splitPath);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByExactPath(::UnityEngine::Transform*  rootXform, ::StringW  path)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByExactPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rootXform, path);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByExactPath(::UnityEngine::Transform*  rootXform, ::ArrayW<::StringW>  splitPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByExactPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rootXform, splitPath);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::_FindComponentsByExactPath(::UnityEngine::Transform*  current, ::ArrayW<::StringW>  splitPath, int32_t  index, ::System::Collections::Generic::List_1<T>*  components)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"_FindComponentsByExactPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, current, splitPath, index, components);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByPathInLoadedScenes(::StringW  wildcardPath, bool  caseSensitive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByPathInLoadedScenes", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, wildcardPath, caseSensitive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByPath(::UnityEngine::SceneManagement::Scene  scene, ::StringW  globPath, bool  caseSensitive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, globPath, caseSensitive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByPath(::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::StringW>  pathPartsRegex, bool  caseSensitive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, pathPartsRegex, caseSensitive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByPath(::UnityEngine::Transform*  rootXform, ::StringW  globPath, bool  caseSensitive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rootXform, globPath, caseSensitive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> GorillaExtensions::GTExt::FindComponentsByPath(::UnityEngine::Transform*  rootXform, ::ArrayW<::StringW>  pathPartsRegex, bool  caseSensitive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"FindComponentsByPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rootXform, pathPartsRegex, caseSensitive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::_FindComponentsByPath(::UnityEngine::Transform*  current, ::ArrayW<::StringW>  pathPartsRegex, ::System::Collections::Generic::List_1<T>*  components, bool  caseSensitive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"_FindComponentsByPath", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, current, pathPartsRegex, components, caseSensitive);
}
inline bool GorillaExtensions::GTExt::_TryFindAllByPath(::UnityEngine::Transform*  current, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  pathPartsRegex, int32_t  index, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  results, bool  caseSensitive, bool  isAtSceneLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_TryFindAllByPath", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, current, pathPartsRegex, index, results, caseSensitive, isAtSceneLevel);
}
inline ::ArrayW<::StringW> GorillaExtensions::GTExt::_GlobPathToPathPartsRegex(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_GlobPathToPathPartsRegex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::StringW GorillaExtensions::GTExt::_GlobPathPartToRegex(::StringW  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                        {"_GlobPathPartToRegex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pattern);
}
template<typename T,typename TStop1>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::_GetComponentsInChildrenUntil_g__GetRecursive_7_0(::UnityEngine::Transform*  currentTransform, ::by_ref<::System::Collections::Generic::List_1<T>*>  components, ::by_ref<::GlobalNamespace::GTExt___c__DisplayClass7_0_2<T,TStop1>>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"<GetComponentsInChildrenUntil>g__GetRecursive|7_0", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTExt___c__DisplayClass7_0_2<T,TStop1>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentTransform, components, _cordl_fixed_empty_name_whitespace);
}
template<typename T,typename TStop1,typename TStop2>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::_GetComponentsInChildrenUntil_g__GetRecursive_10_0(::UnityEngine::Transform*  currentTransform, ::by_ref<::System::Collections::Generic::List_1<T>*>  components, ::by_ref<::GlobalNamespace::GTExt___c__DisplayClass10_0_3<T,TStop1,TStop2>>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"<GetComponentsInChildrenUntil>g__GetRecursive|10_0", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTExt___c__DisplayClass10_0_3<T,TStop1,TStop2>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentTransform, components, _cordl_fixed_empty_name_whitespace);
}
template<typename T,typename TStop1,typename TStop2,typename TStop3>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop1, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop2, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStop3, ::UnityEngine::Component*>)
inline void GorillaExtensions::GTExt::_GetComponentsInChildrenUntil_g__GetRecursive_11_0(::UnityEngine::Transform*  currentTransform, ::by_ref<::System::Collections::Generic::List_1<T>*>  components, ::by_ref<::GlobalNamespace::GTExt___c__DisplayClass11_0_4<T,TStop1,TStop2,TStop3>>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GTExt*>(),
                    {"<GetComponentsInChildrenUntil>g__GetRecursive|11_0", {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTExt___c__DisplayClass11_0_4<T,TStop1,TStop2,TStop3>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<TStop1>(), ::i2c::class_of<TStop2>(), ::i2c::class_of<TStop3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentTransform, components, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::GTExt::GTExt()   {
}
