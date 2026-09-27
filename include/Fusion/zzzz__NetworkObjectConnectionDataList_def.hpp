#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectConnectionDataList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectConnectionDataList)
namespace Fusion {
class NetworkObjectConnectionData;
}
// Forward declare root types
namespace Fusion {
struct NetworkObjectConnectionDataList;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectConnectionDataList);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectConnectionDataList, "Fusion", "NetworkObjectConnectionDataList");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectConnectionDataList
struct CORDL_TYPE NetworkObjectConnectionDataList {
public:
// Declarations
/// @brief Method AddAfter, addr 0x5fdfda0, size 0x19c, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::NetworkObjectConnectionData*  item, ::Fusion::NetworkObjectConnectionData*  after) ;

/// @brief Method AddBefore, addr 0x5fdfc04, size 0x19c, virtual false, abstract: false, final false
inline void AddBefore(::Fusion::NetworkObjectConnectionData*  item, ::Fusion::NetworkObjectConnectionData*  before) ;

/// @brief Method AddFirst, addr 0x5fdfa6c, size 0xb8, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method AddLast, addr 0x5fdfb50, size 0xb4, virtual false, abstract: false, final false
inline void AddLast(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method Concat, addr 0x5fe0114, size 0x140, virtual false, abstract: false, final false
inline void Concat(::by_ref<::Fusion::NetworkObjectConnectionDataList>  other) ;

/// @brief Method IsInList, addr 0x5fdfb24, size 0x2c, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method Remove, addr 0x5fdffc0, size 0xec, virtual false, abstract: false, final false
inline void Remove(::Fusion::NetworkObjectConnectionData*  item) ;

/// @brief Method RemoveAll, addr 0x5fe00ac, size 0x68, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectConnectionDataList RemoveAll() ;

/// @brief Method RemoveHead, addr 0x5fdff3c, size 0x84, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectConnectionData* RemoveHead() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectConnectionDataList() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::Fusion::NetworkObjectConnectionData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::Fusion::NetworkObjectConnectionData*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectConnectionDataList(int32_t  Count, ::Fusion::NetworkObjectConnectionData*  Head, ::Fusion::NetworkObjectConnectionData*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectConnectionData*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::Fusion::NetworkObjectConnectionData*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectConnectionDataList, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionDataList, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectConnectionDataList, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectConnectionDataList) == 0x18, "Size mismatch!");

} // namespace end def Fusion
