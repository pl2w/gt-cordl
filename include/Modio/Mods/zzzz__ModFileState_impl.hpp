#pragma once
// IWYU pragma private; include "Modio/Mods/ModFileState.hpp"
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModFileState::ModFileState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModFileState::ModFileState()   {
}
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Queued{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Downloading{static_cast<int32_t>(0x2)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Downloaded{static_cast<int32_t>(0x3)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Installing{static_cast<int32_t>(0x4)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Installed{static_cast<int32_t>(0x5)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Updating{static_cast<int32_t>(0x6)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::Uninstalling{static_cast<int32_t>(0x7)};
constexpr ::Modio::Mods::ModFileState  Modio::Mods::ModFileState::FileOperationFailed{static_cast<int32_t>(0x8)};
