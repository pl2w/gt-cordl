#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_QualityEvaluation_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_QualityEvaluation_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__IShotQualityEvaluator_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.IsTargetObscured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineDeoccluder::IsTargetObscured)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae8d5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.CameraWasDisplaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineDeoccluder::CameraWasDisplaced)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae8d64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.GetCameraDisplacementDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineDeoccluder::GetCameraDisplacementDistance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xae8d664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder::OnValidate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xae8d72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae8d7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae8d898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xae8d8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.DebugCollisionPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*)>(&::Unity::Cinemachine::CinemachineDeoccluder::DebugCollisionPaths)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xae8d9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"DebugCollisionPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDeoccluder::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xae8dc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineDeoccluder::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae8dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineDeoccluder::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae8dd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineDeoccluder::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0xae8ddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.GetAvoidanceResolutionTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::by_ref<::Unity::Cinemachine::CameraState>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineDeoccluder::GetAvoidanceResolutionTargetPoint)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xae8e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetAvoidanceResolutionTargetPoint", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.PreserveLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDeoccluder::*)(::by_ref<::Unity::Cinemachine::CameraState>, ::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineDeoccluder::PreserveLineOfSight)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xae8eb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"PreserveLineOfSight", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.PullCameraInFrontOfNearestObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDeoccluder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Unity::Cinemachine::CinemachineDeoccluder::PullCameraInFrontOfNearestObstacle)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xae8fcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"PullCameraInFrontOfNearestObstacle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.PushCameraBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDeoccluder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, float_t, int32_t, ::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>)>(&::Unity::Cinemachine::CinemachineDeoccluder::PushCameraBack)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0xae90020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"PushCameraBack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.GetWalkingDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineDeoccluder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineDeoccluder::GetWalkingDirection)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0xae90834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetWalkingDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.GetPushBackDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDeoccluder::*)(::UnityEngine::Ray, ::UnityEngine::Plane, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineDeoccluder::GetPushBackDistance)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xae90ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetPushBackDistance", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.ClampRayToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Ray, float_t, ::UnityEngine::Bounds)>(&::Unity::Cinemachine::CinemachineDeoccluder::ClampRayToBounds)> {
  constexpr static std::size_t size = 0xc78;
  constexpr static std::size_t addrs = 0xae911f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"ClampRayToBounds", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.RespectCameraRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineDeoccluder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineDeoccluder::RespectCameraRadius)> {
  constexpr static std::size_t size = 0x990;
  constexpr static std::size_t addrs = 0xae8f084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"RespectCameraRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder.IsTargetObscured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineDeoccluder::*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CinemachineDeoccluder::IsTargetObscured)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xae8fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae91e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_CollideAgainst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollideAgainst;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_CollideAgainst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CollideAgainst;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_CollideAgainst(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CollideAgainst = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_IgnoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_IgnoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_IgnoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTag = value;
}
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_TransparentLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransparentLayers;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_TransparentLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransparentLayers;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_TransparentLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransparentLayers = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_MinimumDistanceFromTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimumDistanceFromTarget;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_MinimumDistanceFromTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimumDistanceFromTarget;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_MinimumDistanceFromTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinimumDistanceFromTarget = value;
}
constexpr ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_AvoidObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvoidObstacles;
}
constexpr ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_AvoidObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvoidObstacles;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_AvoidObstacles(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvoidObstacles = value;
}
constexpr ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_ShotQualityEvaluation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShotQualityEvaluation;
}
constexpr ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_ShotQualityEvaluation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShotQualityEvaluation;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_ShotQualityEvaluation(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShotQualityEvaluation = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>*& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_m_extraStateCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_extraStateCache;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>* const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_m_extraStateCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_extraStateCache;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_m_extraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_extraStateCache = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_m_CornerBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CornerBuffer;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_get_m_CornerBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CornerBuffer;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder::__cordl_internal_set_m_CornerBuffer(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CornerBuffer = value;
}
inline void Unity::Cinemachine::CinemachineDeoccluder::setStaticF_s_ColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "s_ColliderBuffer", ::Unity::Cinemachine::CinemachineDeoccluder*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Unity::Cinemachine::CinemachineDeoccluder::getStaticF_s_ColliderBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "s_ColliderBuffer", ::Unity::Cinemachine::CinemachineDeoccluder*>();
}
inline bool Unity::Cinemachine::CinemachineDeoccluder::IsTargetObscured(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline bool Unity::Cinemachine::CinemachineDeoccluder::CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline float_t Unity::Cinemachine::CinemachineDeoccluder::GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::DebugCollisionPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*  paths, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*  obstacles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"DebugCollisionPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, obstacles);
}
inline float_t Unity::Cinemachine::CinemachineDeoccluder::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, pos, rot);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineDeoccluder::GetAvoidanceResolutionTargetPoint(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, ::by_ref<::UnityEngine::Vector3>  resolutuionTargetPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetAvoidanceResolutionTargetPoint", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam, state, resolutuionTargetPoint);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDeoccluder::PreserveLineOfSight(::by_ref<::Unity::Cinemachine::CameraState>  state, ::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>  extra, ::UnityEngine::Vector3  lookAtPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"PreserveLineOfSight", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, state, extra, lookAtPoint);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDeoccluder::PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos, int32_t  layerMask, ::by_ref<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"PullCameraInFrontOfNearestObstacle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraPos, lookAtPos, layerMask, hitInfo);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDeoccluder::PushCameraBack(::UnityEngine::Vector3  currentPos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::UnityEngine::Vector3  lookAtPos, ::UnityEngine::Plane  startPlane, float_t  targetDistance, int32_t  iterations, ::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>  extra)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"PushCameraBack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, currentPos, pushDir, obstacle, lookAtPos, startPlane, targetDistance, iterations, extra);
}
inline bool Unity::Cinemachine::CinemachineDeoccluder::GetWalkingDirection(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::by_ref<::UnityEngine::Vector3>  outDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetWalkingDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos, pushDir, obstacle, outDir);
}
inline float_t Unity::Cinemachine::CinemachineDeoccluder::GetPushBackDistance(::UnityEngine::Ray  ray, ::UnityEngine::Plane  startPlane, float_t  targetDistance, ::UnityEngine::Vector3  lookAtPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"GetPushBackDistance", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, ray, startPlane, targetDistance, lookAtPos);
}
inline float_t Unity::Cinemachine::CinemachineDeoccluder::ClampRayToBounds(::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"ClampRayToBounds", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ray, distance, bounds);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineDeoccluder::RespectCameraRadius(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"RespectCameraRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraPos, lookAtPos);
}
inline bool Unity::Cinemachine::CinemachineDeoccluder::IsTargetObscured(::Unity::Cinemachine::CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void Unity::Cinemachine::CinemachineDeoccluder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineDeoccluder* Unity::Cinemachine::CinemachineDeoccluder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDeoccluder*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr  Unity::Cinemachine::CinemachineDeoccluder::operator ::Unity::Cinemachine::IShotQualityEvaluator*() noexcept {
return static_cast<::Unity::Cinemachine::IShotQualityEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr ::Unity::Cinemachine::IShotQualityEvaluator* Unity::Cinemachine::CinemachineDeoccluder::i___Unity__Cinemachine__IShotQualityEvaluator() noexcept {
return static_cast<::Unity::Cinemachine::IShotQualityEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDeoccluder::CinemachineDeoccluder()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState.AddPointToDebugPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::*)(::UnityEngine::Vector3, ::UnityEngine::Collider*)>(&::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::AddPointToDebugPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae9001c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"AddPointToDebugPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState.ApplyDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::*)(float_t, float_t)>(&::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::ApplyDistanceSmoothing)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae8efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"ApplyDistanceSmoothing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState.UpdateDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::*)(float_t)>(&::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::UpdateDistanceSmoothing)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae8ef58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"UpdateDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState.ResetDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::*)(float_t)>(&::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::ResetDistanceSmoothing)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xae8eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"ResetDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae91fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousDisplacement = value;
}
constexpr bool& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_TargetObscured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetObscured;
}
constexpr bool const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_TargetObscured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetObscured;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_TargetObscured(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetObscured = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_OcclusionStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionStartTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_OcclusionStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionStartTime;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_OcclusionStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionStartTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_DebugResolutionPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugResolutionPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_DebugResolutionPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugResolutionPath;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_DebugResolutionPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugResolutionPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_OccludingObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OccludingObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_OccludingObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OccludingObjects;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_OccludingObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OccludingObjects = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousCameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousCameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraOffset;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_PreviousCameraOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousCameraOffset = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_PreviousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousCameraPosition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousDampTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDampTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_PreviousDampTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDampTime;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_PreviousDampTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousDampTime = value;
}
constexpr bool& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_StateIsValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateIsValid;
}
constexpr bool const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_StateIsValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateIsValid;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_StateIsValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateIsValid = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_m_SmoothedDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_m_SmoothedDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedDistance;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_m_SmoothedDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothedDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_m_SmoothedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_get_m_SmoothedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedTime;
}
constexpr void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::__cordl_internal_set_m_SmoothedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothedTime = value;
}
inline void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::AddPointToDebugPath(::UnityEngine::Vector3  p, ::UnityEngine::Collider*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"AddPointToDebugPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, c);
}
inline float_t Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::ApplyDistanceSmoothing(float_t  distance, float_t  smoothingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"ApplyDistanceSmoothing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance, smoothingTime);
}
inline void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::UpdateDistanceSmoothing(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"UpdateDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::ResetDistanceSmoothing(float_t  smoothingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {"ResetDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothingTime);
}
inline void Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState* Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState::CinemachineDeoccluder_VcamExtraState()   {
}
