#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManagerAPIInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManagerAPIInternal)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManagerAPIInternal;
}
// Write type traits
MARK_REF_T(::UnityEngine::SceneManagement::SceneManagerAPIInternal*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::SceneManagerAPIInternal*, "UnityEngine.SceneManagement", "SceneManagerAPIInternal");
// [NativeHeader("Runtime/SceneManager/SceneManager.h")]
// [NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace UnityEngine::SceneManagement {
// Is value type: false
// CS Name: UnityEngine.SceneManagement.SceneManagerAPIInternal
class CORDL_TYPE SceneManagerAPIInternal : public ::System::Object {
public:
// Declarations
/// @brief Method GetNumScenesInBuildSettings, addr 0xb5fc43c, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetNumScenesInBuildSettings() ;

/// [NativeThrows]
/// @brief Method GetSceneByBuildIndex, addr 0xb5fc464, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::SceneManagement::Scene GetSceneByBuildIndex(int32_t  buildIndex) ;

/// @brief Method GetSceneByBuildIndex_Injected, addr 0xb5fc4b0, size 0x44, virtual false, abstract: false, final false
static inline void GetSceneByBuildIndex_Injected(int32_t  buildIndex, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret) ;

/// [NativeThrows]
/// @brief Method LoadSceneAsyncNameIndexInternal, addr 0xb5fc4f4, size 0x204, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame) ;

/// @brief Method LoadSceneAsyncNameIndexInternal_Injected, addr 0xb5fc6f8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadSceneAsyncNameIndexInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sceneName, int32_t  sceneBuildIndex, ::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>  parameters, bool  mustCompleteNextFrame) ;

/// [NativeThrows]
/// @brief Method UnloadSceneNameIndexInternal, addr 0xb5fc754, size 0x218, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ::by_ref<bool>  outSuccess) ;

/// @brief Method UnloadSceneNameIndexInternal_Injected, addr 0xb5fc96c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::IntPtr UnloadSceneNameIndexInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ::by_ref<bool>  outSuccess) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneManagerAPIInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPIInternal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneManagerAPIInternal(SceneManagerAPIInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPIInternal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneManagerAPIInternal(SceneManagerAPIInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SceneManagement::SceneManagerAPIInternal) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
