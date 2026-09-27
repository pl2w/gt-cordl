#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/FollowPreset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__FollowReferenceAxis_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__FollowPreset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.get_palmFacingUserDotThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::get_palmFacingUserDotThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44485c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"get_palmFacingUserDotThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.get_palmFacingUpDotThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::get_palmFacingUpDotThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb444864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"get_palmFacingUpDotThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.get_snapToGazeDotThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::get_snapToGazeDotThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44486c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"get_snapToGazeDotThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.ApplyPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::ApplyPreset)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb444874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"ApplyPreset", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.ComputeDotProductThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::ComputeDotProductThresholds)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb444a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"ComputeDotProductThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.AngleToDot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::AngleToDot)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb444a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"AngleToDot", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.GetReferenceAxisForTrackingAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)(::UnityEngine::Transform*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::GetReferenceAxisForTrackingAnchor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb444a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"GetReferenceAxisForTrackingAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset.GetLocalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::GetLocalAxis)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb444aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"GetLocalAxis", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb444c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_rightHandLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_rightHandLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandLocalPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_rightHandLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_leftHandLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_leftHandLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandLocalPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_leftHandLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_rightHandLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandLocalRotation;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_rightHandLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandLocalRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_rightHandLocalRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_leftHandLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandLocalRotation;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_leftHandLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandLocalRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_leftHandLocalRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandLocalRotation = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_palmReferenceAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmReferenceAxis;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_palmReferenceAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmReferenceAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_palmReferenceAxis(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowReferenceAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___palmReferenceAxis = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_invertAxisForRightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertAxisForRightHand;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_invertAxisForRightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertAxisForRightHand;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_invertAxisForRightHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertAxisForRightHand = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_requirePalmFacingUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requirePalmFacingUser;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_requirePalmFacingUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requirePalmFacingUser;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_requirePalmFacingUser(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requirePalmFacingUser = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_palmFacingUserDegreeAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingUserDegreeAngleThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_palmFacingUserDegreeAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingUserDegreeAngleThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_palmFacingUserDegreeAngleThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___palmFacingUserDegreeAngleThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_m_PalmFacingUserDotThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PalmFacingUserDotThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_m_PalmFacingUserDotThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PalmFacingUserDotThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_m_PalmFacingUserDotThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PalmFacingUserDotThreshold = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_requirePalmFacingUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requirePalmFacingUp;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_requirePalmFacingUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requirePalmFacingUp;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_requirePalmFacingUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requirePalmFacingUp = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_palmFacingUpDegreeAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingUpDegreeAngleThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_palmFacingUpDegreeAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___palmFacingUpDegreeAngleThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_palmFacingUpDegreeAngleThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___palmFacingUpDegreeAngleThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_m_PalmFacingUpDotThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PalmFacingUpDotThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_m_PalmFacingUpDotThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PalmFacingUpDotThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_m_PalmFacingUpDotThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PalmFacingUpDotThreshold = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_snapToGaze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapToGaze;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_snapToGaze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapToGaze;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_snapToGaze(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapToGaze = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_snapToGazeAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapToGazeAngleThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_snapToGazeAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapToGazeAngleThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_snapToGazeAngleThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapToGazeAngleThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_m_SnapToGazeDotThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToGazeDotThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_m_SnapToGazeDotThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToGazeDotThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_m_SnapToGazeDotThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapToGazeDotThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_hideDelaySeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideDelaySeconds;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_hideDelaySeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideDelaySeconds;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_hideDelaySeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideDelaySeconds = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_allowSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowSmoothing;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_allowSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowSmoothing;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_allowSmoothing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowSmoothing = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_followLowerSmoothingValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followLowerSmoothingValue;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_followLowerSmoothingValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followLowerSmoothingValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_followLowerSmoothingValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followLowerSmoothingValue = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_followUpperSmoothingValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followUpperSmoothingValue;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_get_followUpperSmoothingValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followUpperSmoothingValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::__cordl_internal_set_followUpperSmoothingValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followUpperSmoothingValue = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::get_palmFacingUserDotThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"get_palmFacingUserDotThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::get_palmFacingUpDotThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"get_palmFacingUpDotThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::get_snapToGazeDotThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"get_snapToGazeDotThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::ApplyPreset(::UnityEngine::Transform*  leftTrackingOffset, ::UnityEngine::Transform*  rightTrackingOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"ApplyPreset", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftTrackingOffset, rightTrackingOffset);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::ComputeDotProductThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"ComputeDotProductThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::AngleToDot(float_t  angleDeg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"AngleToDot", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angleDeg);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::GetReferenceAxisForTrackingAnchor(::UnityEngine::Transform*  trackingRoot, bool  isRightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"GetReferenceAxisForTrackingAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, trackingRoot, isRightHand);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::GetLocalAxis(bool  isRightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {"GetLocalAxis", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, isRightHand);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset* UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset::FollowPreset()   {
}
