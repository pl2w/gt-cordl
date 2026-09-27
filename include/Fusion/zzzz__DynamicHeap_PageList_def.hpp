#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_PageList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_PageList)
namespace GlobalNamespace {
struct DynamicHeap_Page;
}
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_PageList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_PageList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_PageList, "Fusion", "DynamicHeap/PageList");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/PageList
struct CORDL_TYPE DynamicHeap_PageList {
public:
// Declarations
/// @brief Method AddAfter, addr 0x5f90974, size 0x120, virtual false, abstract: false, final false
inline void AddAfter(::GlobalNamespace::DynamicHeap_Page*  after, ::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method AddBefore, addr 0x5f90744, size 0x124, virtual false, abstract: false, final false
inline void AddBefore(::GlobalNamespace::DynamicHeap_Page*  before, ::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method AddFirst, addr 0x5f90630, size 0x74, virtual false, abstract: false, final false
inline void AddFirst(::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method AddLast, addr 0x5f906c8, size 0x7c, virtual false, abstract: false, final false
inline void AddLast(::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method Contains, addr 0x5f906a4, size 0x24, virtual false, abstract: false, final false
inline bool Contains(::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method MoveFirst, addr 0x5f90868, size 0x38, virtual false, abstract: false, final false
inline void MoveFirst(::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method MoveLast, addr 0x5f9093c, size 0x38, virtual false, abstract: false, final false
inline void MoveLast(::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method Remove, addr 0x5f908a0, size 0x9c, virtual false, abstract: false, final false
inline void Remove(::GlobalNamespace::DynamicHeap_Page*  item) ;

/// @brief Method RemoveHead, addr 0x5f90ad0, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::DynamicHeap_Page* RemoveHead() ;

/// @brief Method TryRemoveHead, addr 0x5f90a94, size 0x3c, virtual false, abstract: false, final false
inline bool TryRemoveHead(::by_ref<::GlobalNamespace::DynamicHeap_Page*>  head) ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_PageList() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_PageList(int32_t  Count, ::GlobalNamespace::DynamicHeap_Page*  Head, ::GlobalNamespace::DynamicHeap_Page*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Page*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Page*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_PageList, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_PageList, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicHeap_PageList, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_PageList) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
