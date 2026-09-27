#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader/WriteInstanceDataParameterJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader/WriteInstanceDataParameterJob
struct CORDL_TYPE GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0xb1fd4bc, size 0xc0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob() ;

// Ctor Parameters [CppParam { name: "gatherData", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "parameterIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uintPerParameter", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uintPerInstance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "componentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gatherIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tmpDataBuffer", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob(bool  gatherData, int32_t  parameterIndex, int32_t  uintPerParameter, int32_t  uintPerInstance, ::Unity::Collections::NativeArray_1<int32_t>  componentDataIndex, ::Unity::Collections::NativeArray_1<int32_t>  gatherIndices, ::Unity::Collections::NativeArray_1<uint32_t>  instanceData, ::Unity::Collections::NativeArray_1<uint32_t>  tmpDataBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// [ReadOnly]
/// @brief Field gatherData, offset: 0x0, size: 0x1, def value: None
 bool  gatherData;

/// [ReadOnly]
/// @brief Field parameterIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  parameterIndex;

/// [ReadOnly]
/// @brief Field uintPerParameter, offset: 0x8, size: 0x4, def value: None
 int32_t  uintPerParameter;

/// [ReadOnly]
/// @brief Field uintPerInstance, offset: 0xc, size: 0x4, def value: None
 int32_t  uintPerInstance;

/// [ReadOnly]
/// @brief Field componentDataIndex, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  componentDataIndex;

/// [ReadOnly]
/// @brief Field gatherIndices, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  gatherIndices;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [ReadOnly]
/// @brief Field instanceData, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  instanceData;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// [WriteOnly]
/// @brief Field tmpDataBuffer, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  tmpDataBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, gatherData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, parameterIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, uintPerParameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, uintPerInstance) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, componentDataIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, gatherIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, instanceData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob, tmpDataBuffer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
