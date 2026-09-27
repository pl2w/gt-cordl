#pragma once
// IWYU pragma private; include "UnityEngine/Animations/ConstraintSource.hpp"
#include "UnityEngine/Animations/zzzz__ConstraintSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::ConstraintSource.set_sourceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::ConstraintSource::*)(::UnityEngine::Transform*)>(&::UnityEngine::Animations::ConstraintSource::set_sourceTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb54e8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ConstraintSource>(),
                        {"set_sourceTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::ConstraintSource.set_weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::ConstraintSource::*)(float_t)>(&::UnityEngine::Animations::ConstraintSource::set_weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb54e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ConstraintSource>(),
                        {"set_weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::ConstraintSource::set_sourceTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ConstraintSource>(),
                        {"set_sourceTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Animations::ConstraintSource::set_weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ConstraintSource>(),
                        {"set_weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_SourceTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::ConstraintSource::ConstraintSource(::UnityW<::UnityEngine::Transform>  m_SourceTransform, float_t  m_Weight) noexcept  {
this->m_SourceTransform = m_SourceTransform;
this->m_Weight = m_Weight;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::ConstraintSource::ConstraintSource()   {
}
