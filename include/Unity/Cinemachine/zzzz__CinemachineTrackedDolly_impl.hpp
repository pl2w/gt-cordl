#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrackedDolly.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_PositionUnits_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_AutoDolly_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_CameraUpMode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_AutoDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTrackedDolly_CameraUpMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTrackedDolly::*)()>(&::Unity::Cinemachine::CinemachineTrackedDolly::get_IsValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaeda2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineTrackedDolly::*)()>(&::Unity::Cinemachine::CinemachineTrackedDolly::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeda368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineTrackedDolly::*)()>(&::Unity::Cinemachine::CinemachineTrackedDolly::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaeda370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTrackedDolly::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineTrackedDolly::MutateCameraState)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0xaeda430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.GetCameraOrientationAtPathPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineTrackedDolly::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineTrackedDolly::GetCameraOrientationAtPathPoint)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xaedad0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {"GetCameraOrientationAtPathPoint", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.get_AngularDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineTrackedDolly::*)()>(&::Unity::Cinemachine::CinemachineTrackedDolly::get_AngularDamping)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaeda3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {"get_AngularDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTrackedDolly::*)(::Unity::Cinemachine::CinemachineSplineDolly*)>(&::Unity::Cinemachine::CinemachineTrackedDolly::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaedaf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineSplineDolly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTrackedDolly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTrackedDolly::*)()>(&::Unity::Cinemachine::CinemachineTrackedDolly::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaedb094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase>& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase> const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_Path(::UnityW<::Unity::Cinemachine::CinemachinePathBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Path = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PathPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathPosition;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PathPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathPosition;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PathPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PathPosition = value;
}
constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PositionUnits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionUnits;
}
constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PositionUnits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionUnits;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PositionUnits(::GlobalNamespace::CinemachinePathBase_PositionUnits  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionUnits = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PathOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PathOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathOffset;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PathOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PathOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_XDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_XDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XDamping;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_XDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_YDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_YDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YDamping;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_YDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_ZDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_ZDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZDamping;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_ZDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZDamping = value;
}
constexpr ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_CameraUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraUp;
}
constexpr ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_CameraUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraUp;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_CameraUp(::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraUp = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PitchDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PitchDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PitchDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PitchDamping;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PitchDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PitchDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_YawDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YawDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_YawDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YawDamping;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_YawDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YawDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_RollDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_RollDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollDamping;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_RollDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RollDamping = value;
}
constexpr ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_AutoDolly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoDolly;
}
constexpr ::GlobalNamespace::CinemachineTrackedDolly_AutoDolly const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_AutoDolly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoDolly;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_AutoDolly(::GlobalNamespace::CinemachineTrackedDolly_AutoDolly  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoDolly = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PreviousPathPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousPathPosition;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PreviousPathPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousPathPosition;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PreviousPathPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousPathPosition = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PreviousOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousOrientation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PreviousOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousOrientation;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PreviousOrientation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousOrientation = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PreviousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_get_m_PreviousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineTrackedDolly::__cordl_internal_set_m_PreviousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousCameraPosition = value;
}
inline bool Unity::Cinemachine::CinemachineTrackedDolly::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineTrackedDolly::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineTrackedDolly::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTrackedDolly::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineTrackedDolly::GetCameraOrientationAtPathPoint(::UnityEngine::Quaternion  pathOrientation, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {"GetCameraOrientationAtPathPoint", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, pathOrientation, up);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineTrackedDolly::get_AngularDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {"get_AngularDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTrackedDolly::UpgradeToCm3(::Unity::Cinemachine::CinemachineSplineDolly*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineSplineDolly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineTrackedDolly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTrackedDolly*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTrackedDolly* Unity::Cinemachine::CinemachineTrackedDolly::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTrackedDolly*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTrackedDolly::CinemachineTrackedDolly()   {
}
