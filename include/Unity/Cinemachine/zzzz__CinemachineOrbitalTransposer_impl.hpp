#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalTransposer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTransposer_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalFollow_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_Heading_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineOrbitalTransposer_def.hpp"
#include "Unity/Cinemachine/zzzz__HeadingTracker_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)()>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::OnValidate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaed4a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.UpdateHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(float_t, ::UnityEngine::Vector3, ::by_ref<::Unity::Cinemachine::AxisState>)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::UpdateHeading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaed4b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpdateHeading", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.UpdateHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(float_t, ::UnityEngine::Vector3, ::by_ref<::Unity::Cinemachine::AxisState>, ::by_ref<::GlobalNamespace::AxisState_Recentering>, bool)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::UpdateHeading)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xaed4b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpdateHeading", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AxisState_Recentering>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)()>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::OnEnable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaed50bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)()>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed5214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.UpdateInputAxisProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)()>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::UpdateInputAxisProvider)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaed5130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpdateInputAxisProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaed521c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaed53ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xaed58f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.GetAxisClosestValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::GetAxisClosestValue)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xaed55e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"GetAxisClosestValue", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::MutateCameraState)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0xaed5ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.GetTargetCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::GetTargetCameraPosition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xaed6194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.GetTargetHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(float_t, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::GetTargetHeading)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xaed4cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"GetTargetHeading", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)(::Unity::Cinemachine::CinemachineOrbitalFollow*)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaed63a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer::*)()>(&::Unity::Cinemachine::CinemachineOrbitalTransposer::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xaed64a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_Heading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Heading;
}
constexpr ::GlobalNamespace::CinemachineOrbitalTransposer_Heading const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_Heading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Heading;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_Heading(::GlobalNamespace::CinemachineOrbitalTransposer_Heading  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Heading = value;
}
constexpr ::GlobalNamespace::AxisState_Recentering& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_RecenterToTargetHeading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecenterToTargetHeading;
}
constexpr ::GlobalNamespace::AxisState_Recentering const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_RecenterToTargetHeading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecenterToTargetHeading;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_RecenterToTargetHeading(::GlobalNamespace::AxisState_Recentering  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RecenterToTargetHeading = value;
}
constexpr ::Unity::Cinemachine::AxisState& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_XAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XAxis;
}
constexpr ::Unity::Cinemachine::AxisState const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_XAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XAxis;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_XAxis(::Unity::Cinemachine::AxisState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XAxis = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_TargetTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_TargetTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetTracker = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LegacyRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyRadius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LegacyRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyRadius;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_LegacyRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyRadius = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LegacyHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyHeightOffset;
}
constexpr float_t const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LegacyHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyHeightOffset;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_LegacyHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyHeightOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LegacyHeadingBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyHeadingBias;
}
constexpr float_t const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LegacyHeadingBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyHeadingBias;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_LegacyHeadingBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyHeadingBias = value;
}
constexpr bool& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_HeadingIsDriven()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HeadingIsDriven;
}
constexpr bool const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_HeadingIsDriven() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HeadingIsDriven;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_HeadingIsDriven(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HeadingIsDriven = value;
}
constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_HeadingUpdater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeadingUpdater;
}
constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_HeadingUpdater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeadingUpdater;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_HeadingUpdater(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeadingUpdater = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LastTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LastTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetPosition;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_LastTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTargetPosition = value;
}
constexpr ::Unity::Cinemachine::HeadingTracker*& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_mHeadingTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mHeadingTracker;
}
constexpr ::Unity::Cinemachine::HeadingTracker* const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_mHeadingTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mHeadingTracker;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_mHeadingTracker(::Unity::Cinemachine::HeadingTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mHeadingTracker = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_TargetRigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetRigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_TargetRigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetRigidBody;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_TargetRigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetRigidBody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_PreviousTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_PreviousTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTarget;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_PreviousTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousTarget = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LastCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LastCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_LastCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastCameraPosition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LastHeading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHeading;
}
constexpr float_t const& Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_get_m_LastHeading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHeading;
}
constexpr void Unity::Cinemachine::CinemachineOrbitalTransposer::__cordl_internal_set_m_LastHeading(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHeading = value;
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer::UpdateHeading(float_t  deltaTime, ::UnityEngine::Vector3  up, ::by_ref<::Unity::Cinemachine::AxisState>  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpdateHeading", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, deltaTime, up, axis);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer::UpdateHeading(float_t  deltaTime, ::UnityEngine::Vector3  up, ::by_ref<::Unity::Cinemachine::AxisState>  axis, ::by_ref<::GlobalNamespace::AxisState_Recentering>  recentering, bool  isLive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpdateHeading", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AxisState_Recentering>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, deltaTime, up, axis, recentering, isLive);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineOrbitalTransposer::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::UpdateInputAxisProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpdateInputAxisProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline bool Unity::Cinemachine::CinemachineOrbitalTransposer::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer::GetAxisClosestValue(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"GetAxisClosestValue", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, cameraPos, up);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineOrbitalTransposer::GetTargetCameraPosition(::UnityEngine::Vector3  worldUp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldUp);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer::GetTargetHeading(float_t  currentHeading, ::UnityEngine::Quaternion  targetOrientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"GetTargetHeading", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentHeading, targetOrientation);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::UpgradeToCm3(::Unity::Cinemachine::CinemachineOrbitalFollow*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineOrbitalFollow*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineOrbitalTransposer* Unity::Cinemachine::CinemachineOrbitalTransposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineOrbitalTransposer*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr  Unity::Cinemachine::CinemachineOrbitalTransposer::operator ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* Unity::Cinemachine::CinemachineOrbitalTransposer::i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer::CinemachineOrbitalTransposer()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer___c::*)()>(&::Unity::Cinemachine::CinemachineOrbitalTransposer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed69a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer___c.__ctor_b__31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer___c::*)(::Unity::Cinemachine::CinemachineOrbitalTransposer*, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer___c::__ctor_b__31_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaed69ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(),
                        {"<.ctor>b__31_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineOrbitalTransposer___c::setStaticF___9(::Unity::Cinemachine::CinemachineOrbitalTransposer___c*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*, "<>9", ::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(std::forward<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(value));
}
inline ::Unity::Cinemachine::CinemachineOrbitalTransposer___c* Unity::Cinemachine::CinemachineOrbitalTransposer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*, "<>9", ::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>();
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer___c::setStaticF___9__31_0(::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*, "<>9__31_0", ::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(std::forward<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* Unity::Cinemachine::CinemachineOrbitalTransposer___c::getStaticF___9__31_0()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*, "<>9__31_0", ::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>();
}
inline void Unity::Cinemachine::CinemachineOrbitalTransposer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer___c::__ctor_b__31_0(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>(),
                        {"<.ctor>b__31_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineOrbitalTransposer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, orbital, deltaTime, up);
}
inline ::Unity::Cinemachine::CinemachineOrbitalTransposer___c* Unity::Cinemachine::CinemachineOrbitalTransposer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineOrbitalTransposer___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer___c::CinemachineOrbitalTransposer___c()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaed66b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::*)(::Unity::Cinemachine::CinemachineOrbitalTransposer*, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaed6844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::*)(::Unity::Cinemachine::CinemachineOrbitalTransposer*, float_t, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaed6858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaed6914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::Invoke(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, orbital, deltaTime, up);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::BeginInvoke(::Unity::Cinemachine::CinemachineOrbitalTransposer*  orbital, float_t  deltaTime, ::UnityEngine::Vector3  up, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, orbital, deltaTime, up, callback, object);
}
inline float_t Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate::CinemachineOrbitalTransposer_UpdateHeadingDelegate()   {
}
