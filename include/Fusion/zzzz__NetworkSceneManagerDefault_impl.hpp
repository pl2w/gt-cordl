#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDefault.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_impl.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_LoadingScope_impl.hpp"
#include "Fusion/zzzz__SceneRef_impl.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_def.hpp"
#include "Fusion/zzzz__IAsyncOperation_def.hpp"
#include "Fusion/zzzz__ICoroutine_def.hpp"
#include "Fusion/zzzz__INetworkSceneManager_def.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfoChangeSource_def.hpp"
#include "Fusion/zzzz__NetworkSceneInfo_def.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_GetAddressableScenesResult_def.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_LoadingScope_def.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.get_MultiPeerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::get_MultiPeerScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_MultiPeerScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.set_MultiPeerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::NetworkSceneManagerDefault::set_MultiPeerScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"set_MultiPeerScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.get_MultiPeerDontDestroyOnLoadRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::get_MultiPeerDontDestroyOnLoadRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_MultiPeerDontDestroyOnLoadRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.set_MultiPeerDontDestroyOnLoadRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::Transform*)>(&::Fusion::NetworkSceneManagerDefault::set_MultiPeerDontDestroyOnLoadRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"set_MultiPeerDontDestroyOnLoadRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.get_Runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkRunner> (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::get_Runner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_Runner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.set_Runner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkSceneManagerDefault::set_Runner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60ef050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"set_Runner", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.get_IsMultiplePeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::get_IsMultiplePeer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60ef058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_IsMultiplePeer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.ClearStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkSceneManagerDefault::ClearStatics)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60ef084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"ClearStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkSceneManagerDefault::Initialize)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x60ef274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::Shutdown)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x60ef46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.get_IsBusy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::get_IsBusy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60ef8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.get_MainRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::get_MainRunnerScene)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60ef918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.IsRunnerScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::NetworkSceneManagerDefault::IsRunnerScene)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60ef988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.TryGetPhysicsScene2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::by_ref<::UnityEngine::PhysicsScene2D>)>(&::Fusion::NetworkSceneManagerDefault::TryGetPhysicsScene2D)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60ef9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.TryGetPhysicsScene3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::Fusion::NetworkSceneManagerDefault::TryGetPhysicsScene3D)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60efa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.MakeDontDestroyOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkSceneManagerDefault::MakeDontDestroyOnLoad)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60efa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.MoveGameObjectToScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::GameObject*, ::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDefault::MoveGameObjectToScene)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x60efb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.LoadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef, ::Fusion::NetworkLoadSceneParameters)>(&::Fusion::NetworkSceneManagerDefault::LoadScene)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60eff7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.UnloadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDefault::UnloadScene)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60f012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkSceneManagerDefault::*)(::StringW)>(&::Fusion::NetworkSceneManagerDefault::GetSceneRef)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x60f0174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.GetSceneRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SceneRef (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::GameObject*)>(&::Fusion::NetworkSceneManagerDefault::GetSceneRef)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x60f04f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.OnSceneInfoChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::NetworkSceneInfo, ::Fusion::NetworkSceneInfoChangeSource)>(&::Fusion::NetworkSceneManagerDefault::OnSceneInfoChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f0728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"OnSceneInfoChanged", {}, {::i2c::type_of<::Fusion::NetworkSceneInfo>(), ::i2c::type_of<::Fusion::NetworkSceneInfoChangeSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.LoadSceneCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef, ::Fusion::NetworkLoadSceneParameters)>(&::Fusion::NetworkSceneManagerDefault::LoadSceneCoroutine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60f0730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.UnloadSceneCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDefault::UnloadSceneCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60f07dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef, ::UnityEngine::SceneManagement::Scene, ::Fusion::NetworkLoadSceneParameters)>(&::Fusion::NetworkSceneManagerDefault::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60f0880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.OnLoadSceneProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef, float_t)>(&::Fusion::NetworkSceneManagerDefault::OnLoadSceneProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.DestroyAllRuntimeSpawnedObjectsInScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::UnityEngine::SceneManagement::Scene, ::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDefault::DestroyAllRuntimeSpawnedObjectsInScene)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x60f0940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"DestroyAllRuntimeSpawnedObjectsInScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.FindSceneToTakeOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef)>(&::Fusion::NetworkSceneManagerDefault::FindSceneToTakeOver)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60f0b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"FindSceneToTakeOver", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.StartTracedCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ICoroutine* (::Fusion::NetworkSceneManagerDefault::*)(::System::Collections::IEnumerator*)>(&::Fusion::NetworkSceneManagerDefault::StartTracedCoroutine)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60effc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"StartTracedCoroutine", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.MakeLoadingScope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::MakeLoadingScope)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60f0ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"MakeLoadingScope", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.MarkSceneAsOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef, ::UnityEngine::SceneManagement::Scene)>(&::Fusion::NetworkSceneManagerDefault::MarkSceneAsOwned)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x60f0d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"MarkSceneAsOwned", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.FailOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkSceneAsyncOp (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::SceneRef, ::System::Exception*)>(&::Fusion::NetworkSceneManagerDefault::FailOp)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60f0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"FailOp", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x60f0fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.LoadAddressableScenePathsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::LoadAddressableScenePathsAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60ef41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"LoadAddressableScenePathsAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.GetAddressableScenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::GetAddressableScenes)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x60f11b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.GetAddressableScenePathsTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::GetAddressableScenePathsTimeout)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60f140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                    {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.TryGetAddressableScenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::by_ref<::ArrayW<::StringW>>)>(&::Fusion::NetworkSceneManagerDefault::TryGetAddressableScenes)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60f036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"TryGetAddressableScenes", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault._Shutdown_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault::*)(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>)>(&::Fusion::NetworkSceneManagerDefault::_Shutdown_b__26_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60f1460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"<Shutdown>b__26_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault._StartTracedCoroutine_b__47_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault::*)(::Fusion::IAsyncOperation*)>(&::Fusion::NetworkSceneManagerDefault::_StartTracedCoroutine_b__47_0)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x60f14d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"<StartTracedCoroutine>b__47_0", {}, {::i2c::type_of<::Fusion::IAsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault.__ctor_b__52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult (::Fusion::NetworkSceneManagerDefault::*)()>(&::Fusion::NetworkSceneManagerDefault::__ctor_b__52_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60f175c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"<.ctor>b__52_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_IsSceneTakeOverEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsSceneTakeOverEnabled;
}
constexpr bool const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_IsSceneTakeOverEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsSceneTakeOverEnabled;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set_IsSceneTakeOverEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsSceneTakeOverEnabled = value;
}
constexpr bool& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_LogSceneLoadErrors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogSceneLoadErrors;
}
constexpr bool const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_LogSceneLoadErrors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogSceneLoadErrors;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set_LogSceneLoadErrors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogSceneLoadErrors = value;
}
constexpr bool& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_DestroySpawnedPrefabsOnSceneUnload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroySpawnedPrefabsOnSceneUnload;
}
constexpr bool const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_DestroySpawnedPrefabsOnSceneUnload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroySpawnedPrefabsOnSceneUnload;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set_DestroySpawnedPrefabsOnSceneUnload(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestroySpawnedPrefabsOnSceneUnload = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>*& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__multiPeerSceneRoots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiPeerSceneRoots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>* const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__multiPeerSceneRoots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiPeerSceneRoots;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__multiPeerSceneRoots(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____multiPeerSceneRoots = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__multiPeerActiveRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiPeerActiveRoot;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot> const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__multiPeerActiveRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiPeerActiveRoot;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__multiPeerActiveRoot(::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____multiPeerActiveRoot = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::ICoroutine*>*& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__runningCoroutines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningCoroutines;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::ICoroutine*>* const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__runningCoroutines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningCoroutines;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__runningCoroutines(::System::Collections::Generic::List_1<::Fusion::ICoroutine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningCoroutines = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__tempUnloadScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempUnloadScene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__tempUnloadScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempUnloadScene;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__tempUnloadScene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempUnloadScene = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__MultiPeerScene_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultiPeerScene_k__BackingField;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__MultiPeerScene_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultiPeerScene_k__BackingField;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__MultiPeerScene_k__BackingField(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MultiPeerScene_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__MultiPeerDontDestroyOnLoadRoot_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultiPeerDontDestroyOnLoadRoot_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__MultiPeerDontDestroyOnLoadRoot_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultiPeerDontDestroyOnLoadRoot_k__BackingField;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__MultiPeerDontDestroyOnLoadRoot_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MultiPeerDontDestroyOnLoadRoot_k__BackingField = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__Runner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Runner_k__BackingField;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__Runner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Runner_k__BackingField;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__Runner_k__BackingField(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Runner_k__BackingField = value;
}
constexpr bool& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__isLoading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLoading;
}
constexpr bool const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__isLoading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLoading;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__isLoading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLoading = value;
}
constexpr ::StringW& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_AddressableScenesLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddressableScenesLabel;
}
constexpr ::StringW const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get_AddressableScenesLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddressableScenesLabel;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set_AddressableScenesLabel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddressableScenesLabel = value;
}
constexpr ::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>*& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__addressableScenesTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressableScenesTask;
}
constexpr ::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>* const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__addressableScenesTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressableScenesTask;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__addressableScenesTask(::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addressableScenesTask = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__addressableOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressableOperations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* const& Fusion::NetworkSceneManagerDefault::__cordl_internal_get__addressableOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressableOperations;
}
constexpr void Fusion::NetworkSceneManagerDefault::__cordl_internal_set__addressableOperations(::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addressableOperations = value;
}
inline void Fusion::NetworkSceneManagerDefault::setStaticF__allOwnedScenes(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>*, "_allOwnedScenes", ::Fusion::NetworkSceneManagerDefault*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>* Fusion::NetworkSceneManagerDefault::getStaticF__allOwnedScenes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>*, "_allOwnedScenes", ::Fusion::NetworkSceneManagerDefault*>();
}
inline ::UnityEngine::SceneManagement::Scene Fusion::NetworkSceneManagerDefault::get_MultiPeerScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_MultiPeerScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault::set_MultiPeerScene(::UnityEngine::SceneManagement::Scene  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"set_MultiPeerScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Fusion::NetworkSceneManagerDefault::get_MultiPeerDontDestroyOnLoadRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_MultiPeerDontDestroyOnLoadRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault::set_MultiPeerDontDestroyOnLoadRoot(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"set_MultiPeerDontDestroyOnLoadRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Fusion::NetworkRunner> Fusion::NetworkSceneManagerDefault::get_Runner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_Runner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkRunner>>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault::set_Runner(::Fusion::NetworkRunner*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"set_Runner", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::NetworkSceneManagerDefault::get_IsMultiplePeer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"get_IsMultiplePeer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault::ClearStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"ClearStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault::Initialize(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkSceneManagerDefault::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDefault::get_IsBusy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene Fusion::NetworkSceneManagerDefault::get_MainRunnerScene()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDefault::IsRunnerScene(::UnityEngine::SceneManagement::Scene  scene)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene);
}
inline bool Fusion::NetworkSceneManagerDefault::TryGetPhysicsScene2D(::by_ref<::UnityEngine::PhysicsScene2D>  scene2D)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene2D);
}
inline bool Fusion::NetworkSceneManagerDefault::TryGetPhysicsScene3D(::by_ref<::UnityEngine::PhysicsScene>  scene3D)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene3D);
}
inline void Fusion::NetworkSceneManagerDefault::MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool Fusion::NetworkSceneManagerDefault::MoveGameObjectToScene(::UnityEngine::GameObject*  gameObject, ::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"MoveGameObjectToScene", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject, sceneRef);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneManagerDefault::LoadScene(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef, parameters);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneManagerDefault::UnloadScene(::Fusion::SceneRef  sceneRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef);
}
inline ::Fusion::SceneRef Fusion::NetworkSceneManagerDefault::GetSceneRef(::StringW  sceneNameOrPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, sceneNameOrPath);
}
inline ::Fusion::SceneRef Fusion::NetworkSceneManagerDefault::GetSceneRef(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"GetSceneRef", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SceneRef>(this, ___internal_method, gameObject);
}
inline bool Fusion::NetworkSceneManagerDefault::OnSceneInfoChanged(::Fusion::NetworkSceneInfo  sceneInfo, ::Fusion::NetworkSceneInfoChangeSource  changeSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"OnSceneInfoChanged", {}, {::i2c::type_of<::Fusion::NetworkSceneInfo>(), ::i2c::type_of<::Fusion::NetworkSceneInfoChangeSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneInfo, changeSource);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkSceneManagerDefault::LoadSceneCoroutine(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  sceneParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sceneRef, sceneParams);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkSceneManagerDefault::UnloadSceneCoroutine(::Fusion::SceneRef  sceneRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sceneRef);
}
inline ::System::Collections::IEnumerator* Fusion::NetworkSceneManagerDefault::OnSceneLoaded(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::Scene  scene, ::Fusion::NetworkLoadSceneParameters  sceneParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sceneRef, scene, sceneParams);
}
inline void Fusion::NetworkSceneManagerDefault::OnLoadSceneProgress(::Fusion::SceneRef  sceneRef, float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneRef, progress);
}
inline void Fusion::NetworkSceneManagerDefault::DestroyAllRuntimeSpawnedObjectsInScene(::UnityEngine::SceneManagement::Scene  scene, ::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"DestroyAllRuntimeSpawnedObjectsInScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, sceneRef);
}
inline ::UnityEngine::SceneManagement::Scene Fusion::NetworkSceneManagerDefault::FindSceneToTakeOver(::Fusion::SceneRef  sceneRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"FindSceneToTakeOver", {}, {::i2c::type_of<::Fusion::SceneRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method, sceneRef);
}
inline ::Fusion::ICoroutine* Fusion::NetworkSceneManagerDefault::StartTracedCoroutine(::System::Collections::IEnumerator*  inner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"StartTracedCoroutine", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ICoroutine*>(this, ___internal_method, inner);
}
inline ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope Fusion::NetworkSceneManagerDefault::MakeLoadingScope()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"MakeLoadingScope", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault::MarkSceneAsOwned(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"MarkSceneAsOwned", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneRef, scene);
}
inline ::Fusion::NetworkSceneAsyncOp Fusion::NetworkSceneManagerDefault::FailOp(::Fusion::SceneRef  sceneRef, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"FailOp", {}, {::i2c::type_of<::Fusion::SceneRef>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkSceneAsyncOp>(this, ___internal_method, sceneRef, exception);
}
inline void Fusion::NetworkSceneManagerDefault::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Fusion::NetworkSceneManagerDefault::LoadAddressableScenePathsAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"LoadAddressableScenePathsAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult Fusion::NetworkSceneManagerDefault::GetAddressableScenes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>(this, ___internal_method);
}
inline ::System::TimeSpan Fusion::NetworkSceneManagerDefault::GetAddressableScenePathsTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDefault::TryGetAddressableScenes(::by_ref<::ArrayW<::StringW>>  addressableScenes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"TryGetAddressableScenes", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, addressableScenes);
}
inline bool Fusion::NetworkSceneManagerDefault::_Shutdown_b__26_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"<Shutdown>b__26_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline void Fusion::NetworkSceneManagerDefault::_StartTracedCoroutine_b__47_0(::Fusion::IAsyncOperation*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"<StartTracedCoroutine>b__47_0", {}, {::i2c::type_of<::Fusion::IAsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult Fusion::NetworkSceneManagerDefault::__ctor_b__52_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault*>(),
                        {"<.ctor>b__52_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>(this, ___internal_method);
}
inline ::Fusion::NetworkSceneManagerDefault* Fusion::NetworkSceneManagerDefault::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault*>());
}
/// @brief Convert operator to "::Fusion::INetworkSceneManager"
constexpr  Fusion::NetworkSceneManagerDefault::operator ::Fusion::INetworkSceneManager*() noexcept {
return static_cast<::Fusion::INetworkSceneManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkSceneManager"
constexpr ::Fusion::INetworkSceneManager* Fusion::NetworkSceneManagerDefault::i___Fusion__INetworkSceneManager() noexcept {
return static_cast<::Fusion::INetworkSceneManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault::NetworkSceneManagerDefault()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)(int32_t)>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f0858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)()>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60f38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)()>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x60f3940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)()>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f41d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)()>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f41f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)()>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f4200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::*)()>(&::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f4238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope const& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_set___7__wrap1(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get__root_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root_5__3;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot> const& Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_get__root_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root_5__3;
}
constexpr void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__cordl_internal_set__root_5__3(::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root_5__3 = value;
}
inline void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42* Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::*)(int32_t)>(&::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f0914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::*)()>(&::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f3478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::*)()>(&::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x60f347c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::*)()>(&::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f38b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::*)()>(&::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f38bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::*)()>(&::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f38f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get_scene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get_scene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scene;
}
constexpr void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_set_scene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scene = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get_sceneParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneParams;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_get_sceneParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneParams;
}
constexpr void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::__cordl_internal_set_sceneParams(::Fusion::NetworkLoadSceneParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneParams = value;
}
inline void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43* Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43::NetworkSceneManagerDefault__OnSceneLoaded_d__43()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)(int32_t)>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f07b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x60f1dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x141c;
  constexpr static std::size_t addrs = 0x60f1f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__m__Finally1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f3410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__m__Finally2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60f3390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.__m__Finally3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__m__Finally3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60f3340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"<>m__Finally3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f3438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::*)()>(&::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f3470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
