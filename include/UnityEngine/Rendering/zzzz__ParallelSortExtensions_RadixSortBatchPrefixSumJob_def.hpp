#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions_RadixSortBatchPrefixSumJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions_RadixSortBatchPrefixSumJob)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortBatchPrefixSumJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortBatchPrefixSumJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortBatchPrefixSumJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBatchPrefixSumJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method AtomicIncrement, addr 0xb213838, size 0x6c, virtual false, abstract: false, final false
static inline int32_t AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t>  counter) ;

/// @brief Method Execute, addr 0xb2138ec, size 0xec, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Method JobIndexPrefixSum, addr 0xb2138a4, size 0x48, virtual false, abstract: false, final false
inline int32_t JobIndexPrefixSum(int32_t  sum, int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortBatchPrefixSumJob() ;

// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ParallelSortExtensions_RadixSortBatchPrefixSumJob(int32_t  radix, int32_t  jobsCount, ::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Collections::NativeArray_1<int32_t>  counter, ::Unity::Collections::NativeArray_1<int32_t>  indicesSum, ::Unity::Collections::NativeArray_1<int32_t>  buckets, ::Unity::Collections::NativeArray_1<int32_t>  indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26729};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// [ReadOnly]
/// @brief Field radix, offset: 0x0, size: 0x4, def value: None
 int32_t  radix;

/// [ReadOnly]
/// @brief Field jobsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  jobsCount;

/// [ReadOnly]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field array, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  array;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field counter, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  counter;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field indicesSum, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  indicesSum;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field buckets, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  buckets;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field indices, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, jobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, counter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, indicesSum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, buckets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob, indices) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
