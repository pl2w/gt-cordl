#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions_RadixSortBucketSortJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions_RadixSortBucketSortJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortBucketSortJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortBucketSortJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortBucketSortJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBucketSortJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0xb213a50, size 0x70, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortBucketSortJob() ;

// Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "arraySorted", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ParallelSortExtensions_RadixSortBucketSortJob(int32_t  radix, int32_t  batchSize, ::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<int32_t>  arraySorted) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26731};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [ReadOnly]
/// @brief Field radix, offset: 0x0, size: 0x4, def value: None
 int32_t  radix;

/// [ReadOnly]
/// @brief Field batchSize, offset: 0x4, size: 0x4, def value: None
 int32_t  batchSize;

/// [ReadOnly]
/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field array, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  array;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  indices;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field arraySorted, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  arraySorted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob, radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob, batchSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob, array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob, indices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob, arraySorted) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
