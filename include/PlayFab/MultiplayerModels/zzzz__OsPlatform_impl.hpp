#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/OsPlatform.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OsPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::MultiplayerModels::OsPlatform::OsPlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::OsPlatform::OsPlatform()   {
}
constexpr ::PlayFab::MultiplayerModels::OsPlatform  PlayFab::MultiplayerModels::OsPlatform::Windows{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::MultiplayerModels::OsPlatform  PlayFab::MultiplayerModels::OsPlatform::Linux{static_cast<int32_t>(0x1)};
