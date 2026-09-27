#pragma once
// IWYU pragma private; include "Fusion/SceneLoadDoneArgs.hpp"
#include "Fusion/zzzz__NetworkObject_impl.hpp"
#include "Fusion/zzzz__SceneRef_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "Fusion/zzzz__SceneLoadDoneArgs_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::SceneLoadDoneArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SceneLoadDoneArgs::*)(::Fusion::SceneRef, ::ArrayW<::Fusion::NetworkObject*>, ::UnityEngine::SceneManagement::Scene, ::ArrayW<::UnityEngine::GameObject*>)>(&::Fusion::SceneLoadDoneArgs::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f7f15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneLoadDoneArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::ArrayW<::Fusion::NetworkObject*>>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::SceneLoadDoneArgs::_ctor(::Fusion::SceneRef  sceneRef, ::ArrayW<::Fusion::NetworkObject*>  sceneObjects, ::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::UnityEngine::GameObject*>  rootGameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SceneLoadDoneArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::ArrayW<::Fusion::NetworkObject*>>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sceneRef, sceneObjects, scene, rootGameObjects);
}
// Ctor Parameters [CppParam { name: "SceneRef", ty: "::Fusion::SceneRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SceneObjects", ty: "::ArrayW<::UnityW<::Fusion::NetworkObject>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RootGameObjects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SceneLoadDoneArgs::SceneLoadDoneArgs(::Fusion::SceneRef  SceneRef, ::ArrayW<::UnityW<::Fusion::NetworkObject>>  SceneObjects, ::UnityEngine::SceneManagement::Scene  Scene, ::ArrayW<::UnityW<::UnityEngine::GameObject>>  RootGameObjects) noexcept  {
this->SceneRef = SceneRef;
this->SceneObjects = SceneObjects;
this->Scene = Scene;
this->RootGameObjects = RootGameObjects;
}
// Ctor Parameters []
constexpr ::Fusion::SceneLoadDoneArgs::SceneLoadDoneArgs()   {
}
