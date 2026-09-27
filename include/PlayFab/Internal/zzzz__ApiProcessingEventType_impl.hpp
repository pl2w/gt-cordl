#pragma once
// IWYU pragma private; include "PlayFab/Internal/ApiProcessingEventType.hpp"
#include "PlayFab/Internal/zzzz__ApiProcessingEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::Internal::ApiProcessingEventType::ApiProcessingEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::ApiProcessingEventType::ApiProcessingEventType()   {
}
constexpr ::PlayFab::Internal::ApiProcessingEventType  PlayFab::Internal::ApiProcessingEventType::Pre{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::Internal::ApiProcessingEventType  PlayFab::Internal::ApiProcessingEventType::Post{static_cast<int32_t>(0x1)};
