#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectionMap)
namespace Fusion::Sockets {
class INetPeerGroupCallbacks;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace Fusion::Sockets {
struct NetConnection;
}
namespace GlobalNamespace {
struct NetConnectionMap_EntryState;
}
namespace GlobalNamespace {
struct NetConnectionMap_Iterator;
}
namespace GlobalNamespace {
struct NetConnectionMap_UniqueIdMapping;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetConnectionMap;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConnectionMap);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConnectionMap, "Fusion.Sockets", "NetConnectionMap");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnectionMap
struct CORDL_TYPE NetConnectionMap {
public:
// Declarations
using EntryState = ::GlobalNamespace::NetConnectionMap_EntryState;

using Iterator = ::GlobalNamespace::NetConnectionMap_Iterator;

using UniqueIdMapping = ::GlobalNamespace::NetConnectionMap_UniqueIdMapping;

 __declspec(property(get=get_ConnectionsBuffer)) ::Fusion::Sockets::NetConnection*  ConnectionsBuffer;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_CountUsed)) int32_t  CountUsed;

/// @brief Method Allocate, addr 0x602a9a8, size 0x18c, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConnectionMap* Allocate(int32_t  capacity, int16_t  groupIndex, /* [IsReadOnly] */ ::by_ref<::Fusion::Sockets::NetConfig*>  config) ;

/// @brief Method ContainsUniqueId, addr 0x602b458, size 0x68, virtual false, abstract: false, final false
inline bool ContainsUniqueId(int64_t  value, ::by_ref<int16_t>  groupIndex) ;

/// @brief Method Dispose, addr 0x602a7d4, size 0x1d4, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::Fusion::Sockets::NetConnectionMap*>  map, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks) ;

/// @brief Method Find, addr 0x602b380, size 0xd8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* Find(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method FindByIndex, addr 0x602b4c0, size 0x5c, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* FindByIndex(int32_t  index) ;

/// @brief Method FindInsertionIndex, addr 0x602b62c, size 0x50, virtual false, abstract: false, final false
inline uint64_t FindInsertionIndex(int64_t  value) ;

/// @brief Method Insert, addr 0x602af8c, size 0x3f4, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* Insert(::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method Remap, addr 0x602ab54, size 0x228, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* Remap(::Fusion::Sockets::NetAddress  oldAddress, ::Fusion::Sockets::NetAddress  newAddress) ;

/// @brief Method Remove, addr 0x602ad7c, size 0x14c, virtual false, abstract: false, final false
inline bool Remove(::Fusion::Sockets::NetAddress  address) ;

/// @brief Method RemoveUniqueId, addr 0x602aec8, size 0xc4, virtual false, abstract: false, final false
inline bool RemoveUniqueId(int64_t  value) ;

/// @brief Method StoreUniqueId, addr 0x602b51c, size 0xdc, virtual false, abstract: false, final false
inline void StoreUniqueId(int64_t  value, int16_t  groupIndex) ;

/// @brief Method TryFindByIndex, addr 0x602b5f8, size 0x34, virtual false, abstract: false, final false
inline bool TryFindByIndex(int32_t  index, ::by_ref<::Fusion::Sockets::NetConnection*>  connection) ;

/// @brief Method get_ConnectionsBuffer, addr 0x602ab4c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* get_ConnectionsBuffer() ;

/// @brief Method get_Count, addr 0x602ab34, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_CountUsed, addr 0x602ab44, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CountUsed() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConnectionMap() ;

// Ctor Parameters [CppParam { name: "Buckets", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "FreeHead", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Connections", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "UniqueIdHashes", ty: "::GlobalNamespace::NetConnectionMap_UniqueIdMapping*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Group", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UsedCount", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FreeCount", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IdsCount", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CapacityAllocated", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CapacityUsable", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnectionMap(::Fusion::Sockets::NetConnection*  Buckets, ::Fusion::Sockets::NetConnection*  FreeHead, ::Fusion::Sockets::NetConnection*  Connections, ::GlobalNamespace::NetConnectionMap_UniqueIdMapping*  UniqueIdHashes, int16_t  Group, uint64_t  UsedCount, uint64_t  FreeCount, uint64_t  IdsCount, uint64_t  CapacityAllocated, uint64_t  CapacityUsable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field Buckets, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnection*  Buckets;

/// @brief Field FreeHead, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnection*  FreeHead;

/// @brief Field Connections, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnection*  Connections;

/// @brief Field UniqueIdHashes, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::NetConnectionMap_UniqueIdMapping*  UniqueIdHashes;

/// @brief Field Group, offset: 0x20, size: 0x2, def value: None
 int16_t  Group;

/// @brief Field UsedCount, offset: 0x28, size: 0x8, def value: None
 uint64_t  UsedCount;

/// @brief Field FreeCount, offset: 0x30, size: 0x8, def value: None
 uint64_t  FreeCount;

/// @brief Field IdsCount, offset: 0x38, size: 0x8, def value: None
 uint64_t  IdsCount;

/// @brief Field CapacityAllocated, offset: 0x40, size: 0x8, def value: None
 uint64_t  CapacityAllocated;

/// @brief Field CapacityUsable, offset: 0x48, size: 0x8, def value: None
 uint64_t  CapacityUsable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, Buckets) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, FreeHead) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, Connections) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, UniqueIdHashes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, Group) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, UsedCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, FreeCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, IdsCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, CapacityAllocated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnectionMap, CapacityUsable) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConnectionMap) == 0x50, "Size mismatch!");

} // namespace end def Fusion::Sockets
