#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TexArraySlice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MB_TexArraySlice)
namespace GlobalNamespace {
class MB_TexArraySliceRendererMatPair;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_TexArraySlice;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TexArraySlice*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TexArraySlice*, "", "MB_TexArraySlice");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TexArraySlice
class CORDL_TYPE MB_TexArraySlice : public ::System::Object {
public:
// Declarations
/// @brief Field considerMeshUVs, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_considerMeshUVs, put=__cordl_internal_set_considerMeshUVs)) bool  considerMeshUVs;

/// @brief Field sourceMaterials, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterials, put=__cordl_internal_set_sourceMaterials)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  sourceMaterials;

/// @brief Method ContainsMaterial, addr 0x9d722dc, size 0xe0, virtual false, abstract: false, final false
inline bool ContainsMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method ContainsMaterialAndMesh, addr 0x9d724b0, size 0x13c, virtual false, abstract: false, final false
inline bool ContainsMaterialAndMesh(::UnityEngine::Material*  mat, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method GetAllUsedMaterials, addr 0x9d725ec, size 0x134, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GetAllUsedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  usedMats) ;

/// @brief Method GetAllUsedRenderers, addr 0x9d72720, size 0x148, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetAllUsedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  allObjsFromTextureBaker) ;

/// @brief Method GetDistinctMaterials, addr 0x9d723bc, size 0xf4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* GetDistinctMaterials() ;

static inline ::GlobalNamespace::MB_TexArraySlice* New_ctor() ;

constexpr bool const& __cordl_internal_get_considerMeshUVs() const;

constexpr bool& __cordl_internal_get_considerMeshUVs() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>* const& __cordl_internal_get_sourceMaterials() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*& __cordl_internal_get_sourceMaterials() ;

constexpr void __cordl_internal_set_considerMeshUVs(bool  value) ;

constexpr void __cordl_internal_set_sourceMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  value) ;

/// @brief Method .ctor, addr 0x9d72868, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TexArraySlice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TexArraySlice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TexArraySlice(MB_TexArraySlice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexArraySlice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexArraySlice(MB_TexArraySlice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22552};

/// @brief Field considerMeshUVs, offset: 0x10, size: 0x1, def value: None
 bool  ___considerMeshUVs;

/// [NonReorderable]
/// @brief Field sourceMaterials, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>*  ___sourceMaterials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TexArraySlice, ___considerMeshUVs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TexArraySlice, ___sourceMaterials) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TexArraySlice) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
