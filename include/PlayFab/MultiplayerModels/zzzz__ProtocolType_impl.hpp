#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ProtocolType.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ProtocolType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::ProtocolType::ProtocolType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ProtocolType::ProtocolType()   {
}
constexpr ::PlayFab::MultiplayerModels::ProtocolType  PlayFab::MultiplayerModels::ProtocolType::TCP{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::ProtocolType  PlayFab::MultiplayerModels::ProtocolType::UDP{static_cast<int32_t>(0x1)};
