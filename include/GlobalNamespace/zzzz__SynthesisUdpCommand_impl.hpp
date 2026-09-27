#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisUdpCommand.hpp"
#include "GlobalNamespace/zzzz__SynthesisUdpCommand_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
// Ctor Parameters [CppParam { name: "commandName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EventReceiver", ty: "::UnityEngine::Events::UnityEvent_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "extraArgs", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SynthesisUdpCommand::SynthesisUdpCommand(::StringW  commandName, ::UnityEngine::Events::UnityEvent_1<::StringW>*  EventReceiver, ::StringW  extraArgs) noexcept  {
this->commandName = commandName;
this->EventReceiver = EventReceiver;
this->extraArgs = extraArgs;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynthesisUdpCommand::SynthesisUdpCommand()   {
}
