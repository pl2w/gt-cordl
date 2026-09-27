#pragma once
// IWYU pragma private; include "Fusion/INetworkSceneManager.hpp"
#include "Fusion/zzzz__INetworkSceneManager_def.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfoChangeSource_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkSceneManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkSceneManager::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkSceneManager::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkSceneManager::*)()>(&::Fusion::INetworkSceneManager::Shutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.get_IsBusy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::INetworkSceneManager::*)()>(&::Fusion::INetworkSceneManager::get_IsBusy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.get_MainRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::INetworkSceneManager::*)()>(&::Fusion::INetworkSceneManager::get_MainRunnerScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.IsRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::INetworkSceneManager::*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::INetworkSceneManager::IsRunnerScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.TryGetPhysicsScene2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::INetworkSceneManager::*)(::by_ref<::UnityEngine::PhysicsScene2D>)>(&::Fusion::INetworkSceneManager::TryGetPhysicsScene2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.TryGetPhysicsScene3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::INetworkSceneManager::*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::Fusion::INetworkSceneManager::TryGetPhysicsScene3D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.MakeDontDestroyOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkSceneManager::*)(::UnityEngine::GameObject*)>(&::Fusion::INetworkSceneManager::MakeDontDestroyOnLoad)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.MoveGameObjectToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::INetworkSceneManager::*)(::UnityEngine::GameObject*, ::Fusion::SceneRef)>(&::Fusion::INetworkSceneManager::MoveGameObjectToScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::INetworkSceneManager::*)(::Fusion::SceneRef, ::Fusion::NetworkLoadSceneParameters)>(&::Fusion::INetworkSceneManager::LoadScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.UnloadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::INetworkSceneManager::*)(::Fusion::SceneRef)>(&::Fusion::INetworkSceneManager::UnloadScene)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::INetworkSceneManager::*)(::UnityEngine::GameObject*)>(&::Fusion::INetworkSceneManager::GetSceneRef)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::INetworkSceneManager::*)(::StringW)>(&::Fusion::INetworkSceneManager::GetSceneRef)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkSceneManager.OnSceneInfoChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::INetworkSceneManager::*)(::Fusion::NetworkSceneInfo, ::Fusion::NetworkSceneInfoChangeSource)>(&::Fusion::INetworkSceneManager::OnSceneInfoChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkSceneManager*>(),
                    {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Fusion::INetworkSceneManager::Initialize(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::INetworkSceneManager::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::INetworkSceneManager::get_IsBusy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene Fusion::INetworkSceneManager::get_MainRunnerScene()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline bool Fusion::INetworkSceneManager::IsRunnerScene(::UnityEngine::SceneManagement::Scene  scene)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene);
}
inline bool Fusion::INetworkSceneManager::TryGetPhysicsScene2D(::by_ref<::UnityEngine::PhysicsScene2D>  scene2D)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene2D);
}
inline bool Fusion::INetworkSceneManager::TryGetPhysicsScene3D(::by_ref<::UnityEngine::PhysicsScene>  scene3D)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene3D);
}
inline void Fusion::INetworkSceneManager::MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool Fusion::INetworkSceneManager::MoveGameObjectToScene(::UnityEngine::GameObject*  gameObject, ::Fusion::SceneRef  sceneRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject, sceneRef);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::INetworkSceneManager::LoadScene(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef, parameters);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::INetworkSceneManager::UnloadScene(::Fusion::SceneRef  sceneRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef);
}
inline ::Fusion::SceneRef Fusion::INetworkSceneManager::GetSceneRef(::UnityEngine::GameObject*  gameObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, gameObject);
}
inline ::Fusion::SceneRef Fusion::INetworkSceneManager::GetSceneRef(::StringW  sceneNameOrPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, sceneNameOrPath);
}
inline bool Fusion::INetworkSceneManager::OnSceneInfoChanged(::Fusion::NetworkSceneInfo  sceneInfo, ::Fusion::NetworkSceneInfoChangeSource  changeSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkSceneManager*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneInfo, changeSource);
}
