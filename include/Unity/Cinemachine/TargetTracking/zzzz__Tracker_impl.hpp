#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/Tracker.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.get_PreviousTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::TargetTracking::Tracker::*)()>(&::Unity::Cinemachine::TargetTracking::Tracker::get_PreviousTargetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf0151c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"get_PreviousTargetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.set_PreviousTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::Tracker::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::TargetTracking::Tracker::set_PreviousTargetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf01528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"set_PreviousTargetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.get_PreviousReferenceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::TargetTracking::Tracker::*)()>(&::Unity::Cinemachine::TargetTracking::Tracker::get_PreviousReferenceOrientation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf01534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"get_PreviousReferenceOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.set_PreviousReferenceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::Tracker::*)(::UnityEngine::Quaternion)>(&::Unity::Cinemachine::TargetTracking::Tracker::set_PreviousReferenceOrientation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf01540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"set_PreviousReferenceOrientation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.InitStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::Tracker::*)(::Unity::Cinemachine::CinemachineComponentBase*, float_t, ::Unity::Cinemachine::TargetTracking::BindingMode, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::TargetTracking::Tracker::InitStateInfo)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xaf0154c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"InitStateInfo", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::TargetTracking::BindingMode>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.GetReferenceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::TargetTracking::Tracker::*)(::Unity::Cinemachine::CinemachineComponentBase*, ::Unity::Cinemachine::TargetTracking::BindingMode, ::UnityEngine::Vector3, ::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::TargetTracking::Tracker::GetReferenceOrientation)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xaf016f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"GetReferenceOrientation", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::Unity::Cinemachine::TargetTracking::BindingMode>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.TrackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::Tracker::*)(::Unity::Cinemachine::CinemachineComponentBase*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Unity::Cinemachine::TargetTracking::TrackerSettings>, ::by_ref<::Unity::Cinemachine::CameraState>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::TargetTracking::Tracker::TrackTarget)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0xaf01a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"TrackTarget", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::TargetTracking::TrackerSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.GetOffsetForMinimumTargetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::TargetTracking::Tracker::*)(::Unity::Cinemachine::CinemachineComponentBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::TargetTracking::Tracker::GetOffsetForMinimumTargetDistance)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xaf02148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"GetOffsetForMinimumTargetDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::Tracker::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::TargetTracking::Tracker::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf024f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"OnTargetObjectWarped", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::Tracker.OnForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::Tracker::*)(::Unity::Cinemachine::CinemachineComponentBase*, ::Unity::Cinemachine::TargetTracking::BindingMode, ::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::TargetTracking::Tracker::OnForceCameraPosition)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0xaf02518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"OnForceCameraPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::Unity::Cinemachine::TargetTracking::BindingMode>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Unity::Cinemachine::TargetTracking::Tracker::get_PreviousTargetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"get_PreviousTargetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Unity::Cinemachine::TargetTracking::Tracker::set_PreviousTargetPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"set_PreviousTargetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::TargetTracking::Tracker::get_PreviousReferenceOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"get_PreviousReferenceOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void Unity::Cinemachine::TargetTracking::Tracker::set_PreviousReferenceOrientation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"set_PreviousReferenceOrientation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Cinemachine::TargetTracking::Tracker::InitStateInfo(::Unity::Cinemachine::CinemachineComponentBase*  component, float_t  deltaTime, ::Unity::Cinemachine::TargetTracking::BindingMode  bindingMode, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"InitStateInfo", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::TargetTracking::BindingMode>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, component, deltaTime, bindingMode, up);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::TargetTracking::Tracker::GetReferenceOrientation(::Unity::Cinemachine::CinemachineComponentBase*  component, ::Unity::Cinemachine::TargetTracking::BindingMode  bindingMode, ::UnityEngine::Vector3  worldUp, ::by_ref<::Unity::Cinemachine::CameraState>  cameraState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"GetReferenceOrientation", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::Unity::Cinemachine::TargetTracking::BindingMode>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, component, bindingMode, worldUp, cameraState);
}
inline void Unity::Cinemachine::TargetTracking::Tracker::TrackTarget(::Unity::Cinemachine::CinemachineComponentBase*  component, float_t  deltaTime, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  desiredCameraOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::TargetTracking::TrackerSettings>  settings, ::by_ref<::Unity::Cinemachine::CameraState>  cameraState, ::by_ref<::UnityEngine::Vector3>  outTargetPosition, ::by_ref<::UnityEngine::Quaternion>  outTargetOrient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"TrackTarget", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::TargetTracking::TrackerSettings>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, component, deltaTime, up, desiredCameraOffset, settings, cameraState, outTargetPosition, outTargetOrient);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::TargetTracking::Tracker::GetOffsetForMinimumTargetDistance(::Unity::Cinemachine::CinemachineComponentBase*  component, ::UnityEngine::Vector3  dampedTargetPos, ::UnityEngine::Vector3  cameraOffset, ::UnityEngine::Vector3  cameraFwd, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  actualTargetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"GetOffsetForMinimumTargetDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, component, dampedTargetPos, cameraOffset, cameraFwd, up, actualTargetPos);
}
inline void Unity::Cinemachine::TargetTracking::Tracker::OnTargetObjectWarped(::UnityEngine::Vector3  positionDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"OnTargetObjectWarped", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, positionDelta);
}
inline void Unity::Cinemachine::TargetTracking::Tracker::OnForceCameraPosition(::Unity::Cinemachine::CinemachineComponentBase*  component, ::Unity::Cinemachine::TargetTracking::BindingMode  bindingMode, ::by_ref<::Unity::Cinemachine::CameraState>  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::Tracker>(),
                        {"OnForceCameraPosition", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineComponentBase*>(), ::i2c::type_of<::Unity::Cinemachine::TargetTracking::BindingMode>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, component, bindingMode, newState);
}
// Ctor Parameters [CppParam { name: "_PreviousTargetPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PreviousReferenceOrientation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TargetOrientationOnAssign", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PreviousOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PreviousTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::TargetTracking::Tracker::Tracker(::UnityEngine::Vector3  _PreviousTargetPosition_k__BackingField, ::UnityEngine::Quaternion  _PreviousReferenceOrientation_k__BackingField, ::UnityEngine::Quaternion  m_TargetOrientationOnAssign, ::UnityEngine::Vector3  m_PreviousOffset, ::UnityW<::UnityEngine::Transform>  m_PreviousTarget) noexcept  {
this->_PreviousTargetPosition_k__BackingField = _PreviousTargetPosition_k__BackingField;
this->_PreviousReferenceOrientation_k__BackingField = _PreviousReferenceOrientation_k__BackingField;
this->m_TargetOrientationOnAssign = m_TargetOrientationOnAssign;
this->m_PreviousOffset = m_PreviousOffset;
this->m_PreviousTarget = m_PreviousTarget;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetTracking::Tracker::Tracker()   {
}
