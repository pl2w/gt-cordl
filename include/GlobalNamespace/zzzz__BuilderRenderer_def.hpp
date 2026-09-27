#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderRenderer)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderRenderer_SetupInstanceDataForMeshStatic;
}
namespace GlobalNamespace {
struct BuilderRenderer_SetupInstanceDataForMesh;
}
namespace GlobalNamespace {
class BuilderTableDataRenderData;
}
namespace GlobalNamespace {
class BuilderTableDataRenderIndirectBatch;
}
namespace GlobalNamespace {
struct BuilderTableSubMesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2DArray;
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
namespace GlobalNamespace {
class BuilderRenderer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderRenderer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderRenderer*, "", "BuilderRenderer");
// Dependencies MonoBehaviourPostTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderRenderer
class CORDL_TYPE BuilderRenderer : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
using SetupInstanceDataForMesh = ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh;

using SetupInstanceDataForMeshStatic = ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic;

/// @brief Field built, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_built, put=__cordl_internal_set_built)) bool  built;

/// @brief Field initialized, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field meshRenderers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meshRenderers, put=setStaticF_meshRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  meshRenderers;

/// @brief Field normals, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_normals, put=setStaticF_normals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals;

/// @brief Field normalsAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_normalsAll, put=setStaticF_normalsAll)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normalsAll;

/// @brief Field renderData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderData, put=__cordl_internal_set_renderData)) ::GlobalNamespace::BuilderTableDataRenderData*  renderData;

/// @brief Field serializeMeshInstanceCount, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeMeshInstanceCount, put=__cordl_internal_set_serializeMeshInstanceCount)) ::System::Collections::Generic::List_1<int32_t>*  serializeMeshInstanceCount;

/// @brief Field serializeMeshToIndexKeys, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeMeshToIndexKeys, put=__cordl_internal_set_serializeMeshToIndexKeys)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  serializeMeshToIndexKeys;

/// @brief Field serializeMeshToIndexValues, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeMeshToIndexValues, put=__cordl_internal_set_serializeMeshToIndexValues)) ::System::Collections::Generic::List_1<int32_t>*  serializeMeshToIndexValues;

/// @brief Field serializeMeshes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeMeshes, put=__cordl_internal_set_serializeMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  serializeMeshes;

/// @brief Field serializePerTextureMaterial, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializePerTextureMaterial, put=__cordl_internal_set_serializePerTextureMaterial)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  serializePerTextureMaterial;

/// @brief Field serializePerTexturePropertyBlock, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializePerTexturePropertyBlock, put=__cordl_internal_set_serializePerTexturePropertyBlock)) ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  serializePerTexturePropertyBlock;

/// @brief Field serializeSharedMaterial, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeSharedMaterial, put=__cordl_internal_set_serializeSharedMaterial)) ::UnityW<::UnityEngine::Material>  serializeSharedMaterial;

/// @brief Field serializeSharedMaterialIndirect, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeSharedMaterialIndirect, put=__cordl_internal_set_serializeSharedMaterialIndirect)) ::UnityW<::UnityEngine::Material>  serializeSharedMaterialIndirect;

/// @brief Field serializeSharedMesh, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeSharedMesh, put=__cordl_internal_set_serializeSharedMesh)) ::UnityW<::UnityEngine::Mesh>  serializeSharedMesh;

/// @brief Field serializeSharedTexArray, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeSharedTexArray, put=__cordl_internal_set_serializeSharedTexArray)) ::UnityW<::UnityEngine::Texture2DArray>  serializeSharedTexArray;

/// @brief Field serializeSubMeshes, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeSubMeshes, put=__cordl_internal_set_serializeSubMeshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>*  serializeSubMeshes;

/// @brief Field serializeTextureToIndexKeys, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeTextureToIndexKeys, put=__cordl_internal_set_serializeTextureToIndexKeys)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  serializeTextureToIndexKeys;

/// @brief Field serializeTextureToIndexValues, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeTextureToIndexValues, put=__cordl_internal_set_serializeTextureToIndexValues)) ::System::Collections::Generic::List_1<int32_t>*  serializeTextureToIndexValues;

/// @brief Field serializeTextures, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializeTextures, put=__cordl_internal_set_serializeTextures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  serializeTextures;

/// @brief Field sharedMaterialBase, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMaterialBase, put=__cordl_internal_set_sharedMaterialBase)) ::UnityW<::UnityEngine::Material>  sharedMaterialBase;

/// @brief Field sharedMaterialIndirectBase, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMaterialIndirectBase, put=__cordl_internal_set_sharedMaterialIndirectBase)) ::UnityW<::UnityEngine::Material>  sharedMaterialIndirectBase;

/// @brief Field showing, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_showing, put=__cordl_internal_set_showing)) bool  showing;

/// @brief Field snapPieceShader, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapPieceShader, put=__cordl_internal_set_snapPieceShader)) ::UnityW<::UnityEngine::Shader>  snapPieceShader;

/// @brief Field triangles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_triangles, put=setStaticF_triangles)) ::System::Collections::Generic::List_1<int32_t>*  triangles;

/// @brief Field trianglesAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_trianglesAll, put=setStaticF_trianglesAll)) ::System::Collections::Generic::List_1<int32_t>*  trianglesAll;

/// @brief Field uv1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_uv1, put=setStaticF_uv1)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv1;

/// @brief Field uv1All, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_uv1All, put=setStaticF_uv1All)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv1All;

/// @brief Field vertices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vertices, put=setStaticF_vertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices;

/// @brief Field verticesAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticesAll, put=setStaticF_verticesAll)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verticesAll;

/// @brief Method AddMaterial, addr 0x57d42e4, size 0x7a8, virtual false, abstract: false, final false
inline bool AddMaterial(::UnityEngine::Material*  material, bool  suppressWarnings) ;

/// @brief Method AddPiece, addr 0x57c477c, size 0xbbc, virtual false, abstract: false, final false
inline void AddPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method AddPrefab, addr 0x57d1eb8, size 0x788, virtual false, abstract: false, final false
inline void AddPrefab(::GlobalNamespace::BuilderPiece*  prefab) ;

/// @brief Method ApplySerializedData, addr 0x57d3d70, size 0x574, virtual false, abstract: false, final false
inline void ApplySerializedData() ;

/// @brief Method Awake, addr 0x57d17a4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildBatch, addr 0x57d4a8c, size 0x68c, virtual false, abstract: false, final false
static inline void BuildBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch, int32_t  meshCount, int32_t  maxInstances, ::UnityEngine::Material*  sharedMaterialIndirect) ;

