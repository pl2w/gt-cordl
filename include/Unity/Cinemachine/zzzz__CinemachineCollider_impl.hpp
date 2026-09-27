#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCollider.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCollider_ResolutionStrategy_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCollider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCollider_ResolutionStrategy_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCollider_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__IShotQualityEvaluator_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.IsTargetObscured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineCollider::IsTargetObscured)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaec49cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.CameraWasDisplaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineCollider::CameraWasDisplaced)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaec4a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.GetCameraDisplacementDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineCollider::GetCameraDisplacementDistance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaec4a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider::*)()>(&::Unity::Cinemachine::CinemachineCollider::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaec4b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider::*)()>(&::Unity::Cinemachine::CinemachineCollider::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaec4b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.get_DebugPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* (::Unity::Cinemachine::CinemachineCollider::*)()>(&::Unity::Cinemachine::CinemachineCollider::get_DebugPaths)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xaec4bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"get_DebugPaths", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCollider::*)()>(&::Unity::Cinemachine::CinemachineCollider::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaec4e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineCollider::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x990;
  constexpr static std::size_t addrs = 0xaec4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.PreserveLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineCollider::*)(::by_ref<::Unity::Cinemachine::CameraState>, ::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>)>(&::Unity::Cinemachine::CinemachineCollider::PreserveLineOfSight)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xaec57f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"PreserveLineOfSight", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.PullCameraInFrontOfNearestObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineCollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Unity::Cinemachine::CinemachineCollider::PullCameraInFrontOfNearestObstacle)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xaec6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"PullCameraInFrontOfNearestObstacle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.PushCameraBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineCollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, float_t, int32_t, ::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>)>(&::Unity::Cinemachine::CinemachineCollider::PushCameraBack)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0xaec6f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"PushCameraBack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.GetWalkingDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineCollider::GetWalkingDirection)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0xaec7804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"GetWalkingDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.GetPushBackDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCollider::*)(::UnityEngine::Ray, ::UnityEngine::Plane, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCollider::GetPushBackDistance)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xaec7ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"GetPushBackDistance", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.ClampRayToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Ray, float_t, ::UnityEngine::Bounds)>(&::Unity::Cinemachine::CinemachineCollider::ClampRayToBounds)> {
  constexpr static std::size_t size = 0xc78;
  constexpr static std::size_t addrs = 0xaec8254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"ClampRayToBounds", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.RespectCameraRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineCollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCollider::RespectCameraRadius)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0xaec5d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"RespectCameraRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.CheckForTargetObstructions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCollider::*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CinemachineCollider::CheckForTargetObstructions)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xaec69a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"CheckForTargetObstructions", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.IsTargetOffscreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::CinemachineCollider::IsTargetOffscreen)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xaec66f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"IsTargetOffscreen", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider::*)(::Unity::Cinemachine::CinemachineDeoccluder*)>(&::Unity::Cinemachine::CinemachineCollider::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaec8ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineDeoccluder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider::*)()>(&::Unity::Cinemachine::CinemachineCollider::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaec8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_CollideAgainst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollideAgainst;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_CollideAgainst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollideAgainst;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_CollideAgainst(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollideAgainst = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_IgnoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_IgnoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreTag;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_IgnoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreTag = value;
}
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_TransparentLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransparentLayers;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_TransparentLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransparentLayers;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_TransparentLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransparentLayers = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_MinimumDistanceFromTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumDistanceFromTarget;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_MinimumDistanceFromTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumDistanceFromTarget;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_MinimumDistanceFromTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumDistanceFromTarget = value;
}
constexpr bool& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_AvoidObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AvoidObstacles;
}
constexpr bool const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_AvoidObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AvoidObstacles;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_AvoidObstacles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AvoidObstacles = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_DistanceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceLimit;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_DistanceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceLimit;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_DistanceLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DistanceLimit = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_MinimumOcclusionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumOcclusionTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_MinimumOcclusionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumOcclusionTime;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_MinimumOcclusionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumOcclusionTime = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_CameraRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraRadius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_CameraRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraRadius;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_CameraRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraRadius = value;
}
constexpr ::GlobalNamespace::CinemachineCollider_ResolutionStrategy& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_Strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Strategy;
}
constexpr ::GlobalNamespace::CinemachineCollider_ResolutionStrategy const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_Strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Strategy;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_Strategy(::GlobalNamespace::CinemachineCollider_ResolutionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Strategy = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_MaximumEffort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumEffort;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_MaximumEffort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumEffort;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_MaximumEffort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumEffort = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_SmoothingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothingTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_SmoothingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothingTime;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_SmoothingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothingTime = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Damping;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Damping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_DampingWhenOccluded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DampingWhenOccluded;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_DampingWhenOccluded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DampingWhenOccluded;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_DampingWhenOccluded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DampingWhenOccluded = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_OptimalTargetDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OptimalTargetDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_OptimalTargetDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OptimalTargetDistance;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_OptimalTargetDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OptimalTargetDistance = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>*& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_extraStateCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_extraStateCache;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>* const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_extraStateCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_extraStateCache;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_extraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_extraStateCache = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_CornerBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CornerBuffer;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& Unity::Cinemachine::CinemachineCollider::__cordl_internal_get_m_CornerBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CornerBuffer;
}
constexpr void Unity::Cinemachine::CinemachineCollider::__cordl_internal_set_m_CornerBuffer(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CornerBuffer = value;
}
inline void Unity::Cinemachine::CinemachineCollider::setStaticF_s_ColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "s_ColliderBuffer", ::Unity::Cinemachine::CinemachineCollider*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Unity::Cinemachine::CinemachineCollider::getStaticF_s_ColliderBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "s_ColliderBuffer", ::Unity::Cinemachine::CinemachineCollider*>();
}
inline bool Unity::Cinemachine::CinemachineCollider::IsTargetObscured(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"IsTargetObscured", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline bool Unity::Cinemachine::CinemachineCollider::CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline float_t Unity::Cinemachine::CinemachineCollider::GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CinemachineCollider::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCollider::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* Unity::Cinemachine::CinemachineCollider::get_DebugPaths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"get_DebugPaths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineCollider::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCollider::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineCollider::PreserveLineOfSight(::by_ref<::Unity::Cinemachine::CameraState>  state, ::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>  extra)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"PreserveLineOfSight", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, state, extra);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineCollider::PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos, int32_t  layerMask, ::by_ref<::UnityEngine::RaycastHit>  hitInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"PullCameraInFrontOfNearestObstacle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraPos, lookAtPos, layerMask, hitInfo);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineCollider::PushCameraBack(::UnityEngine::Vector3  currentPos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::UnityEngine::Vector3  lookAtPos, ::UnityEngine::Plane  startPlane, float_t  targetDistance, int32_t  iterations, ::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>  extra)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"PushCameraBack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, currentPos, pushDir, obstacle, lookAtPos, startPlane, targetDistance, iterations, extra);
}
inline bool Unity::Cinemachine::CinemachineCollider::GetWalkingDirection(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::by_ref<::UnityEngine::Vector3>  outDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"GetWalkingDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos, pushDir, obstacle, outDir);
}
inline float_t Unity::Cinemachine::CinemachineCollider::GetPushBackDistance(::UnityEngine::Ray  ray, ::UnityEngine::Plane  startPlane, float_t  targetDistance, ::UnityEngine::Vector3  lookAtPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"GetPushBackDistance", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, ray, startPlane, targetDistance, lookAtPos);
}
inline float_t Unity::Cinemachine::CinemachineCollider::ClampRayToBounds(::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"ClampRayToBounds", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ray, distance, bounds);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineCollider::RespectCameraRadius(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"RespectCameraRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraPos, lookAtPos);
}
inline bool Unity::Cinemachine::CinemachineCollider::CheckForTargetObstructions(::Unity::Cinemachine::CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"CheckForTargetObstructions", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline bool Unity::Cinemachine::CinemachineCollider::IsTargetOffscreen(::Unity::Cinemachine::CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"IsTargetOffscreen", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
inline void Unity::Cinemachine::CinemachineCollider::UpgradeToCm3(::Unity::Cinemachine::CinemachineDeoccluder*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineDeoccluder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCollider* Unity::Cinemachine::CinemachineCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCollider*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr  Unity::Cinemachine::CinemachineCollider::operator ::Unity::Cinemachine::IShotQualityEvaluator*() noexcept {
return static_cast<::Unity::Cinemachine::IShotQualityEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr ::Unity::Cinemachine::IShotQualityEvaluator* Unity::Cinemachine::CinemachineCollider::i___Unity__Cinemachine__IShotQualityEvaluator() noexcept {
return static_cast<::Unity::Cinemachine::IShotQualityEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCollider::CinemachineCollider()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider_VcamExtraState.AddPointToDebugPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider_VcamExtraState::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCollider_VcamExtraState::AddPointToDebugPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaec6f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"AddPointToDebugPath", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider_VcamExtraState.ApplyDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCollider_VcamExtraState::*)(float_t, float_t)>(&::Unity::Cinemachine::CinemachineCollider_VcamExtraState::ApplyDistanceSmoothing)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaec5c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"ApplyDistanceSmoothing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider_VcamExtraState.UpdateDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider_VcamExtraState::*)(float_t)>(&::Unity::Cinemachine::CinemachineCollider_VcamExtraState::UpdateDistanceSmoothing)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaec5be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"UpdateDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider_VcamExtraState.ResetDistanceSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider_VcamExtraState::*)(float_t)>(&::Unity::Cinemachine::CinemachineCollider_VcamExtraState::ResetDistanceSmoothing)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaec5d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"ResetDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCollider_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCollider_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineCollider_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec9098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_previousDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousDisplacement = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousCameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCameraOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousCameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCameraOffset;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_previousCameraOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousCameraOffset = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_previousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousCameraPosition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousDampTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousDampTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_previousDampTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousDampTime;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_previousDampTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousDampTime = value;
}
constexpr bool& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_targetObscured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObscured;
}
constexpr bool const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_targetObscured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetObscured;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_targetObscured(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetObscured = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_occlusionStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionStartTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_occlusionStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionStartTime;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_occlusionStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionStartTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_debugResolutionPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugResolutionPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_debugResolutionPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugResolutionPath;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_debugResolutionPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugResolutionPath = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_m_SmoothedDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_m_SmoothedDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedDistance;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_m_SmoothedDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothedDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_m_SmoothedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_get_m_SmoothedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothedTime;
}
constexpr void Unity::Cinemachine::CinemachineCollider_VcamExtraState::__cordl_internal_set_m_SmoothedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothedTime = value;
}
inline void Unity::Cinemachine::CinemachineCollider_VcamExtraState::AddPointToDebugPath(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"AddPointToDebugPath", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline float_t Unity::Cinemachine::CinemachineCollider_VcamExtraState::ApplyDistanceSmoothing(float_t  distance, float_t  smoothingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"ApplyDistanceSmoothing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance, smoothingTime);
}
inline void Unity::Cinemachine::CinemachineCollider_VcamExtraState::UpdateDistanceSmoothing(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"UpdateDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void Unity::Cinemachine::CinemachineCollider_VcamExtraState::ResetDistanceSmoothing(float_t  smoothingTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {"ResetDistanceSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothingTime);
}
inline void Unity::Cinemachine::CinemachineCollider_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCollider_VcamExtraState* Unity::Cinemachine::CinemachineCollider_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCollider_VcamExtraState::CinemachineCollider_VcamExtraState()   {
}
