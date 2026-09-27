#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManager)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine::SceneManagement {
struct CreateSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::SceneManagement::SceneManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::SceneManager*, "UnityEngine.SceneManagement", "SceneManager");
// [NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
// [RequiredByNativeCode]
// Dependencies System.Object
namespace UnityEngine::SceneManagement {
// Is value type: false
// CS Name: UnityEngine.SceneManagement.SceneManager
class CORDL_TYPE SceneManager : public ::System::Object {
public:
// Declarations
/// @brief Field activeSceneChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeSceneChanged, put=setStaticF_activeSceneChanged)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  activeSceneChanged;

/// @brief Field s_AllowLoadScene, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_AllowLoadScene, put=setStaticF_s_AllowLoadScene)) bool  s_AllowLoadScene;

/// @brief Field sceneLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneLoaded, put=setStaticF_sceneLoaded)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  sceneLoaded;

/// @brief Field sceneUnloaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneUnloaded, put=setStaticF_sceneUnloaded)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  sceneUnloaded;

/// @brief Method CreateScene, addr 0xb5fdd54, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene CreateScene(::StringW  sceneName) ;

/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeThrows]
/// @brief Method CreateScene, addr 0xb5fd0fc, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene CreateScene(/* [NotNull] */ ::StringW  sceneName, ::UnityEngine::SceneManagement::CreateSceneParameters  parameters) ;

/// @brief Method CreateScene_Injected, addr 0xb5fd288, size 0x54, virtual false, abstract: false, final false
static inline void CreateScene_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sceneName, ::by_ref<::UnityEngine::SceneManagement::CreateSceneParameters>  parameters, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret) ;

/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetActiveScene, addr 0xb5fcca0, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetActiveScene() ;

/// @brief Method GetActiveScene_Injected, addr 0xb5fcd1c, size 0x3c, virtual false, abstract: false, final false
static inline void GetActiveScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  ret) ;

/// [NativeThrows]
/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetSceneAt, addr 0xb5fd02c, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t  index) ;

/// @brief Method GetSceneAt_Injected, addr 0xb5fd0b8, size 0x44, virtual false, abstract: false, final false
static inline void GetSceneAt_Injected(int32_t  index, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method GetSceneByBuildIndex, addr 0xb5fcfc4, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetSceneByBuildIndex(int32_t  buildIndex) ;

/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetSceneByName, addr 0xb5fce10, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetSceneByName(::StringW  name) ;

/// @brief Method GetSceneByName_Injected, addr 0xb5fcf80, size 0x44, virtual false, abstract: false, final false
static inline void GetSceneByName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_ActiveSceneChanged, addr 0xb5fe3bc, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene  previousActiveScene, ::UnityEngine::SceneManagement::Scene  newActiveScene) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_SceneLoaded, addr 0xb5fe270, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_SceneUnloaded, addr 0xb5fe320, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// [RequiredByNativeCode]
/// @brief Method LoadFirstScene_Internal, addr 0xb5fd734, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool  async) ;

/// @brief Method LoadSceneAsync, addr 0xb5fddb4, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t  sceneBuildIndex, /* [DefaultValue("LoadSceneMode.Single")] */ ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method LoadSceneAsync, addr 0xb5fde20, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters) ;

/// [ExcludeFromDocs]
/// @brief Method LoadSceneAsync, addr 0xb5fdf5c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW  sceneName) ;

/// @brief Method LoadSceneAsync, addr 0xb5fde8c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW  sceneName, /* [DefaultValue("LoadSceneMode.Single")] */ ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method LoadSceneAsync, addr 0xb5fdef0, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters) ;

/// @brief Method LoadSceneAsyncNameIndexInternal, addr 0xb5fd3b4, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame) ;

/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeThrows]
/// @brief Method MergeScenes, addr 0xb5fd578, size 0x80, virtual false, abstract: false, final false
static inline void MergeScenes(::UnityEngine::SceneManagement::Scene  sourceScene, ::UnityEngine::SceneManagement::Scene  destinationScene) ;

