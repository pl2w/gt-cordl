#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/NavAgentType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__NavAgentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::NavAgentType::NavAgentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::NavAgentType::NavAgentType()   {
}
constexpr ::GT_CustomMapSupportRuntime::NavAgentType  GT_CustomMapSupportRuntime::NavAgentType::Humanoid{static_cast<int32_t>(0x0)};
constexpr ::GT_CustomMapSupportRuntime::NavAgentType  GT_CustomMapSupportRuntime::NavAgentType::Small{static_cast<int32_t>(0x1)};
constexpr ::GT_CustomMapSupportRuntime::NavAgentType  GT_CustomMapSupportRuntime::NavAgentType::Medium{static_cast<int32_t>(0x2)};
constexpr ::GT_CustomMapSupportRuntime::NavAgentType  GT_CustomMapSupportRuntime::NavAgentType::Large{static_cast<int32_t>(0x3)};
