#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_AtlasPackerRenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_AtlasPackerRenderTexture)
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
class ShaderTextureProperty;
}
namespace GlobalNamespace {
class MB_TextureCombinerRenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_AtlasPackerRenderTexture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_AtlasPackerRenderTexture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_AtlasPackerRenderTexture*, "", "MB3_AtlasPackerRenderTexture");
// [ExecuteInEditMode]
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_AtlasPackerRenderTexture
class CORDL_TYPE MB3_AtlasPackerRenderTexture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LOG_LEVEL, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _doRenderAtlas, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__doRenderAtlas, put=__cordl_internal_set__doRenderAtlas)) bool  _doRenderAtlas;

/// @brief Field considerNonTextureProperties, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_considerNonTextureProperties, put=__cordl_internal_set_considerNonTextureProperties)) bool  considerNonTextureProperties;

/// @brief Field fastRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fastRenderer, put=__cordl_internal_set_fastRenderer)) ::GlobalNamespace::MB_TextureCombinerRenderTexture*  fastRenderer;

/// @brief Field fixOutOfBoundsUVs, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_fixOutOfBoundsUVs, put=__cordl_internal_set_fixOutOfBoundsUVs)) bool  fixOutOfBoundsUVs;

/// @brief Field height, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field indexOfTexSetToRender, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_indexOfTexSetToRender, put=__cordl_internal_set_indexOfTexSetToRender)) int32_t  indexOfTexSetToRender;

/// @brief Field isNormalMap, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNormalMap, put=__cordl_internal_set_isNormalMap)) bool  isNormalMap;

/// @brief Field padding, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_padding, put=__cordl_internal_set_padding)) int32_t  padding;

/// @brief Field rects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rects, put=__cordl_internal_set_rects)) ::ArrayW<::UnityEngine::Rect>  rects;

/// @brief Field resultMaterialTextureBlender, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterialTextureBlender, put=__cordl_internal_set_resultMaterialTextureBlender)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender;

/// @brief Field testMat, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_testMat, put=__cordl_internal_set_testMat)) ::UnityW<::UnityEngine::Material>  testMat;

/// @brief Field testTex, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_testTex, put=__cordl_internal_set_testTex)) ::UnityW<::UnityEngine::Texture2D>  testTex;

/// @brief Field tex1, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tex1, put=__cordl_internal_set_tex1)) ::UnityW<::UnityEngine::Texture2D>  tex1;

/// @brief Field texPropertyName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropertyName, put=__cordl_internal_set_texPropertyName)) ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName;

/// @brief Field textureSets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureSets, put=__cordl_internal_set_textureSets)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  textureSets;

/// @brief Field width, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::GlobalNamespace::MB3_AtlasPackerRenderTexture* New_ctor() ;

/// @brief Method OnRenderAtlas, addr 0x9d72120, size 0xe0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> OnRenderAtlas(::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner) ;

/// @brief Method OnRenderObject, addr 0x9d72200, size 0x2c, virtual false, abstract: false, final false
inline void OnRenderObject() ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get__doRenderAtlas() const;

constexpr bool& __cordl_internal_get__doRenderAtlas() ;

constexpr bool const& __cordl_internal_get_considerNonTextureProperties() const;

constexpr bool& __cordl_internal_get_considerNonTextureProperties() ;

constexpr ::GlobalNamespace::MB_TextureCombinerRenderTexture* const& __cordl_internal_get_fastRenderer() const;

constexpr ::GlobalNamespace::MB_TextureCombinerRenderTexture*& __cordl_internal_get_fastRenderer() ;

constexpr bool const& __cordl_internal_get_fixOutOfBoundsUVs() const;

constexpr bool& __cordl_internal_get_fixOutOfBoundsUVs() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_indexOfTexSetToRender() const;

constexpr int32_t& __cordl_internal_get_indexOfTexSetToRender() ;

constexpr bool const& __cordl_internal_get_isNormalMap() const;

