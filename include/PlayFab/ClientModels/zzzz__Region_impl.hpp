#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/Region.hpp"
#include "PlayFab/ClientModels/zzzz__Region_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::Region::Region(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::Region::Region()   {
}
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::USCentral{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::USEast{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::EUWest{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::Singapore{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::Japan{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::Brazil{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ClientModels::Region  PlayFab::ClientModels::Region::Australia{static_cast<int32_t>(0x6)};
