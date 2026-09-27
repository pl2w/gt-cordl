#pragma once
// IWYU pragma private; include "GlobalNamespace/UberCombinerPerMaterialMeshes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UberCombinerPerMaterialMeshes)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class UberCombinerPerMaterialMeshes;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UberCombinerPerMaterialMeshes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberCombinerPerMaterialMeshes*, "", "UberCombinerPerMaterialMeshes");
// Dependencies UnityEngine.GameObject, UnityEngine.Material, UnityEngine.MeshFilter, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberCombinerPerMaterialMeshes
class CORDL_TYPE UberCombinerPerMaterialMeshes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field deleteSelfOnPrefabBake, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_deleteSelfOnPrefabBake, put=__cordl_internal_set_deleteSelfOnPrefabBake)) bool  deleteSelfOnPrefabBake;

/// @brief Field filters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_filters, put=__cordl_internal_set_filters)) ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  filters;

/// @brief Field materials, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materials;

/// @brief Field objects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objects;

/// @brief Field renderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  renderers;

/// @brief Field rootObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootObject, put=__cordl_internal_set_rootObject)) ::UnityW<::UnityEngine::GameObject>  rootObject;

static inline ::GlobalNamespace::UberCombinerPerMaterialMeshes* New_ctor() ;

constexpr bool const& __cordl_internal_get_deleteSelfOnPrefabBake() const;

constexpr bool& __cordl_internal_get_deleteSelfOnPrefabBake() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>> const& __cordl_internal_get_filters() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>& __cordl_internal_get_filters() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_renderers() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rootObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rootObject() ;

constexpr void __cordl_internal_set_deleteSelfOnPrefabBake(bool  value) ;

constexpr void __cordl_internal_set_filters(::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  value) ;

constexpr void __cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_objects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_rootObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5b3d7b4, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberCombinerPerMaterialMeshes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberCombinerPerMaterialMeshes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberCombinerPerMaterialMeshes(UberCombinerPerMaterialMeshes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberCombinerPerMaterialMeshes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberCombinerPerMaterialMeshes(UberCombinerPerMaterialMeshes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3700};

/// @brief Field rootObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rootObject;

/// @brief Field deleteSelfOnPrefabBake, offset: 0x28, size: 0x1, def value: None
 bool  ___deleteSelfOnPrefabBake;

/// [Space]
/// @brief Field objects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objects;

/// @brief Field renderers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___renderers;

/// @brief Field filters, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  ___filters;

/// @brief Field materials, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UberCombinerPerMaterialMeshes, ___rootObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerPerMaterialMeshes, ___deleteSelfOnPrefabBake) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerPerMaterialMeshes, ___objects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerPerMaterialMeshes, ___renderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerPerMaterialMeshes, ___filters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberCombinerPerMaterialMeshes, ___materials) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UberCombinerPerMaterialMeshes) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
