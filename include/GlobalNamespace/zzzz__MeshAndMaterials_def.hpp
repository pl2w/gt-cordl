#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshAndMaterials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MeshAndMaterials)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MeshAndMaterials;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MeshAndMaterials*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshAndMaterials*, "", "MeshAndMaterials");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MeshAndMaterials
class CORDL_TYPE MeshAndMaterials : public ::System::Object {
public:
// Declarations
/// @brief Field meshRenderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field offMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_offMaterial, put=__cordl_internal_set_offMaterial)) ::UnityW<::UnityEngine::Material>  offMaterial;

/// @brief Field onMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaterial, put=__cordl_internal_set_onMaterial)) ::UnityW<::UnityEngine::Material>  onMaterial;

static inline ::GlobalNamespace::MeshAndMaterials* New_ctor() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_offMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_offMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_onMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_onMaterial() ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x58b8394, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshAndMaterials() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshAndMaterials", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshAndMaterials(MeshAndMaterials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshAndMaterials", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshAndMaterials(MeshAndMaterials const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2052};

/// @brief Field meshRenderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field offMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___offMaterial;

/// @brief Field onMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshAndMaterials, ___meshRenderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshAndMaterials, ___offMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshAndMaterials, ___onMaterial) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshAndMaterials) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
