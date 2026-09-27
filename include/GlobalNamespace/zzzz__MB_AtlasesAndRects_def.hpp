#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_AtlasesAndRects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_AtlasesAndRects)
namespace GlobalNamespace {
class MB_MaterialAndUVRect;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_AtlasesAndRects;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_AtlasesAndRects*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_AtlasesAndRects*, "", "MB_AtlasesAndRects");
// Dependencies System.Object, UnityEngine.Texture2D
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_AtlasesAndRects
class CORDL_TYPE MB_AtlasesAndRects : public ::System::Object {
public:
// Declarations
/// @brief Field atlases, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlases, put=__cordl_internal_set_atlases)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  atlases;

/// @brief Field mat2rect_map, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mat2rect_map, put=__cordl_internal_set_mat2rect_map)) ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*  mat2rect_map;

/// @brief Field texPropertyNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropertyNames, put=__cordl_internal_set_texPropertyNames)) ::ArrayW<::StringW>  texPropertyNames;

static inline ::GlobalNamespace::MB_AtlasesAndRects* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_atlases() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_atlases() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>* const& __cordl_internal_get_mat2rect_map() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*& __cordl_internal_get_mat2rect_map() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_texPropertyNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_texPropertyNames() ;

constexpr void __cordl_internal_set_atlases(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_mat2rect_map(::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*  value) ;

constexpr void __cordl_internal_set_texPropertyNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9d7223c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_AtlasesAndRects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_AtlasesAndRects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_AtlasesAndRects(MB_AtlasesAndRects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_AtlasesAndRects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_AtlasesAndRects(MB_AtlasesAndRects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22548};

/// @brief Field atlases, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___atlases;

/// @brief Field mat2rect_map, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MB_MaterialAndUVRect*>*  ___mat2rect_map;

/// @brief Field texPropertyNames, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___texPropertyNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_AtlasesAndRects, ___atlases) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_AtlasesAndRects, ___mat2rect_map) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_AtlasesAndRects, ___texPropertyNames) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_AtlasesAndRects) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
