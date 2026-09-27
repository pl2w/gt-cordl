#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocator_Header.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuddyAllocator_Header)
// Forward declare root types
namespace GlobalNamespace {
struct BuddyAllocator_Header;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuddyAllocator_Header);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuddyAllocator_Header, "UnityEngine.Rendering.Universal", "BuddyAllocator/Header");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.BuddyAllocator/Header
struct CORDL_TYPE BuddyAllocator_Header {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuddyAllocator_Header() ;

// Ctor Parameters [CppParam { name: "branchingOrder", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allocationCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "freeAllocationIdsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuddyAllocator_Header(int32_t  branchingOrder, int32_t  levelCount, int32_t  allocationCount, int32_t  freeAllocationIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18421};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field branchingOrder, offset: 0x0, size: 0x4, def value: None
 int32_t  branchingOrder;

/// @brief Field levelCount, offset: 0x4, size: 0x4, def value: None
 int32_t  levelCount;

/// @brief Field allocationCount, offset: 0x8, size: 0x4, def value: None
 int32_t  allocationCount;

/// @brief Field freeAllocationIdsCount, offset: 0xc, size: 0x4, def value: None
 int32_t  freeAllocationIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuddyAllocator_Header, branchingOrder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuddyAllocator_Header, levelCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuddyAllocator_Header, allocationCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuddyAllocator_Header, freeAllocationIdsCount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuddyAllocator_Header) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
