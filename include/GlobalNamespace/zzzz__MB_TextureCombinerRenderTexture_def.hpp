#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureCombinerRenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_TextureCombinerRenderTexture)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
class MeshBakerMaterialTexture;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_TextureCombinerRenderTexture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TextureCombinerRenderTexture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TextureCombinerRenderTexture*, "", "MB_TextureCombinerRenderTexture");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TextureCombinerRenderTexture
class CORDL_TYPE MB_TextureCombinerRenderTexture : public ::System::Object {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _destinationTexture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__destinationTexture, put=__cordl_internal_set__destinationTexture)) ::UnityW<::UnityEngine::RenderTexture>  _destinationTexture;

/// @brief Field _doRenderAtlas, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get__doRenderAtlas, put=__cordl_internal_set__doRenderAtlas)) bool  _doRenderAtlas;

/// @brief Field _fixOutOfBoundsUVs, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__fixOutOfBoundsUVs, put=__cordl_internal_set__fixOutOfBoundsUVs)) bool  _fixOutOfBoundsUVs;

/// @brief Field _isNormalMap, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNormalMap, put=__cordl_internal_set__isNormalMap)) bool  _isNormalMap;

/// @brief Field _padding, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) int32_t  _padding;

/// @brief Field _resultMaterialTextureBlender, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__resultMaterialTextureBlender, put=__cordl_internal_set__resultMaterialTextureBlender)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  _resultMaterialTextureBlender;

/// @brief Field _texPropertyName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__texPropertyName, put=__cordl_internal_set__texPropertyName)) ::DigitalOpus::MB::Core::ShaderTextureProperty*  _texPropertyName;

/// @brief Field indexOfTexSetToRender, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_indexOfTexSetToRender, put=__cordl_internal_set_indexOfTexSetToRender)) int32_t  indexOfTexSetToRender;

/// @brief Field mat, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mat, put=__cordl_internal_set_mat)) ::UnityW<::UnityEngine::Material>  mat;

/// @brief Field myCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCamera, put=__cordl_internal_set_myCamera)) ::UnityW<::UnityEngine::Camera>  myCamera;

/// @brief Field rs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rs, put=__cordl_internal_set_rs)) ::ArrayW<::UnityEngine::Rect>  rs;

/// @brief Field targTex, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_targTex, put=__cordl_internal_set_targTex)) ::UnityW<::UnityEngine::Texture2D>  targTex;

/// @brief Field textureSets, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureSets, put=__cordl_internal_set_textureSets)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  textureSets;

/// @brief Method ConvertNormalFormatFromUnity_ToStandard, addr 0x9d71f4c, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 ConvertNormalFormatFromUnity_ToStandard(::UnityEngine::Color32  c) ;

/// @brief Method ConvertRenderTextureToTexture2D, addr 0x9d7184c, size 0x3a8, virtual false, abstract: false, final false
static inline void ConvertRenderTextureToTexture2D(::UnityEngine::RenderTexture*  _destinationTexture, bool  yIsFlipped, bool  doLinearColorSpace, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL, ::UnityEngine::Texture2D*  tempTexture) ;

/// @brief Method CopyScaledAndTiledToAtlas, addr 0x9d70ef4, size 0x958, virtual false, abstract: false, final false
inline void CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  source, ::UnityEngine::Vector2  obUVoffset, ::UnityEngine::Vector2  obUVscale, ::UnityEngine::Rect  rec, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texturePropertyName, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMatTexBlender, bool  yIsFlipped) ;

/// @brief Method DoRenderAtlas, addr 0x9d6fdd0, size 0x6bc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> DoRenderAtlas(::UnityEngine::GameObject*  gameObject, int32_t  width, int32_t  height, int32_t  padding, ::ArrayW<::UnityEngine::Rect>  rss, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  textureSetss, int32_t  indexOfTexSetToRenders, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyname, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender, bool  isNormalMap, bool  fixOutOfBoundsUVs, bool  considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  texCombiner, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEV) ;

static inline ::GlobalNamespace::MB_TextureCombinerRenderTexture* New_ctor() ;

/// @brief Method OnRenderObject, addr 0x9d70578, size 0x868, virtual false, abstract: false, final false
inline void OnRenderObject() ;

