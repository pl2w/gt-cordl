#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableList)
namespace Fusion::Sockets {
struct ReliableHeader;
}
// Forward declare root types
namespace Fusion::Sockets {
struct ReliableList;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::ReliableList);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::ReliableList, "Fusion.Sockets", "ReliableList");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.ReliableList
struct CORDL_TYPE ReliableList {
public:
// Declarations
/// @brief Method AddFirst, addr 0x6033b78, size 0x78, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::Sockets::ReliableHeader*  item) ;

/// @brief Method AddLast, addr 0x6033ad4, size 0x74, virtual false, abstract: false, final false
inline void AddLast(::Fusion::Sockets::ReliableHeader*  item) ;

/// @brief Method Dispose, addr 0x6033688, size 0x9c, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method IsInList, addr 0x6033bf0, size 0x20, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::Sockets::ReliableHeader*  item) ;

/// @brief Method Remove, addr 0x60337e4, size 0x9c, virtual false, abstract: false, final false
inline void Remove(::Fusion::Sockets::ReliableHeader*  item) ;

/// @brief Method RemoveHead, addr 0x6033c10, size 0x7c, virtual false, abstract: false, final false
inline ::Fusion::Sockets::ReliableHeader* RemoveHead() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReliableList() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::Fusion::Sockets::ReliableHeader*", modifiers: "", def_value: None, comment: None }]
constexpr ReliableList(int32_t  Count, ::Fusion::Sockets::ReliableHeader*  Head, ::Fusion::Sockets::ReliableHeader*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::ReliableHeader*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::ReliableHeader*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::ReliableList, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::ReliableList, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::ReliableList, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::ReliableList) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
