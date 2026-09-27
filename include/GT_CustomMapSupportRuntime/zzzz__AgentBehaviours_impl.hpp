#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AgentBehaviours.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AgentBehaviours_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours::AgentBehaviours(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours::AgentBehaviours()   {
}
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours  GT_CustomMapSupportRuntime::AgentBehaviours::Search{static_cast<int32_t>(0x0)};
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours  GT_CustomMapSupportRuntime::AgentBehaviours::Chase{static_cast<int32_t>(0x1)};
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours  GT_CustomMapSupportRuntime::AgentBehaviours::Attack{static_cast<int32_t>(0x2)};
constexpr ::GT_CustomMapSupportRuntime::AgentBehaviours  GT_CustomMapSupportRuntime::AgentBehaviours::Count{static_cast<int32_t>(0x3)};
