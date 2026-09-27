#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommandHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetCommands_def.hpp"
#include "Fusion/Sockets/zzzz__NetPacketType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetCommandHeader)
namespace Fusion::Sockets {
struct NetCommands;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetCommandHeader;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetCommandHeader);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetCommandHeader, "Fusion.Sockets", "NetCommandHeader");
// Dependencies Fusion.Sockets.NetCommands, Fusion.Sockets.NetPacketType
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetCommandHeader
struct CORDL_TYPE NetCommandHeader {
public:
// Declarations
/// @brief Field Command, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_Command, put=__cordl_internal_set_Command)) ::Fusion::Sockets::NetCommands  Command;

/// @brief Field PacketType, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_PacketType, put=__cordl_internal_set_PacketType)) ::Fusion::Sockets::NetPacketType  PacketType;

/// @brief Method Create, addr 0x6029800, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandHeader Create(::Fusion::Sockets::NetCommands  command) ;

constexpr ::Fusion::Sockets::NetCommands const& __cordl_internal_get_Command() const;

constexpr ::Fusion::Sockets::NetCommands& __cordl_internal_get_Command() ;

constexpr ::Fusion::Sockets::NetPacketType const& __cordl_internal_get_PacketType() const;

constexpr ::Fusion::Sockets::NetPacketType& __cordl_internal_get_PacketType() ;

constexpr void __cordl_internal_set_Command(::Fusion::Sockets::NetCommands  value) ;

constexpr void __cordl_internal_set_PacketType(::Fusion::Sockets::NetPacketType  value) ;

/// @brief Method op_Implicit, addr 0x602980c, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetCommandHeader op_Implicit___Fusion__Sockets__NetCommandHeader(::Fusion::Sockets::NetCommands  commands) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetCommandHeader() ;

// Ctor Parameters [CppParam { name: "PacketType", ty: "::Fusion::Sockets::NetPacketType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Command", ty: "::Fusion::Sockets::NetCommands", modifiers: "", def_value: None, comment: None }]
constexpr NetCommandHeader(::Fusion::Sockets::NetPacketType  PacketType, ::Fusion::Sockets::NetCommands  Command) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___PacketType_padding[0x0];
/// @brief Field PacketType, offset: 0x0, size: 0x1, def value: None
 ::Fusion::Sockets::NetPacketType  ___PacketType;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___PacketType_padding_forAlignment[0x0];
/// @brief Field PacketType, offset: 0x0, size: 0x1, def value: None
 ::Fusion::Sockets::NetPacketType  ___PacketType_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___Command_padding[0x1];
/// @brief Field Command, offset: 0x1, size: 0x1, def value: None
 ::Fusion::Sockets::NetCommands  ___Command;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___Command_padding_forAlignment[0x1];
/// @brief Field Command, offset: 0x1, size: 0x1, def value: None
 ::Fusion::Sockets::NetCommands  ___Command_forAlignment;
};
};
public:

/// @brief Field SIZE_BITS offset 0xffffffff size 0x4
static constexpr int32_t  SIZE_BITS{static_cast<int32_t>(0x10)};

/// @brief Field SIZE_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  SIZE_BYTES{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetCommandHeader) == 0x2, "Size mismatch!");

} // namespace end def Fusion::Sockets
