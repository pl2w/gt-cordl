#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputAxisDriver.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineInputAxisDriver_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisBase_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisDriver.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineInputAxisDriver::*)()>(&::Unity::Cinemachine::CinemachineInputAxisDriver::Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaed3534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineInputAxisDriver::*)(float_t, ::by_ref<::Unity::Cinemachine::AxisBase>)>(&::Unity::Cinemachine::CinemachineInputAxisDriver::Update)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xaed3548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisBase>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineInputAxisDriver::*)(float_t, ::by_ref<::Unity::Cinemachine::AxisState>)>(&::Unity::Cinemachine::CinemachineInputAxisDriver::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaed3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputAxisDriver.ClampValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineInputAxisDriver::*)(::by_ref<::Unity::Cinemachine::AxisBase>, float_t)>(&::Unity::Cinemachine::CinemachineInputAxisDriver::ClampValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaed37c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"ClampValue", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisBase>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineInputAxisDriver::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineInputAxisDriver::Update(float_t  deltaTime, ::by_ref<::Unity::Cinemachine::AxisBase>  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisBase>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime, axis);
}
inline bool Unity::Cinemachine::CinemachineInputAxisDriver::Update(float_t  deltaTime, ::by_ref<::Unity::Cinemachine::AxisState>  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"Update", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime, axis);
}
inline float_t Unity::Cinemachine::CinemachineInputAxisDriver::ClampValue(::by_ref<::Unity::Cinemachine::AxisBase>  axis, float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputAxisDriver>(),
                        {"ClampValue", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::AxisBase>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, axis, v);
}
// Ctor Parameters [CppParam { name: "multiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "accelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "decelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mCurrentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::CinemachineInputAxisDriver::CinemachineInputAxisDriver(float_t  multiplier, float_t  accelTime, float_t  decelTime, ::StringW  name, float_t  inputValue, float_t  mCurrentSpeed) noexcept  {
this->multiplier = multiplier;
this->accelTime = accelTime;
this->decelTime = decelTime;
this->name = name;
this->inputValue = inputValue;
this->mCurrentSpeed = mCurrentSpeed;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputAxisDriver::CinemachineInputAxisDriver()   {
}
