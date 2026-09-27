#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDolly.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_DampingSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_RotationMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollCache_impl.hpp"
#include "Unity/Cinemachine/zzzz__SplineAutoDolly_impl.hpp"
#include "Unity/Cinemachine/zzzz__SplineSettings_impl.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_DampingSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_RotationMode_def.hpp"
#include "Unity/Cinemachine/zzzz__ISplineReferencer_def.hpp"
#include "Unity/Cinemachine/zzzz__SplineSettings_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.PerformLegacyUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::PerformLegacyUpgrade)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaea6018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"PerformLegacyUpgrade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.get_SplineSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::SplineSettings> (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::get_SplineSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_SplineSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.get_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::get_Spline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea60d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_Spline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.set_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)(::UnityEngine::Splines::SplineContainer*)>(&::Unity::Cinemachine::CinemachineSplineDolly::set_Spline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea60e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"set_Spline", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.get_CameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::get_CameraPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea60e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_CameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.set_CameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)(float_t)>(&::Unity::Cinemachine::CinemachineSplineDolly::set_CameraPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea60f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"set_CameraPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.get_PositionUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::PathIndexUnit (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::get_PositionUnits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea60f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_PositionUnits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.set_PositionUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)(::UnityEngine::Splines::PathIndexUnit)>(&::Unity::Cinemachine::CinemachineSplineDolly::set_PositionUnits)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"set_PositionUnits", {}, {::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::OnValidate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaea610c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaea61d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaea6260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaea6324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::get_IsValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaea6348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea63c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaea63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineSplineDolly::MutateCameraState)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0xaea6408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly.GetCameraRotationAtSplinePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineSplineDolly::*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::by_ref<bool>)>(&::Unity::Cinemachine::CinemachineSplineDolly::GetCameraRotationAtSplinePoint)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xaea6a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"GetCameraRotationAtSplinePoint", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDolly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDolly::*)()>(&::Unity::Cinemachine::CinemachineSplineDolly::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaea6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::SplineSettings& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_SplineSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineSettings;
}
constexpr ::Unity::Cinemachine::SplineSettings const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_SplineSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineSettings;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_SplineSettings(::Unity::Cinemachine::SplineSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplineSettings = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_SplineOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_SplineOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineOffset;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_SplineOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplineOffset = value;
}
constexpr ::GlobalNamespace::CinemachineSplineDolly_RotationMode& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_CameraRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRotation;
}
constexpr ::GlobalNamespace::CinemachineSplineDolly_RotationMode const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_CameraRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRotation;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_CameraRotation(::GlobalNamespace::CinemachineSplineDolly_RotationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraRotation = value;
}
constexpr ::GlobalNamespace::CinemachineSplineDolly_DampingSettings& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr ::GlobalNamespace::CinemachineSplineDolly_DampingSettings const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_Damping(::GlobalNamespace::CinemachineSplineDolly_DampingSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::Unity::Cinemachine::SplineAutoDolly& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_AutomaticDolly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutomaticDolly;
}
constexpr ::Unity::Cinemachine::SplineAutoDolly const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_AutomaticDolly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutomaticDolly;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_AutomaticDolly(::Unity::Cinemachine::SplineAutoDolly  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutomaticDolly = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_PreviousSplinePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousSplinePosition;
}
constexpr float_t const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_PreviousSplinePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousSplinePosition;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_PreviousSplinePosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousSplinePosition = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_PreviousRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_PreviousRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRotation;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_PreviousRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousRotation = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_PreviousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_PreviousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousPosition;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_PreviousPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousPosition = value;
}
constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_RollCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollCache;
}
constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_RollCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollCache;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_RollCache(::GlobalNamespace::CinemachineSplineRoll_RollCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RollCache = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_LegacyPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyPosition;
}
constexpr float_t const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_LegacyPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyPosition;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_LegacyPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyPosition = value;
}
constexpr ::UnityEngine::Splines::PathIndexUnit& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_LegacyUnits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyUnits;
}
constexpr ::UnityEngine::Splines::PathIndexUnit const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_LegacyUnits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyUnits;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_LegacyUnits(::UnityEngine::Splines::PathIndexUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyUnits = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_LegacySpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacySpline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_get_m_LegacySpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacySpline;
}
constexpr void Unity::Cinemachine::CinemachineSplineDolly::__cordl_internal_set_m_LegacySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacySpline = value;
}
inline void Unity::Cinemachine::CinemachineSplineDolly::PerformLegacyUpgrade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"PerformLegacyUpgrade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::by_ref<::Unity::Cinemachine::SplineSettings> Unity::Cinemachine::CinemachineSplineDolly::get_SplineSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_SplineSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::SplineSettings>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> Unity::Cinemachine::CinemachineSplineDolly::get_Spline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_Spline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::set_Spline(::UnityEngine::Splines::SplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"set_Spline", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::CinemachineSplineDolly::get_CameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_CameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::set_CameraPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"set_CameraPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Splines::PathIndexUnit Unity::Cinemachine::CinemachineSplineDolly::get_PositionUnits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"get_PositionUnits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::PathIndexUnit>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::set_PositionUnits(::UnityEngine::Splines::PathIndexUnit  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"set_PositionUnits", {}, {::i2c::type_of<::UnityEngine::Splines::PathIndexUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineSplineDolly::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineSplineDolly::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineSplineDolly::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineSplineDolly::GetCameraRotationAtSplinePoint(::UnityEngine::Quaternion  splineOrientation, ::UnityEngine::Vector3  up, ::by_ref<bool>  isDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {"GetCameraRotationAtSplinePoint", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, splineOrientation, up, isDefault);
}
inline void Unity::Cinemachine::CinemachineSplineDolly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDolly*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineSplineDolly* Unity::Cinemachine::CinemachineSplineDolly::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineSplineDolly*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ISplineReferencer"
constexpr  Unity::Cinemachine::CinemachineSplineDolly::operator ::Unity::Cinemachine::ISplineReferencer*() noexcept {
return static_cast<::Unity::Cinemachine::ISplineReferencer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ISplineReferencer"
constexpr ::Unity::Cinemachine::ISplineReferencer* Unity::Cinemachine::CinemachineSplineDolly::i___Unity__Cinemachine__ISplineReferencer() noexcept {
return static_cast<::Unity::Cinemachine::ISplineReferencer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineSplineDolly::CinemachineSplineDolly()   {
}
