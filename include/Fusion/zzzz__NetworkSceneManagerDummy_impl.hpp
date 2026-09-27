#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDummy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDummy_def.hpp"
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
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDummy::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkSceneManagerDummy::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdef34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.get_IsBusy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDummy::*)()>(&::Fusion::NetworkSceneManagerDummy::get_IsBusy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdef38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"get_IsBusy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.get_MainRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::NetworkSceneManagerDummy::*)()>(&::Fusion::NetworkSceneManagerDummy::get_MainRunnerScene)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fdef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"get_MainRunnerScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDummy::*)()>(&::Fusion::NetworkSceneManagerDummy::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.IsRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDummy::*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::NetworkSceneManagerDummy::IsRunnerScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"IsRunnerScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.MoveGameObjectToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDummy::*)(::UnityEngine::GameObject*, ::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDummy::MoveGameObjectToScene)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdef9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkSceneManagerDummy::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkSceneManagerDummy::GetSceneRef)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdefd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.TryGetPhysicsScene2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDummy::*)(::by_ref<::UnityEngine::PhysicsScene2D>)>(&::Fusion::NetworkSceneManagerDummy::TryGetPhysicsScene2D)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fdf00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"TryGetPhysicsScene2D", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.TryGetPhysicsScene3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDummy::*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::Fusion::NetworkSceneManagerDummy::TryGetPhysicsScene3D)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fdf070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"TryGetPhysicsScene3D", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.MakeDontDestroyOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDummy::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkSceneManagerDummy::MakeDontDestroyOnLoad)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fdf0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"MakeDontDestroyOnLoad", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.MoveToRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDummy::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkSceneManagerDummy::MoveToRunnerScene)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fdf12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"MoveToRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkSceneManagerDummy::*)(::Fusion::SceneRef, ::Fusion::NetworkLoadSceneParameters)>(&::Fusion::NetworkSceneManagerDummy::LoadScene)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdf194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::NetworkLoadSceneParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.UnloadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkSceneManagerDummy::*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDummy::UnloadScene)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdf1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.OnSceneInfoChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDummy::*)()>(&::Fusion::NetworkSceneManagerDummy::OnSceneInfoChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdf204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"OnSceneInfoChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkSceneManagerDummy::*)(::StringW)>(&::Fusion::NetworkSceneManagerDummy::GetSceneRef)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fdf208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy.OnSceneInfoChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDummy::*)(::Fusion::NetworkSceneInfo, ::Fusion::NetworkSceneInfoChangeSource)>(&::Fusion::NetworkSceneManagerDummy::OnSceneInfoChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdf240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"OnSceneInfoChanged", {}, {::i2c::type_of<::Fusion::NetworkSceneInfo>(), ::i2c::type_of<::Fusion::NetworkSceneInfoChangeSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDummy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDummy::*)()>(&::Fusion::NetworkSceneManagerDummy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdf248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkSceneManagerDummy::Initialize(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline bool Fusion::NetworkSceneManagerDummy::get_IsBusy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"get_IsBusy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene Fusion::NetworkSceneManagerDummy::get_MainRunnerScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"get_MainRunnerScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDummy::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDummy::IsRunnerScene(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"IsRunnerScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene);
}
inline bool Fusion::NetworkSceneManagerDummy::MoveGameObjectToScene(::UnityEngine::GameObject*  gameObject, ::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject, sceneRef);
}
inline ::Fusion::SceneRef Fusion::NetworkSceneManagerDummy::GetSceneRef(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, gameObject);
}
inline bool Fusion::NetworkSceneManagerDummy::TryGetPhysicsScene2D(::by_ref<::UnityEngine::PhysicsScene2D>  scene2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"TryGetPhysicsScene2D", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene2D);
}
inline bool Fusion::NetworkSceneManagerDummy::TryGetPhysicsScene3D(::by_ref<::UnityEngine::PhysicsScene>  scene3D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"TryGetPhysicsScene3D", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene3D);
}
inline void Fusion::NetworkSceneManagerDummy::MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"MakeDontDestroyOnLoad", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Fusion::NetworkSceneManagerDummy::MoveToRunnerScene(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"MoveToRunnerScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneManagerDummy::LoadScene(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"LoadScene", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::Fusion::NetworkLoadSceneParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef, parameters);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneManagerDummy::UnloadScene(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef);
}
inline void Fusion::NetworkSceneManagerDummy::OnSceneInfoChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"OnSceneInfoChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SceneRef Fusion::NetworkSceneManagerDummy::GetSceneRef(::StringW  sceneNameOrPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, sceneNameOrPath);
}
inline bool Fusion::NetworkSceneManagerDummy::OnSceneInfoChanged(::Fusion::NetworkSceneInfo  sceneInfo, ::Fusion::NetworkSceneInfoChangeSource  changeSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {"OnSceneInfoChanged", {}, {::i2c::type_of<::Fusion::NetworkSceneInfo>(), ::i2c::type_of<::Fusion::NetworkSceneInfoChangeSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneInfo, changeSource);
}
inline void Fusion::NetworkSceneManagerDummy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDummy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSceneManagerDummy* Fusion::NetworkSceneManagerDummy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDummy*>());
}
/// @brief Convert operator to "::Fusion::INetworkSceneManager"
constexpr  Fusion::NetworkSceneManagerDummy::operator ::Fusion::INetworkSceneManager*() noexcept {
return static_cast<::Fusion::INetworkSceneManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkSceneManager"
constexpr ::Fusion::INetworkSceneManager* Fusion::NetworkSceneManagerDummy::i___Fusion__INetworkSceneManager() noexcept {
return static_cast<::Fusion::INetworkSceneManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDummy::NetworkSceneManagerDummy()   {
}
