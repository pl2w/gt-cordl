#pragma once
// IWYU pragma private; include "Steamworks/ESteamAPIInitResult.hpp"
#include "Steamworks/zzzz__ESteamAPIInitResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::ESteamAPIInitResult::ESteamAPIInitResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamAPIInitResult::ESteamAPIInitResult()   {
}
constexpr ::Steamworks::ESteamAPIInitResult  Steamworks::ESteamAPIInitResult::k_ESteamAPIInitResult_OK{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamAPIInitResult  Steamworks::ESteamAPIInitResult::k_ESteamAPIInitResult_FailedGeneric{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamAPIInitResult  Steamworks::ESteamAPIInitResult::k_ESteamAPIInitResult_NoSteamClient{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamAPIInitResult  Steamworks::ESteamAPIInitResult::k_ESteamAPIInitResult_VersionMismatch{static_cast<int32_t>(0x3)};
