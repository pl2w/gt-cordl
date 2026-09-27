#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFramingTransposer.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_AdjustmentMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_FramingMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_AdjustmentMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFramingTransposer_FramingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePositionComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_SoftGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_SoftGuideRect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaecc0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_SoftGuideRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.set_SoftGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::CinemachineFramingTransposer::set_SoftGuideRect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaecc0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_SoftGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_HardGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_HardGuideRect)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaecc12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_HardGuideRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.set_HardGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::CinemachineFramingTransposer::set_HardGuideRect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaecc160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_HardGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::OnValidate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaecc190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaecc22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecc2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_BodyAppliesAfterAim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_BodyAppliesAfterAim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecc2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaecc2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.set_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFramingTransposer::set_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaecc2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFramingTransposer::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaecc2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineFramingTransposer::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaecc3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaecc448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineFramingTransposer::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaecc464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.ScreenToOrtho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Rect, float_t, float_t)>(&::Unity::Cinemachine::CinemachineFramingTransposer::ScreenToOrtho)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaecc61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"ScreenToOrtho", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.OrthoOffsetToScreenBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Vector3, ::UnityEngine::Rect)>(&::Unity::Cinemachine::CinemachineFramingTransposer::OrthoOffsetToScreenBounds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaecc670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"OrthoOffsetToScreenBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_LastBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_LastBounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaecc710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_LastBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.set_LastBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Bounds)>(&::Unity::Cinemachine::CinemachineFramingTransposer::set_LastBounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaecc728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_LastBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_LastBoundsMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_LastBoundsMatrix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaecc740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_LastBoundsMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.set_LastBoundsMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Matrix4x4)>(&::Unity::Cinemachine::CinemachineFramingTransposer::set_LastBoundsMatrix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaecc754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_LastBoundsMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineFramingTransposer::MutateCameraState)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0xaecc768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.GetTargetHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::UnityEngine::Vector2)>(&::Unity::Cinemachine::CinemachineFramingTransposer::GetTargetHeight)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaecd7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"GetTargetHeight", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.ComputeGroupBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::Unity::Cinemachine::ICinemachineTargetGroup*, ::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::CinemachineFramingTransposer::ComputeGroupBounds)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xaecd3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"ComputeGroupBounds", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.GetScreenSpaceGroupBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::Unity::Cinemachine::ICinemachineTargetGroup*, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineFramingTransposer::GetScreenSpaceGroupBoundingBox)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xaecd878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"GetScreenSpaceGroupBoundingBox", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.get_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::get_Composition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaecdcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_Composition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.set_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::Unity::Cinemachine::ScreenComposerSettings)>(&::Unity::Cinemachine::CinemachineFramingTransposer::set_Composition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaecdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::Unity::Cinemachine::CinemachinePositionComposer*)>(&::Unity::Cinemachine::CinemachineFramingTransposer::UpgradeToCm3)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaecdd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachinePositionComposer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)(::Unity::Cinemachine::CinemachineGroupFraming*)>(&::Unity::Cinemachine::CinemachineFramingTransposer::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaecde28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFramingTransposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFramingTransposer::*)()>(&::Unity::Cinemachine::CinemachineFramingTransposer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaecde74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_TrackedObjectOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedObjectOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_TrackedObjectOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedObjectOffset;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_TrackedObjectOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedObjectOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_LookaheadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_LookaheadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadTime;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_LookaheadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookaheadTime = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_LookaheadSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadSmoothing;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_LookaheadSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadSmoothing;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_LookaheadSmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookaheadSmoothing = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_LookaheadIgnoreY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadIgnoreY;
}
constexpr bool const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_LookaheadIgnoreY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadIgnoreY;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_LookaheadIgnoreY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookaheadIgnoreY = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_XDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_XDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XDamping;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_XDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_YDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_YDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YDamping;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_YDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_ZDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_ZDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZDamping;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_ZDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZDamping = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_TargetMovementOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetMovementOnly;
}
constexpr bool const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_TargetMovementOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetMovementOnly;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_TargetMovementOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetMovementOnly = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_ScreenX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenX;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_ScreenX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenX;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_ScreenX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenX = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_ScreenY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenY;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_ScreenY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenY;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_ScreenY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenY = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_CameraDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_CameraDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraDistance;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_CameraDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_DeadZoneWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneWidth;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_DeadZoneWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneWidth;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_DeadZoneWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZoneWidth = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_DeadZoneHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneHeight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_DeadZoneHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneHeight;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_DeadZoneHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZoneHeight = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_DeadZoneDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneDepth;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_DeadZoneDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneDepth;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_DeadZoneDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZoneDepth = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_UnlimitedSoftZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnlimitedSoftZone;
}
constexpr bool const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_UnlimitedSoftZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnlimitedSoftZone;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_UnlimitedSoftZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnlimitedSoftZone = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_SoftZoneWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneWidth;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_SoftZoneWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneWidth;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_SoftZoneWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SoftZoneWidth = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_SoftZoneHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneHeight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_SoftZoneHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneHeight;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_SoftZoneHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SoftZoneHeight = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_BiasX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasX;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_BiasX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasX;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_BiasX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BiasX = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_BiasY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasY;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_BiasY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasY;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_BiasY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BiasY = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_CenterOnActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterOnActivate;
}
constexpr bool const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_CenterOnActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterOnActivate;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_CenterOnActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CenterOnActivate = value;
}
constexpr ::GlobalNamespace::CinemachineFramingTransposer_FramingMode& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_GroupFramingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupFramingMode;
}
constexpr ::GlobalNamespace::CinemachineFramingTransposer_FramingMode const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_GroupFramingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupFramingMode;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_GroupFramingMode(::GlobalNamespace::CinemachineFramingTransposer_FramingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupFramingMode = value;
}
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_AdjustmentMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdjustmentMode;
}
constexpr ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_AdjustmentMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdjustmentMode;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_AdjustmentMode(::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdjustmentMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_GroupFramingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupFramingSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_GroupFramingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupFramingSize;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_GroupFramingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupFramingSize = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaxDollyIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyIn;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaxDollyIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyIn;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MaxDollyIn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDollyIn = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaxDollyOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyOut;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaxDollyOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyOut;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MaxDollyOut(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDollyOut = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MinimumDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MinimumDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumDistance;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MinimumDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaximumDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaximumDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumDistance;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MaximumDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MinimumFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumFOV;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MinimumFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumFOV;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MinimumFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumFOV = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaximumFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumFOV;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaximumFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumFOV;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MaximumFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumFOV = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MinimumOrthoSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumOrthoSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MinimumOrthoSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumOrthoSize;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MinimumOrthoSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumOrthoSize = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaximumOrthoSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumOrthoSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_MaximumOrthoSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumOrthoSize;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_MaximumOrthoSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumOrthoSize = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_PreviousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_PreviousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_PreviousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousCameraPosition = value;
}
constexpr ::Unity::Cinemachine::PositionPredictor& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_Predictor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr ::Unity::Cinemachine::PositionPredictor const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_Predictor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Predictor = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get__TrackedPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get__TrackedPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackedPoint_k__BackingField = value;
}
constexpr bool& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_InheritingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InheritingPosition;
}
constexpr bool const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_InheritingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InheritingPosition;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_InheritingPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InheritingPosition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_prevFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFOV;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_prevFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFOV;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_prevFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevFOV = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_prevRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get_m_prevRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevRotation;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set_m_prevRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevRotation = value;
}
constexpr ::UnityEngine::Bounds& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get__LastBounds_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBounds_k__BackingField;
}
constexpr ::UnityEngine::Bounds const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get__LastBounds_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBounds_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set__LastBounds_k__BackingField(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastBounds_k__BackingField = value;
}
constexpr ::UnityEngine::Matrix4x4& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get__LastBoundsMatrix_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBoundsMatrix_k__BackingField;
}
constexpr ::UnityEngine::Matrix4x4 const& Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_get__LastBoundsMatrix_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBoundsMatrix_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineFramingTransposer::__cordl_internal_set__LastBoundsMatrix_k__BackingField(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastBoundsMatrix_k__BackingField = value;
}
inline ::UnityEngine::Rect Unity::Cinemachine::CinemachineFramingTransposer::get_SoftGuideRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_SoftGuideRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::set_SoftGuideRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_SoftGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect Unity::Cinemachine::CinemachineFramingTransposer::get_HardGuideRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_HardGuideRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::set_HardGuideRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_HardGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineFramingTransposer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineFramingTransposer::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineFramingTransposer::get_BodyAppliesAfterAim()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineFramingTransposer::get_TrackedPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::set_TrackedPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineFramingTransposer::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineFramingTransposer::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline ::UnityEngine::Rect Unity::Cinemachine::CinemachineFramingTransposer::ScreenToOrtho(::UnityEngine::Rect  rScreen, float_t  orthoSize, float_t  aspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"ScreenToOrtho", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, rScreen, orthoSize, aspect);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineFramingTransposer::OrthoOffsetToScreenBounds(::UnityEngine::Vector3  targetPos2D, ::UnityEngine::Rect  screenRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"OrthoOffsetToScreenBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, targetPos2D, screenRect);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineFramingTransposer::get_LastBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_LastBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::set_LastBounds(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_LastBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 Unity::Cinemachine::CinemachineFramingTransposer::get_LastBoundsMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_LastBoundsMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::set_LastBoundsMatrix(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_LastBoundsMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline float_t Unity::Cinemachine::CinemachineFramingTransposer::GetTargetHeight(::UnityEngine::Vector2  boundsSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"GetTargetHeight", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, boundsSize);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineFramingTransposer::ComputeGroupBounds(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::by_ref<::Unity::Cinemachine::CameraState>  curState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"ComputeGroupBounds", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, group, curState);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineFramingTransposer::GetScreenSpaceGroupBoundingBox(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::by_ref<::UnityEngine::Vector3>  pos, ::UnityEngine::Quaternion  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"GetScreenSpaceGroupBoundingBox", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, group, pos, orientation);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::CinemachineFramingTransposer::get_Composition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"get_Composition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::UpgradeToCm3(::Unity::Cinemachine::CinemachinePositionComposer*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachinePositionComposer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::UpgradeToCm3(::Unity::Cinemachine::CinemachineGroupFraming*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineFramingTransposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFramingTransposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineFramingTransposer* Unity::Cinemachine::CinemachineFramingTransposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFramingTransposer*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFramingTransposer::CinemachineFramingTransposer()   {
}