/// @brief Method BuildBuffer, addr 0x57d2fd8, size 0x124, virtual false, abstract: false, final false
inline void BuildBuffer() ;

/// @brief Method BuildRenderer, addr 0x57d1cb4, size 0x204, virtual false, abstract: false, final false
inline void BuildRenderer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  piecePrefabs) ;

/// @brief Method BuildSharedMaterial, addr 0x57d2640, size 0x45c, virtual false, abstract: false, final false
inline void BuildSharedMaterial() ;

/// @brief Method BuildSharedMesh, addr 0x57d2a9c, size 0x53c, virtual false, abstract: false, final false
inline void BuildSharedMesh() ;

/// @brief Method ChangePieceIndirectMaterial, addr 0x57c10e4, size 0x594, virtual false, abstract: false, final false
inline void ChangePieceIndirectMaterial(::GlobalNamespace::BuilderPiece*  piece, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  targetRenderers, ::UnityEngine::Material*  targetMaterial) ;

/// @brief Method DestroyBatch, addr 0x57d51e8, size 0x2e8, virtual false, abstract: false, final false
static inline void DestroyBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch) ;

/// @brief Method DestroyBuffer, addr 0x57d5174, size 0x74, virtual false, abstract: false, final false
inline void DestroyBuffer() ;

/// @brief Method InitIfNeeded, addr 0x57d17a8, size 0x504, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

/// @brief Method LogDraws, addr 0x57d30fc, size 0x268, virtual false, abstract: false, final false
inline void LogDraws() ;

static inline ::GlobalNamespace::BuilderRenderer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57d5118, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PostTick, addr 0x57d3364, size 0x18, virtual true, abstract: false, final false
inline void PostTick() ;

