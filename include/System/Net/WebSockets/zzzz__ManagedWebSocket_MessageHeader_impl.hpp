#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket_MessageHeader.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageOpcode_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_def.hpp"
// Ctor Parameters [CppParam { name: "Opcode", ty: "::GlobalNamespace::ManagedWebSocket_MessageOpcode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fin", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PayloadLength", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Mask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedWebSocket_MessageHeader::ManagedWebSocket_MessageHeader(::GlobalNamespace::ManagedWebSocket_MessageOpcode  Opcode, bool  Fin, int64_t  PayloadLength, int32_t  Mask) noexcept  {
this->Opcode = Opcode;
this->Fin = Fin;
this->PayloadLength = PayloadLength;
this->Mask = Mask;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket_MessageHeader::ManagedWebSocket_MessageHeader()   {
}
