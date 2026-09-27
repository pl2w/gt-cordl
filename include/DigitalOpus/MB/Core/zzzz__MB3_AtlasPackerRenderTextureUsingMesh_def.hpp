#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_AtlasPackerRenderTextureUsingMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_AtlasPackerRenderTextureUsingMesh)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas;
}
namespace DigitalOpus::MB::Core {
class MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
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
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_AtlasPackerRenderTextureUsingMesh;
}
namespace DigitalOpus::MB::Core {
class MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas;
}
namespace DigitalOpus::MB::Core {
class MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*, "DigitalOpus.MB.Core", "MB3_AtlasPackerRenderTextureUsingMesh");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas*, "DigitalOpus.MB.Core", "MB3_AtlasPackerRenderTextureUsingMesh/MeshAtlas");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*, "DigitalOpus.MB.Core", "MB3_AtlasPackerRenderTextureUsingMesh/MeshRectInfo");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AtlasPackerRenderTextureUsingMesh
class CORDL_TYPE MB3_AtlasPackerRenderTextureUsingMesh : public ::System::Object {
public:
// Declarations
using MeshAtlas = ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas;

using MeshRectInfo = ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo;

/// @brief Field LOG_LEVEL, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _camSetup, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__camSetup, put=__cordl_internal_set__camSetup)) bool  _camSetup;

/// @brief Field _initialized, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field camMaskLayer, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_camMaskLayer, put=__cordl_internal_set_camMaskLayer)) int32_t  camMaskLayer;

/// @brief Field height, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field padding, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_padding, put=__cordl_internal_set_padding)) int32_t  padding;

/// @brief Field width, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method DoRenderAtlas, addr 0x9ddae68, size 0x62c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> DoRenderAtlas(::UnityEngine::GameObject*  go, int32_t  width, int32_t  height, bool  isNormalMap, ::DigitalOpus::MB::Core::ShaderTextureProperty*  propertyName) ;

/// @brief Method Initialize, addr 0x9dd8f40, size 0x18, virtual false, abstract: false, final false
inline void Initialize(int32_t  camMaskLayer, int32_t  width, int32_t  height, int32_t  padding, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

static inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh* New_ctor() ;

/// @brief Method SetupCameraGameObject, addr 0x9dd8f58, size 0x1a0, virtual false, abstract: false, final false
inline void SetupCameraGameObject(::UnityEngine::GameObject*  camGameObject) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get__camSetup() const;

constexpr bool& __cordl_internal_get__camSetup() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr int32_t const& __cordl_internal_get_camMaskLayer() const;

constexpr int32_t& __cordl_internal_get_camMaskLayer() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_padding() const;

constexpr int32_t& __cordl_internal_get_padding() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__camSetup(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set_camMaskLayer(int32_t  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_padding(int32_t  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dda268, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AtlasPackerRenderTextureUsingMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTextureUsingMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AtlasPackerRenderTextureUsingMesh(MB3_AtlasPackerRenderTextureUsingMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTextureUsingMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AtlasPackerRenderTextureUsingMesh(MB3_AtlasPackerRenderTextureUsingMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22808};

/// @brief Field camMaskLayer, offset: 0x10, size: 0x4, def value: None
 int32_t  ___camMaskLayer;

/// @brief Field width, offset: 0x14, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x18, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field padding, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___padding;

/// @brief Field LOG_LEVEL, offset: 0x20, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field _initialized, offset: 0x24, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _camSetup, offset: 0x25, size: 0x1, def value: None
 bool  ____camSetup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ___camMaskLayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ___width) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ___height) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ___padding) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ___LOG_LEVEL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ____initialized) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh, ____camSetup) == 0x25, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AtlasPackerRenderTextureUsingMesh/MeshAtlas
class CORDL_TYPE MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas : public ::System::Object {
public:
// Declarations
/// @brief Method AddNineSlicedRect, addr 0x9ddb4e4, size 0x2d8, virtual false, abstract: false, final false
static inline void AddNineSlicedRect(::UnityEngine::Rect  atlasRectRaw, float_t  paddingX, float_t  paddingY, ::UnityEngine::Rect  srcUVRectt, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, ::System::Collections::Generic::List_1<int32_t>*  tris, float_t  srcTexWidth, float_t  srcTexHeight, ::StringW  texName) ;

/// @brief Method AddQuad, addr 0x9ddb940, size 0x664, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo* AddQuad(::UnityEngine::Rect  wldRect, ::UnityEngine::Rect  uvRect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, ::System::Collections::Generic::List_1<int32_t>*  tris) ;

/// @brief Method BuildAtlas, addr 0x9dda278, size 0xbf0, virtual false, abstract: false, final false
static inline void BuildAtlas(::DigitalOpus::MB::Core::AtlasPackingResult*  packedAtlasRects, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  distinctMaterialTextures, int32_t  propIdx, int32_t  atlasSizeX, int32_t  atlasSizeY, ::UnityEngine::Mesh*  m, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  generatedMats, ::DigitalOpus::MB::Core::ShaderTextureProperty*  property, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method ConfigureMaterial_DefaultPipeline, addr 0x9ddb7bc, size 0x184, virtual false, abstract: false, final false
static inline void ConfigureMaterial_DefaultPipeline(::UnityEngine::Material*  mt, ::UnityEngine::Texture2D*  t, bool  isSavingAsANormalMapAssetThatWillBeImported, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

static inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas* New_ctor() ;

/// @brief Method .ctor, addr 0x9ddbfa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas(MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas(MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AtlasPackerRenderTextureUsingMesh/MeshRectInfo
class CORDL_TYPE MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo : public ::System::Object {
public:
// Declarations
/// @brief Field atlasIdx, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_atlasIdx, put=__cordl_internal_set_atlasIdx)) int32_t  atlasIdx;

/// @brief Field triIdx, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_triIdx, put=__cordl_internal_set_triIdx)) int32_t  triIdx;

/// @brief Field vertIdx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertIdx, put=__cordl_internal_set_vertIdx)) int32_t  vertIdx;

static inline ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_atlasIdx() const;

constexpr int32_t& __cordl_internal_get_atlasIdx() ;

constexpr int32_t const& __cordl_internal_get_triIdx() const;

constexpr int32_t& __cordl_internal_get_triIdx() ;

constexpr int32_t const& __cordl_internal_get_vertIdx() const;

constexpr int32_t& __cordl_internal_get_vertIdx() ;

constexpr void __cordl_internal_set_atlasIdx(int32_t  value) ;

constexpr void __cordl_internal_set_triIdx(int32_t  value) ;

constexpr void __cordl_internal_set_vertIdx(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ddb4dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo(MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo(MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22806};

/// @brief Field vertIdx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___vertIdx;

/// @brief Field triIdx, offset: 0x14, size: 0x4, def value: None
 int32_t  ___triIdx;

/// @brief Field atlasIdx, offset: 0x18, size: 0x4, def value: None
 int32_t  ___atlasIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo, ___vertIdx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo, ___triIdx) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo, ___atlasIdx) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