constexpr bool& __cordl_internal_get_isNormalMap() ;

constexpr int32_t const& __cordl_internal_get_padding() const;

constexpr int32_t& __cordl_internal_get_padding() ;

constexpr ::ArrayW<::UnityEngine::Rect> const& __cordl_internal_get_rects() const;

constexpr ::ArrayW<::UnityEngine::Rect>& __cordl_internal_get_rects() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& __cordl_internal_get_resultMaterialTextureBlender() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& __cordl_internal_get_resultMaterialTextureBlender() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_testMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_testMat() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_testTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_testTex() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_tex1() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_tex1() ;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty* const& __cordl_internal_get_texPropertyName() const;

constexpr ::DigitalOpus::MB::Core::ShaderTextureProperty*& __cordl_internal_get_texPropertyName() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* const& __cordl_internal_get_textureSets() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*& __cordl_internal_get_textureSets() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__doRenderAtlas(bool  value) ;

constexpr void __cordl_internal_set_considerNonTextureProperties(bool  value) ;

constexpr void __cordl_internal_set_fastRenderer(::GlobalNamespace::MB_TextureCombinerRenderTexture*  value) ;

constexpr void __cordl_internal_set_fixOutOfBoundsUVs(bool  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_indexOfTexSetToRender(int32_t  value) ;

constexpr void __cordl_internal_set_isNormalMap(bool  value) ;

constexpr void __cordl_internal_set_padding(int32_t  value) ;

constexpr void __cordl_internal_set_rects(::ArrayW<::UnityEngine::Rect>  value) ;

constexpr void __cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value) ;

constexpr void __cordl_internal_set_testMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_testTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_tex1(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_texPropertyName(::DigitalOpus::MB::Core::ShaderTextureProperty*  value) ;

constexpr void __cordl_internal_set_textureSets(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d7222c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AtlasPackerRenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AtlasPackerRenderTexture(MB3_AtlasPackerRenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AtlasPackerRenderTexture(MB3_AtlasPackerRenderTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22547};

/// @brief Field fastRenderer, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MB_TextureCombinerRenderTexture*  ___fastRenderer;

/// @brief Field _doRenderAtlas, offset: 0x28, size: 0x1, def value: None
 bool  ____doRenderAtlas;

/// @brief Field width, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x30, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field padding, offset: 0x34, size: 0x4, def value: None
 int32_t  ___padding;

/// @brief Field isNormalMap, offset: 0x38, size: 0x1, def value: None
 bool  ___isNormalMap;

/// @brief Field fixOutOfBoundsUVs, offset: 0x39, size: 0x1, def value: None
 bool  ___fixOutOfBoundsUVs;

/// @brief Field considerNonTextureProperties, offset: 0x3a, size: 0x1, def value: None
 bool  ___considerNonTextureProperties;

/// @brief Field resultMaterialTextureBlender, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  ___resultMaterialTextureBlender;

/// @brief Field rects, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rect>  ___rects;

/// @brief Field tex1, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___tex1;

/// @brief Field textureSets, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  ___textureSets;

/// @brief Field indexOfTexSetToRender, offset: 0x60, size: 0x4, def value: None
 int32_t  ___indexOfTexSetToRender;

/// @brief Field texPropertyName, offset: 0x68, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::ShaderTextureProperty*  ___texPropertyName;

/// @brief Field LOG_LEVEL, offset: 0x70, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field testTex, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___testTex;

/// @brief Field testMat, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___testMat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___fastRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ____doRenderAtlas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___width) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___height) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___padding) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___isNormalMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___fixOutOfBoundsUVs) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___considerNonTextureProperties) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___resultMaterialTextureBlender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___rects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___tex1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___textureSets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___indexOfTexSetToRender) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___texPropertyName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___LOG_LEVEL) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___testTex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_AtlasPackerRenderTexture, ___testMat) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_AtlasPackerRenderTexture) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
