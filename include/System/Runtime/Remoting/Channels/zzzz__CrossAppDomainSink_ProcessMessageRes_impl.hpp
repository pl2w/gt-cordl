#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainSink_ProcessMessageRes.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainSink_ProcessMessageRes_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cadMrm", ty: "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes::CrossAppDomainSink_ProcessMessageRes(::ArrayW<uint8_t>  arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*  cadMrm) noexcept  {
this->arrResponse = arrResponse;
this->cadMrm = cadMrm;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes::CrossAppDomainSink_ProcessMessageRes()   {
}
