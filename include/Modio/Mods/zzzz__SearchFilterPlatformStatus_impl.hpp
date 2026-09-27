#pragma once
// IWYU pragma private; include "Modio/Mods/SearchFilterPlatformStatus.hpp"
#include "Modio/Mods/zzzz__SearchFilterPlatformStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::SearchFilterPlatformStatus::SearchFilterPlatformStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::SearchFilterPlatformStatus::SearchFilterPlatformStatus()   {
}
constexpr ::Modio::Mods::SearchFilterPlatformStatus  Modio::Mods::SearchFilterPlatformStatus::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::SearchFilterPlatformStatus  Modio::Mods::SearchFilterPlatformStatus::PendingOnly{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::SearchFilterPlatformStatus  Modio::Mods::SearchFilterPlatformStatus::LiveAndPending{static_cast<int32_t>(0x2)};
