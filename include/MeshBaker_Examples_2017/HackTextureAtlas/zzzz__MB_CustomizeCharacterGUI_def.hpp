#pragma once
// IWYU pragma private; include "MeshBaker_Examples_2017/HackTextureAtlas/MB_CustomizeCharacterGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_CustomizeCharacterGUI)
namespace GlobalNamespace {
class MB3_MeshBaker;
}
namespace MeshBaker_Examples_2017::HackTextureAtlas {
class MB_TextureBakerQuickHack;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace MeshBaker_Examples_2017::HackTextureAtlas {
class MB_CustomizeCharacterGUI;
}
// Write type traits
MARK_REF_T(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*);
DEFINE_IL2CPP_CLASS(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI*, "MeshBaker_Examples_2017.HackTextureAtlas", "MB_CustomizeCharacterGUI");
// Dependencies UnityEngine.GameObject, UnityEngine.Material, UnityEngine.MonoBehaviour
namespace MeshBaker_Examples_2017::HackTextureAtlas {
// Is value type: false
// CS Name: MeshBaker_Examples_2017.HackTextureAtlas.MB_CustomizeCharacterGUI
class CORDL_TYPE MB_CustomizeCharacterGUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field albedoTexturePropertyName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_albedoTexturePropertyName, put=__cordl_internal_set_albedoTexturePropertyName)) ::StringW  albedoTexturePropertyName;

/// @brief Field colorTintPropertyName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorTintPropertyName, put=__cordl_internal_set_colorTintPropertyName)) ::StringW  colorTintPropertyName;

/// @brief Field objectsToBeCombined, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToBeCombined, put=__cordl_internal_set_objectsToBeCombined)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objectsToBeCombined;

/// @brief Field shaderName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderName, put=__cordl_internal_set_shaderName)) ::StringW  shaderName;

/// @brief Field sourceMaterials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterials, put=__cordl_internal_set_sourceMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  sourceMaterials;

/// @brief Field targetMeshBaker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetMeshBaker, put=__cordl_internal_set_targetMeshBaker)) ::UnityW<::GlobalNamespace::MB3_MeshBaker>  targetMeshBaker;

/// @brief Field textureBakerQuickHack, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureBakerQuickHack, put=__cordl_internal_set_textureBakerQuickHack)) ::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack>  textureBakerQuickHack;

/// [ContextMenu("Bake Mesh Baker")]
/// @brief Method BakeMeshBaker, addr 0x9e00350, size 0x90, virtual false, abstract: false, final false
inline void BakeMeshBaker() ;

static inline ::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI* New_ctor() ;

/// @brief Method OnGUI, addr 0x9e003e0, size 0x974, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method SetColorInMaterialBakeResultAndBakeMeshBaker, addr 0x9e00d54, size 0x168, virtual false, abstract: false, final false
inline void SetColorInMaterialBakeResultAndBakeMeshBaker(::UnityEngine::Material*  bodyPartMaterial, ::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0x9dfef70, size 0x294, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get_albedoTexturePropertyName() const;

constexpr ::StringW& __cordl_internal_get_albedoTexturePropertyName() ;

constexpr ::StringW const& __cordl_internal_get_colorTintPropertyName() const;

constexpr ::StringW& __cordl_internal_get_colorTintPropertyName() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objectsToBeCombined() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objectsToBeCombined() ;

constexpr ::StringW const& __cordl_internal_get_shaderName() const;

constexpr ::StringW& __cordl_internal_get_shaderName() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_sourceMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_sourceMaterials() ;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& __cordl_internal_get_targetMeshBaker() const;

constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& __cordl_internal_get_targetMeshBaker() ;

constexpr ::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack> const& __cordl_internal_get_textureBakerQuickHack() const;

constexpr ::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack>& __cordl_internal_get_textureBakerQuickHack() ;

constexpr void __cordl_internal_set_albedoTexturePropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_colorTintPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_objectsToBeCombined(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_shaderName(::StringW  value) ;

constexpr void __cordl_internal_set_sourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_targetMeshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value) ;

constexpr void __cordl_internal_set_textureBakerQuickHack(::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack>  value) ;

/// @brief Method .ctor, addr 0x9e00ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_CustomizeCharacterGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_CustomizeCharacterGUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_CustomizeCharacterGUI(MB_CustomizeCharacterGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_CustomizeCharacterGUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_CustomizeCharacterGUI(MB_CustomizeCharacterGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32369};

/// @brief Field sourceMaterials, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___sourceMaterials;

/// @brief Field objectsToBeCombined, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objectsToBeCombined;

/// [Header("Mesh Baker Config")]
/// @brief Field targetMeshBaker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_MeshBaker>  ___targetMeshBaker;

/// @brief Field textureBakerQuickHack, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::MeshBaker_Examples_2017::HackTextureAtlas::MB_TextureBakerQuickHack>  ___textureBakerQuickHack;

/// @brief Field colorTintPropertyName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___colorTintPropertyName;

/// @brief Field albedoTexturePropertyName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___albedoTexturePropertyName;

/// @brief Field shaderName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___shaderName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___sourceMaterials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___objectsToBeCombined) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___targetMeshBaker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___textureBakerQuickHack) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___colorTintPropertyName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___albedoTexturePropertyName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI, ___shaderName) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MeshBaker_Examples_2017::HackTextureAtlas::MB_CustomizeCharacterGUI) == 0x58, "Size mismatch!");

} // namespace end def MeshBaker_Examples_2017::HackTextureAtlas
