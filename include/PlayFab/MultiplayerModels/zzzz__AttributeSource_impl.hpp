#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AttributeSource.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AttributeSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::AttributeSource::AttributeSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::AttributeSource::AttributeSource()   {
}
constexpr ::PlayFab::MultiplayerModels::AttributeSource  PlayFab::MultiplayerModels::AttributeSource::User{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::AttributeSource  PlayFab::MultiplayerModels::AttributeSource::PlayerEntity{static_cast<int32_t>(0x1)};
