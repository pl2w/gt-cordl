#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableDataRenderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderTableSubMesh_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableDataRenderData)
namespace GlobalNamespace {
class BuilderTableDataRenderIndirectBatch;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderTableDataRenderData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderTableDataRenderData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableDataRenderData*, "", "BuilderTableDataRenderData");
// Dependencies BuilderTableSubMesh, System.Object, Unity.Collections.NativeList`1<T>, Unity.Jobs.JobHandle, UnityEngine.TextureFormat
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderTableDataRenderData
class CORDL_TYPE BuilderTableDataRenderData : public ::System::Object {
public:
// Declarations
/// @brief Field dynamicBatch, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_dynamicBatch, put=__cordl_internal_set_dynamicBatch)) ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  dynamicBatch;

/// @brief Field materialToIndex, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialToIndex, put=__cordl_internal_set_materialToIndex)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>*  materialToIndex;

/// @brief Field materials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials;

/// @brief Field meshInstanceCount, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshInstanceCount, put=__cordl_internal_set_meshInstanceCount)) ::System::Collections::Generic::List_1<int32_t>*  meshInstanceCount;

/// @brief Field meshToIndex, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshToIndex, put=__cordl_internal_set_meshToIndex)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>*  meshToIndex;

/// @brief Field meshes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes;

/// @brief Field perTextureMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_perTextureMaterial, put=__cordl_internal_set_perTextureMaterial)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  perTextureMaterial;

/// @brief Field perTexturePropertyBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_perTexturePropertyBlock, put=__cordl_internal_set_perTexturePropertyBlock)) ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  perTexturePropertyBlock;

/// @brief Field setupInstancesJobs, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_setupInstancesJobs, put=__cordl_internal_set_setupInstancesJobs)) ::Unity::Jobs::JobHandle  setupInstancesJobs;

/// @brief Field sharedMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMaterial, put=__cordl_internal_set_sharedMaterial)) ::UnityW<::UnityEngine::Material>  sharedMaterial;

/// @brief Field sharedMaterialIndirect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMaterialIndirect, put=__cordl_internal_set_sharedMaterialIndirect)) ::UnityW<::UnityEngine::Material>  sharedMaterialIndirect;

/// @brief Field sharedMesh, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMesh, put=__cordl_internal_set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

/// @brief Field sharedTexArray, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedTexArray, put=__cordl_internal_set_sharedTexArray)) ::UnityW<::UnityEngine::Texture2DArray>  sharedTexArray;

/// @brief Field staticBatch, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticBatch, put=__cordl_internal_set_staticBatch)) ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  staticBatch;

/// @brief Field subMeshes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_subMeshes, put=__cordl_internal_set_subMeshes)) ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>  subMeshes;

/// @brief Field texHeight, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_texHeight, put=__cordl_internal_set_texHeight)) int32_t  texHeight;

/// @brief Field texWidth, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_texWidth, put=__cordl_internal_set_texWidth)) int32_t  texWidth;

/// @brief Field textureFormat, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_textureFormat, put=__cordl_internal_set_textureFormat)) ::UnityEngine::TextureFormat  textureFormat;

/// @brief Field textureToIndex, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureToIndex, put=__cordl_internal_set_textureToIndex)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>*  textureToIndex;

/// @brief Field textures, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  textures;

static inline ::GlobalNamespace::BuilderTableDataRenderData* New_ctor() ;

constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* const& __cordl_internal_get_dynamicBatch() const;

constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*& __cordl_internal_get_dynamicBatch() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>* const& __cordl_internal_get_materialToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>*& __cordl_internal_get_materialToIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_materials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_materials() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_meshInstanceCount() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_meshInstanceCount() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>* const& __cordl_internal_get_meshToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>*& __cordl_internal_get_meshToIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_meshes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_perTextureMaterial() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_perTextureMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& __cordl_internal_get_perTexturePropertyBlock() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& __cordl_internal_get_perTexturePropertyBlock() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_setupInstancesJobs() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_setupInstancesJobs() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sharedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sharedMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sharedMaterialIndirect() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sharedMaterialIndirect() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_sharedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_sharedMesh() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get_sharedTexArray() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get_sharedTexArray() ;

constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* const& __cordl_internal_get_staticBatch() const;

constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*& __cordl_internal_get_staticBatch() ;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh> const& __cordl_internal_get_subMeshes() const;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>& __cordl_internal_get_subMeshes() ;

constexpr int32_t const& __cordl_internal_get_texHeight() const;

constexpr int32_t& __cordl_internal_get_texHeight() ;

constexpr int32_t const& __cordl_internal_get_texWidth() const;

constexpr int32_t& __cordl_internal_get_texWidth() ;

constexpr ::UnityEngine::TextureFormat const& __cordl_internal_get_textureFormat() const;

constexpr ::UnityEngine::TextureFormat& __cordl_internal_get_textureFormat() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>* const& __cordl_internal_get_textureToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>*& __cordl_internal_get_textureToIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_textures() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_textures() ;

constexpr void __cordl_internal_set_dynamicBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  value) ;

