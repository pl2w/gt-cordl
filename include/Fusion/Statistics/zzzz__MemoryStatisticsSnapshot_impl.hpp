#pragma once
// IWYU pragma private; include "Fusion/Statistics/MemoryStatisticsSnapshot.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_def.hpp"
#include "Fusion/Statistics/zzzz__MemoryStatisticsSnapshot_TargetAllocator_def.hpp"
// Ctor Parameters [CppParam { name: "TotalFreeBlocks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BucketFullBlocksCount", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BucketUsedBlocksCount", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BucketFreeBlocksCount", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Statistics::MemoryStatisticsSnapshot::MemoryStatisticsSnapshot(int32_t  TotalFreeBlocks, ::ArrayW<int32_t>  BucketFullBlocksCount, ::ArrayW<int32_t>  BucketUsedBlocksCount, ::ArrayW<int32_t>  BucketFreeBlocksCount) noexcept  {
this->TotalFreeBlocks = TotalFreeBlocks;
this->BucketFullBlocksCount = BucketFullBlocksCount;
this->BucketUsedBlocksCount = BucketUsedBlocksCount;
this->BucketFreeBlocksCount = BucketFreeBlocksCount;
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::MemoryStatisticsSnapshot::MemoryStatisticsSnapshot()   {
}
