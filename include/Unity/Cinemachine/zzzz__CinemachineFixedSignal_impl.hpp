#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFixedSignal.hpp"
#include "Unity/Cinemachine/zzzz__SignalSourceAsset_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFixedSignal_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFixedSignal.get_SignalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFixedSignal::*)()>(&::Unity::Cinemachine::CinemachineFixedSignal::get_SignalDuration)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaee20d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFixedSignal.AxisDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFixedSignal::*)(::UnityEngine::AnimationCurve*)>(&::Unity::Cinemachine::CinemachineFixedSignal::AxisDuration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaee2120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                        {"AxisDuration", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFixedSignal.GetSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFixedSignal::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::CinemachineFixedSignal::GetSignal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaee21e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFixedSignal.AxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFixedSignal::*)(::UnityEngine::AnimationCurve*, float_t)>(&::Unity::Cinemachine::CinemachineFixedSignal::AxisValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaee2288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                        {"AxisValue", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFixedSignal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFixedSignal::*)()>(&::Unity::Cinemachine::CinemachineFixedSignal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee22d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_get_XCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_get_XCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XCurve;
}
constexpr void Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_set_XCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_get_YCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_get_YCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YCurve;
}
constexpr void Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_set_YCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_get_ZCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_get_ZCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZCurve;
}
constexpr void Unity::Cinemachine::CinemachineFixedSignal::__cordl_internal_set_ZCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZCurve = value;
}
inline float_t Unity::Cinemachine::CinemachineFixedSignal::get_SignalDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineFixedSignal::AxisDuration(::UnityEngine::AnimationCurve*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                        {"AxisDuration", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
inline void Unity::Cinemachine::CinemachineFixedSignal::GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceSignalStart, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineFixedSignal::AxisValue(::UnityEngine::AnimationCurve*  axis, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                        {"AxisValue", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis, time);
}
inline void Unity::Cinemachine::CinemachineFixedSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFixedSignal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineFixedSignal* Unity::Cinemachine::CinemachineFixedSignal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFixedSignal*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFixedSignal::CinemachineFixedSignal()   {
}
