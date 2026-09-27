#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_LimitVelocityOverLifetimeModule.hpp"
#include "UnityEngine/zzzz__ParticleSystem_LimitVelocityOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(&::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule.get_limitMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::*)()>(&::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::get_limitMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb671454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(),
                        {"get_limitMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule.set_limitMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::*)(float_t)>(&::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::set_limitMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb671490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(),
                        {"set_limitMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem*  particleSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline float_t GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::get_limitMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(),
                        {"get_limitMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::set_limitMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule>(),
                        {"set_limitMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::ParticleSystem_LimitVelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept  {
this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_LimitVelocityOverLifetimeModule::ParticleSystem_LimitVelocityOverLifetimeModule()   {
}
