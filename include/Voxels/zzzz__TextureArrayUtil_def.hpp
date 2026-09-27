#pragma once
// IWYU pragma private; include "Voxels/TextureArrayUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Voxels/zzzz__TextureEntry_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextureArrayUtil)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Voxels {
class TextureArrayUtil;
}
// Write type traits
MARK_REF_T(::Voxels::TextureArrayUtil*);
DEFINE_IL2CPP_CLASS(::Voxels::TextureArrayUtil*, "Voxels", "TextureArrayUtil");
// Dependencies UnityEngine.MonoBehaviour, Voxels.TextureEntry
namespace Voxels {
// Is value type: false
// CS Name: Voxels.TextureArrayUtil
class CORDL_TYPE TextureArrayUtil : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TexturesReadable)) bool  TexturesReadable;

 __declspec(property(get=get_UnreadableTextureFound)) bool  UnreadableTextureFound;

/// @brief Field diffuseArray, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_diffuseArray, put=__cordl_internal_set_diffuseArray)) ::UnityW<::UnityEngine::Texture2DArray>  diffuseArray;

/// @brief Field diffuseName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_diffuseName, put=__cordl_internal_set_diffuseName)) ::StringW  diffuseName;

/// @brief Field linearNormalMaps, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_linearNormalMaps, put=__cordl_internal_set_linearNormalMaps)) bool  linearNormalMaps;

/// @brief Field material, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field normalArray, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalArray, put=__cordl_internal_set_normalArray)) ::UnityW<::UnityEngine::Texture2DArray>  normalArray;

/// @brief Field normalName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalName, put=__cordl_internal_set_normalName)) ::StringW  normalName;

/// @brief Field textureEntries, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureEntries, put=__cordl_internal_set_textureEntries)) ::ArrayW<::Voxels::TextureEntry>  textureEntries;

/// @brief Method CreateTextureArray, addr 0x5db6b48, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2DArray> CreateTextureArray(::ArrayW<::UnityEngine::Texture2D*>  textures) ;

static inline ::Voxels::TextureArrayUtil* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get_diffuseArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get_diffuseArray() ;

constexpr ::StringW const& __cordl_internal_get_diffuseName() const;

constexpr ::StringW& __cordl_internal_get_diffuseName() ;

constexpr bool const& __cordl_internal_get_linearNormalMaps() const;

constexpr bool& __cordl_internal_get_linearNormalMaps() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get_normalArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get_normalArray() ;

constexpr ::StringW const& __cordl_internal_get_normalName() const;

constexpr ::StringW& __cordl_internal_get_normalName() ;

constexpr ::ArrayW<::Voxels::TextureEntry> const& __cordl_internal_get_textureEntries() const;

constexpr ::ArrayW<::Voxels::TextureEntry>& __cordl_internal_get_textureEntries() ;

constexpr void __cordl_internal_set_diffuseArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set_diffuseName(::StringW  value) ;

constexpr void __cordl_internal_set_linearNormalMaps(bool  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_normalArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set_normalName(::StringW  value) ;

constexpr void __cordl_internal_set_textureEntries(::ArrayW<::Voxels::TextureEntry>  value) ;

/// @brief Method .ctor, addr 0x5db6ce4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TexturesReadable, addr 0x5db6a34, size 0x114, virtual false, abstract: false, final false
inline bool get_TexturesReadable() ;

/// @brief Method get_UnreadableTextureFound, addr 0x5db6a1c, size 0x18, virtual false, abstract: false, final false
inline bool get_UnreadableTextureFound() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureArrayUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureArrayUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureArrayUtil(TextureArrayUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureArrayUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureArrayUtil(TextureArrayUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5045};

/// @brief Field textureEntries, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Voxels::TextureEntry>  ___textureEntries;

/// @brief Field diffuseArray, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ___diffuseArray;

/// @brief Field normalArray, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ___normalArray;

/// @brief Field material, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field linearNormalMaps, offset: 0x40, size: 0x1, def value: None
 bool  ___linearNormalMaps;

/// @brief Field diffuseName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___diffuseName;

/// @brief Field normalName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___normalName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::TextureArrayUtil, ___textureEntries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureArrayUtil, ___diffuseArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureArrayUtil, ___normalArray) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureArrayUtil, ___material) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureArrayUtil, ___linearNormalMaps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureArrayUtil, ___diffuseName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Voxels::TextureArrayUtil, ___normalName) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Voxels::TextureArrayUtil) == 0x58, "Size mismatch!");

} // namespace end def Voxels
