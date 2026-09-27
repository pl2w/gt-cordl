#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SourceType.hpp"
#include "PlayFab/ClientModels/zzzz__SourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::SourceType::SourceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SourceType::SourceType()   {
}
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::Admin{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::BackEnd{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::GameClient{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::GameServer{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::Partner{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::Custom{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ClientModels::SourceType  PlayFab::ClientModels::SourceType::API{static_cast<int32_t>(0x6)};
