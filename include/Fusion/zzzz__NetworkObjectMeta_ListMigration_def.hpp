#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMeta_ListMigration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectMeta_ListMigration)
namespace Fusion {
class NetworkObjectMeta;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkObjectMeta_ListMigration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkObjectMeta_ListMigration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkObjectMeta_ListMigration, "Fusion", "NetworkObjectMeta/ListMigration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectMeta/ListMigration
struct CORDL_TYPE NetworkObjectMeta_ListMigration {
public:
// Declarations
/// @brief Method AddAfter, addr 0x5fcb9ac, size 0x17c, virtual false, abstract: false, final false
inline void AddAfter(::Fusion::NetworkObjectMeta*  item, ::Fusion::NetworkObjectMeta*  after) ;

/// @brief Method AddBefore, addr 0x5fcb830, size 0x17c, virtual false, abstract: false, final false
inline void AddBefore(::Fusion::NetworkObjectMeta*  item, ::Fusion::NetworkObjectMeta*  before) ;

/// @brief Method AddFirst, addr 0x5fcb6a0, size 0xb8, virtual false, abstract: false, final false
inline void AddFirst(::Fusion::NetworkObjectMeta*  item) ;

/// @brief Method AddLast, addr 0x5fcb77c, size 0xb4, virtual false, abstract: false, final false
inline void AddLast(::Fusion::NetworkObjectMeta*  item) ;

/// @brief Method IsInList, addr 0x5fcb758, size 0x24, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::NetworkObjectMeta*  item) ;

/// @brief Method Next, addr 0x5fcb68c, size 0x14, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectMeta* Next(::Fusion::NetworkObjectMeta*  item) ;

/// @brief Method Remove, addr 0x5fcbba8, size 0xec, virtual false, abstract: false, final false
inline void Remove(::Fusion::NetworkObjectMeta*  item) ;

/// @brief Method RemoveHead, addr 0x5fcbb28, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectMeta* RemoveHead() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectMeta_ListMigration() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectMeta_ListMigration(int32_t  Count, ::Fusion::NetworkObjectMeta*  Head, ::Fusion::NetworkObjectMeta*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkObjectMeta_ListMigration, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkObjectMeta_ListMigration, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkObjectMeta_ListMigration, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkObjectMeta_ListMigration) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
