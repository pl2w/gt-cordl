#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableDataRenderIndirectBatch.hpp"
#include "GlobalNamespace/zzzz__BuilderTableMeshInstances_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_IndirectDrawIndexedArgs_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderParams_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderTableDataRenderIndirectBatch_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderTableDataRenderIndirectBatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderTableDataRenderIndirectBatch::*)()>(&::GlobalNamespace::BuilderTableDataRenderIndirectBatch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d1794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_totalInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalInstances;
}
constexpr int32_t const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_totalInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalInstances;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_totalInstances(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalInstances = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTransform;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTransform;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceTransform(::UnityEngine::Jobs::TransformAccessArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceTransform = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTransformIndexToDataIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTransformIndexToDataIndex;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTransformIndexToDataIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTransformIndexToDataIndex;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceTransformIndexToDataIndex(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceTransformIndexToDataIndex = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_pieceIDPerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceIDPerTransform;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_pieceIDPerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceIDPerTransform;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_pieceIDPerTransform(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceIDPerTransform = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceObjectToWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceObjectToWorld;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceObjectToWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceObjectToWorld;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceObjectToWorld(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceObjectToWorld = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTexIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTexIndex;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTexIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTexIndex;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceTexIndex(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceTexIndex = value;
}
constexpr ::Unity::Collections::NativeArray_1<float_t>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTint;
}
constexpr ::Unity::Collections::NativeArray_1<float_t> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceTint;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceTint(::Unity::Collections::NativeArray_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceTint = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceLodLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceLodLevel;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceLodLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceLodLevel;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceLodLevel(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceLodLevel = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceLodLevelDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceLodLevelDirty;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_instanceLodLevelDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceLodLevelDirty;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_instanceLodLevelDirty(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceLodLevelDirty = value;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_renderMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMeshes;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_renderMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMeshes;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_renderMeshes(::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderMeshes = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_commandBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBuf;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_commandBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBuf;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_commandBuf(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandBuf = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_matrixBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrixBuf;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_matrixBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrixBuf;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_matrixBuf(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrixBuf = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_texIndexBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texIndexBuf;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_texIndexBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texIndexBuf;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_texIndexBuf(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texIndexBuf = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_tintBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintBuf;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_tintBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintBuf;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_tintBuf(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintBuf = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_commandData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandData;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs> const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_commandData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandData;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_commandData(::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandData = value;
}
constexpr int32_t& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_commandCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandCount;
}
constexpr int32_t const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_commandCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandCount;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_commandCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandCount = value;
}
constexpr ::UnityEngine::RenderParams& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_rp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rp;
}
constexpr ::UnityEngine::RenderParams const& GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_get_rp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rp;
}
constexpr void GlobalNamespace::BuilderTableDataRenderIndirectBatch::__cordl_internal_set_rp(::UnityEngine::RenderParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rp = value;
}
inline void GlobalNamespace::BuilderTableDataRenderIndirectBatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* GlobalNamespace::BuilderTableDataRenderIndirectBatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTableDataRenderIndirectBatch::BuilderTableDataRenderIndirectBatch()   {
}
