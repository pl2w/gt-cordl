#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSendEnvelope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetPacketType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSendEnvelope)
// Forward declare root types
namespace Fusion::Sockets {
struct NetSendEnvelope;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetSendEnvelope);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSendEnvelope, "Fusion.Sockets", "NetSendEnvelope");
// Dependencies Fusion.Sockets.NetPacketType
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetSendEnvelope
struct CORDL_TYPE NetSendEnvelope {
public:
// Declarations
/// @brief Method TakeUserData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* TakeUserData() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetSendEnvelope() ;

// Ctor Parameters [CppParam { name: "UserData", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SendTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sequence", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PacketType", ty: "::Fusion::Sockets::NetPacketType", modifiers: "", def_value: None, comment: None }]
constexpr NetSendEnvelope(void*  UserData, double_t  SendTime, uint16_t  Sequence, ::Fusion::Sockets::NetPacketType  PacketType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UserData, offset: 0x0, size: 0x8, def value: None
 void*  UserData;

/// @brief Field SendTime, offset: 0x8, size: 0x8, def value: None
 double_t  SendTime;

/// @brief Field Sequence, offset: 0x10, size: 0x2, def value: None
 uint16_t  Sequence;

/// @brief Field PacketType, offset: 0x12, size: 0x1, def value: None
 ::Fusion::Sockets::NetPacketType  PacketType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetSendEnvelope, UserData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelope, SendTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelope, Sequence) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelope, PacketType) == 0x12, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetSendEnvelope) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
