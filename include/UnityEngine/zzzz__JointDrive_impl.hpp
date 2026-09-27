#pragma once
// IWYU pragma private; include "UnityEngine/JointDrive.hpp"
#include "UnityEngine/zzzz__JointDrive_def.hpp"
//  Writing Method size for method: ::UnityEngine::JointDrive.set_positionSpring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(float_t)>(&::UnityEngine::JointDrive::set_positionSpring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointDrive>(),
                        {"set_positionSpring", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_positionDamper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(float_t)>(&::UnityEngine::JointDrive::set_positionDamper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointDrive>(),
                        {"set_positionDamper", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_maximumForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(float_t)>(&::UnityEngine::JointDrive::set_maximumForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointDrive>(),
                        {"set_maximumForce", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::JointDrive::set_positionSpring(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointDrive>(),
                        {"set_positionSpring", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::JointDrive::set_positionDamper(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointDrive>(),
                        {"set_positionDamper", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::JointDrive::set_maximumForce(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointDrive>(),
                        {"set_maximumForce", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_PositionSpring", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PositionDamper", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MaximumForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UseAcceleration", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::JointDrive::JointDrive(float_t  m_PositionSpring, float_t  m_PositionDamper, float_t  m_MaximumForce, int32_t  m_UseAcceleration) noexcept  {
this->m_PositionSpring = m_PositionSpring;
this->m_PositionDamper = m_PositionDamper;
this->m_MaximumForce = m_MaximumForce;
this->m_UseAcceleration = m_UseAcceleration;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointDrive::JointDrive()   {
}
