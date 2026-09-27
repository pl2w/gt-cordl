#pragma once
// IWYU pragma private; include "GlobalNamespace/VRMapIndex.hpp"
#include "GlobalNamespace/zzzz__VRMap_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRMapIndex_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRMapIndex.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapIndex::*)()>(&::GlobalNamespace::VRMapIndex::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x57469a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapIndex*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapIndex*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapIndex.MapMyFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapIndex::*)(float_t)>(&::GlobalNamespace::VRMapIndex::MapMyFinger)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5746b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapIndex*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapIndex*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapIndex.LerpFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapIndex::*)(float_t, bool)>(&::GlobalNamespace::VRMapIndex::LerpFinger)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5746bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapIndex*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapIndex*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapIndex::*)()>(&::GlobalNamespace::VRMapIndex::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5746f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMapIndex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputFeatureUsage& GlobalNamespace::VRMapIndex::__cordl_internal_get_inputAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAxis;
}
constexpr ::UnityEngine::XR::InputFeatureUsage const& GlobalNamespace::VRMapIndex::__cordl_internal_get_inputAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAxis;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_inputAxis(::UnityEngine::XR::InputFeatureUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputAxis = value;
}
constexpr float_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_triggerTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTouch;
}
constexpr float_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_triggerTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTouch;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_triggerTouch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerTouch = value;
}
constexpr float_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_triggerValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerValue;
}
constexpr float_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_triggerValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerValue;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_triggerValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerValue = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapIndex::__cordl_internal_get_fingerBone1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone1;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapIndex::__cordl_internal_get_fingerBone1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone1;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_fingerBone1(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone1 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapIndex::__cordl_internal_get_fingerBone2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapIndex::__cordl_internal_get_fingerBone2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone2;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_fingerBone2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone2 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapIndex::__cordl_internal_get_fingerBone3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone3;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapIndex::__cordl_internal_get_fingerBone3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone3;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_fingerBone3(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone3 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_closedAngle1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_closedAngle2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_closedAngle3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle3 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_startingAngle1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_startingAngle2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_startingAngle3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle3 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle1Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle1Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1Quat;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_closedAngle1Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle1Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle2Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle2Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2Quat;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_closedAngle2Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle2Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle3Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapIndex::__cordl_internal_get_closedAngle3Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3Quat;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_closedAngle3Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle3Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle1Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle1Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1Quat;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_startingAngle1Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle1Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle2Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle2Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2Quat;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_startingAngle2Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle2Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle3Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapIndex::__cordl_internal_get_startingAngle3Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3Quat;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_startingAngle3Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle3Quat = value;
}
constexpr int32_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_lastAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle1;
}
constexpr int32_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_lastAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle1;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_lastAngle1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle1 = value;
}
constexpr int32_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_lastAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle2;
}
constexpr int32_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_lastAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle2;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_lastAngle2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle2 = value;
}
constexpr int32_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_lastAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle3;
}
constexpr int32_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_lastAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle3;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_lastAngle3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle3 = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::VRMapIndex::__cordl_internal_get_myInputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myInputDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::VRMapIndex::__cordl_internal_get_myInputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myInputDevice;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_myInputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myInputDevice = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapIndex::__cordl_internal_get_angle1Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle1Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapIndex::__cordl_internal_get_angle1Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle1Table;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_angle1Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle1Table = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapIndex::__cordl_internal_get_angle2Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle2Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapIndex::__cordl_internal_get_angle2Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle2Table;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_angle2Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle2Table = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapIndex::__cordl_internal_get_angle3Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle3Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapIndex::__cordl_internal_get_angle3Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle3Table;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_angle3Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle3Table = value;
}
constexpr float_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_currentAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle1;
}
constexpr float_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_currentAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle1;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_currentAngle1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle1 = value;
}
constexpr float_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_currentAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle2;
}
constexpr float_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_currentAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle2;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_currentAngle2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle2 = value;
}
constexpr float_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_currentAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle3;
}
constexpr float_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_currentAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle3;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_currentAngle3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle3 = value;
}
constexpr int32_t& GlobalNamespace::VRMapIndex::__cordl_internal_get_myTempInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTempInt;
}
constexpr int32_t const& GlobalNamespace::VRMapIndex::__cordl_internal_get_myTempInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTempInt;
}
constexpr void GlobalNamespace::VRMapIndex::__cordl_internal_set_myTempInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTempInt = value;
}
inline void GlobalNamespace::VRMapIndex::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapIndex*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRMapIndex::MapMyFinger(float_t  lerpValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapIndex*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue);
}
inline void GlobalNamespace::VRMapIndex::LerpFinger(float_t  lerpValue, bool  isOther)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapIndex*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue, isOther);
}
inline void GlobalNamespace::VRMapIndex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMapIndex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRMapIndex* GlobalNamespace::VRMapIndex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRMapIndex*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRMapIndex::VRMapIndex()   {
}
