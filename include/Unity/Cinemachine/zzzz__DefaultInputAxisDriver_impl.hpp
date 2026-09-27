#pragma once
// IWYU pragma private; include "Unity/Cinemachine/DefaultInputAxisDriver.hpp"
#include "Unity/Cinemachine/zzzz__DefaultInputAxisDriver_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::DefaultInputAxisDriver.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::DefaultInputAxisDriver::*)()>(&::Unity::Cinemachine::DefaultInputAxisDriver::Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::DefaultInputAxisDriver.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::DefaultInputAxisDriver (*)()>(&::Unity::Cinemachine::DefaultInputAxisDriver::get_Default)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb8298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::DefaultInputAxisDriver.ProcessInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::DefaultInputAxisDriver::*)(::by_ref<::Unity::Cinemachine::InputAxis>, float_t, float_t)>(&::Unity::Cinemachine::DefaultInputAxisDriver::ProcessInput)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xaeb82ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"ProcessInput", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::InputAxis>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::DefaultInputAxisDriver.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::DefaultInputAxisDriver::*)(::by_ref<::Unity::Cinemachine::InputAxis>)>(&::Unity::Cinemachine::DefaultInputAxisDriver::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"Reset", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::InputAxis>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::DefaultInputAxisDriver::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Cinemachine::DefaultInputAxisDriver Unity::Cinemachine::DefaultInputAxisDriver::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::DefaultInputAxisDriver>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::DefaultInputAxisDriver::ProcessInput(::by_ref<::Unity::Cinemachine::InputAxis>  axis, float_t  inputValue, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"ProcessInput", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::InputAxis>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, axis, inputValue, deltaTime);
}
inline void Unity::Cinemachine::DefaultInputAxisDriver::Reset(::by_ref<::Unity::Cinemachine::InputAxis>  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::DefaultInputAxisDriver>(),
                        {"Reset", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::InputAxis>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, axis);
}
// Ctor Parameters [CppParam { name: "m_CurrentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AccelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DecelTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::DefaultInputAxisDriver::DefaultInputAxisDriver(float_t  m_CurrentSpeed, float_t  AccelTime, float_t  DecelTime) noexcept  {
this->m_CurrentSpeed = m_CurrentSpeed;
this->AccelTime = AccelTime;
this->DecelTime = DecelTime;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::DefaultInputAxisDriver::DefaultInputAxisDriver()   {
}