/// @brief Method YisFlipped, addr 0x9d70de0, size 0x114, virtual false, abstract: false, final false
static inline bool YisFlipped(::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__destinationTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__destinationTexture() ;

constexpr bool const& __cordl_internal_get__doRenderAtlas() const;

constexpr bool& __cordl_internal_get__doRenderAtlas() ;

constexpr bool const& __cordl_internal_get__fixOutOfBoundsUVs() const;

constexpr bool& __cordl_internal_get__fixOutOfBoundsUVs() ;

constexpr bool const& __cordl_internal_get__isNormalMap() const;

constexpr bool& __cordl_internal_get__isNormalMap() ;

constexpr int32_t const& __cordl_internal_get__padding() const;

constexpr int32_t& __cordl_internal_get__padding() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& __cordl_internal_get__resultMaterialTextureBlender() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& __cordl_internal_get__resultMaterialTextureBlender() ;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& __cordl_internal_get__texPropertyName() const;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& __cordl_internal_get__texPropertyName() ;

constexpr int32_t const& __cordl_internal_get_indexOfTexSetToRender() const;

constexpr int32_t& __cordl_internal_get_indexOfTexSetToRender() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mat() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_myCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_myCamera() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_rs() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_rs() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_targTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_targTex() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* const& __cordl_internal_get_textureSets() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& __cordl_internal_get_textureSets() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__destinationTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__doRenderAtlas(bool  value) ;

constexpr void __cordl_internal_set__fixOutOfBoundsUVs(bool  value) ;

constexpr void __cordl_internal_set__isNormalMap(bool  value) ;

constexpr void __cordl_internal_set__padding(int32_t  value) ;

constexpr void __cordl_internal_set__resultMaterialTextureBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value) ;

constexpr void __cordl_internal_set__texPropertyName(::DigitalOpus::MB::Core::ShaderTextureProperty*  value) ;

constexpr void __cordl_internal_set_indexOfTexSetToRender(int32_t  value) ;

constexpr void __cordl_internal_set_mat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_myCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_rs(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_targTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_textureSets(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  value) ;

/// @brief Method .ctor, addr 0x9d72110, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _printTexture, addr 0x9d71bf4, size 0x358, virtual false, abstract: false, final false
static inline void _printTexture(::UnityEngine::Texture2D*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureCombinerRenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerRenderTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TextureCombinerRenderTexture(MB_TextureCombinerRenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TextureCombinerRenderTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TextureCombinerRenderTexture(MB_TextureCombinerRenderTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22546};

/// @brief Field LOG_LEVEL, offset: 0x10, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field mat, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mat;

/// @brief Field _destinationTexture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____destinationTexture;

/// @brief Field myCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___myCamera;

/// @brief Field _padding, offset: 0x30, size: 0x4, def value: None
 int32_t  ____padding;

/// @brief Field _isNormalMap, offset: 0x34, size: 0x1, def value: None
 bool  ____isNormalMap;

/// @brief Field _fixOutOfBoundsUVs, offset: 0x35, size: 0x1, def value: None
 bool  ____fixOutOfBoundsUVs;

/// @brief Field _doRenderAtlas, offset: 0x36, size: 0x1, def value: None
 bool  ____doRenderAtlas;

/// @brief Field rs, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___rs;

/// @brief Field textureSets, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  ___textureSets;

/// @brief Field indexOfTexSetToRender, offset: 0x48, size: 0x4, def value: None
 int32_t  ___indexOfTexSetToRender;

/// @brief Field _texPropertyName, offset: 0x50, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ShaderTextureProperty*  ____texPropertyName;

/// @brief Field _resultMaterialTextureBlender, offset: 0x58, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  ____resultMaterialTextureBlender;

/// @brief Field targTex, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___targTex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___LOG_LEVEL) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___mat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____destinationTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___myCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____isNormalMap) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____fixOutOfBoundsUVs) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____doRenderAtlas) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___rs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___textureSets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___indexOfTexSetToRender) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____texPropertyName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ____resultMaterialTextureBlender) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TextureCombinerRenderTexture, ___targTex) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TextureCombinerRenderTexture) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
