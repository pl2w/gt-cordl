#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequestInputType.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::NLPRequestInputType::NLPRequestInputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLPRequestInputType::NLPRequestInputType()   {
}
constexpr ::Meta::Voice::NLPRequestInputType  Meta::Voice::NLPRequestInputType::Text{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::NLPRequestInputType  Meta::Voice::NLPRequestInputType::Audio{static_cast<int32_t>(0x1)};