/// @brief Method MergeScenes_Injected, addr 0xb5fd5f8, size 0x44, virtual false, abstract: false, final false
static inline void MergeScenes_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  sourceScene, ::by_ref<::UnityEngine::SceneManagement::Scene>  destinationScene) ;

/// [NativeThrows]
/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method MoveGameObjectToScene, addr 0xb5fd63c, size 0xb4, virtual false, abstract: false, final false
static inline void MoveGameObjectToScene(/* [NotNull] */ ::UnityEngine::GameObject*  go, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method MoveGameObjectToScene_Injected, addr 0xb5fd6f0, size 0x44, virtual false, abstract: false, final false
static inline void MoveGameObjectToScene_Injected(::System::IntPtr  go, ::by_ref<::UnityEngine::SceneManagement::Scene>  scene) ;

/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeThrows]
/// @brief Method SetActiveScene, addr 0xb5fcd58, size 0x7c, virtual false, abstract: false, final false
static inline bool SetActiveScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method SetActiveScene_Injected, addr 0xb5fcdd4, size 0x3c, virtual false, abstract: false, final false
static inline bool SetActiveScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  scene) ;

/// @brief Method UnloadSceneAsync, addr 0xb5fe0b0, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method UnloadSceneAsync, addr 0xb5fe20c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// @brief Method UnloadSceneAsync, addr 0xb5fdfb4, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(int32_t  sceneBuildIndex) ;

/// @brief Method UnloadSceneAsync, addr 0xb5fe108, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// @brief Method UnloadSceneAsync, addr 0xb5fe03c, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::StringW  sceneName) ;

/// @brief Method UnloadSceneAsync, addr 0xb5fe194, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeThrows]
/// @brief Method UnloadSceneAsyncInternal, addr 0xb5fd2dc, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// @brief Method UnloadSceneAsyncInternal_Injected, addr 0xb5fd370, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr UnloadSceneAsyncInternal_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  options) ;

/// @brief Method UnloadSceneNameIndexInternal, addr 0xb5fd490, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ::by_ref<bool>  outSuccess) ;

/// [CompilerGenerated]
/// @brief Method add_activeSceneChanged, addr 0xb5fdb6c, size 0xf4, virtual false, abstract: false, final false
static inline void add_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_sceneLoaded, addr 0xb5fd79c, size 0xf4, virtual false, abstract: false, final false
static inline void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_sceneUnloaded, addr 0xb5fd984, size 0xf4, virtual false, abstract: false, final false
static inline void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value) ;

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>* getStaticF_activeSceneChanged() ;

static inline bool getStaticF_s_AllowLoadScene() ;

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF_sceneLoaded() ;

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* getStaticF_sceneUnloaded() ;

/// [NativeMethod("GetLoadedSceneCount")]
/// [NativeHeader("Runtime/SceneManager/SceneManager.h")]
/// [StaticAccessor("GetSceneManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method get_loadedSceneCount, addr 0xb5fcc18, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_loadedSceneCount() ;

/// [StaticAccessor("GetSceneManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeMethod("GetSceneCount")]
/// [NativeHeader("Runtime/SceneManager/SceneManager.h")]
/// @brief Method get_sceneCount, addr 0xb5fcbf0, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_sceneCount() ;

/// @brief Method get_sceneCountInBuildSettings, addr 0xb5fcc40, size 0x60, virtual false, abstract: false, final false
static inline int32_t get_sceneCountInBuildSettings() ;

/// [CompilerGenerated]
/// @brief Method remove_activeSceneChanged, addr 0xb5fdc60, size 0xf4, virtual false, abstract: false, final false
static inline void remove_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_sceneLoaded, addr 0xb5fd890, size 0xf4, virtual false, abstract: false, final false
static inline void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_sceneUnloaded, addr 0xb5fda78, size 0xf4, virtual false, abstract: false, final false
static inline void remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value) ;

static inline void setStaticF_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>*  value) ;

static inline void setStaticF_s_AllowLoadScene(bool  value) ;

static inline void setStaticF_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::LoadSceneMode>*  value) ;

static inline void setStaticF_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneManager(SceneManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneManager(SceneManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15222};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SceneManagement::SceneManager) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
