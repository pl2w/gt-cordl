#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParameters_def.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_LoadingScope_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneManagerDefault)
namespace Fusion {
class IAsyncOperation;
}
namespace Fusion {
class ICoroutine;
}
namespace Fusion {
class INetworkSceneManager;
}
namespace Fusion {
struct NetworkLoadSceneParameters;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct NetworkSceneAsyncOp;
}
namespace Fusion {
struct NetworkSceneInfoChangeSource;
}
namespace Fusion {
struct NetworkSceneInfo;
}
namespace Fusion {
class NetworkSceneManagerDefault_MultiPeerSceneRoot;
}
namespace Fusion {
class NetworkSceneManagerDefault__LoadSceneCoroutine_d__41;
}
namespace Fusion {
class NetworkSceneManagerDefault__OnSceneLoaded_d__43;
}
namespace Fusion {
class NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42;
}
namespace Fusion {
class NetworkSceneManagerDefault___c;
}
namespace Fusion {
class NetworkSceneManagerDefault___c__DisplayClass41_0;
}
namespace Fusion {
class NetworkSceneManagerDefault___c__DisplayClass54_0;
}
namespace Fusion {
struct SceneRef;
}
namespace GlobalNamespace {
struct NetworkSceneManagerDefault_GetAddressableScenesResult;
}
namespace GlobalNamespace {
struct NetworkSceneManagerDefault_LoadingScope;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Fusion {
class NetworkSceneManagerDefault;
}
namespace Fusion {
class NetworkSceneManagerDefault_MultiPeerSceneRoot;
}
namespace Fusion {
class NetworkSceneManagerDefault__LoadSceneCoroutine_d__41;
}
namespace Fusion {
class NetworkSceneManagerDefault__OnSceneLoaded_d__43;
}
namespace Fusion {
class NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42;
}
namespace Fusion {
class NetworkSceneManagerDefault___c;
}
namespace Fusion {
class NetworkSceneManagerDefault___c__DisplayClass41_0;
}
namespace Fusion {
class NetworkSceneManagerDefault___c__DisplayClass54_0;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkSceneManagerDefault*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault___c*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*);
MARK_REF_T(::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault*, "Fusion", "NetworkSceneManagerDefault");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot*, "Fusion", "NetworkSceneManagerDefault/MultiPeerSceneRoot");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41*, "Fusion", "NetworkSceneManagerDefault/<LoadSceneCoroutine>d__41");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43*, "Fusion", "NetworkSceneManagerDefault/<OnSceneLoaded>d__43");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42*, "Fusion", "NetworkSceneManagerDefault/<UnloadSceneCoroutine>d__42");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault___c*, "Fusion", "NetworkSceneManagerDefault/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*, "Fusion", "NetworkSceneManagerDefault/<>c__DisplayClass41_0");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0*, "Fusion", "NetworkSceneManagerDefault/<>c__DisplayClass54_0");
// Dependencies Fusion.Behaviour, UnityEngine.SceneManagement.Scene
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault
class CORDL_TYPE NetworkSceneManagerDefault : public ::Fusion::Behaviour {
public:
// Declarations
using MultiPeerSceneRoot = ::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot;

using _LoadSceneCoroutine_d__41 = ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41;

using _OnSceneLoaded_d__43 = ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43;

using _UnloadSceneCoroutine_d__42 = ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42;

using __c = ::Fusion::NetworkSceneManagerDefault___c;

using __c__DisplayClass41_0 = ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0;

using __c__DisplayClass54_0 = ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0;

using GetAddressableScenesResult = ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult;

using LoadingScope = ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope;

/// @brief Field AddressableScenesLabel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_AddressableScenesLabel, put=__cordl_internal_set_AddressableScenesLabel)) ::StringW  AddressableScenesLabel;

/// @brief Field DestroySpawnedPrefabsOnSceneUnload, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_DestroySpawnedPrefabsOnSceneUnload, put=__cordl_internal_set_DestroySpawnedPrefabsOnSceneUnload)) bool  DestroySpawnedPrefabsOnSceneUnload;

 __declspec(property(get=get_IsBusy)) bool  IsBusy;

 __declspec(property(get=get_IsMultiplePeer)) bool  IsMultiplePeer;

/// @brief Field IsSceneTakeOverEnabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsSceneTakeOverEnabled, put=__cordl_internal_set_IsSceneTakeOverEnabled)) bool  IsSceneTakeOverEnabled;

/// @brief Field LogSceneLoadErrors, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogSceneLoadErrors, put=__cordl_internal_set_LogSceneLoadErrors)) bool  LogSceneLoadErrors;

 __declspec(property(get=get_MainRunnerScene)) ::UnityEngine::SceneManagement::Scene  MainRunnerScene;

