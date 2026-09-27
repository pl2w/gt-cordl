#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_RemoteSender.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_RemoteInputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_RemoteSender_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_RemoteInputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layouts", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::InputRemoting_RemoteInputDevice>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputRemoting_RemoteSender::InputRemoting_RemoteSender(int32_t  senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  layouts, ::ArrayW<::GlobalNamespace::InputRemoting_RemoteInputDevice>  devices) noexcept  {
this->senderId = senderId;
this->layouts = layouts;
this->devices = devices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputRemoting_RemoteSender::InputRemoting_RemoteSender()   {
}
