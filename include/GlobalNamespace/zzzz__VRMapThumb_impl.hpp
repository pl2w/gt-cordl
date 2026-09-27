#pragma once
// IWYU pragma private; include "GlobalNamespace/VRMapThumb.hpp"
#include "GlobalNamespace/zzzz__VRMap_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRMapThumb_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRMapThumb.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapThumb::*)()>(&::GlobalNamespace::VRMapThumb::Initialize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57474e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapThumb*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapThumb*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapThumb.MapMyFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapThumb::*)(float_t)>(&::GlobalNamespace::VRMapThumb::MapMyFinger)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x57475dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapThumb*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapThumb*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapThumb.LerpFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapThumb::*)(float_t, bool)>(&::GlobalNamespace::VRMapThumb::LerpFinger)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5747778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapThumb*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapThumb*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapThumb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapThumb::*)()>(&::GlobalNamespace::VRMapThumb::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57479ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMapThumb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputFeatureUsage& GlobalNamespace::VRMapThumb::__cordl_internal_get_inputAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAxis;
}
constexpr ::UnityEngine::XR::InputFeatureUsage const& GlobalNamespace::VRMapThumb::__cordl_internal_get_inputAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAxis;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_inputAxis(::UnityEngine::XR::InputFeatureUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputAxis = value;
}
constexpr bool& GlobalNamespace::VRMapThumb::__cordl_internal_get_primaryButtonTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonTouch;
}
constexpr bool const& GlobalNamespace::VRMapThumb::__cordl_internal_get_primaryButtonTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonTouch;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_primaryButtonTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButtonTouch = value;
}
constexpr bool& GlobalNamespace::VRMapThumb::__cordl_internal_get_primaryButtonPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPress;
}
constexpr bool const& GlobalNamespace::VRMapThumb::__cordl_internal_get_primaryButtonPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButtonPress;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_primaryButtonPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButtonPress = value;
}
constexpr bool& GlobalNamespace::VRMapThumb::__cordl_internal_get_secondaryButtonTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonTouch;
}
constexpr bool const& GlobalNamespace::VRMapThumb::__cordl_internal_get_secondaryButtonTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonTouch;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_secondaryButtonTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryButtonTouch = value;
}
constexpr bool& GlobalNamespace::VRMapThumb::__cordl_internal_get_secondaryButtonPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonPress;
}
constexpr bool const& GlobalNamespace::VRMapThumb::__cordl_internal_get_secondaryButtonPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButtonPress;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_secondaryButtonPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryButtonPress = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapThumb::__cordl_internal_get_fingerBone1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone1;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapThumb::__cordl_internal_get_fingerBone1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone1;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_fingerBone1(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone1 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapThumb::__cordl_internal_get_fingerBone2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapThumb::__cordl_internal_get_fingerBone2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone2;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_fingerBone2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_closedAngle1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_closedAngle2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_startingAngle1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_startingAngle2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle2 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle1Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle1Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1Quat;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_closedAngle1Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle1Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle2Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapThumb::__cordl_internal_get_closedAngle2Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2Quat;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_closedAngle2Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle2Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle1Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle1Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1Quat;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_startingAngle1Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle1Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle2Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapThumb::__cordl_internal_get_startingAngle2Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2Quat;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_startingAngle2Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle2Quat = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapThumb::__cordl_internal_get_angle1Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle1Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapThumb::__cordl_internal_get_angle1Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle1Table;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_angle1Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle1Table = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapThumb::__cordl_internal_get_angle2Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle2Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapThumb::__cordl_internal_get_angle2Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle2Table;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_angle2Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle2Table = value;
}
constexpr float_t& GlobalNamespace::VRMapThumb::__cordl_internal_get_currentAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle1;
}
constexpr float_t const& GlobalNamespace::VRMapThumb::__cordl_internal_get_currentAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle1;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_currentAngle1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle1 = value;
}
constexpr float_t& GlobalNamespace::VRMapThumb::__cordl_internal_get_currentAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle2;
}
constexpr float_t const& GlobalNamespace::VRMapThumb::__cordl_internal_get_currentAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle2;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_currentAngle2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle2 = value;
}
constexpr int32_t& GlobalNamespace::VRMapThumb::__cordl_internal_get_lastAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle1;
}
constexpr int32_t const& GlobalNamespace::VRMapThumb::__cordl_internal_get_lastAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle1;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_lastAngle1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle1 = value;
}
constexpr int32_t& GlobalNamespace::VRMapThumb::__cordl_internal_get_lastAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle2;
}
constexpr int32_t const& GlobalNamespace::VRMapThumb::__cordl_internal_get_lastAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle2;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_lastAngle2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle2 = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::VRMapThumb::__cordl_internal_get_tempDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::VRMapThumb::__cordl_internal_get_tempDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempDevice;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_tempDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempDevice = value;
}
constexpr int32_t& GlobalNamespace::VRMapThumb::__cordl_internal_get_myTempInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTempInt;
}
constexpr int32_t const& GlobalNamespace::VRMapThumb::__cordl_internal_get_myTempInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTempInt;
}
constexpr void GlobalNamespace::VRMapThumb::__cordl_internal_set_myTempInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTempInt = value;
}
inline void GlobalNamespace::VRMapThumb::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapThumb*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRMapThumb::MapMyFinger(float_t  lerpValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapThumb*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue);
}
inline void GlobalNamespace::VRMapThumb::LerpFinger(float_t  lerpValue, bool  isOther)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapThumb*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue, isOther);
}
inline void GlobalNamespace::VRMapThumb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMapThumb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRMapThumb* GlobalNamespace::VRMapThumb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRMapThumb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRMapThumb::VRMapThumb()   {
}
