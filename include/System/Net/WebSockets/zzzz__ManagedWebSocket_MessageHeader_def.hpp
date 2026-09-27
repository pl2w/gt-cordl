#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket_MessageHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageOpcode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket_MessageHeader)
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket_MessageHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket_MessageHeader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket_MessageHeader, "System.Net.WebSockets", "ManagedWebSocket/MessageHeader");
// Dependencies System.Net.WebSockets.ManagedWebSocket::MessageOpcode
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/MessageHeader
struct CORDL_TYPE ManagedWebSocket_MessageHeader {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket_MessageHeader() ;

// Ctor Parameters [CppParam { name: "Opcode", ty: "::GlobalNamespace::ManagedWebSocket_MessageOpcode", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fin", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "PayloadLength", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Mask", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket_MessageHeader(::GlobalNamespace::ManagedWebSocket_MessageOpcode  Opcode, bool  Fin, int64_t  PayloadLength, int32_t  Mask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Opcode, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::ManagedWebSocket_MessageOpcode  Opcode;

/// @brief Field Fin, offset: 0x1, size: 0x1, def value: None
 bool  Fin;

/// @brief Field PayloadLength, offset: 0x8, size: 0x8, def value: None
 int64_t  PayloadLength;

/// @brief Field Mask, offset: 0x10, size: 0x4, def value: None
 int32_t  Mask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedWebSocket_MessageHeader, Opcode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket_MessageHeader, Fin) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket_MessageHeader, PayloadLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket_MessageHeader, Mask) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedWebSocket_MessageHeader) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
