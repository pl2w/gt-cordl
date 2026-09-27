#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_ColorBySpeedModule.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ColorBySpeedModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxGradientBlittable_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxGradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_ColorBySpeedModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_ColorBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(&::GlobalNamespace::ParticleSystem_ColorBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66e5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_ColorBySpeedModule.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_ColorBySpeedModule::*)(::GlobalNamespace::ParticleSystem_MinMaxGradient)>(&::GlobalNamespace::ParticleSystem_ColorBySpeedModule::set_color)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb671c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {"set_color", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_ColorBySpeedModule.set_colorBlittable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_ColorBySpeedModule::*)(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable)>(&::GlobalNamespace::ParticleSystem_ColorBySpeedModule::set_colorBlittable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb671c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {"set_colorBlittable", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_ColorBySpeedModule.set_colorBlittable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>)>(&::GlobalNamespace::ParticleSystem_ColorBySpeedModule::set_colorBlittable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb671cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {"set_colorBlittable_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_ColorBySpeedModule::_ctor(::UnityEngine::ParticleSystem*  particleSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline void GlobalNamespace::ParticleSystem_ColorBySpeedModule::set_color(::GlobalNamespace::ParticleSystem_MinMaxGradient  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {"set_color", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxGradient>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_ColorBySpeedModule::set_colorBlittable(::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {"set_colorBlittable", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ParticleSystem_ColorBySpeedModule::set_colorBlittable_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>  _unity_self, ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>(),
                        {"set_colorBlittable_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_ColorBySpeedModule>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_MinMaxGradientBlittable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_ColorBySpeedModule::ParticleSystem_ColorBySpeedModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept  {
this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_ColorBySpeedModule::ParticleSystem_ColorBySpeedModule()   {
}
