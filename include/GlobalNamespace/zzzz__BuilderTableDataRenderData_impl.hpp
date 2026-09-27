#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableDataRenderData.hpp"
#include "GlobalNamespace/zzzz__BuilderTableSubMesh_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderTableDataRenderData_def.hpp"
#include "GlobalNamespace/zzzz__BuilderTableDataRenderIndirectBatch_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderTableDataRenderData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderTableDataRenderData::*)()>(&::GlobalNamespace::BuilderTableDataRenderData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTableDataRenderData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_texWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texWidth;
}
constexpr int32_t const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_texWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texWidth;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_texWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texWidth = value;
}
constexpr int32_t& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_texHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texHeight;
}
constexpr int32_t const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_texHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texHeight;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_texHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texHeight = value;
}
constexpr ::UnityEngine::TextureFormat& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_textureFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureFormat;
}
constexpr ::UnityEngine::TextureFormat const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_textureFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureFormat;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_textureFormat(::UnityEngine::TextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureFormat = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_materialToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_materialToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialToIndex;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_materialToIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialToIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materials;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materials = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterial;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_sharedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedMaterialIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterialIndirect;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedMaterialIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterialIndirect;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_sharedMaterialIndirect(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMaterialIndirect = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_textureToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_textureToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureToIndex;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_textureToIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureToIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_textures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_textures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_textures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textures = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_perTextureMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perTextureMaterial;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_perTextureMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perTextureMaterial;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_perTextureMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perTextureMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_perTexturePropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perTexturePropertyBlock;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_perTexturePropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perTexturePropertyBlock;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_perTexturePropertyBlock(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perTexturePropertyBlock = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedTexArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedTexArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedTexArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedTexArray;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_sharedTexArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedTexArray = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_meshToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_meshToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshToIndex;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_meshToIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshToIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_meshInstanceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshInstanceCount;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_meshInstanceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshInstanceCount;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_meshInstanceCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshInstanceCount = value;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_subMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshes;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh> const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_subMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshes;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_subMeshes(::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMeshes = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_sharedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMesh;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_sharedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMesh = value;
}
constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_dynamicBatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicBatch;
}
constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_dynamicBatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicBatch;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_dynamicBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicBatch = value;
}
constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch*& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_staticBatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticBatch;
}
constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_staticBatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticBatch;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_staticBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticBatch = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_setupInstancesJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setupInstancesJobs;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_get_setupInstancesJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setupInstancesJobs;
}
constexpr void GlobalNamespace::BuilderTableDataRenderData::__cordl_internal_set_setupInstancesJobs(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setupInstancesJobs = value;
}
inline void GlobalNamespace::BuilderTableDataRenderData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTableDataRenderData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderTableDataRenderData* GlobalNamespace::BuilderTableDataRenderData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderTableDataRenderData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTableDataRenderData::BuilderTableDataRenderData()   {
}
