#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayResultMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MB_TextureArrayResultMaterial)
// Forward declare root types
namespace GlobalNamespace {
class MB_TextureArrayResultMaterial;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TextureArrayResultMaterial*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TextureArrayResultMaterial*, "", "MB_TextureArrayResultMaterial");
// Dependencies MB_AtlasesAndRects, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TextureArrayResultMaterial
class CORDL_TYPE MB_TextureArrayResultMaterial : public ::System::Object {
public:
// Declarations
/// @brief Field slices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_slices, put=__cordl_internal_set_slices)) ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  slices;

static inline ::GlobalNamespace::MB_TextureArrayResultMaterial* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> const& __cordl_internal_get_slices() const;

constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>& __cordl_internal_get_slices() ;

constexpr void __cordl_internal_set_slices(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  value) ;

/// @brief Method .ctor, addr 0x9d72244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureArrayResultMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayResultMaterial", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureArrayResultMaterial(MB_TextureArrayResultMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureArrayResultMaterial", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureArrayResultMaterial(MB_TextureArrayResultMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22549};

/// @brief Field slices, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  ___slices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TextureArrayResultMaterial, ___slices) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TextureArrayResultMaterial) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
