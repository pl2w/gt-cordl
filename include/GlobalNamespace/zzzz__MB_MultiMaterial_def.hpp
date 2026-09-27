#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MultiMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MB_MultiMaterial)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_MultiMaterial;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_MultiMaterial*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_MultiMaterial*, "", "MB_MultiMaterial");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_MultiMaterial
class CORDL_TYPE MB_MultiMaterial : public ::System::Object {
public:
// Declarations
/// @brief Field combinedMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedMaterial, put=__cordl_internal_set_combinedMaterial)) ::UnityW<::UnityEngine::Material>  combinedMaterial;

/// @brief Field considerMeshUVs, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_considerMeshUVs, put=__cordl_internal_set_considerMeshUVs)) bool  considerMeshUVs;

/// @brief Field sourceMaterials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterials, put=__cordl_internal_set_sourceMaterials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  sourceMaterials;

static inline ::GlobalNamespace::MB_MultiMaterial* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_combinedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_combinedMaterial() ;

constexpr bool const& __cordl_internal_get_considerMeshUVs() const;

constexpr bool& __cordl_internal_get_considerMeshUVs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_sourceMaterials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_sourceMaterials() ;

constexpr void __cordl_internal_set_combinedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_considerMeshUVs(bool  value) ;

constexpr void __cordl_internal_set_sourceMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

/// @brief Method .ctor, addr 0x9d7224c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_MultiMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_MultiMaterial", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_MultiMaterial(MB_MultiMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_MultiMaterial", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_MultiMaterial(MB_MultiMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22550};

/// @brief Field combinedMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___combinedMaterial;

/// @brief Field considerMeshUVs, offset: 0x18, size: 0x1, def value: None
 bool  ___considerMeshUVs;

/// [NonReorderable]
/// @brief Field sourceMaterials, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___sourceMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_MultiMaterial, ___combinedMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MultiMaterial, ___considerMeshUVs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MultiMaterial, ___sourceMaterials) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_MultiMaterial) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
