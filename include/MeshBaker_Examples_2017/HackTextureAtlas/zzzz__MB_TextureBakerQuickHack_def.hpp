#pragma once
// IWYU pragma private; include "MeshBaker_Examples_2017/HackTextureAtlas/MB_TextureBakerQuickHack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_TextureBakerQuickHack)
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace MeshBaker_Examples_2017::HackTextureAtlas {
class MB_TextureBakerQuickHack;
}
// Write type traits
MARK_REF_T(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*);
DEFINE_IL2CPP_CLASS(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack*, "MeshBaker_Examples_2017.HackTextureAtlas", "MB_TextureBakerQuickHack");
// Dependencies UnityEngine.Material, UnityEngine.MonoBehaviour
namespace MeshBaker_Examples_2017::HackTextureAtlas {
// Is value type: false
// CS Name: MeshBaker_Examples_2017.HackTextureAtlas.MB_TextureBakerQuickHack
class CORDL_TYPE MB_TextureBakerQuickHack : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field albedoTexturePropertyName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_albedoTexturePropertyName, put=__cordl_internal_set_albedoTexturePropertyName)) ::StringW  albedoTexturePropertyName;

/// @brief Field atlasMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlasMaterial, put=__cordl_internal_set_atlasMaterial)) ::UnityW<::UnityEngine::Material>  atlasMaterial;

/// @brief Field atlasTexture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_atlasTexture, put=__cordl_internal_set_atlasTexture)) ::UnityW<::UnityEngine::Texture2D>  atlasTexture;

/// @brief Field colorTintPropertyName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorTintPropertyName, put=__cordl_internal_set_colorTintPropertyName)) ::StringW  colorTintPropertyName;

/// @brief Field materialBakeResult, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialBakeResult, put=__cordl_internal_set_materialBakeResult)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  materialBakeResult;

/// @brief Field shaderName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderName, put=__cordl_internal_set_shaderName)) ::StringW  shaderName;

/// @brief Field sourceMaterials, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterials, put=__cordl_internal_set_sourceMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  sourceMaterials;

/// [ContextMenu("Generate Material Bake Result")]
/// @brief Method CreateAtlas, addr 0x9dff204, size 0x114c, virtual false, abstract: false, final false
inline void CreateAtlas(::ArrayW<::UnityEngine::Material*>  passedInSourceMaterials) ;

static inline ::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_albedoTexturePropertyName() const;

constexpr ::StringW& __cordl_internal_get_albedoTexturePropertyName() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_atlasMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_atlasMaterial() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_atlasTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_atlasTexture() ;

constexpr ::StringW const& __cordl_internal_get_colorTintPropertyName() const;

constexpr ::StringW& __cordl_internal_get_colorTintPropertyName() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get_materialBakeResult() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get_materialBakeResult() ;

constexpr ::StringW const& __cordl_internal_get_shaderName() const;

constexpr ::StringW& __cordl_internal_get_shaderName() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_sourceMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_sourceMaterials() ;

constexpr void __cordl_internal_set_albedoTexturePropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_atlasMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_atlasTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_colorTintPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_materialBakeResult(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

constexpr void __cordl_internal_set_shaderName(::StringW  value) ;

constexpr void __cordl_internal_set_sourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x9e00ec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureBakerQuickHack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureBakerQuickHack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureBakerQuickHack(MB_TextureBakerQuickHack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureBakerQuickHack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureBakerQuickHack(MB_TextureBakerQuickHack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32370};

/// [Header("Hack Atlas Generation")]
/// @brief Field colorTintPropertyName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___colorTintPropertyName;

/// @brief Field albedoTexturePropertyName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___albedoTexturePropertyName;

/// @brief Field shaderName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___shaderName;

/// @brief Field sourceMaterials, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___sourceMaterials;

/// [Space(20)]
/// [Header("Generated Output")]
/// @brief Field materialBakeResult, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ___materialBakeResult;

/// @brief Field atlasMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___atlasMaterial;

/// @brief Field atlasTexture, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___atlasTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___colorTintPropertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___albedoTexturePropertyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___shaderName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___sourceMaterials) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___materialBakeResult) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___atlasMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack, ___atlasTexture) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack) == 0x58, "Size mismatch!");

} // namespace end def MeshBaker_Examples_2017::HackTextureAtlas
