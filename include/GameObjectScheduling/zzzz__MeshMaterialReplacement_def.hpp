#pragma once
// IWYU pragma private; include "GameObjectScheduling/MeshMaterialReplacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MeshMaterialReplacement)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GameObjectScheduling {
class MeshMaterialReplacement;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::MeshMaterialReplacement*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::MeshMaterialReplacement*, "GameObjectScheduling", "MeshMaterialReplacement");
// [CreateAssetMenu(fileName = "New Mesh Material Replacement", menuName = "Game Object Scheduling/New Mesh Material Replacement", order = 1)]
// Dependencies UnityEngine.Material, UnityEngine.ScriptableObject
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.MeshMaterialReplacement
class CORDL_TYPE MeshMaterialReplacement : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field materials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materials;

/// @brief Field mesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

static inline ::GameObjectScheduling::MeshMaterialReplacement* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materials() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr void __cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x5de0d9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshMaterialReplacement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshMaterialReplacement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshMaterialReplacement(MeshMaterialReplacement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshMaterialReplacement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshMaterialReplacement(MeshMaterialReplacement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5130};

/// @brief Field mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field materials, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::MeshMaterialReplacement, ___mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::MeshMaterialReplacement, ___materials) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::MeshMaterialReplacement) == 0x28, "Size mismatch!");

} // namespace end def GameObjectScheduling
