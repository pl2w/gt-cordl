#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/CreateSceneParameters.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__CreateSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::CreateSceneParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SceneManagement::CreateSceneParameters::*)(::UnityEngine::SceneManagement::LocalPhysicsMode)>(&::UnityEngine::SceneManagement::CreateSceneParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::CreateSceneParameters>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SceneManagement::CreateSceneParameters::_ctor(::UnityEngine::SceneManagement::LocalPhysicsMode  physicsMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::CreateSceneParameters>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LocalPhysicsMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, physicsMode);
}
// Ctor Parameters [CppParam { name: "m_LocalPhysicsMode", ty: "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SceneManagement::CreateSceneParameters::CreateSceneParameters(::UnityEngine::SceneManagement::LocalPhysicsMode  m_LocalPhysicsMode) noexcept  {
this->m_LocalPhysicsMode = m_LocalPhysicsMode;
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::CreateSceneParameters::CreateSceneParameters()   {
}