constexpr ::Fusion::NetworkLoadSceneParameters& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get_sceneParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneParams;
}
constexpr ::Fusion::NetworkLoadSceneParameters const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get_sceneParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneParams;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set_sceneParams(::Fusion::NetworkLoadSceneParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneParams = value;
}
constexpr ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0* const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set___8__1(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set___7__wrap1(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__localPhysicsMode_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPhysicsMode_5__3;
}
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__localPhysicsMode_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPhysicsMode_5__3;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__localPhysicsMode_5__3(::UnityEngine::SceneManagement::LocalPhysicsMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPhysicsMode_5__3 = value;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__loadSceneMode_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSceneMode_5__4;
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__loadSceneMode_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadSceneMode_5__4;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__loadSceneMode_5__4(::UnityEngine::SceneManagement::LoadSceneMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadSceneMode_5__4 = value;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___7__wrap4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>> const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get___7__wrap4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap4;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set___7__wrap4(::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap4 = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__root_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root_5__6;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot> const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__root_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root_5__6;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__root_5__6(::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root_5__6 = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__candidate_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidate_5__7;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__candidate_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidate_5__7;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__candidate_5__7(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____candidate_5__7 = value;
}
constexpr int32_t& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__i_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__8;
}
constexpr int32_t const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__i_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__8;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__i_5__8(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__8 = value;
}
constexpr ::UnityEngine::AsyncOperation*& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__op_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____op_5__9;
}
constexpr ::UnityEngine::AsyncOperation* const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__op_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____op_5__9;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__op_5__9(::UnityEngine::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____op_5__9 = value;
}
constexpr ::StringW& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__sceneAddress_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAddress_5__10;
}
constexpr ::StringW const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__sceneAddress_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAddress_5__10;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__sceneAddress_5__10(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneAddress_5__10 = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__op_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____op_5__11;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_get__op_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____op_5__11;
}
constexpr void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__cordl_internal_set__op_5__11(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____op_5__11 = value;
}
inline void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::__m__Finally3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"<>m__Finally3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41* Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::*)()>(&::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f1404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0._GetAddressableScenes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(&::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::_GetAddressableScenes_b__0)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x60f1a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>(),
                        {"<GetAddressableScenes>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0._GetAddressableScenes_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::*)()>(&::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::_GetAddressableScenes_b__2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60f1d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>(),
                        {"<GetAddressableScenes>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>*& Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>* const& Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>& Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::__cordl_internal_set_result(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::_GetAddressableScenes_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>(),
                        {"<GetAddressableScenes>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::_GetAddressableScenes_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>(),
                        {"<GetAddressableScenes>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0* Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0::NetworkSceneManagerDefault___c__DisplayClass54_0()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::*)()>(&::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0._LoadSceneCoroutine_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::_LoadSceneCoroutine_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60f1988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>(),
                        {"<LoadSceneCoroutine>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0._LoadSceneCoroutine_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::_LoadSceneCoroutine_b__1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60f1a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>(),
                        {"<LoadSceneCoroutine>b__1", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SceneManagement::Scene& Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_get_scene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_get_scene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scene;
}
constexpr void Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_set_scene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scene = value;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_get_sceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_get_sceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneRef;
}
constexpr void Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::__cordl_internal_set_sceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneRef = value;
}
inline void Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::_LoadSceneCoroutine_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>(),
                        {"<LoadSceneCoroutine>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::_LoadSceneCoroutine_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>(),
                        {"<LoadSceneCoroutine>b__1", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0* Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0::NetworkSceneManagerDefault___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c::*)()>(&::Fusion::NetworkSceneManagerDefault___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c.__cctor_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault___c::*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::NetworkSceneManagerDefault___c::__cctor_b__24_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60f1824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {"<.cctor>b__24_0", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c._Shutdown_b__26_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::Fusion::NetworkSceneManagerDefault___c::*)(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>)>(&::Fusion::NetworkSceneManagerDefault___c::_Shutdown_b__26_1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f18a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {"<Shutdown>b__26_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault___c._GetAddressableScenes_b__54_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkSceneManagerDefault___c::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::Fusion::NetworkSceneManagerDefault___c::_GetAddressableScenes_b__54_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60f18e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {"<GetAddressableScenes>b__54_1", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkSceneManagerDefault___c::setStaticF___9(::Fusion::NetworkSceneManagerDefault___c*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkSceneManagerDefault___c*, "<>9", ::Fusion::NetworkSceneManagerDefault___c*>(std::forward<::Fusion::NetworkSceneManagerDefault___c*>(value));
}
inline ::Fusion::NetworkSceneManagerDefault___c* Fusion::NetworkSceneManagerDefault___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkSceneManagerDefault___c*, "<>9", ::Fusion::NetworkSceneManagerDefault___c*>();
}
inline void Fusion::NetworkSceneManagerDefault___c::setStaticF___9__26_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>*, "<>9__26_1", ::Fusion::NetworkSceneManagerDefault___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>* Fusion::NetworkSceneManagerDefault___c::getStaticF___9__26_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>*, "<>9__26_1", ::Fusion::NetworkSceneManagerDefault___c*>();
}
inline void Fusion::NetworkSceneManagerDefault___c::setStaticF___9__54_1(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, "<>9__54_1", ::Fusion::NetworkSceneManagerDefault___c*>(std::forward<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* Fusion::NetworkSceneManagerDefault___c::getStaticF___9__54_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, "<>9__54_1", ::Fusion::NetworkSceneManagerDefault___c*>();
}
inline void Fusion::NetworkSceneManagerDefault___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkSceneManagerDefault___c::__cctor_b__24_0(::UnityEngine::SceneManagement::Scene  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {"<.cctor>b__24_0", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::UnityEngine::SceneManagement::Scene Fusion::NetworkSceneManagerDefault___c::_Shutdown_b__26_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {"<Shutdown>b__26_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method, x);
}
inline ::StringW Fusion::NetworkSceneManagerDefault___c::_GetAddressableScenes_b__54_1(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault___c*>(),
                        {"<GetAddressableScenes>b__54_1", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::Fusion::NetworkSceneManagerDefault___c* Fusion::NetworkSceneManagerDefault___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault___c::NetworkSceneManagerDefault___c()   {
}
//  Writing Method size for method: ::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::*)()>(&::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f1794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::SceneRef& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_SceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneRef;
}
constexpr ::Fusion::SceneRef const& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_SceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneRef;
}
constexpr void Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_set_SceneRef(::Fusion::SceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneRef = value;
}
constexpr ::StringW& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_ScenePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScenePath;
}
constexpr ::StringW const& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_ScenePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScenePath;
}
constexpr void Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_set_ScenePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScenePath = value;
}
constexpr int32_t& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_SceneHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneHandle;
}
constexpr int32_t const& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_SceneHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneHandle;
}
constexpr void Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_set_SceneHandle(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneHandle = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_Scene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_get_Scene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scene;
}
constexpr void Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::__cordl_internal_set_Scene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scene = value;
}
inline void Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot* Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot::NetworkSceneManagerDefault_MultiPeerSceneRoot()   {
}
