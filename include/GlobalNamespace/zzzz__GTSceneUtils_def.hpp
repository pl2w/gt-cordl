#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSceneUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GTSceneUtils)
namespace GlobalNamespace {
class GTScene;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSceneUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSceneUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSceneUtils*, "", "GTSceneUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSceneUtils
class CORDL_TYPE GTSceneUtils : public ::System::Object {
public:
// Declarations
/// [Conditional("UNITY_EDITOR")]
/// @brief Method AddToBuild, addr 0x5b20d1c, size 0x4, virtual false, abstract: false, final false
static inline void AddToBuild(::GlobalNamespace::GTScene*  scene) ;

/// @brief Method Equals, addr 0x5b20d20, size 0x28, virtual false, abstract: false, final false
static inline bool Equals(::GlobalNamespace::GTScene*  x, ::UnityEngine::SceneManagement::Scene  y) ;

/// @brief Method ScenesInBuild, addr 0x5b20d48, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::GTScene*> ScenesInBuild() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method SyncBuildScenes, addr 0x5b20ddc, size 0x4, virtual false, abstract: false, final false
static inline void SyncBuildScenes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSceneUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSceneUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSceneUtils(GTSceneUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSceneUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSceneUtils(GTSceneUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3605};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTSceneUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
