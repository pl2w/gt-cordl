#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/MapLoadStatus.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::MapLoadStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::MapLoadStatus()   {
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::None{static_cast<int32_t>(0x0)};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::Downloading{static_cast<int32_t>(0x1)};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::Loading{static_cast<int32_t>(0x2)};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::Unloading{static_cast<int32_t>(0x3)};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::Error{static_cast<int32_t>(0x4)};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus::Installing{static_cast<int32_t>(0x5)};