 __declspec(property(get=get_MultiPeerDontDestroyOnLoadRoot, put=set_MultiPeerDontDestroyOnLoadRoot)) ::UnityW<::UnityEngine::Transform>  MultiPeerDontDestroyOnLoadRoot;

 __declspec(property(get=get_MultiPeerScene, put=set_MultiPeerScene)) ::UnityEngine::SceneManagement::Scene  MultiPeerScene;

 __declspec(property(get=get_Runner, put=set_Runner)) ::UnityW<::Fusion::NetworkRunner>  Runner;

/// @brief Field <MultiPeerDontDestroyOnLoadRoot>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__MultiPeerDontDestroyOnLoadRoot_k__BackingField, put=__cordl_internal_set__MultiPeerDontDestroyOnLoadRoot_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _MultiPeerDontDestroyOnLoadRoot_k__BackingField;

/// @brief Field <MultiPeerScene>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__MultiPeerScene_k__BackingField, put=__cordl_internal_set__MultiPeerScene_k__BackingField)) ::UnityEngine::SceneManagement::Scene  _MultiPeerScene_k__BackingField;

/// @brief Field <Runner>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Runner_k__BackingField, put=__cordl_internal_set__Runner_k__BackingField)) ::UnityW<::Fusion::NetworkRunner>  _Runner_k__BackingField;

/// @brief Field _addressableOperations, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__addressableOperations, put=__cordl_internal_set__addressableOperations)) ::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  _addressableOperations;

/// @brief Field _addressableScenesTask, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__addressableScenesTask, put=__cordl_internal_set__addressableScenesTask)) ::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>*  _addressableScenesTask;

/// @brief Field _allOwnedScenes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allOwnedScenes, put=setStaticF__allOwnedScenes)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>*  _allOwnedScenes;

/// @brief Field _isLoading, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLoading, put=__cordl_internal_set__isLoading)) bool  _isLoading;

/// @brief Field _multiPeerActiveRoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiPeerActiveRoot, put=__cordl_internal_set__multiPeerActiveRoot)) ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  _multiPeerActiveRoot;

/// @brief Field _multiPeerSceneRoots, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiPeerSceneRoots, put=__cordl_internal_set__multiPeerSceneRoots)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>*  _multiPeerSceneRoots;

/// @brief Field _runningCoroutines, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__runningCoroutines, put=__cordl_internal_set__runningCoroutines)) ::System::Collections::Generic::List_1<::Fusion::ICoroutine*>*  _runningCoroutines;

/// @brief Field _tempUnloadScene, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__tempUnloadScene, put=__cordl_internal_set__tempUnloadScene)) ::UnityEngine::SceneManagement::Scene  _tempUnloadScene;

/// @brief Convert operator to "::Fusion::INetworkSceneManager"
constexpr operator  ::Fusion::INetworkSceneManager*() noexcept;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method ClearStatics, addr 0x60ef084, size 0x78, virtual false, abstract: false, final false
static inline void ClearStatics() ;

/// @brief Method DestroyAllRuntimeSpawnedObjectsInScene, addr 0x60f0940, size 0x24c, virtual false, abstract: false, final false
inline void DestroyAllRuntimeSpawnedObjectsInScene(::UnityEngine::SceneManagement::Scene  scene, ::Fusion::SceneRef  sceneRef) ;

/// @brief Method FailOp, addr 0x60f0ef0, size 0xc8, virtual false, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp FailOp(::Fusion::SceneRef  sceneRef, ::System::Exception*  exception) ;

/// @brief Method FindSceneToTakeOver, addr 0x60f0b8c, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene FindSceneToTakeOver(::Fusion::SceneRef  sceneRef) ;

/// @brief Method GetAddressableScenePathsTimeout, addr 0x60f140c, size 0x54, virtual true, abstract: false, final false
inline ::System::TimeSpan GetAddressableScenePathsTimeout() ;

/// @brief Method GetAddressableScenes, addr 0x60f11b8, size 0x24c, virtual true, abstract: false, final false
inline ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult GetAddressableScenes() ;

/// @brief Method GetSceneRef, addr 0x60f04f4, size 0x234, virtual true, abstract: false, final true
inline ::Fusion::SceneRef GetSceneRef(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetSceneRef, addr 0x60f0174, size 0x1f8, virtual true, abstract: false, final false
inline ::Fusion::SceneRef GetSceneRef(::StringW  sceneNameOrPath) ;

/// @brief Method Initialize, addr 0x60ef274, size 0x1a8, virtual true, abstract: false, final false
inline void Initialize(::Fusion::NetworkRunner*  runner) ;

/// @brief Method IsRunnerScene, addr 0x60ef988, size 0x40, virtual true, abstract: false, final false
inline bool IsRunnerScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method LoadAddressableScenePathsAsync, addr 0x60ef41c, size 0x50, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadAddressableScenePathsAsync() ;

/// @brief Method LoadScene, addr 0x60eff7c, size 0x4c, virtual true, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  parameters) ;

/// [IteratorStateMachine(typeof(Fusion.NetworkSceneManagerDefault::<LoadSceneCoroutine>d__41))]
/// @brief Method LoadSceneCoroutine, addr 0x60f0730, size 0x84, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadSceneCoroutine(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  sceneParams) ;

/// @brief Method MakeDontDestroyOnLoad, addr 0x60efa88, size 0x98, virtual true, abstract: false, final false
inline void MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj) ;

/// @brief Method MakeLoadingScope, addr 0x60f0ce0, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope MakeLoadingScope() ;

/// @brief Method MarkSceneAsOwned, addr 0x60f0d28, size 0x1c8, virtual false, abstract: false, final false
inline void MarkSceneAsOwned(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method MoveGameObjectToScene, addr 0x60efb20, size 0x45c, virtual true, abstract: false, final true
inline bool MoveGameObjectToScene(::UnityEngine::GameObject*  gameObject, ::Fusion::SceneRef  sceneRef) ;

static inline ::Fusion::NetworkSceneManagerDefault* New_ctor() ;

/// @brief Method OnLoadSceneProgress, addr 0x60f093c, size 0x4, virtual true, abstract: false, final false
inline void OnLoadSceneProgress(::Fusion::SceneRef  sceneRef, float_t  progress) ;

/// @brief Method OnSceneInfoChanged, addr 0x60f0728, size 0x8, virtual true, abstract: false, final true
inline bool OnSceneInfoChanged(::Fusion::NetworkSceneInfo  sceneInfo, ::Fusion::NetworkSceneInfoChangeSource  changeSource) ;

/// [IteratorStateMachine(typeof(Fusion.NetworkSceneManagerDefault::<OnSceneLoaded>d__43))]
/// @brief Method OnSceneLoaded, addr 0x60f0880, size 0x94, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* OnSceneLoaded(::Fusion::SceneRef  sceneRef, ::UnityEngine::SceneManagement::Scene  scene, ::Fusion::NetworkLoadSceneParameters  sceneParams) ;

/// @brief Method Shutdown, addr 0x60ef46c, size 0x440, virtual true, abstract: false, final false
inline void Shutdown() ;

/// @brief Method StartTracedCoroutine, addr 0x60effc8, size 0x164, virtual false, abstract: false, final false
inline ::Fusion::ICoroutine* StartTracedCoroutine(::System::Collections::IEnumerator*  inner) ;

/// @brief Method TryGetAddressableScenes, addr 0x60f036c, size 0x188, virtual false, abstract: false, final false
inline bool TryGetAddressableScenes(::by_ref<::ArrayW<::StringW>>  addressableScenes) ;

/// @brief Method TryGetPhysicsScene2D, addr 0x60ef9c8, size 0x60, virtual true, abstract: false, final false
inline bool TryGetPhysicsScene2D(::by_ref<::UnityEngine::PhysicsScene2D>  scene2D) ;

/// @brief Method TryGetPhysicsScene3D, addr 0x60efa28, size 0x60, virtual true, abstract: false, final false
inline bool TryGetPhysicsScene3D(::by_ref<::UnityEngine::PhysicsScene>  scene3D) ;

/// @brief Method UnloadScene, addr 0x60f012c, size 0x48, virtual true, abstract: false, final false
inline ::Fusion::NetworkSceneAsyncOp UnloadScene(::Fusion::SceneRef  sceneRef) ;

/// [IteratorStateMachine(typeof(Fusion.NetworkSceneManagerDefault::<UnloadSceneCoroutine>d__42))]
/// @brief Method UnloadSceneCoroutine, addr 0x60f07dc, size 0x7c, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* UnloadSceneCoroutine(::Fusion::SceneRef  sceneRef) ;

/// [CompilerGenerated]
/// @brief Method <Shutdown>b__26_0, addr 0x60f1460, size 0x74, virtual false, abstract: false, final false
inline bool _Shutdown_b__26_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>  x) ;

/// [CompilerGenerated]
/// @brief Method <StartTracedCoroutine>b__47_0, addr 0x60f14d4, size 0x288, virtual false, abstract: false, final false
inline void _StartTracedCoroutine_b__47_0(::Fusion::IAsyncOperation*  x) ;

constexpr ::StringW const& __cordl_internal_get_AddressableScenesLabel() const;

constexpr ::StringW& __cordl_internal_get_AddressableScenesLabel() ;

constexpr bool const& __cordl_internal_get_DestroySpawnedPrefabsOnSceneUnload() const;

constexpr bool& __cordl_internal_get_DestroySpawnedPrefabsOnSceneUnload() ;

constexpr bool const& __cordl_internal_get_IsSceneTakeOverEnabled() const;

constexpr bool& __cordl_internal_get_IsSceneTakeOverEnabled() ;

constexpr bool const& __cordl_internal_get_LogSceneLoadErrors() const;

constexpr bool& __cordl_internal_get_LogSceneLoadErrors() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__MultiPeerDontDestroyOnLoadRoot_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__MultiPeerDontDestroyOnLoadRoot_k__BackingField() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get__MultiPeerScene_k__BackingField() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get__MultiPeerScene_k__BackingField() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__Runner_k__BackingField() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__Runner_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* const& __cordl_internal_get__addressableOperations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*& __cordl_internal_get__addressableOperations() ;

constexpr ::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>* const& __cordl_internal_get__addressableScenesTask() const;

constexpr ::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>*& __cordl_internal_get__addressableScenesTask() ;

constexpr bool const& __cordl_internal_get__isLoading() const;

constexpr bool& __cordl_internal_get__isLoading() ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot> const& __cordl_internal_get__multiPeerActiveRoot() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>& __cordl_internal_get__multiPeerActiveRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>* const& __cordl_internal_get__multiPeerSceneRoots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>*& __cordl_internal_get__multiPeerSceneRoots() ;

constexpr ::System::Collections::Generic::List_1<::Fusion::ICoroutine*>* const& __cordl_internal_get__runningCoroutines() const;

constexpr ::System::Collections::Generic::List_1<::Fusion::ICoroutine*>*& __cordl_internal_get__runningCoroutines() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get__tempUnloadScene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get__tempUnloadScene() ;

constexpr void __cordl_internal_set_AddressableScenesLabel(::StringW  value) ;

constexpr void __cordl_internal_set_DestroySpawnedPrefabsOnSceneUnload(bool  value) ;

constexpr void __cordl_internal_set_IsSceneTakeOverEnabled(bool  value) ;

constexpr void __cordl_internal_set_LogSceneLoadErrors(bool  value) ;

constexpr void __cordl_internal_set__MultiPeerDontDestroyOnLoadRoot_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__MultiPeerScene_k__BackingField(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set__Runner_k__BackingField(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set__addressableOperations(::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

constexpr void __cordl_internal_set__addressableScenesTask(::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>*  value) ;

constexpr void __cordl_internal_set__isLoading(bool  value) ;

constexpr void __cordl_internal_set__multiPeerActiveRoot(::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  value) ;

constexpr void __cordl_internal_set__multiPeerSceneRoots(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>*  value) ;

constexpr void __cordl_internal_set__runningCoroutines(::System::Collections::Generic::List_1<::Fusion::ICoroutine*>*  value) ;

constexpr void __cordl_internal_set__tempUnloadScene(::UnityEngine::SceneManagement::Scene  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__52_0, addr 0x60f175c, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult __ctor_b__52_0() ;

/// @brief Method .ctor, addr 0x60f0fb8, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>* getStaticF__allOwnedScenes() ;

/// @brief Method get_IsBusy, addr 0x60ef8ac, size 0x6c, virtual true, abstract: false, final false
inline bool get_IsBusy() ;

/// @brief Method get_IsMultiplePeer, addr 0x60ef058, size 0x2c, virtual false, abstract: false, final false
inline bool get_IsMultiplePeer() ;

/// @brief Method get_MainRunnerScene, addr 0x60ef918, size 0x70, virtual true, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene get_MainRunnerScene() ;

/// [CompilerGenerated]
/// @brief Method get_MultiPeerDontDestroyOnLoadRoot, addr 0x60ef038, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_MultiPeerDontDestroyOnLoadRoot() ;

/// [CompilerGenerated]
/// @brief Method get_MultiPeerScene, addr 0x60ef028, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene get_MultiPeerScene() ;

/// [CompilerGenerated]
/// @brief Method get_Runner, addr 0x60ef048, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> get_Runner() ;

/// @brief Convert to "::Fusion::INetworkSceneManager"
constexpr ::Fusion::INetworkSceneManager* i___Fusion__INetworkSceneManager() noexcept;

static inline void setStaticF__allOwnedScenes(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MultiPeerDontDestroyOnLoadRoot, addr 0x60ef040, size 0x8, virtual false, abstract: false, final false
inline void set_MultiPeerDontDestroyOnLoadRoot(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MultiPeerScene, addr 0x60ef030, size 0x8, virtual false, abstract: false, final false
inline void set_MultiPeerScene(::UnityEngine::SceneManagement::Scene  value) ;

/// [CompilerGenerated]
/// @brief Method set_Runner, addr 0x60ef050, size 0x8, virtual false, abstract: false, final false
inline void set_Runner(::Fusion::NetworkRunner*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault(NetworkSceneManagerDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault(NetworkSceneManagerDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23479};

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field IsSceneTakeOverEnabled, offset: 0x20, size: 0x1, def value: None
 bool  ___IsSceneTakeOverEnabled;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field LogSceneLoadErrors, offset: 0x21, size: 0x1, def value: None
 bool  ___LogSceneLoadErrors;

/// [InlineHelp]
/// [ToggleLeft]
/// @brief Field DestroySpawnedPrefabsOnSceneUnload, offset: 0x22, size: 0x1, def value: None
 bool  ___DestroySpawnedPrefabsOnSceneUnload;

/// @brief Field _multiPeerSceneRoots, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>*  ____multiPeerSceneRoots;

/// @brief Field _multiPeerActiveRoot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  ____multiPeerActiveRoot;

/// @brief Field _runningCoroutines, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Fusion::ICoroutine*>*  ____runningCoroutines;

/// @brief Field _tempUnloadScene, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ____tempUnloadScene;

/// [CompilerGenerated]
/// @brief Field <MultiPeerScene>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ____MultiPeerScene_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MultiPeerDontDestroyOnLoadRoot>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____MultiPeerDontDestroyOnLoadRoot_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Runner>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____Runner_k__BackingField;

/// @brief Field _isLoading, offset: 0x58, size: 0x1, def value: None
 bool  ____isLoading;

/// [InlineHelp]
/// @brief Field AddressableScenesLabel, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___AddressableScenesLabel;

/// @brief Field _addressableScenesTask, offset: 0x68, size: 0x8, def value: None
 ::System::Lazy_1<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>*  ____addressableScenesTask;

/// @brief Field _addressableOperations, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::SceneRef,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  ____addressableOperations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ___IsSceneTakeOverEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ___LogSceneLoadErrors) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ___DestroySpawnedPrefabsOnSceneUnload) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____multiPeerSceneRoots) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____multiPeerActiveRoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____runningCoroutines) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____tempUnloadScene) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____MultiPeerScene_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____MultiPeerDontDestroyOnLoadRoot_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____Runner_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____isLoading) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ___AddressableScenesLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____addressableScenesTask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault, ____addressableOperations) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault) == 0x78, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkSceneManagerDefault::LoadingScope, Fusion.SceneRef, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/<UnloadSceneCoroutine>d__42
class CORDL_TYPE NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkSceneManagerDefault>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  __7__wrap1;

/// @brief Field <root>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__root_5__3, put=__cordl_internal_set__root_5__3)) ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  _root_5__3;

/// @brief Field sceneRef, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60f3940, size 0x898, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x60f41f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60f4200, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60f4238, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60f38fc, size 0x44, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope& __cordl_internal_get___7__wrap1() ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot> const& __cordl_internal_get__root_5__3() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>& __cordl_internal_get__root_5__3() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  value) ;

constexpr void __cordl_internal_set__root_5__3(::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

/// @brief Method <>m__Finally1, addr 0x60f41d8, size 0x20, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x60f0858, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42(NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42(NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23478};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault>  _____4__this;

/// @brief Field sceneRef, offset: 0x28, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  _____7__wrap1;

/// @brief Field <root>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  ____root_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42, ___sceneRef) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42, ____root_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault__UnloadSceneCoroutine_d__42) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkLoadSceneParameters, Fusion.SceneRef, System.Object, UnityEngine.SceneManagement.Scene
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/<OnSceneLoaded>d__43
class CORDL_TYPE NetworkSceneManagerDefault__OnSceneLoaded_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkSceneManagerDefault>  __4__this;

/// @brief Field scene, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_scene, put=__cordl_internal_set_scene)) ::UnityEngine::SceneManagement::Scene  scene;

/// @brief Field sceneParams, offset 0x34, size 0x2 
 __declspec(property(get=__cordl_internal_get_sceneParams, put=__cordl_internal_set_sceneParams)) ::Fusion::NetworkLoadSceneParameters  sceneParams;

/// @brief Field sceneRef, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60f347c, size 0x438, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x60f38b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60f38bc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60f38f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60f3478, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_scene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_scene() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get_sceneParams() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get_sceneParams() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value) ;

constexpr void __cordl_internal_set_scene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_sceneParams(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x60f0914, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault__OnSceneLoaded_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault__OnSceneLoaded_d__43", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault__OnSceneLoaded_d__43(NetworkSceneManagerDefault__OnSceneLoaded_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault__OnSceneLoaded_d__43", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault__OnSceneLoaded_d__43(NetworkSceneManagerDefault__OnSceneLoaded_d__43 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23477};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field scene, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___scene;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault>  _____4__this;

/// @brief Field sceneRef, offset: 0x30, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

/// @brief Field sceneParams, offset: 0x34, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ___sceneParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43, ___scene) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43, ___sceneRef) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43, ___sceneParams) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault__OnSceneLoaded_d__43) == 0x38, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkLoadSceneParameters, Fusion.NetworkSceneManagerDefault::LoadingScope, Fusion.SceneRef, System.Collections.Generic.List`1::Enumerator<T>, System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>, UnityEngine.ResourceManagement.ResourceProviders.SceneInstance, UnityEngine.SceneManagement.LoadSceneMode, UnityEngine.SceneManagement.LocalPhysicsMode, UnityEngine.SceneManagement.Scene
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/<LoadSceneCoroutine>d__41
class CORDL_TYPE NetworkSceneManagerDefault__LoadSceneCoroutine_d__41 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkSceneManagerDefault>  __4__this;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  __7__wrap1;

/// @brief Field <>7__wrap4, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>  __7__wrap4;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*  __8__1;

/// @brief Field <candidate>5__7, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__candidate_5__7, put=__cordl_internal_set__candidate_5__7)) ::UnityEngine::SceneManagement::Scene  _candidate_5__7;

/// @brief Field <i>5__8, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__8, put=__cordl_internal_set__i_5__8)) int32_t  _i_5__8;

/// @brief Field <loadSceneMode>5__4, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__loadSceneMode_5__4, put=__cordl_internal_set__loadSceneMode_5__4)) ::UnityEngine::SceneManagement::LoadSceneMode  _loadSceneMode_5__4;

/// @brief Field <localPhysicsMode>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__localPhysicsMode_5__3, put=__cordl_internal_set__localPhysicsMode_5__3)) ::UnityEngine::SceneManagement::LocalPhysicsMode  _localPhysicsMode_5__3;

/// @brief Field <op>5__11, offset 0x80, size 0x18 
 __declspec(property(get=__cordl_internal_get__op_5__11, put=__cordl_internal_set__op_5__11)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  _op_5__11;

/// @brief Field <op>5__9, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__op_5__9, put=__cordl_internal_set__op_5__9)) ::UnityEngine::AsyncOperation*  _op_5__9;

/// @brief Field <root>5__6, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__root_5__6, put=__cordl_internal_set__root_5__6)) ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  _root_5__6;

/// @brief Field <sceneAddress>5__10, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneAddress_5__10, put=__cordl_internal_set__sceneAddress_5__10)) ::StringW  _sceneAddress_5__10;

/// @brief Field sceneParams, offset 0x2c, size 0x2 
 __declspec(property(get=__cordl_internal_get_sceneParams, put=__cordl_internal_set_sceneParams)) ::Fusion::NetworkLoadSceneParameters  sceneParams;

/// @brief Field sceneRef, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60f1f24, size 0x141c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x60f3430, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60f3438, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60f3470, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60f1dd4, size 0x150, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope& __cordl_internal_get___7__wrap1() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>> const& __cordl_internal_get___7__wrap4() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>& __cordl_internal_get___7__wrap4() ;

constexpr ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0* const& __cordl_internal_get___8__1() const;

constexpr ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*& __cordl_internal_get___8__1() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get__candidate_5__7() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get__candidate_5__7() ;

constexpr int32_t const& __cordl_internal_get__i_5__8() const;

constexpr int32_t& __cordl_internal_get__i_5__8() ;

constexpr ::UnityEngine::SceneManagement::LoadSceneMode const& __cordl_internal_get__loadSceneMode_5__4() const;

constexpr ::UnityEngine::SceneManagement::LoadSceneMode& __cordl_internal_get__loadSceneMode_5__4() ;

constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode const& __cordl_internal_get__localPhysicsMode_5__3() const;

constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode& __cordl_internal_get__localPhysicsMode_5__3() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& __cordl_internal_get__op_5__11() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& __cordl_internal_get__op_5__11() ;

constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get__op_5__9() const;

constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get__op_5__9() ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot> const& __cordl_internal_get__root_5__6() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>& __cordl_internal_get__root_5__6() ;

constexpr ::StringW const& __cordl_internal_get__sceneAddress_5__10() const;

constexpr ::StringW& __cordl_internal_get__sceneAddress_5__10() ;

constexpr ::Fusion::NetworkLoadSceneParameters const& __cordl_internal_get_sceneParams() const;

constexpr ::Fusion::NetworkLoadSceneParameters& __cordl_internal_get_sceneParams() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  value) ;

constexpr void __cordl_internal_set___7__wrap4(::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>  value) ;

constexpr void __cordl_internal_set___8__1(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*  value) ;

constexpr void __cordl_internal_set__candidate_5__7(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set__i_5__8(int32_t  value) ;

constexpr void __cordl_internal_set__loadSceneMode_5__4(::UnityEngine::SceneManagement::LoadSceneMode  value) ;

constexpr void __cordl_internal_set__localPhysicsMode_5__3(::UnityEngine::SceneManagement::LocalPhysicsMode  value) ;

constexpr void __cordl_internal_set__op_5__11(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  value) ;

constexpr void __cordl_internal_set__op_5__9(::UnityEngine::AsyncOperation*  value) ;

constexpr void __cordl_internal_set__root_5__6(::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  value) ;

constexpr void __cordl_internal_set__sceneAddress_5__10(::StringW  value) ;

constexpr void __cordl_internal_set_sceneParams(::Fusion::NetworkLoadSceneParameters  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

/// @brief Method <>m__Finally1, addr 0x60f3410, size 0x20, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x60f3390, size 0x80, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3, addr 0x60f3340, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally3() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x60f07b4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault__LoadSceneCoroutine_d__41() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault__LoadSceneCoroutine_d__41", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault__LoadSceneCoroutine_d__41(NetworkSceneManagerDefault__LoadSceneCoroutine_d__41 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault__LoadSceneCoroutine_d__41", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault__LoadSceneCoroutine_d__41(NetworkSceneManagerDefault__LoadSceneCoroutine_d__41 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23476};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault>  _____4__this;

/// @brief Field sceneRef, offset: 0x28, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

/// @brief Field sceneParams, offset: 0x2c, size: 0x2, def value: None
 ::Fusion::NetworkLoadSceneParameters  ___sceneParams;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0*  _____8__1;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope  _____7__wrap1;

/// @brief Field <localPhysicsMode>5__3, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::LocalPhysicsMode  ____localPhysicsMode_5__3;

/// @brief Field <loadSceneMode>5__4, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::LoadSceneMode  ____loadSceneMode_5__4;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>>  _____7__wrap4;

/// @brief Field <root>5__6, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot>  ____root_5__6;

/// @brief Field <candidate>5__7, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ____candidate_5__7;

/// @brief Field <i>5__8, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____i_5__8;

/// @brief Field <op>5__9, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  ____op_5__9;

/// @brief Field <sceneAddress>5__10, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____sceneAddress_5__10;

/// @brief Field <op>5__11, offset: 0x80, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  ____op_5__11;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ___sceneRef) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ___sceneParams) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____localPhysicsMode_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____loadSceneMode_5__4) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, _____7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____root_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____candidate_5__7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____i_5__8) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____op_5__9) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____sceneAddress_5__10) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41, ____op_5__11) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault__LoadSceneCoroutine_d__41) == 0x98, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/<>c__DisplayClass54_0
class CORDL_TYPE NetworkSceneManagerDefault___c__DisplayClass54_0 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  result;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>*  tcs;

static inline ::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0* New_ctor() ;

/// @brief Method <GetAddressableScenes>b__0, addr 0x60f1a90, size 0x2cc, virtual false, abstract: false, final false
inline void _GetAddressableScenes_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  op) ;

/// @brief Method <GetAddressableScenes>b__2, addr 0x60f1d5c, size 0x78, virtual false, abstract: false, final false
inline void _GetAddressableScenes_b__2() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& __cordl_internal_get_result() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>& __cordl_internal_get_result() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_result(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>*  value) ;

/// @brief Method .ctor, addr 0x60f1404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault___c__DisplayClass54_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault___c__DisplayClass54_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault___c__DisplayClass54_0(NetworkSceneManagerDefault___c__DisplayClass54_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault___c__DisplayClass54_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault___c__DisplayClass54_0(NetworkSceneManagerDefault___c__DisplayClass54_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23475};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<::StringW>>*  ___tcs;

/// @brief Field result, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0, ___result) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass54_0) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.SceneRef, System.Object, UnityEngine.SceneManagement.Scene
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/<>c__DisplayClass41_0
class CORDL_TYPE NetworkSceneManagerDefault___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::NetworkSceneManagerDefault>  __4__this;

/// @brief Field scene, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_scene, put=__cordl_internal_set_scene)) ::UnityEngine::SceneManagement::Scene  scene;

/// @brief Field sceneRef, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

static inline ::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <LoadSceneCoroutine>b__0, addr 0x60f1988, size 0xac, virtual false, abstract: false, final false
inline void _LoadSceneCoroutine_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  op) ;

/// @brief Method <LoadSceneCoroutine>b__1, addr 0x60f1a34, size 0x5c, virtual false, abstract: false, final false
inline void _LoadSceneCoroutine_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _) ;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::NetworkSceneManagerDefault>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_scene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_scene() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::NetworkSceneManagerDefault>  value) ;

constexpr void __cordl_internal_set_scene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

/// @brief Method .ctor, addr 0x60f1980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault___c__DisplayClass41_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault___c__DisplayClass41_0(NetworkSceneManagerDefault___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault___c__DisplayClass41_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault___c__DisplayClass41_0(NetworkSceneManagerDefault___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23474};

/// @brief Field scene, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___scene;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault>  _____4__this;

/// @brief Field sceneRef, offset: 0x20, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0, ___scene) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0, ___sceneRef) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault___c__DisplayClass41_0) == 0x28, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/<>c
class CORDL_TYPE NetworkSceneManagerDefault___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkSceneManagerDefault___c*  __9;

/// @brief Field <>9__26_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_1, put=setStaticF___9__26_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>*  __9__26_1;

/// @brief Field <>9__54_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_1, put=setStaticF___9__54_1)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  __9__54_1;

static inline ::Fusion::NetworkSceneManagerDefault___c* New_ctor() ;

/// @brief Method <GetAddressableScenes>b__54_1, addr 0x60f18e0, size 0xa0, virtual false, abstract: false, final false
inline ::StringW _GetAddressableScenes_b__54_1(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  x) ;

/// @brief Method <Shutdown>b__26_1, addr 0x60f18a4, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene _Shutdown_b__26_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>  x) ;

/// @brief Method <.cctor>b__24_0, addr 0x60f1824, size 0x80, virtual false, abstract: false, final false
inline void __cctor_b__24_0(::UnityEngine::SceneManagement::Scene  s) ;

/// @brief Method .ctor, addr 0x60f181c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkSceneManagerDefault___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>* getStaticF___9__26_1() ;

static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* getStaticF___9__54_1() ;

static inline void setStaticF___9(::Fusion::NetworkSceneManagerDefault___c*  value) ;

static inline void setStaticF___9__26_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::SceneManagement::Scene,::UnityW<::Fusion::NetworkSceneManagerDefault>>,::UnityEngine::SceneManagement::Scene>*  value) ;

static inline void setStaticF___9__54_1(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault___c(NetworkSceneManagerDefault___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault___c(NetworkSceneManagerDefault___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkSceneManagerDefault___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.SceneRef, UnityEngine.MonoBehaviour, UnityEngine.SceneManagement.Scene
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDefault/MultiPeerSceneRoot
class CORDL_TYPE NetworkSceneManagerDefault_MultiPeerSceneRoot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Scene, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scene, put=__cordl_internal_set_Scene)) ::UnityEngine::SceneManagement::Scene  Scene;

/// @brief Field SceneHandle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_SceneHandle, put=__cordl_internal_set_SceneHandle)) int32_t  SceneHandle;

/// @brief Field ScenePath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScenePath, put=__cordl_internal_set_ScenePath)) ::StringW  ScenePath;

/// @brief Field SceneRef, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SceneRef, put=__cordl_internal_set_SceneRef)) ::Fusion::SceneRef  SceneRef;

static inline ::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot* New_ctor() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_Scene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_Scene() ;

constexpr int32_t const& __cordl_internal_get_SceneHandle() const;

constexpr int32_t& __cordl_internal_get_SceneHandle() ;

constexpr ::StringW const& __cordl_internal_get_ScenePath() const;

constexpr ::StringW& __cordl_internal_get_ScenePath() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_SceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_SceneRef() ;

constexpr void __cordl_internal_set_Scene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_SceneHandle(int32_t  value) ;

constexpr void __cordl_internal_set_ScenePath(::StringW  value) ;

constexpr void __cordl_internal_set_SceneRef(::Fusion::SceneRef  value) ;

/// @brief Method .ctor, addr 0x60f1794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault_MultiPeerSceneRoot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault_MultiPeerSceneRoot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDefault_MultiPeerSceneRoot(NetworkSceneManagerDefault_MultiPeerSceneRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDefault_MultiPeerSceneRoot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDefault_MultiPeerSceneRoot(NetworkSceneManagerDefault_MultiPeerSceneRoot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23471};

/// @brief Field SceneRef, offset: 0x20, size: 0x4, def value: None
 ::Fusion::SceneRef  ___SceneRef;

/// @brief Field ScenePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ScenePath;

/// @brief Field SceneHandle, offset: 0x30, size: 0x4, def value: None
 int32_t  ___SceneHandle;

/// @brief Field Scene, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___Scene;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot, ___SceneRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot, ___ScenePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot, ___SceneHandle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot, ___Scene) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneManagerDefault_MultiPeerSceneRoot) == 0x38, "Size mismatch!");

} // namespace end def Fusion
