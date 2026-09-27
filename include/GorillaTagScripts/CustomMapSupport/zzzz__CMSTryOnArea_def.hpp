#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTryOnArea.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CMSTryOnArea)
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSTryOnArea;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*, "GorillaTagScripts.CustomMapSupport", "CMSTryOnArea");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.SceneManagement.Scene
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSTryOnArea
class CORDL_TYPE CMSTryOnArea : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field originalScene, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalScene, put=__cordl_internal_set_originalScene)) ::UnityEngine::SceneManagement::Scene  originalScene;

/// @brief Field tryOnAreaCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryOnAreaCollider, put=__cordl_internal_set_tryOnAreaCollider)) ::UnityW<::UnityEngine::BoxCollider>  tryOnAreaCollider;

/// @brief Method InitializeForCustomMap, addr 0x5bdd454, size 0x9c, virtual false, abstract: false, final false
inline void InitializeForCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea, ::UnityEngine::SceneManagement::Scene  customMapScene) ;

/// @brief Method IsFromScene, addr 0x5bdd584, size 0x14, virtual false, abstract: false, final false
inline bool IsFromScene(::UnityEngine::SceneManagement::Scene  unloadingScene) ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea* New_ctor() ;

/// @brief Method RemoveFromCustomMap, addr 0x5bdd4f0, size 0x94, virtual false, abstract: false, final false
inline void RemoveFromCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea) ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_originalScene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_originalScene() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_tryOnAreaCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_tryOnAreaCollider() ;

constexpr void __cordl_internal_set_originalScene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_tryOnAreaCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

/// @brief Method .ctor, addr 0x5bdd598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSTryOnArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSTryOnArea", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSTryOnArea(CMSTryOnArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSTryOnArea", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSTryOnArea(CMSTryOnArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4034};

/// @brief Field originalScene, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___originalScene;

/// @brief Field tryOnAreaCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___tryOnAreaCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTryOnArea, ___originalScene) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTryOnArea, ___tryOnAreaCollider) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSTryOnArea) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
