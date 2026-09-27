#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/HandControlledCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__HandControlledCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__HandControlledCosmetic_RotationControl_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__HandControlledSettingsSO_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5d98830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.SetControlIndicatorPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::SetControlIndicatorPoints)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d98994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"SetControlIndicatorPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.GetRelativeHandPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::GetRelativeHandPosition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d98b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"GetRelativeHandPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.StartControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)(bool, float_t)>(&::GorillaTag::Cosmetics::HandControlledCosmetic::StartControl)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5d98b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"StartControl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.StopControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::StopControl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d98ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"StopControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d98e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d98e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.ReverseClampDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::HandControlledCosmetic::*)(float_t, float_t, float_t)>(&::GorillaTag::Cosmetics::HandControlledCosmetic::ReverseClampDegrees)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d98ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"ReverseClampDegrees", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d98f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::HandControlledCosmetic::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d98f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::Tick)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x5d98f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledCosmetic::*)()>(&::GorillaTag::Cosmetics::HandControlledCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d99778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_activeSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSettings;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_activeSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSettings;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_activeSettings(::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSettings = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_inactiveSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveSettings;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_inactiveSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveSettings;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_inactiveSettings(::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactiveSettings = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_handPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_handPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPositionOffset;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_handPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPositionOffset = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_rightHandRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_rightHandRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandRotation;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_rightHandRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandRotation = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_leftHandRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_leftHandRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandRotation;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_leftHandRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandRotation = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_handRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_handRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRotationOffset;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_handRotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRotationOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::BezierCurve>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_controlIndicatorCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlIndicatorCurve;
}
constexpr ::UnityW<::GlobalNamespace::BezierCurve> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_controlIndicatorCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlIndicatorCurve;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_controlIndicatorCurve(::UnityW<::GlobalNamespace::BezierCurve>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlIndicatorCurve = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_debugRelativePositionTransform1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRelativePositionTransform1;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_debugRelativePositionTransform1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRelativePositionTransform1;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_debugRelativePositionTransform1(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRelativePositionTransform1 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_debugRelativePositionTransform2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRelativePositionTransform2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_debugRelativePositionTransform2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRelativePositionTransform2;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_debugRelativePositionTransform2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRelativePositionTransform2 = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_controllingHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllingHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_controllingHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllingHand;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_controllingHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllingHand = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_startHandRelativePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHandRelativePosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_startHandRelativePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHandRelativePosition;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_startHandRelativePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startHandRelativePosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_lowAngleLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowAngleLimits;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_lowAngleLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowAngleLimits;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_lowAngleLimits(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowAngleLimits = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_highAngleLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highAngleLimits;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_highAngleLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highAngleLimits;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_highAngleLimits(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highAngleLimits = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_localEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localEuler;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_localEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localEuler;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_localEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localEuler = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_startHandInverseRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHandInverseRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_startHandInverseRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHandInverseRotation;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_startHandInverseRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startHandInverseRotation = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_initialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_initialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRotation = value;
}
constexpr bool& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr bool& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::HandControlledCosmetic::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::SetControlIndicatorPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"SetControlIndicatorPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Cosmetics::HandControlledCosmetic::GetRelativeHandPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"GetRelativeHandPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::StartControl(bool  leftHand, float_t  flexValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"StartControl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, flexValue);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::StopControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"StopControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaTag::Cosmetics::HandControlledCosmetic::ReverseClampDegrees(float_t  value, float_t  low, float_t  high)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"ReverseClampDegrees", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, low, high);
}
inline bool GorillaTag::Cosmetics::HandControlledCosmetic::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::HandControlledCosmetic* GorillaTag::Cosmetics::HandControlledCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::HandControlledCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::HandControlledCosmetic::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::HandControlledCosmetic::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::HandControlledCosmetic::HandControlledCosmetic()   {
}
