#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamBlockData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Block_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeStreamBlockData)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlockData;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData, "Unity.Collections.LowLevel.Unsafe", "UnsafeStreamBlockData");
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle, Unity.Collections.AllocatorManager::Block
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct CORDL_TYPE UnsafeStreamBlockData {
public:
// Declarations
/// @brief Method Free, addr 0xaf07dd4, size 0x1c, virtual false, abstract: false, final false
inline void Free(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  oldBlock) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeStreamBlockData() ;

// Ctor Parameters [CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "Blocks", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "BlockCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Ranges", ty: "::GlobalNamespace::AllocatorManager_Block", modifiers: "", def_value: None, comment: None }, CppParam { name: "RangeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeStreamBlockData(::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator, ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  Blocks, int32_t  BlockCount, ::GlobalNamespace::AllocatorManager_Block  Ranges, int32_t  RangeCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Allocator, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator;

/// @brief Field Blocks, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*  Blocks;

/// @brief Field BlockCount, offset: 0x10, size: 0x4, def value: None
 int32_t  BlockCount;

/// @brief Field Ranges, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::AllocatorManager_Block  Ranges;

/// @brief Field RangeCount, offset: 0x38, size: 0x4, def value: None
 int32_t  RangeCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData, Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData, Blocks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData, BlockCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData, Ranges) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData, RangeCount) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlockData) == 0x40, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
