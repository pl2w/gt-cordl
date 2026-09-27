#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_MinMaxGradient.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_MinMaxGradient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_MinMaxGradient::*)(::UnityEngine::Color)>(&::GlobalNamespace::ParticleSystem_MinMaxGradient::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb670b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_MinMaxGradient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_MinMaxGradient::*)(::UnityEngine::Gradient*)>(&::GlobalNamespace::ParticleSystem_MinMaxGradient::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb670ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_MinMaxGradient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_MinMaxGradient::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::ParticleSystem_MinMaxGradient::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb670bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_MinMaxGradient.get_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ParticleSystem_MinMaxGradient::*)()>(&::GlobalNamespace::ParticleSystem_MinMaxGradient::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb66a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {"get_color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_MinMaxGradient.op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_MinMaxGradient (*)(::UnityEngine::Color)>(&::GlobalNamespace::ParticleSystem_MinMaxGradient::op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb66a39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_MinMaxGradient.op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_MinMaxGradient (*)(::UnityEngine::Gradient*)>(&::GlobalNamespace::ParticleSystem_MinMaxGradient::op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb670c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_MinMaxGradient::_ctor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void GlobalNamespace::ParticleSystem_MinMaxGradient::_ctor(::UnityEngine::Gradient*  gradient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gradient);
}
inline void GlobalNamespace::ParticleSystem_MinMaxGradient::_ctor(::UnityEngine::Color  min, ::UnityEngine::Color  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline ::UnityEngine::Color GlobalNamespace::ParticleSystem_MinMaxGradient::get_color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {"get_color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_MinMaxGradient GlobalNamespace::ParticleSystem_MinMaxGradient::op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_MinMaxGradient>(nullptr, ___internal_method, color);
}
inline ::GlobalNamespace::ParticleSystem_MinMaxGradient GlobalNamespace::ParticleSystem_MinMaxGradient::op_Implicit___GlobalNamespace__ParticleSystem_MinMaxGradient(::UnityEngine::Gradient*  gradient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_MinMaxGradient>(nullptr, ___internal_method, gradient);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_MinMaxGradient::ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::UnityEngine::Gradient*  m_GradientMin, ::UnityEngine::Gradient*  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept  {
this->m_Mode = m_Mode;
this->m_GradientMin = m_GradientMin;
this->m_GradientMax = m_GradientMax;
this->m_ColorMin = m_ColorMin;
this->m_ColorMax = m_ColorMax;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_MinMaxGradient::ParticleSystem_MinMaxGradient()   {
}
