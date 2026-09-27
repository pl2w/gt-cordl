#pragma once
// IWYU pragma private; include "GlobalNamespace/VRMapMiddle.hpp"
#include "GlobalNamespace/zzzz__VRMap_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRMapMiddle_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRMapMiddle.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapMiddle::*)()>(&::GlobalNamespace::VRMapMiddle::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5746f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapMiddle.MapMyFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapMiddle::*)(float_t)>(&::GlobalNamespace::VRMapMiddle::MapMyFinger)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57470c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapMiddle.LerpFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapMiddle::*)(float_t, bool)>(&::GlobalNamespace::VRMapMiddle::LerpFinger)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5747158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(),
                    {::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRMapMiddle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRMapMiddle::*)()>(&::GlobalNamespace::VRMapMiddle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57474e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputFeatureUsage& GlobalNamespace::VRMapMiddle::__cordl_internal_get_inputAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAxis;
}
constexpr ::UnityEngine::XR::InputFeatureUsage const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_inputAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputAxis;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_inputAxis(::UnityEngine::XR::InputFeatureUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputAxis = value;
}
constexpr float_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_gripValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripValue;
}
constexpr float_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_gripValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripValue;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_gripValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripValue = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapMiddle::__cordl_internal_get_fingerBone1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone1;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_fingerBone1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone1;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_fingerBone1(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone1 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapMiddle::__cordl_internal_get_fingerBone2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_fingerBone2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone2;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_fingerBone2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone2 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRMapMiddle::__cordl_internal_get_fingerBone3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone3;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_fingerBone3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerBone3;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_fingerBone3(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerBone3 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_closedAngle1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_closedAngle2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_closedAngle3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle3 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_startingAngle1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_startingAngle2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_startingAngle3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle3 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle1Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle1Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle1Quat;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_closedAngle1Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle1Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle2Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle2Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle2Quat;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_closedAngle2Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle2Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle3Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_closedAngle3Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedAngle3Quat;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_closedAngle3Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedAngle3Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle1Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle1Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle1Quat;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_startingAngle1Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle1Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle2Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle2Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle2Quat;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_startingAngle2Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle2Quat = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle3Quat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3Quat;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_startingAngle3Quat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingAngle3Quat;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_startingAngle3Quat(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingAngle3Quat = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapMiddle::__cordl_internal_get_angle1Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle1Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_angle1Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle1Table;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_angle1Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle1Table = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapMiddle::__cordl_internal_get_angle2Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle2Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_angle2Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle2Table;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_angle2Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle2Table = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::VRMapMiddle::__cordl_internal_get_angle3Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle3Table;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_angle3Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle3Table;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_angle3Table(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle3Table = value;
}
constexpr int32_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_lastAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle1;
}
constexpr int32_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_lastAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle1;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_lastAngle1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle1 = value;
}
constexpr int32_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_lastAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle2;
}
constexpr int32_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_lastAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle2;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_lastAngle2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle2 = value;
}
constexpr int32_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_lastAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle3;
}
constexpr int32_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_lastAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAngle3;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_lastAngle3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAngle3 = value;
}
constexpr float_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_currentAngle1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle1;
}
constexpr float_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_currentAngle1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle1;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_currentAngle1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle1 = value;
}
constexpr float_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_currentAngle2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle2;
}
constexpr float_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_currentAngle2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle2;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_currentAngle2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle2 = value;
}
constexpr float_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_currentAngle3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle3;
}
constexpr float_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_currentAngle3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle3;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_currentAngle3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle3 = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::VRMapMiddle::__cordl_internal_get_tempDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_tempDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempDevice;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_tempDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempDevice = value;
}
constexpr int32_t& GlobalNamespace::VRMapMiddle::__cordl_internal_get_myTempInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTempInt;
}
constexpr int32_t const& GlobalNamespace::VRMapMiddle::__cordl_internal_get_myTempInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myTempInt;
}
constexpr void GlobalNamespace::VRMapMiddle::__cordl_internal_set_myTempInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myTempInt = value;
}
inline void GlobalNamespace::VRMapMiddle::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRMapMiddle::MapMyFinger(float_t  lerpValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue);
}
inline void GlobalNamespace::VRMapMiddle::LerpFinger(float_t  lerpValue, bool  isOther)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lerpValue, isOther);
}
inline void GlobalNamespace::VRMapMiddle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRMapMiddle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRMapMiddle* GlobalNamespace::VRMapMiddle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRMapMiddle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRMapMiddle::VRMapMiddle()   {
}
