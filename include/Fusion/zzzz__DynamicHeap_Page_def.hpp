#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Page.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_Page)
namespace GlobalNamespace {
struct DynamicHeap_Block;
}
namespace GlobalNamespace {
struct DynamicHeap_ObjectFree;
}
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_Page;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_Page);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_Page, "Fusion", "DynamicHeap/Page");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/Page
struct CORDL_TYPE DynamicHeap_Page {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Page() ;

// Ctor Parameters [CppParam { name: "Block", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prev", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Use", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Memory", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectsFree", ty: "::GlobalNamespace::DynamicHeap_ObjectFree*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectsFreeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectsComitted", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectsAllocated", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_Page(::GlobalNamespace::DynamicHeap_Block*  Block, int32_t  Index, ::GlobalNamespace::DynamicHeap_Page*  Prev, ::GlobalNamespace::DynamicHeap_Page*  Next, int32_t  Bin, int32_t  Use, uint8_t*  Memory, ::GlobalNamespace::DynamicHeap_ObjectFree*  ObjectsFree, int32_t  ObjectsFreeCount, int32_t  ObjectsComitted, int32_t  ObjectsAllocated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field Block, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Block*  Block;

/// @brief Field Index, offset: 0x8, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field Prev, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Page*  Prev;

/// @brief Field Next, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Page*  Next;

/// @brief Field Bin, offset: 0x20, size: 0x4, def value: None
 int32_t  Bin;

/// @brief Field Use, offset: 0x24, size: 0x4, def value: None
 int32_t  Use;

/// @brief Field Memory, offset: 0x28, size: 0x8, def value: None
 uint8_t*  Memory;

/// @brief Field ObjectsFree, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_ObjectFree*  ObjectsFree;

/// @brief Field ObjectsFreeCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ObjectsFreeCount;

/// @brief Field ObjectsComitted, offset: 0x3c, size: 0x4, def value: None
 int32_t  ObjectsComitted;

/// @brief Field ObjectsAllocated, offset: 0x40, size: 0x4, def value: None
 int32_t  ObjectsAllocated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Block) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Prev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Bin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Use) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, Memory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, ObjectsFree) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, ObjectsFreeCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, ObjectsComitted) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_Page, ObjectsAllocated) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_Page) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
