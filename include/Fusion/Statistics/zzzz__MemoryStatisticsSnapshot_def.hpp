#pragma once
// IWYU pragma private; include "Fusion/Statistics/MemoryStatisticsSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryStatisticsSnapshot)
namespace GlobalNamespace {
struct MemoryStatisticsSnapshot_TargetAllocator;
}
// Forward declare root types
namespace Fusion::Statistics {
struct MemoryStatisticsSnapshot;
}
// Write type traits
MARK_VAL_T(::Fusion::Statistics::MemoryStatisticsSnapshot);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::MemoryStatisticsSnapshot, "Fusion.Statistics", "MemoryStatisticsSnapshot");
// Dependencies 
namespace Fusion::Statistics {
// Is value type: true
// CS Name: Fusion.Statistics.MemoryStatisticsSnapshot
struct CORDL_TYPE MemoryStatisticsSnapshot {
public:
// Declarations
using TargetAllocator = ::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator;

// Ctor Parameters []
// @brief default ctor
constexpr MemoryStatisticsSnapshot() ;

// Ctor Parameters [CppParam { name: "TotalFreeBlocks", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BucketFullBlocksCount", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BucketUsedBlocksCount", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BucketFreeBlocksCount", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr MemoryStatisticsSnapshot(int32_t  TotalFreeBlocks, ::ArrayW<int32_t>  BucketFullBlocksCount, ::ArrayW<int32_t>  BucketUsedBlocksCount, ::ArrayW<int32_t>  BucketFreeBlocksCount) noexcept;

/// @brief Field BUCKET_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  BUCKET_COUNT{static_cast<int32_t>(0x39)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field TotalFreeBlocks, offset: 0x0, size: 0x4, def value: None
 int32_t  TotalFreeBlocks;

/// @brief Field BucketFullBlocksCount, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  BucketFullBlocksCount;

/// @brief Field BucketUsedBlocksCount, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  BucketUsedBlocksCount;

/// @brief Field BucketFreeBlocksCount, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  BucketFreeBlocksCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::MemoryStatisticsSnapshot, TotalFreeBlocks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::MemoryStatisticsSnapshot, BucketFullBlocksCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::MemoryStatisticsSnapshot, BucketUsedBlocksCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::MemoryStatisticsSnapshot, BucketFreeBlocksCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::MemoryStatisticsSnapshot) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Statistics
