#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MultiMaterialTexArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MB_MultiMaterialTexArray)
namespace GlobalNamespace {
class MB_TexArrayForProperty;
}
namespace GlobalNamespace {
class MB_TexArraySlice;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_MultiMaterialTexArray;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_MultiMaterialTexArray*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_MultiMaterialTexArray*, "", "MB_MultiMaterialTexArray");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_MultiMaterialTexArray
class CORDL_TYPE MB_MultiMaterialTexArray : public ::System::Object {
public:
// Declarations
/// @brief Field combinedMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedMaterial, put=__cordl_internal_set_combinedMaterial)) ::UnityW<::UnityEngine::Material>  combinedMaterial;

/// @brief Field slices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_slices, put=__cordl_internal_set_slices)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  slices;

/// @brief Field textureProperties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureProperties, put=__cordl_internal_set_textureProperties)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*  textureProperties;

static inline ::GlobalNamespace::MB_MultiMaterialTexArray* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_combinedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_combinedMaterial() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>* const& __cordl_internal_get_slices() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*& __cordl_internal_get_slices() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>* const& __cordl_internal_get_textureProperties() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*& __cordl_internal_get_textureProperties() ;

constexpr void __cordl_internal_set_combinedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_slices(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  value) ;

constexpr void __cordl_internal_set_textureProperties(::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*  value) ;

/// @brief Method .ctor, addr 0x9d729cc, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_MultiMaterialTexArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_MultiMaterialTexArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_MultiMaterialTexArray(MB_MultiMaterialTexArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_MultiMaterialTexArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_MultiMaterialTexArray(MB_MultiMaterialTexArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22555};

/// @brief Field combinedMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___combinedMaterial;

/// [NonReorderable]
/// @brief Field slices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArraySlice*>*  ___slices;

/// [NonReorderable]
/// @brief Field textureProperties, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB_TexArrayForProperty*>*  ___textureProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_MultiMaterialTexArray, ___combinedMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MultiMaterialTexArray, ___slices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MultiMaterialTexArray, ___textureProperties) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_MultiMaterialTexArray) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
