#pragma once
// IWYU pragma private; include "UnityEngine/SoftJointLimitSpring.hpp"
#include "UnityEngine/zzzz__SoftJointLimitSpring_def.hpp"
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.set_spring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimitSpring::*)(float_t)>(&::UnityEngine::SoftJointLimitSpring::set_spring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(),
                        {"set_spring", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SoftJointLimitSpring::set_spring(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(),
                        {"set_spring", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Spring", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Damper", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SoftJointLimitSpring::SoftJointLimitSpring(float_t  m_Spring, float_t  m_Damper) noexcept  {
this->m_Spring = m_Spring;
this->m_Damper = m_Damper;
}
// Ctor Parameters []
constexpr ::UnityEngine::SoftJointLimitSpring::SoftJointLimitSpring()   {
}
