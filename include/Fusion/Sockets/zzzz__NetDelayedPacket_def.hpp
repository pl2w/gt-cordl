#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetDelayedPacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDelayedPacket)
// Forward declare root types
namespace Fusion::Sockets {
struct NetDelayedPacket;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetDelayedPacket);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetDelayedPacket, "Fusion.Sockets", "NetDelayedPacket");
// Dependencies Fusion.Sockets.NetAddress
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetDelayedPacket
struct CORDL_TYPE NetDelayedPacket {
public:
// Declarations
/// @brief Method Create, addr 0x602b794, size 0x54, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetDelayedPacket* Create(int32_t  dataLength) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetDelayedPacket() ;

// Ctor Parameters [CppParam { name: "Prev", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "::Fusion::Sockets::NetDelayedPacket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeliveryTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "Data", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DataLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetDelayedPacket(::Fusion::Sockets::NetDelayedPacket*  Prev, ::Fusion::Sockets::NetDelayedPacket*  Next, double_t  DeliveryTime, ::Fusion::Sockets::NetAddress  Address, uint8_t*  Data, int32_t  DataLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Prev, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::NetDelayedPacket*  Prev;

/// @brief Field Next, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetDelayedPacket*  Next;

/// @brief Field DeliveryTime, offset: 0x10, size: 0x8, def value: None
 double_t  DeliveryTime;

/// @brief Field Address, offset: 0x18, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  Address;

/// @brief Field Data, offset: 0x30, size: 0x8, def value: None
 uint8_t*  Data;

/// @brief Field DataLength, offset: 0x38, size: 0x4, def value: None
 int32_t  DataLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetDelayedPacket, Prev) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacket, Next) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacket, DeliveryTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacket, Address) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacket, Data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetDelayedPacket, DataLength) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetDelayedPacket) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Sockets
