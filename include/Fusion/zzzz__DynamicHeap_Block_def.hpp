#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Block.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DynamicHeap_PageList_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_Block)
namespace GlobalNamespace {
struct DynamicHeap_Page;
}
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_Block;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_Block);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_Block, "Fusion", "DynamicHeap/Block");
// Dependencies Fusion.DynamicHeap::PageList
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/Block
struct CORDL_TYPE DynamicHeap_Block {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Block() ;

// Ctor Parameters [CppParam { name: "Index", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prev", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pages", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PagesFree", ty: "::GlobalNamespace::DynamicHeap_PageList", modifiers: "", def_value: None, comment: None }, CppParam { name: "Memory", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_Block(uint8_t  Index, ::GlobalNamespace::DynamicHeap_Block*  Prev, ::GlobalNamespace::DynamicHeap_Block*  Next, ::GlobalNamespace::DynamicHeap_Page*  Pages, ::GlobalNamespace::DynamicHeap_PageList  PagesFree, uint8_t*  Memory) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18949};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Index, offset: 0x0, size: 0x1, def value: None
 uint8_t  Index;

/// @brief Field Prev, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Block*  Prev;

/// @brief Field Next, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Block*  Next;

/// @brief Field Pages, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Page*  Pages;

/// @brief Field PagesFree, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::DynamicHeap_PageList  PagesFree;

/// @brief Field Memory, offset: 0x38, size: 0x8, def value: None
 uint8_t*  Memory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_Block, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Block, Prev) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Block, Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Block, Pages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Block, PagesFree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Block, Memory) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_Block) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
