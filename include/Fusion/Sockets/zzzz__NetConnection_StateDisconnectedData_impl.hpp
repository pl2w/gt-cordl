#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection_StateDisconnectedData.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_impl.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateDisconnectedData_def.hpp"
// Ctor Parameters [CppParam { name: "Reason", ty: "::Fusion::Sockets::NetDisconnectReason", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CallbackInvoked", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SentDisconnectCommand", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetConnection_StateDisconnectedData::NetConnection_StateDisconnectedData(::Fusion::Sockets::NetDisconnectReason  Reason, int32_t  CallbackInvoked, int32_t  SentDisconnectCommand) noexcept  {
this->Reason = Reason;
this->CallbackInvoked = CallbackInvoked;
this->SentDisconnectCommand = SentDisconnectCommand;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetConnection_StateDisconnectedData::NetConnection_StateDisconnectedData()   {
}
