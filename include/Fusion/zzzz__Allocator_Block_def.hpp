#pragma once
// IWYU pragma private; include "Fusion/Allocator_Block.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Ptr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator_Block)
namespace Fusion {
class Allocator;
}
namespace Fusion {
struct Ptr;
}
// Forward declare root types
namespace GlobalNamespace {
struct Allocator_Block;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Allocator_Block);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Allocator_Block, "Fusion", "Allocator/Block");
// Dependencies Fusion.Ptr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Allocator/Block
struct CORDL_TYPE Allocator_Block {
public:
// Declarations
/// @brief Method SegmentsFreeContains, addr 0x5f6e6d0, size 0xe0, virtual false, abstract: false, final false
inline bool SegmentsFreeContains(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::Fusion::Ptr  ptr) ;

/// @brief Method SegmentsFreeCount, addr 0x5f6cc84, size 0xc0, virtual false, abstract: false, final false
inline int32_t SegmentsFreeCount(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a) ;

/// @brief Method ToString, addr 0x5f6db98, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5f6ee4c, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr Allocator_Block() ;

// Ctor Parameters [CppParam { name: "Prev", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bucket", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentsFree", ty: "::Fusion::Ptr", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentsUsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentsAllocated", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllocCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Allocator_Block(int32_t  Prev, int32_t  Next, int32_t  Bucket, ::Fusion::Ptr  SegmentsFree, int32_t  SegmentsUsed, int32_t  SegmentsAllocated, int32_t  Index, int32_t  AllocCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18787};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Prev, offset: 0x0, size: 0x4, def value: None
 int32_t  Prev;

/// @brief Field Next, offset: 0x4, size: 0x4, def value: None
 int32_t  Next;

/// @brief Field Bucket, offset: 0x8, size: 0x4, def value: None
 int32_t  Bucket;

/// @brief Field SegmentsFree, offset: 0xc, size: 0x4, def value: None
 ::Fusion::Ptr  SegmentsFree;

/// @brief Field SegmentsUsed, offset: 0x10, size: 0x4, def value: None
 int32_t  SegmentsUsed;

/// @brief Field SegmentsAllocated, offset: 0x14, size: 0x4, def value: None
 int32_t  SegmentsAllocated;

/// @brief Field Index, offset: 0x18, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field AllocCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  AllocCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Allocator_Block, Prev) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, Next) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, Bucket) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, SegmentsFree) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, SegmentsUsed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, SegmentsAllocated) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, Index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Allocator_Block, AllocCount) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Allocator_Block) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
