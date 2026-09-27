#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_DeferredValue.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_DeferredValue_def.hpp"
// Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EnabledDesired", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StartTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor_DeferredValue::OVRAnchor_DeferredValue(::GlobalNamespace::OVRTask_1<bool>  Task, bool  EnabledDesired, uint64_t  RequestId, double_t  Timeout, float_t  StartTime) noexcept  {
this->Task = Task;
this->EnabledDesired = EnabledDesired;
this->RequestId = RequestId;
this->Timeout = Timeout;
this->StartTime = StartTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_DeferredValue::OVRAnchor_DeferredValue()   {
}
