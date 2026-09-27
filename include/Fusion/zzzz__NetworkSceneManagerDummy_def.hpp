#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDummy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkSceneManagerDummy)
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
class NetworkSceneManagerDummy;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkSceneManagerDummy*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneManagerDummy*, "Fusion", "NetworkSceneManagerDummy");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSceneManagerDummy
class CORDL_TYPE NetworkSceneManagerDummy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsBusy)) bool  IsBusy;

 __declspec(property(get=get_MainRunnerScene)) ::UnityEngine::SceneManagement::Scene  MainRunnerScene;

/// @brief Convert operator to "::Fusion::INetworkSceneManager"
constexpr operator  ::Fusion::INetworkSceneManager*() noexcept;

/// @brief Method GetSceneRef, addr 0x5fdefd4, size 0x38, virtual true, abstract: false, final true
inline ::Fusion::SceneRef GetSceneRef(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetSceneRef, addr 0x5fdf208, size 0x38, virtual true, abstract: false, final true
inline ::Fusion::SceneRef GetSceneRef(::StringW  sceneNameOrPath) ;

/// @brief Method Initialize, addr 0x5fdef34, size 0x4, virtual true, abstract: false, final true
inline void Initialize(::Fusion::NetworkRunner*  runner) ;

/// @brief Method IsRunnerScene, addr 0x5fdef94, size 0x8, virtual true, abstract: false, final true
inline bool IsRunnerScene(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method LoadScene, addr 0x5fdf194, size 0x38, virtual true, abstract: false, final true
inline ::Fusion::NetworkSceneAsyncOp LoadScene(::Fusion::SceneRef  sceneRef, ::Fusion::NetworkLoadSceneParameters  parameters) ;

/// @brief Method MakeDontDestroyOnLoad, addr 0x5fdf0d4, size 0x58, virtual true, abstract: false, final true
inline void MakeDontDestroyOnLoad(::UnityEngine::GameObject*  obj) ;

/// @brief Method MoveGameObjectToScene, addr 0x5fdef9c, size 0x38, virtual true, abstract: false, final true
inline bool MoveGameObjectToScene(::UnityEngine::GameObject*  gameObject, ::Fusion::SceneRef  sceneRef) ;

/// @brief Method MoveToRunnerScene, addr 0x5fdf12c, size 0x68, virtual false, abstract: false, final false
inline void MoveToRunnerScene(::UnityEngine::GameObject*  obj) ;

static inline ::Fusion::NetworkSceneManagerDummy* New_ctor() ;

/// @brief Method OnSceneInfoChanged, addr 0x5fdf240, size 0x8, virtual true, abstract: false, final true
inline bool OnSceneInfoChanged(::Fusion::NetworkSceneInfo  sceneInfo, ::Fusion::NetworkSceneInfoChangeSource  changeSource) ;

/// @brief Method OnSceneInfoChanged, addr 0x5fdf204, size 0x4, virtual false, abstract: false, final false
inline void OnSceneInfoChanged() ;

/// @brief Method Shutdown, addr 0x5fdef90, size 0x4, virtual true, abstract: false, final true
inline void Shutdown() ;

/// @brief Method TryGetPhysicsScene2D, addr 0x5fdf00c, size 0x64, virtual true, abstract: false, final true
inline bool TryGetPhysicsScene2D(::by_ref<::UnityEngine::PhysicsScene2D>  scene2D) ;

/// @brief Method TryGetPhysicsScene3D, addr 0x5fdf070, size 0x64, virtual true, abstract: false, final true
inline bool TryGetPhysicsScene3D(::by_ref<::UnityEngine::PhysicsScene>  scene3D) ;

/// @brief Method UnloadScene, addr 0x5fdf1cc, size 0x38, virtual true, abstract: false, final true
inline ::Fusion::NetworkSceneAsyncOp UnloadScene(::Fusion::SceneRef  sceneRef) ;

/// @brief Method .ctor, addr 0x5fdf248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsBusy, addr 0x5fdef38, size 0x8, virtual true, abstract: false, final true
inline bool get_IsBusy() ;

/// @brief Method get_MainRunnerScene, addr 0x5fdef40, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::SceneManagement::Scene get_MainRunnerScene() ;

/// @brief Convert to "::Fusion::INetworkSceneManager"
constexpr ::Fusion::INetworkSceneManager* i___Fusion__INetworkSceneManager() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDummy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDummy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSceneManagerDummy(NetworkSceneManagerDummy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSceneManagerDummy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSceneManagerDummy(NetworkSceneManagerDummy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkSceneManagerDummy) == 0x10, "Size mismatch!");

} // namespace end def Fusion