/// @brief Method PreRenderIndirect, addr 0x57d54d0, size 0x100, virtual false, abstract: false, final false
inline void PreRenderIndirect() ;

/// @brief Method RemoveAt, addr 0x57d584c, size 0x80, virtual false, abstract: false, final false
static inline void RemoveAt(::UnityEngine::Jobs::TransformAccessArray  a, int32_t  i) ;

/// @brief Method RemovePiece, addr 0x57c00dc, size 0x9c4, virtual false, abstract: false, final false
inline void RemovePiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RenderIndirect, addr 0x57d337c, size 0x38, virtual false, abstract: false, final false
inline void RenderIndirect() ;

/// @brief Method RenderIndirectBatch, addr 0x57d571c, size 0x130, virtual false, abstract: false, final false
inline void RenderIndirectBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch) ;

/// @brief Method SetPieceTint, addr 0x57c1d84, size 0x3d4, virtual false, abstract: false, final false
inline void SetPieceTint(::GlobalNamespace::BuilderPiece*  piece, float_t  tint) ;

/// @brief Method SetupIndirectBatchArgs, addr 0x57d55d0, size 0x14c, virtual false, abstract: false, final false
static inline void SetupIndirectBatchArgs(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch, ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>  subMeshes) ;

/// @brief Method Show, addr 0x57d1cac, size 0x8, virtual false, abstract: false, final false
inline void Show(bool  show) ;

/// @brief Method WriteSerializedData, addr 0x57d33b4, size 0x9bc, virtual false, abstract: false, final false
inline void WriteSerializedData() ;

constexpr bool const& __cordl_internal_get_built() const;

constexpr bool& __cordl_internal_get_built() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::GlobalNamespace::BuilderTableDataRenderData* const& __cordl_internal_get_renderData() const;

constexpr ::GlobalNamespace::BuilderTableDataRenderData*& __cordl_internal_get_renderData() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_serializeMeshInstanceCount() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_serializeMeshInstanceCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_serializeMeshToIndexKeys() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_serializeMeshToIndexKeys() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_serializeMeshToIndexValues() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_serializeMeshToIndexValues() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_serializeMeshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_serializeMeshes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_serializePerTextureMaterial() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_serializePerTextureMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& __cordl_internal_get_serializePerTexturePropertyBlock() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& __cordl_internal_get_serializePerTexturePropertyBlock() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_serializeSharedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_serializeSharedMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_serializeSharedMaterialIndirect() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_serializeSharedMaterialIndirect() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_serializeSharedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_serializeSharedMesh() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get_serializeSharedTexArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get_serializeSharedTexArray() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>* const& __cordl_internal_get_serializeSubMeshes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>*& __cordl_internal_get_serializeSubMeshes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_serializeTextureToIndexKeys() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_serializeTextureToIndexKeys() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_serializeTextureToIndexValues() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_serializeTextureToIndexValues() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_serializeTextures() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_serializeTextures() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sharedMaterialBase() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sharedMaterialBase() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sharedMaterialIndirectBase() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sharedMaterialIndirectBase() ;

constexpr bool const& __cordl_internal_get_showing() const;

constexpr bool& __cordl_internal_get_showing() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_snapPieceShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_snapPieceShader() ;

