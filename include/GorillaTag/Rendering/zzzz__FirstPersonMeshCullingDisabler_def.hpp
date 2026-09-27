#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/FirstPersonMeshCullingDisabler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FirstPersonMeshCullingDisabler)
// Forward declare root types
namespace GorillaTag::Rendering {
class FirstPersonMeshCullingDisabler;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*, "GorillaTag.Rendering", "FirstPersonMeshCullingDisabler");
// Dependencies UnityEngine.Mesh, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.FirstPersonMeshCullingDisabler
class CORDL_TYPE FirstPersonMeshCullingDisabler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field meshes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::ArrayW<::UnityW<::UnityEngine::Mesh>>  meshes;

/// @brief Field xforms, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_xforms, put=__cordl_internal_set_xforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  xforms;

/// @brief Method Awake, addr 0x5d551ac, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Rendering::FirstPersonMeshCullingDisabler* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d55348, size 0x2c4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& __cordl_internal_get_meshes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& __cordl_internal_get_meshes() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_xforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_xforms() ;

constexpr void __cordl_internal_set_meshes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value) ;

constexpr void __cordl_internal_set_xforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5d5560c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirstPersonMeshCullingDisabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonMeshCullingDisabler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstPersonMeshCullingDisabler(FirstPersonMeshCullingDisabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstPersonMeshCullingDisabler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstPersonMeshCullingDisabler(FirstPersonMeshCullingDisabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4800};

/// @brief Field meshes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Mesh>>  ___meshes;

/// @brief Field xforms, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___xforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler, ___meshes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler, ___xforms) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
