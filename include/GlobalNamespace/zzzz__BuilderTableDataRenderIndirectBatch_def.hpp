#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableDataRenderIndirectBatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderTableMeshInstances_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_IndirectDrawIndexedArgs_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderParams_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableDataRenderIndirectBatch)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderTableDataRenderIndirectBatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*, "", "BuilderTableDataRenderIndirectBatch");
// Dependencies BuilderTableMeshInstances, System.Object, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.GraphicsBuffer::IndirectDrawIndexedArgs, UnityEngine.Jobs.TransformAccessArray, UnityEngine.Matrix4x4, UnityEngine.RenderParams
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderTableDataRenderIndirectBatch
class CORDL_TYPE BuilderTableDataRenderIndirectBatch : public ::System::Object {
public:
// Declarations
/// @brief Field commandBuf, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_commandBuf, put=__cordl_internal_set_commandBuf)) ::UnityEngine::GraphicsBuffer*  commandBuf;

/// @brief Field commandCount, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_commandCount, put=__cordl_internal_set_commandCount)) int32_t  commandCount;

/// @brief Field commandData, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_commandData, put=__cordl_internal_set_commandData)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  commandData;

/// @brief Field instanceLodLevel, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceLodLevel, put=__cordl_internal_set_instanceLodLevel)) ::Unity::Collections::NativeArray_1<int32_t>  instanceLodLevel;

/// @brief Field instanceLodLevelDirty, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceLodLevelDirty, put=__cordl_internal_set_instanceLodLevelDirty)) ::Unity::Collections::NativeArray_1<int32_t>  instanceLodLevelDirty;

/// @brief Field instanceObjectToWorld, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceObjectToWorld, put=__cordl_internal_set_instanceObjectToWorld)) ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  instanceObjectToWorld;

/// @brief Field instanceTexIndex, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceTexIndex, put=__cordl_internal_set_instanceTexIndex)) ::Unity::Collections::NativeArray_1<int32_t>  instanceTexIndex;

/// @brief Field instanceTint, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceTint, put=__cordl_internal_set_instanceTint)) ::Unity::Collections::NativeArray_1<float_t>  instanceTint;

/// @brief Field instanceTransform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceTransform, put=__cordl_internal_set_instanceTransform)) ::UnityEngine::Jobs::TransformAccessArray  instanceTransform;

/// @brief Field instanceTransformIndexToDataIndex, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_instanceTransformIndexToDataIndex, put=__cordl_internal_set_instanceTransformIndexToDataIndex)) ::Unity::Collections::NativeArray_1<int32_t>  instanceTransformIndexToDataIndex;

/// @brief Field matrixBuf, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_matrixBuf, put=__cordl_internal_set_matrixBuf)) ::UnityEngine::GraphicsBuffer*  matrixBuf;

/// @brief Field pieceIDPerTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceIDPerTransform, put=__cordl_internal_set_pieceIDPerTransform)) ::System::Collections::Generic::List_1<int32_t>*  pieceIDPerTransform;

/// @brief Field renderMeshes, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderMeshes, put=__cordl_internal_set_renderMeshes)) ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>  renderMeshes;

/// @brief Field rp, offset 0xc8, size 0x78 
 __declspec(property(get=__cordl_internal_get_rp, put=__cordl_internal_set_rp)) ::UnityEngine::RenderParams  rp;

/// @brief Field texIndexBuf, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_texIndexBuf, put=__cordl_internal_set_texIndexBuf)) ::UnityEngine::GraphicsBuffer*  texIndexBuf;

/// @brief Field tintBuf, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tintBuf, put=__cordl_internal_set_tintBuf)) ::UnityEngine::GraphicsBuffer*  tintBuf;

/// @brief Field totalInstances, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalInstances, put=__cordl_internal_set_totalInstances)) int32_t  totalInstances;

static inline ::GlobalNamespace::BuilderTableDataRenderIndirectBatch* New_ctor() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_commandBuf() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_commandBuf() ;

constexpr int32_t const& __cordl_internal_get_commandCount() const;

constexpr int32_t& __cordl_internal_get_commandCount() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs> const& __cordl_internal_get_commandData() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>& __cordl_internal_get_commandData() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instanceLodLevel() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instanceLodLevel() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instanceLodLevelDirty() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instanceLodLevelDirty() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> const& __cordl_internal_get_instanceObjectToWorld() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>& __cordl_internal_get_instanceObjectToWorld() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instanceTexIndex() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instanceTexIndex() ;

constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get_instanceTint() const;

constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get_instanceTint() ;

constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get_instanceTransform() const;

constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get_instanceTransform() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_instanceTransformIndexToDataIndex() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_instanceTransformIndexToDataIndex() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_matrixBuf() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_matrixBuf() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_pieceIDPerTransform() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_pieceIDPerTransform() ;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances> const& __cordl_internal_get_renderMeshes() const;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>& __cordl_internal_get_renderMeshes() ;

constexpr ::UnityEngine::RenderParams const& __cordl_internal_get_rp() const;

constexpr ::UnityEngine::RenderParams& __cordl_internal_get_rp() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_texIndexBuf() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_texIndexBuf() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_tintBuf() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_tintBuf() ;

constexpr int32_t const& __cordl_internal_get_totalInstances() const;

constexpr int32_t& __cordl_internal_get_totalInstances() ;

constexpr void __cordl_internal_set_commandBuf(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_commandCount(int32_t  value) ;

constexpr void __cordl_internal_set_commandData(::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  value) ;

constexpr void __cordl_internal_set_instanceLodLevel(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_instanceLodLevelDirty(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_instanceObjectToWorld(::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set_instanceTexIndex(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_instanceTint(::Unity::Collections::NativeArray_1<float_t>  value) ;

constexpr void __cordl_internal_set_instanceTransform(::UnityEngine::Jobs::TransformAccessArray  value) ;

constexpr void __cordl_internal_set_instanceTransformIndexToDataIndex(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_matrixBuf(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_pieceIDPerTransform(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_renderMeshes(::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>  value) ;

constexpr void __cordl_internal_set_rp(::UnityEngine::RenderParams  value) ;

constexpr void __cordl_internal_set_texIndexBuf(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_tintBuf(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_totalInstances(int32_t  value) ;

/// @brief Method .ctor, addr 0x57d1794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableDataRenderIndirectBatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableDataRenderIndirectBatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableDataRenderIndirectBatch(BuilderTableDataRenderIndirectBatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableDataRenderIndirectBatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableDataRenderIndirectBatch(BuilderTableDataRenderIndirectBatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1619};

/// @brief Field totalInstances, offset: 0x10, size: 0x4, def value: None
 int32_t  ___totalInstances;

/// @brief Field instanceTransform, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Jobs::TransformAccessArray  ___instanceTransform;

/// @brief Field instanceTransformIndexToDataIndex, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___instanceTransformIndexToDataIndex;

/// @brief Field pieceIDPerTransform, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___pieceIDPerTransform;

/// @brief Field instanceObjectToWorld, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  ___instanceObjectToWorld;

/// @brief Field instanceTexIndex, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___instanceTexIndex;

/// @brief Field instanceTint, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  ___instanceTint;

/// @brief Field instanceLodLevel, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___instanceLodLevel;

/// @brief Field instanceLodLevelDirty, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___instanceLodLevelDirty;

/// @brief Field renderMeshes, offset: 0x88, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableMeshInstances>  ___renderMeshes;

/// @brief Field commandBuf, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___commandBuf;

/// @brief Field matrixBuf, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___matrixBuf;

/// @brief Field texIndexBuf, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___texIndexBuf;

/// @brief Field tintBuf, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___tintBuf;

/// @brief Field commandData, offset: 0xb0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs>  ___commandData;

/// @brief Field commandCount, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___commandCount;

/// @brief Field rp, offset: 0xc8, size: 0x78, def value: None
 ::UnityEngine::RenderParams  ___rp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___totalInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceTransformIndexToDataIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___pieceIDPerTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceObjectToWorld) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceTexIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceTint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceLodLevel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___instanceLodLevelDirty) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___renderMeshes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___commandBuf) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___matrixBuf) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___texIndexBuf) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___tintBuf) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___commandData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___commandCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch, ___rp) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableDataRenderIndirectBatch) == 0x140, "Size mismatch!");

} // namespace end def GlobalNamespace