constexpr void __cordl_internal_set_built(bool  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_renderData(::GlobalNamespace::BuilderTableDataRenderData*  value) ;

constexpr void __cordl_internal_set_serializeMeshInstanceCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_serializeMeshToIndexKeys(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_serializeMeshToIndexValues(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_serializeMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_serializePerTextureMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_serializePerTexturePropertyBlock(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  value) ;

constexpr void __cordl_internal_set_serializeSharedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_serializeSharedMaterialIndirect(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_serializeSharedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_serializeSharedTexArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set_serializeSubMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>*  value) ;

constexpr void __cordl_internal_set_serializeTextureToIndexKeys(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_serializeTextureToIndexValues(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_serializeTextures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_sharedMaterialBase(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_sharedMaterialIndirectBase(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_showing(bool  value) ;

constexpr void __cordl_internal_set_snapPieceShader(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0x57d58cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* getStaticF_meshRenderers() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_normals() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_normalsAll() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_triangles() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_trianglesAll() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* getStaticF_uv1() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* getStaticF_uv1All() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_vertices() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_verticesAll() ;

static inline void setStaticF_meshRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

static inline void setStaticF_normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF_normalsAll(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF_triangles(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_trianglesAll(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_uv1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

static inline void setStaticF_uv1All(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

static inline void setStaticF_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF_verticesAll(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderRenderer(BuilderRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderRenderer(BuilderRenderer const& ) = delete;

/// @brief Field INSTANCES_PER_TRANSFORM offset 0xffffffff size 0x4
static constexpr int32_t  INSTANCES_PER_TRANSFORM{static_cast<int32_t>(0x1)};

/// @brief Field MAX_DYNAMIC_INSTANCES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DYNAMIC_INSTANCES{static_cast<int32_t>(0x2000)};

/// @brief Field MAX_STATIC_INSTANCES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_STATIC_INSTANCES{static_cast<int32_t>(0x2000)};

/// @brief Field MAX_TOTAL_TRIS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_TOTAL_TRIS{static_cast<int32_t>(0x10000)};

/// @brief Field MAX_TOTAL_VERTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_TOTAL_VERTS{static_cast<int32_t>(0x10000)};

/// @brief Field TEX_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  TEX_SIZE{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1623};

/// @brief Field texIndexPropName offset 0xffffffff size 0x8
static constexpr ::ConstString  texIndexPropName{u"_TexIndex"};

/// @brief Field textureArrayIndexPropName offset 0xffffffff size 0x8
static constexpr ::ConstString  textureArrayIndexPropName{u"_BaseMapArrayIndex"};

/// @brief Field textureArrayPropName offset 0xffffffff size 0x8
static constexpr ::ConstString  textureArrayPropName{u"_BaseMapArray"};

/// @brief Field texturePropName offset 0xffffffff size 0x8
static constexpr ::ConstString  texturePropName{u"_BaseMap"};

/// @brief Field tintPropName offset 0xffffffff size 0x8
static constexpr ::ConstString  tintPropName{u"_Tint"};

/// @brief Field transformMatrixPropName offset 0xffffffff size 0x8
static constexpr ::ConstString  transformMatrixPropName{u"_TransformMatrix"};

/// @brief Field sharedMaterialBase, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___sharedMaterialBase;

/// @brief Field sharedMaterialIndirectBase, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___sharedMaterialIndirectBase;

/// @brief Field snapPieceShader, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___snapPieceShader;

/// @brief Field renderData, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::BuilderTableDataRenderData*  ___renderData;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeMeshToIndexKeys, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___serializeMeshToIndexKeys;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeMeshToIndexValues, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___serializeMeshToIndexValues;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeMeshes, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___serializeMeshes;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeMeshInstanceCount, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___serializeMeshInstanceCount;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeSubMeshes, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>*  ___serializeSubMeshes;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeSharedMesh, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___serializeSharedMesh;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeTextureToIndexKeys, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___serializeTextureToIndexKeys;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeTextureToIndexValues, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___serializeTextureToIndexValues;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeTextures, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___serializeTextures;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializePerTextureMaterial, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___serializePerTextureMaterial;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializePerTexturePropertyBlock, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  ___serializePerTexturePropertyBlock;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeSharedTexArray, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ___serializeSharedTexArray;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeSharedMaterial, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___serializeSharedMaterial;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field serializeSharedMaterialIndirect, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___serializeSharedMaterialIndirect;

/// @brief Field initialized, offset: 0xb8, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field built, offset: 0xb9, size: 0x1, def value: None
 bool  ___built;

/// @brief Field showing, offset: 0xba, size: 0x1, def value: None
 bool  ___showing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___sharedMaterialBase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___sharedMaterialIndirectBase) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___snapPieceShader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___renderData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeMeshToIndexKeys) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeMeshToIndexValues) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeMeshes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeMeshInstanceCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeSubMeshes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeSharedMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeTextureToIndexKeys) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeTextureToIndexValues) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeTextures) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializePerTextureMaterial) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializePerTexturePropertyBlock) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeSharedTexArray) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeSharedMaterial) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___serializeSharedMaterialIndirect) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___initialized) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___built) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer, ___showing) == 0xba, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderRenderer) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