constexpr void __cordl_internal_set_materialToIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>*  value) ;

constexpr void __cordl_internal_set_materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_meshInstanceCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_meshToIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>*  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_perTextureMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_perTexturePropertyBlock(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  value) ;

constexpr void __cordl_internal_set_setupInstancesJobs(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_sharedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_sharedMaterialIndirect(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_sharedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_sharedTexArray(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set_staticBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  value) ;

constexpr void __cordl_internal_set_subMeshes(::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>  value) ;

constexpr void __cordl_internal_set_texHeight(int32_t  value) ;

constexpr void __cordl_internal_set_texWidth(int32_t  value) ;

constexpr void __cordl_internal_set_textureFormat(::UnityEngine::TextureFormat  value) ;

constexpr void __cordl_internal_set_textureToIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>*  value) ;

constexpr void __cordl_internal_set_textures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

/// @brief Method .ctor, addr 0x57d179c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableDataRenderData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableDataRenderData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableDataRenderData(BuilderTableDataRenderData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableDataRenderData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableDataRenderData(BuilderTableDataRenderData const& ) = delete;

/// @brief Field NUM_SPLIT_MESH_INSTANCE_GROUPS offset 0xffffffff size 0x4
static constexpr int32_t  NUM_SPLIT_MESH_INSTANCE_GROUPS{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1620};

/// @brief Field texWidth, offset: 0x10, size: 0x4, def value: None
 int32_t  ___texWidth;

/// @brief Field texHeight, offset: 0x14, size: 0x4, def value: None
 int32_t  ___texHeight;

/// @brief Field textureFormat, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::TextureFormat  ___textureFormat;

/// @brief Field materialToIndex, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>*  ___materialToIndex;

/// @brief Field materials, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___materials;

/// @brief Field sharedMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___sharedMaterial;

/// @brief Field sharedMaterialIndirect, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___sharedMaterialIndirect;

/// @brief Field textureToIndex, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>*  ___textureToIndex;

/// @brief Field textures, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___textures;

/// @brief Field perTextureMaterial, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___perTextureMaterial;

/// @brief Field perTexturePropertyBlock, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  ___perTexturePropertyBlock;

/// @brief Field sharedTexArray, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ___sharedTexArray;

/// @brief Field meshToIndex, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>*  ___meshToIndex;

/// @brief Field meshes, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___meshes;

/// @brief Field meshInstanceCount, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___meshInstanceCount;

/// @brief Field subMeshes, offset: 0x80, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>  ___subMeshes;

/// @brief Field sharedMesh, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___sharedMesh;

/// @brief Field dynamicBatch, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  ___dynamicBatch;

/// @brief Field staticBatch, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  ___staticBatch;

/// @brief Field setupInstancesJobs, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___setupInstancesJobs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___texWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___texHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___textureFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___materialToIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___materials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___sharedMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___sharedMaterialIndirect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___textureToIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___textures) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___perTextureMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___perTexturePropertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___sharedTexArray) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___meshToIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___meshes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___meshInstanceCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___subMeshes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___sharedMesh) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___dynamicBatch) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___staticBatch) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderData, ___setupInstancesJobs) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableDataRenderData) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
