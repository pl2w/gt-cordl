#pragma once
// IWYU pragma private; include "UnityEngine/SoftJointLimit.hpp"
#include "UnityEngine/zzzz__SoftJointLimit_def.hpp"
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.set_limit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimit::*)(float_t)>(&::UnityEngine::SoftJointLimit::set_limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SoftJointLimit>(),
                        {"set_limit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SoftJointLimit::set_limit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SoftJointLimit>(),
                        {"set_limit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Limit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SoftJointLimit::SoftJointLimit(float_t  m_Limit, float_t  m_Bounciness, float_t  m_ContactDistance) noexcept  {
this->m_Limit = m_Limit;
this->m_Bounciness = m_Bounciness;
this->m_ContactDistance = m_ContactDistance;
}
// Ctor Parameters []
constexpr ::UnityEngine::SoftJointLimit::SoftJointLimit()   {
}
