#pragma once
// IWYU pragma private; include "Fusion/SceneLoadDoneArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SceneLoadDoneArgs)
namespace Fusion {
class NetworkObject;
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
// Forward declare root types
namespace Fusion {
struct SceneLoadDoneArgs;
}
// Write type traits
MARK_VAL_T(::Fusion::SceneLoadDoneArgs);
DEFINE_IL2CPP_CLASS(::Fusion::SceneLoadDoneArgs, "Fusion", "SceneLoadDoneArgs");
// [IsReadOnly]
// Dependencies Fusion.NetworkObject, Fusion.SceneRef, UnityEngine.GameObject, UnityEngine.SceneManagement.Scene
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SceneLoadDoneArgs
struct CORDL_TYPE SceneLoadDoneArgs {
public:
// Declarations
/// @brief Method .ctor, addr 0x5f7f15c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SceneRef  sceneRef, ::ArrayW<::Fusion::NetworkObject*>  sceneObjects, ::UnityEngine::SceneManagement::Scene  scene, ::ArrayW<::UnityEngine::GameObject*>  rootGameObjects) ;

// Ctor Parameters []
// @brief default ctor
constexpr SceneLoadDoneArgs() ;

// Ctor Parameters [CppParam { name: "SceneRef", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "SceneObjects", ty: "::ArrayW<::UnityW<::Fusion::NetworkObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None, comment: None }, CppParam { name: "RootGameObjects", ty: "::ArrayW<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }]
constexpr SceneLoadDoneArgs(::Fusion::SceneRef  SceneRef, ::ArrayW<::UnityW<::Fusion::NetworkObject>>  SceneObjects, ::UnityEngine::SceneManagement::Scene  Scene, ::ArrayW<::UnityW<::UnityEngine::GameObject>>  RootGameObjects) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field SceneRef, offset: 0x0, size: 0x4, def value: None
 ::Fusion::SceneRef  SceneRef;

/// @brief Field SceneObjects, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Fusion::NetworkObject>>  SceneObjects;

/// @brief Field Scene, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  Scene;

/// @brief Field RootGameObjects, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  RootGameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SceneLoadDoneArgs, SceneRef) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SceneLoadDoneArgs, SceneObjects) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SceneLoadDoneArgs, Scene) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SceneLoadDoneArgs, RootGameObjects) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::SceneLoadDoneArgs) == 0x20, "Size mismatch!");

} // namespace end def Fusion
