#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroupMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeerGroupMap)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace GlobalNamespace {
struct NetPeerGroupMap_EntryState;
}
namespace GlobalNamespace {
struct NetPeerGroupMap_Entry;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetPeerGroupMap;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetPeerGroupMap);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetPeerGroupMap, "Fusion.Sockets", "NetPeerGroupMap");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetPeerGroupMap
struct CORDL_TYPE NetPeerGroupMap {
public:
// Declarations
using Entry = ::GlobalNamespace::NetPeerGroupMap_Entry;

using EntryState = ::GlobalNamespace::NetPeerGroupMap_EntryState;

/// @brief Method Allocate, addr 0x6032d30, size 0x108, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetPeerGroupMap* Allocate(int32_t  capacity) ;

/// @brief Method Dispose, addr 0x6032ce8, size 0x48, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::Fusion::Sockets::NetPeerGroupMap*>  map) ;

/// @brief Method Find, addr 0x60332ac, size 0x118, virtual false, abstract: false, final false
inline int16_t Find(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method Insert, addr 0x6032fc0, size 0x2ec, virtual false, abstract: false, final false
inline bool Insert(::Fusion::Sockets::NetAddress  address, int16_t  group) ;

/// @brief Method Remove, addr 0x6032e38, size 0x188, virtual false, abstract: false, final false
inline int32_t Remove(::Fusion::Sockets::NetAddress  address) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetPeerGroupMap() ;

// Ctor Parameters [CppParam { name: "Buckets", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Entries", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: None, comment: None }, CppParam { name: "FreeHead", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: None, comment: None }, CppParam { name: "UsedCount", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FreeCount", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CapacityUsable", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CapacityAllocated", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr NetPeerGroupMap(::GlobalNamespace::NetPeerGroupMap_Entry*  Buckets, ::GlobalNamespace::NetPeerGroupMap_Entry*  Entries, ::GlobalNamespace::NetPeerGroupMap_Entry*  FreeHead, uint64_t  UsedCount, uint64_t  FreeCount, uint64_t  CapacityUsable, uint64_t  CapacityAllocated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Buckets, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::NetPeerGroupMap_Entry*  Buckets;

/// @brief Field Entries, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::NetPeerGroupMap_Entry*  Entries;

/// @brief Field FreeHead, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPeerGroupMap_Entry*  FreeHead;

/// @brief Field UsedCount, offset: 0x18, size: 0x8, def value: None
 uint64_t  UsedCount;

/// @brief Field FreeCount, offset: 0x20, size: 0x8, def value: None
 uint64_t  FreeCount;

/// @brief Field CapacityUsable, offset: 0x28, size: 0x8, def value: None
 uint64_t  CapacityUsable;

/// @brief Field CapacityAllocated, offset: 0x30, size: 0x8, def value: None
 uint64_t  CapacityAllocated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, Buckets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, Entries) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, FreeHead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, UsedCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, FreeCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, CapacityUsable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroupMap, CapacityAllocated) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetPeerGroupMap) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Sockets
