#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocator_Header.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocator_Header_def.hpp"
// Ctor Parameters [CppParam { name: "branchingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allocationCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "freeAllocationIdsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuddyAllocator_Header::BuddyAllocator_Header(int32_t  branchingOrder, int32_t  levelCount, int32_t  allocationCount, int32_t  freeAllocationIdsCount) noexcept  {
this->branchingOrder = branchingOrder;
this->levelCount = levelCount;
this->allocationCount = allocationCount;
this->freeAllocationIdsCount = freeAllocationIdsCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuddyAllocator_Header::BuddyAllocator_Header()   {
}
