#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions_RadixSortBucketCountJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions_RadixSortBucketCountJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortBucketCountJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortBucketCountJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortBucketCountJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBucketCountJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0xb2137d0, size 0x68, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortBucketCountJob() ;

// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ParallelSortExtensions_RadixSortBucketCountJob(int32_t  radix, int32_t  jobsCount, int32_t  batchSize, ::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Collections::NativeArray_1<int32_t>  buckets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [ReadOnly]
/// @brief Field radix, offset: 0x0, size: 0x4, def value: None
 int32_t  radix;

/// [ReadOnly]
/// @brief Field jobsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  jobsCount;

/// [ReadOnly]
/// @brief Field batchSize, offset: 0x8, size: 0x4, def value: None
 int32_t  batchSize;

/// [ReadOnly]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field array, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  array;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field buckets, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  buckets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob, radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob, jobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob, batchSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob, array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob, buckets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
