#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetDelayedPacketList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDelayedPacketList)
namespace Fusion::Sockets {
struct NetDelayedPacket;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetDelayedPacketList;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetDelayedPacketList);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetDelayedPacketList, "Fusion.Sockets", "NetDelayedPacketList");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetDelayedPacketList
struct CORDL_TYPE NetDelayedPacketList {
public:
// Declarations
/// @brief Method AddLast, addr 0x602b7e8, size 0x74, virtual false, abstract: false, final false
inline void AddLast(::Fusion::Sockets::NetDelayedPacket*  item) ;

/// @brief Method Dispose, addr 0x602b998, size 0x9c, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method IsInList, addr 0x602b85c, size 0x24, virtual false, abstract: false, final false
inline bool IsInList(::Fusion::Sockets::NetDelayedPacket*  item) ;

/// @brief Method Remove, addr 0x602b900, size 0x98, virtual false, abstract: false, final false
inline void Remove(::Fusion::Sockets::NetDelayedPacket*  item) ;

/// @brief Method RemoveHead, addr 0x602b880, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetDelayedPacket* RemoveHead() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetDelayedPacketList() ;

// Ctor Parameters [CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: None, comment: None }]
constexpr NetDelayedPacketList(int32_t  Count, ::Fusion::Sockets::NetDelayedPacket*  Head, ::Fusion::Sockets::NetDelayedPacket*  Tail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Head, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetDelayedPacket*  Head;

/// @brief Field Tail, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::NetDelayedPacket*  Tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetDelayedPacketList, Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacketList, Head) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacketList, Tail) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetDelayedPacketList) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
