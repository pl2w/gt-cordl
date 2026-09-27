#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneUtility)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::SceneManagement::SceneUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::SceneUtility*, "UnityEngine.SceneManagement", "SceneUtility");
// [NativeHeader("Runtime/Export/SceneManager/SceneUtility.bindings.h")]
// Dependencies System.Object
namespace UnityEngine::SceneManagement {
// Is value type: false
// CS Name: UnityEngine.SceneManagement.SceneUtility
class CORDL_TYPE SceneUtility : public ::System::Object {
public:
// Declarations
/// [StaticAccessor("SceneUtilityBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetBuildIndexByScenePath, addr 0xb5fe5ec, size 0x148, virtual false, abstract: false, final false
static inline int32_t GetBuildIndexByScenePath(::StringW  scenePath) ;

/// @brief Method GetBuildIndexByScenePath_Injected, addr 0xb5fe734, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetBuildIndexByScenePath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  scenePath) ;

/// [StaticAccessor("SceneUtilityBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetScenePathByBuildIndex, addr 0xb5fe4e0, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW GetScenePathByBuildIndex(int32_t  buildIndex) ;

/// @brief Method GetScenePathByBuildIndex_Injected, addr 0xb5fe5a8, size 0x44, virtual false, abstract: false, final false
static inline void GetScenePathByBuildIndex_Injected(int32_t  buildIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneUtility(SceneUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneUtility(SceneUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SceneManagement::SceneUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::SceneManagement
