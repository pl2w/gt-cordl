#pragma once
// IWYU pragma private; include "UnityEngine/JointLimits.hpp"
#include "UnityEngine/zzzz__JointLimits_def.hpp"
//  Writing Method size for method: ::UnityEngine::JointLimits.get_min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointLimits::*)()>(&::UnityEngine::JointLimits::get_min)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointLimits>(),
                        {"get_min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointLimits.get_max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointLimits::*)()>(&::UnityEngine::JointLimits::get_max)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67f29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointLimits>(),
                        {"get_max", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::JointLimits::get_min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointLimits>(),
                        {"get_min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::JointLimits::get_max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::JointLimits>(),
                        {"get_max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Min", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Max", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BounceMinVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minBounce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxBounce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::JointLimits::JointLimits(float_t  m_Min, float_t  m_Max, float_t  m_Bounciness, float_t  m_BounceMinVelocity, float_t  m_ContactDistance, float_t  minBounce, float_t  maxBounce) noexcept  {
this->m_Min = m_Min;
this->m_Max = m_Max;
this->m_Bounciness = m_Bounciness;
this->m_BounceMinVelocity = m_BounceMinVelocity;
this->m_ContactDistance = m_ContactDistance;
this->minBounce = minBounce;
this->maxBounce = maxBounce;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointLimits::JointLimits()   {
}
