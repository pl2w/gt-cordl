#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection_StateDisconnectedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnection_StateDisconnectedData)
// Forward declare root types
namespace GlobalNamespace {
struct NetConnection_StateDisconnectedData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetConnection_StateDisconnectedData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetConnection_StateDisconnectedData, "Fusion.Sockets", "NetConnection/StateDisconnectedData");
// Dependencies Fusion.Sockets.NetDisconnectReason
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnection/StateDisconnectedData
struct CORDL_TYPE NetConnection_StateDisconnectedData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetConnection_StateDisconnectedData() ;

// Ctor Parameters [CppParam { name: "Reason", ty: "::Fusion::Sockets::NetDisconnectReason", modifiers: "", def_value: None, comment: None }, CppParam { name: "CallbackInvoked", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SentDisconnectCommand", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnection_StateDisconnectedData(::Fusion::Sockets::NetDisconnectReason  Reason, int32_t  CallbackInvoked, int32_t  SentDisconnectCommand) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29361};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Reason, offset: 0x0, size: 0x1, def value: None
 ::Fusion::Sockets::NetDisconnectReason  Reason;

/// @brief Field CallbackInvoked, offset: 0x4, size: 0x4, def value: None
 int32_t  CallbackInvoked;

/// @brief Field SentDisconnectCommand, offset: 0x8, size: 0x4, def value: None
 int32_t  SentDisconnectCommand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetConnection_StateDisconnectedData, Reason) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnection_StateDisconnectedData, CallbackInvoked) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnection_StateDisconnectedData, SentDisconnectCommand) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetConnection_StateDisconnectedData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
