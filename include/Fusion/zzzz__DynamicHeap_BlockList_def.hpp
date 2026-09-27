#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_BlockList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_BlockList)
namespace GlobalNamespace {
struct DynamicHeap_Block;
}
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_BlockList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_BlockList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_BlockList, "Fusion", "DynamicHeap/BlockList");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/BlockList
struct CORDL_TYPE DynamicHeap_BlockList {
public:
// Declarations
/// @brief Method AddAfter, addr 0x5f902b0, size 0x120, virtual false, abstract: false, final false
inline void AddAfter(::GlobalNamespace::DynamicHeap_Block*  after, ::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method AddBefore, addr 0x5f9018c, size 0x124, virtual false, abstract: false, final false
inline void AddBefore(::GlobalNamespace::DynamicHeap_Block*  before, ::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method AddFirst, addr 0x5f8ff64, size 0x7c, virtual false, abstract: false, final false
inline void AddFirst(::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method AddLast, addr 0x5f90110, size 0x7c, virtual false, abstract: false, final false
inline void AddLast(::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method IsInList, addr 0x5f8ffe0, size 0x24, virtual false, abstract: false, final false
inline bool IsInList(::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method MoveFirst, addr 0x5f90004, size 0x38, virtual false, abstract: false, final false
inline void MoveFirst(::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method MoveLast, addr 0x5f900d8, size 0x38, virtual false, abstract: false, final false
inline void MoveLast(::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method Remove, addr 0x5f9003c, size 0x9c, virtual false, abstract: false, final false
inline void Remove(::GlobalNamespace::DynamicHeap_Block*  item) ;

/// @brief Method RemoveHead, addr 0x5f9040c, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::DynamicHeap_Block* RemoveHead() ;

/// @brief Method TryRemoveHead, addr 0x5f903d0, size 0x3c, virtual false, abstract: false, final false
inline bool TryRemoveHead(::by_ref<::GlobalNamespace::DynamicHeap_Block*>  head) ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_BlockList() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_BlockList(int32_t  Count, ::GlobalNamespace::DynamicHeap_Block*  Head, ::GlobalNamespace::DynamicHeap_Block*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Block*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Block*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_BlockList, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_BlockList, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_BlockList, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_BlockList) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
