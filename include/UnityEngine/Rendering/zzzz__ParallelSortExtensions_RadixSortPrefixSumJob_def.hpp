#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions_RadixSortPrefixSumJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions_RadixSortPrefixSumJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortPrefixSumJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortPrefixSumJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortPrefixSumJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortPrefixSumJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0xb2139d8, size 0x78, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortPrefixSumJob() ;

// Ctor Parameters [CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ParallelSortExtensions_RadixSortPrefixSumJob(int32_t  jobsCount, ::Unity::Collections::NativeArray_1<int32_t>  indicesSum, ::Unity::Collections::NativeArray_1<int32_t>  indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26730};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [ReadOnly]
/// @brief Field jobsCount, offset: 0x0, size: 0x4, def value: None
 int32_t  jobsCount;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field indicesSum, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  indicesSum;

/// [NativeDisableContainerSafetyRestriction]
/// [NoAlias]
/// @brief Field indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob, jobsCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob, indicesSum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob, indices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
