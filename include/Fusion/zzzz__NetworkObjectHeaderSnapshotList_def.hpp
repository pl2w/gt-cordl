#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderSnapshotList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeaderSnapshotList)
namespace Fusion {
class NetworkObjectHeaderSnapshot;
}
// Forward declare root types
namespace Fusion {
struct NetworkObjectHeaderSnapshotList;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectHeaderSnapshotList);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderSnapshotList, "Fusion", "NetworkObjectHeaderSnapshotList");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeaderSnapshotList
struct CORDL_TYPE NetworkObjectHeaderSnapshotList {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Latest)) ::Fusion::NetworkObjectHeaderSnapshot*  Latest;

 __declspec(property(get=get_Oldest)) ::Fusion::NetworkObjectHeaderSnapshot*  Oldest;

/// @brief Method AddAfter, addr 0x5facd0c, size 0x150, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::NetworkObjectHeaderSnapshot*  after, ::Fusion::NetworkObjectHeaderSnapshot*  item) ;

/// @brief Method AddBefore, addr 0x5facbb8, size 0x154, virtual false, abstract: false, final false
inline void AddBefore(::Fusion::NetworkObjectHeaderSnapshot*  before, ::Fusion::NetworkObjectHeaderSnapshot*  item) ;

/// @brief Method AddFirst, addr 0x5faca28, size 0xb8, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::NetworkObjectHeaderSnapshot*  item) ;

/// @brief Method AddLast, addr 0x5facb04, size 0xb4, virtual false, abstract: false, final false
inline void AddLast(::Fusion::NetworkObjectHeaderSnapshot*  item) ;

/// @brief Method IsInList, addr 0x5facae0, size 0x24, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::NetworkObjectHeaderSnapshot*  item) ;

/// @brief Method Remove, addr 0x5facedc, size 0xec, virtual false, abstract: false, final false
inline void Remove(::Fusion::NetworkObjectHeaderSnapshot*  item) ;

/// @brief Method RemoveLatest, addr 0x5facfc8, size 0x8d4, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* RemoveLatest() ;

/// @brief Method RemoveOldest, addr 0x5face5c, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* RemoveOldest() ;

/// @brief Method get_Count, addr 0x5faca10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Latest, addr 0x5faca20, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* get_Latest() ;

/// @brief Method get_Oldest, addr 0x5faca18, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectHeaderSnapshot* get_Oldest() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderSnapshotList() ;

// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tail", ty: "::Fusion::NetworkObjectHeaderSnapshot*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_head", ty: "::Fusion::NetworkObjectHeaderSnapshot*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeaderSnapshotList(int32_t  _count, ::Fusion::NetworkObjectHeaderSnapshot*  _tail, ::Fusion::NetworkObjectHeaderSnapshot*  _head) noexcept;

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x8)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x18)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19146};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _count, offset: 0x0, size: 0x4, def value: None
 int32_t  _count;

/// @brief Field _tail, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  _tail;

/// @brief Field _head, offset: 0x10, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeaderSnapshot*  _head;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshotList, _count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshotList, _tail) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectHeaderSnapshotList, _head) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectHeaderSnapshotList) == 0x18, "Size mismatch!");

} // namespace end def Fusion
