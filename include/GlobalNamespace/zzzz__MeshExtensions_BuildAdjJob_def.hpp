#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions_BuildAdjJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap`2_ParallelWriter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshExtensions_BuildAdjJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshExtensions_BuildAdjJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshExtensions_BuildAdjJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshExtensions_BuildAdjJob, "", "MeshExtensions/BuildAdjJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelMultiHashMap`2::ParallelWriter<TKey, TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MeshExtensions/BuildAdjJob
struct CORDL_TYPE MeshExtensions_BuildAdjJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5d16820, size 0x9c, virtual true, abstract: false, final true
inline void Execute(int32_t  triIdx) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshExtensions_BuildAdjJob() ;

// Ctor Parameters [CppParam { name: "T", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MapW", ty: "::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr MeshExtensions_BuildAdjJob(::Unity::Collections::NativeArray_1<int32_t>  T, ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<int32_t,int32_t>  MapW) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ReadOnly]
/// @brief Field T, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  T;

/// @brief Field MapW, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter<int32_t,int32_t>  MapW;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshExtensions_BuildAdjJob, T) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshExtensions_BuildAdjJob, MapW) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshExtensions_BuildAdjJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
