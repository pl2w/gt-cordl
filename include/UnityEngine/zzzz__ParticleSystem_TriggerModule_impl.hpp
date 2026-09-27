#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_TriggerModule.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TriggerModule_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_TriggerModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_TriggerModule::*)(::UnityEngine::ParticleSystem*)>(&::GlobalNamespace::ParticleSystem_TriggerModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_TriggerModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_TriggerModule.SetCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_TriggerModule::*)(int32_t, ::UnityEngine::Component*)>(&::GlobalNamespace::ParticleSystem_TriggerModule::SetCollider)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb670540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_TriggerModule>(),
                        {"SetCollider", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_TriggerModule.SetCollider_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::ParticleSystem_TriggerModule>, int32_t, ::System::IntPtr)>(&::GlobalNamespace::ParticleSystem_TriggerModule::SetCollider_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb6705d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_TriggerModule>(),
                        {"SetCollider_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_TriggerModule>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_TriggerModule::_ctor(::UnityEngine::ParticleSystem*  particleSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_TriggerModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline void GlobalNamespace::ParticleSystem_TriggerModule::SetCollider(int32_t  index, ::UnityEngine::Component*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_TriggerModule>(),
                        {"SetCollider", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, collider);
}
inline void GlobalNamespace::ParticleSystem_TriggerModule::SetCollider_Injected(::by_ref<::GlobalNamespace::ParticleSystem_TriggerModule>  _unity_self, int32_t  index, ::System::IntPtr  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_TriggerModule>(),
                        {"SetCollider_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_TriggerModule>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, collider);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_TriggerModule::ParticleSystem_TriggerModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept  {
this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_TriggerModule::ParticleSystem_TriggerModule()   {
}
