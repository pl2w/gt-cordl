#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_SkinnedMeshSceneController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_SkinnedMeshSceneController)
namespace GlobalNamespace {
class MB3_MeshBaker;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_SkinnedMeshSceneController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_SkinnedMeshSceneController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_SkinnedMeshSceneController*, "", "MB_SkinnedMeshSceneController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_SkinnedMeshSceneController
class CORDL_TYPE MB_SkinnedMeshSceneController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field glassesInstance, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_glassesInstance, put=__cordl_internal_set_glassesInstance)) ::UnityW<::UnityEngine::GameObject>  glassesInstance;

/// @brief Field glassesPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_glassesPrefab, put=__cordl_internal_set_glassesPrefab)) ::UnityW<::UnityEngine::GameObject>  glassesPrefab;

/// @brief Field hatInstance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatInstance, put=__cordl_internal_set_hatInstance)) ::UnityW<::UnityEngine::GameObject>  hatInstance;

/// @brief Field hatPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatPrefab, put=__cordl_internal_set_hatPrefab)) ::UnityW<::UnityEngine::GameObject>  hatPrefab;

/// @brief Field skinnedMeshBaker, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMeshBaker, put=__cordl_internal_set_skinnedMeshBaker)) ::UnityW<::GlobalNamespace::MB3_MeshBaker>  skinnedMeshBaker;

/// @brief Field swordInstance, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_swordInstance, put=__cordl_internal_set_swordInstance)) ::UnityW<::UnityEngine::GameObject>  swordInstance;

/// @brief Field swordPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_swordPrefab, put=__cordl_internal_set_swordPrefab)) ::UnityW<::UnityEngine::GameObject>  swordPrefab;

/// @brief Field targetCharacter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetCharacter, put=__cordl_internal_set_targetCharacter)) ::UnityW<::UnityEngine::GameObject>  targetCharacter;

/// @brief Field workerPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_workerPrefab, put=__cordl_internal_set_workerPrefab)) ::UnityW<::UnityEngine::GameObject>  workerPrefab;

static inline ::GlobalNamespace::MB_SkinnedMeshSceneController* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfdb24, size 0xe58, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method SearchHierarchyForBone, addr 0x9dfe97c, size 0x10c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> SearchHierarchyForBone(::UnityEngine::Transform*  current, ::StringW  name) ;

/// @brief Method Start, addr 0x9dfd8f0, size 0x234, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_glassesInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_glassesInstance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_glassesPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_glassesPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hatInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hatInstance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hatPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hatPrefab() ;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& __cordl_internal_get_skinnedMeshBaker() const;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& __cordl_internal_get_skinnedMeshBaker() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_swordInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_swordInstance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_swordPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_swordPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetCharacter() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetCharacter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_workerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_workerPrefab() ;

constexpr void __cordl_internal_set_glassesInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_glassesPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hatInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hatPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_skinnedMeshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value) ;

constexpr void __cordl_internal_set_swordInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_swordPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetCharacter(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_workerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9dfea88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_SkinnedMeshSceneController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_SkinnedMeshSceneController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_SkinnedMeshSceneController(MB_SkinnedMeshSceneController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_SkinnedMeshSceneController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_SkinnedMeshSceneController(MB_SkinnedMeshSceneController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32365};

/// @brief Field swordPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___swordPrefab;

/// @brief Field hatPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hatPrefab;

/// @brief Field glassesPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___glassesPrefab;

/// @brief Field workerPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___workerPrefab;

/// @brief Field targetCharacter, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetCharacter;

/// @brief Field skinnedMeshBaker, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_MeshBaker>  ___skinnedMeshBaker;

/// @brief Field swordInstance, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___swordInstance;

/// @brief Field glassesInstance, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___glassesInstance;

/// @brief Field hatInstance, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hatInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___swordPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___hatPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___glassesPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___workerPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___targetCharacter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___skinnedMeshBaker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___swordInstance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___glassesInstance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_SkinnedMeshSceneController, ___hatInstance) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_SkinnedMeshSceneController) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
