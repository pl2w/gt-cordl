#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPacketType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPacketType)
// Forward declare root types
namespace Fusion::Sockets {
struct NetPacketType;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetPacketType);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetPacketType, "Fusion.Sockets", "NetPacketType");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetPacketType
struct CORDL_TYPE NetPacketType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __NetPacketType_Unwrapped
enum struct __NetPacketType_Unwrapped : uint8_t {
__E_Command = static_cast<uint8_t>(0x1u),
__E_UnreliableData = static_cast<uint8_t>(0x2u),
__E_NotifyData = static_cast<uint8_t>(0x3u),
__E_NotifyAcks = static_cast<uint8_t>(0x4u),
__E_Unconnected = static_cast<uint8_t>(0x5u),
__E_MtuDiscoveryReq = static_cast<uint8_t>(0x6u),
__E_MtuDiscoveryRep = static_cast<uint8_t>(0x7u),
__E_NotifyReliableData = static_cast<uint8_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetPacketType_Unwrapped () const noexcept {
return static_cast<__NetPacketType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetPacketType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NetPacketType(uint8_t  value__) noexcept;

/// @brief Field Command value: U8(1)
static ::Fusion::Sockets::NetPacketType const Command;

/// @brief Field MtuDiscoveryRep value: U8(7)
static ::Fusion::Sockets::NetPacketType const MtuDiscoveryRep;

/// @brief Field MtuDiscoveryReq value: U8(6)
static ::Fusion::Sockets::NetPacketType const MtuDiscoveryReq;

/// @brief Field NotifyAcks value: U8(4)
static ::Fusion::Sockets::NetPacketType const NotifyAcks;

/// @brief Field NotifyData value: U8(3)
static ::Fusion::Sockets::NetPacketType const NotifyData;

/// @brief Field NotifyReliableData value: U8(8)
static ::Fusion::Sockets::NetPacketType const NotifyReliableData;

/// @brief Field Unconnected value: U8(5)
static ::Fusion::Sockets::NetPacketType const Unconnected;

/// @brief Field UnreliableData value: U8(2)
static ::Fusion::Sockets::NetPacketType const UnreliableData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetPacketType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetPacketType) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Sockets
