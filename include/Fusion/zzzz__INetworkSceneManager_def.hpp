#pragma once
// IWYU pragma private; include "Fusion/INetworkSceneManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(INetworkSceneManager)
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
struct SceneRef;
}
namespace UnityEngine::SceneManagement {
struct Scene;
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
// Forward declare root types
namespace Fusion {
class INetworkSceneManager;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkSceneManager*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkSceneManager*, "Fusion", "INetworkSceneManager");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkSceneManager
class CORDL_TYPE INetworkSceneManager {
public:
// Declarations
 __declspec(property(get=get_IsBusy)) bool  IsBusy;

 __declspec(property(get=get_MainRunnerScene)) ::UnityEngine::SceneManagement::Scene  MainRunnerScene;

/// @brief Method GetSceneRef, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::SceneRef GetSceneRef(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetSceneRef, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::SceneRef GetSceneRef(::StringW  sceneNameOrPath) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize(::Fusion::NetworkRunner*  runner) ;

/// @brief Method IsRunnerScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsRunnerScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method LoadScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  parameters) ;

/// @brief Method MakeDontDestroyOnLoad, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj) ;

/// @brief Method MoveGameObjectToScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MoveGameObjectToScene(::UnityEngine::GameObject*  gameObject, ::Fusion::SceneRef  sceneRef) ;

/// @brief Method OnSceneInfoChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool OnSceneInfoChanged(::Fusion::NetworkSceneInfo  sceneInfo, ::Fusion::NetworkSceneInfoChangeSource  changeSource) ;

/// @brief Method Shutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Shutdown() ;

/// @brief Method TryGetPhysicsScene2D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetPhysicsScene2D(::by_ref<::UnityEngine::PhysicsScene2D>  scene2D) ;

/// @brief Method TryGetPhysicsScene3D, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetPhysicsScene3D(::by_ref<::UnityEngine::PhysicsScene>  scene3D) ;

/// @brief Method UnloadScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Fusion::NetworkSceneAsyncOp UnloadScene(::Fusion::SceneRef  sceneRef) ;

/// @brief Method get_IsBusy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsBusy() ;

/// @brief Method get_MainRunnerScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::SceneManagement::Scene get_MainRunnerScene() ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkSceneManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkSceneManager(INetworkSceneManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
