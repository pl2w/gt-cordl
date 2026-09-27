#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_CustomDataModule.hpp"
#include "UnityEngine/zzzz__ParticleSystem_CustomDataModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_CustomDataModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_CustomDataModule::*)(::UnityEngine::ParticleSystem*)>(&::GlobalNamespace::ParticleSystem_CustomDataModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66e788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_CustomDataModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_CustomDataModule::_ctor(::UnityEngine::ParticleSystem*  particleSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_CustomDataModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_CustomDataModule::ParticleSystem_CustomDataModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept  {
this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_CustomDataModule::ParticleSystem_CustomDataModule()   {
}
