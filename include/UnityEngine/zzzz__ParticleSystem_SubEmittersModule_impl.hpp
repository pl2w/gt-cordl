#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_SubEmittersModule.hpp"
#include "UnityEngine/zzzz__ParticleSystem_SubEmittersModule_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_SubEmittersModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_SubEmittersModule::*)(::UnityEngine::ParticleSystem*)>(&::GlobalNamespace::ParticleSystem_SubEmittersModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb66e6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_SubEmittersModule.get_subEmittersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ParticleSystem_SubEmittersModule::*)()>(&::GlobalNamespace::ParticleSystem_SubEmittersModule::get_subEmittersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb670628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {"get_subEmittersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_SubEmittersModule.GetSubEmitterSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ParticleSystem> (::GlobalNamespace::ParticleSystem_SubEmittersModule::*)(int32_t)>(&::GlobalNamespace::ParticleSystem_SubEmittersModule::GetSubEmitterSystem)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb670664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {"GetSubEmitterSystem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_SubEmittersModule.GetSubEmitterSystem_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::GlobalNamespace::ParticleSystem_SubEmittersModule>, int32_t)>(&::GlobalNamespace::ParticleSystem_SubEmittersModule::GetSubEmitterSystem_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb6706e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {"GetSubEmitterSystem_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_SubEmittersModule>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_SubEmittersModule::_ctor(::UnityEngine::ParticleSystem*  particleSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ParticleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline int32_t GlobalNamespace::ParticleSystem_SubEmittersModule::get_subEmittersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {"get_subEmittersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ParticleSystem> GlobalNamespace::ParticleSystem_SubEmittersModule::GetSubEmitterSystem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {"GetSubEmitterSystem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ParticleSystem>>(*this, ___internal_method, index);
}
inline ::System::IntPtr GlobalNamespace::ParticleSystem_SubEmittersModule::GetSubEmitterSystem_Injected(::by_ref<::GlobalNamespace::ParticleSystem_SubEmittersModule>  _unity_self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_SubEmittersModule>(),
                        {"GetSubEmitterSystem_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_SubEmittersModule>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_SubEmittersModule::ParticleSystem_SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept  {
this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_SubEmittersModule::ParticleSystem_SubEmittersModule()   {
}
