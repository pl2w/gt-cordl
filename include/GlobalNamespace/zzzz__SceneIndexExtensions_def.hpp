#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneIndexExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneIndexExtensions)
namespace GlobalNamespace {
struct SceneIndex;
}
namespace System {
class Action;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneIndexExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SceneIndexExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SceneIndexExtensions*, "", "SceneIndexExtensions");
// [Extension]
// Dependencies System.Collections.Generic.List`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneIndexExtensions
class CORDL_TYPE SceneIndexExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field onSceneLoadCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onSceneLoadCallbacks, put=setStaticF_onSceneLoadCallbacks)) ::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>  onSceneLoadCallbacks;

/// @brief Field onSceneUnloadCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onSceneUnloadCallbacks, put=setStaticF_onSceneUnloadCallbacks)) ::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>  onSceneUnloadCallbacks;

/// [Extension]
/// @brief Method AddCallbackOnSceneLoad, addr 0x56b9988, size 0x284, virtual false, abstract: false, final false
static inline void AddCallbackOnSceneLoad(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback) ;

/// [Extension]
/// @brief Method AddCallbackOnSceneUnload, addr 0x56b9e44, size 0x280, virtual false, abstract: false, final false
static inline void AddCallbackOnSceneUnload(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback) ;

/// [Extension]
/// @brief Method GetSceneIndex, addr 0x56b9890, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SceneIndex GetSceneIndex(::UnityEngine::Component*  cmp) ;

/// [Extension]
/// @brief Method GetSceneIndex, addr 0x56b9860, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SceneIndex GetSceneIndex(::UnityEngine::GameObject*  obj) ;

/// [Extension]
/// @brief Method GetSceneIndex, addr 0x56b9844, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SceneIndex GetSceneIndex(::UnityEngine::SceneManagement::Scene  scene) ;

/// [Extension]
/// @brief Method GetSceneName, addr 0x56b98cc, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW GetSceneName(::GlobalNamespace::SceneIndex  sceneIndex) ;

/// @brief Method OnSceneLoad, addr 0x56b9cb4, size 0x190, virtual false, abstract: false, final false
static inline void OnSceneLoad(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method OnSceneUnload, addr 0x56ba15c, size 0x190, virtual false, abstract: false, final false
static inline void OnSceneUnload(::UnityEngine::SceneManagement::Scene  scene) ;

/// [Extension]
/// @brief Method RemoveCallbackOnSceneLoad, addr 0x56b9c0c, size 0xa8, virtual false, abstract: false, final false
static inline void RemoveCallbackOnSceneLoad(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback) ;

/// [Extension]
/// @brief Method RemoveCallbackOnSceneUnload, addr 0x56ba0c4, size 0x98, virtual false, abstract: false, final false
static inline void RemoveCallbackOnSceneUnload(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback) ;

/// [OnEnterPlay_Run]
/// @brief Method Reset, addr 0x56ba2ec, size 0x164, virtual false, abstract: false, final false
static inline void Reset() ;

static inline ::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*> getStaticF_onSceneLoadCallbacks() ;

static inline ::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*> getStaticF_onSceneUnloadCallbacks() ;

static inline void setStaticF_onSceneLoadCallbacks(::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>  value) ;

static inline void setStaticF_onSceneUnloadCallbacks(::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneIndexExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneIndexExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneIndexExtensions(SceneIndexExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneIndexExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneIndexExtensions(SceneIndexExtensions const& ) = delete;

/// @brief Field SceneIndex_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  SceneIndex_COUNT{static_cast<int32_t>(0x19)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SceneIndexExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
