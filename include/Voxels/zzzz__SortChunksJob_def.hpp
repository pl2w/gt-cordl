#pragma once
// IWYU pragma private; include "Voxels/SortChunksJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SortChunksJob)
namespace GlobalNamespace {
struct SortChunksJob_SortKey;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Voxels {
struct SortChunksJob;
}
// Write type traits
MARK_VAL_T(::Voxels::SortChunksJob);
DEFINE_IL2CPP_CLASS(::Voxels::SortChunksJob, "Voxels", "SortChunksJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeHashSet`1<T>, Unity.Collections.NativeList`1<T>, Unity.Mathematics.int3
namespace Voxels {
// Is value type: true
// CS Name: Voxels.SortChunksJob
struct CORDL_TYPE SortChunksJob {
public:
// Declarations
using SortKey = ::GlobalNamespace::SortChunksJob_SortKey;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5db1598, size 0x448, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr SortChunksJob() ;

// Ctor Parameters [CppParam { name: "ChunkSet", ty: "::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TargetPos", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: None, comment: None }, CppParam { name: "SortedChunks", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>", modifiers: "", def_value: None, comment: None }]
constexpr SortChunksJob(::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  ChunkSet, ::Unity::Mathematics::int3  TargetPos, ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  SortedChunks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5026};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ReadOnly]
/// @brief Field ChunkSet, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  ChunkSet;

/// [ReadOnly]
/// @brief Field TargetPos, offset: 0x8, size: 0xc, def value: None
 ::Unity::Mathematics::int3  TargetPos;

/// @brief Field SortedChunks, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  SortedChunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::SortChunksJob, ChunkSet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::SortChunksJob, TargetPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Voxels::SortChunksJob, SortedChunks) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Voxels::SortChunksJob) == 0x20, "Size mismatch!");

} // namespace end def Voxels
