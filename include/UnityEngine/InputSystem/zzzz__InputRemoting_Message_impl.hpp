#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_Message.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_MessageType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_Message_def.hpp"
// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::InputRemoting_MessageType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputRemoting_Message::InputRemoting_Message(int32_t  participantId, ::GlobalNamespace::InputRemoting_MessageType  type, ::ArrayW<uint8_t>  data) noexcept  {
this->participantId = participantId;
this->type = type;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputRemoting_Message::InputRemoting_Message()   {
}
