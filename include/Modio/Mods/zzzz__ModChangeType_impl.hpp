#pragma once
// IWYU pragma private; include "Modio/Mods/ModChangeType.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModChangeType::ModChangeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModChangeType::ModChangeType()   {
}
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::Modfile{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::IsEnabled{static_cast<int32_t>(0x2)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::IsSubscribed{static_cast<int32_t>(0x4)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::ModObject{static_cast<int32_t>(0x8)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::DownloadProgress{static_cast<int32_t>(0x10)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::FileState{static_cast<int32_t>(0x20)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::Rating{static_cast<int32_t>(0x40)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::IsPurchased{static_cast<int32_t>(0x80)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::Generic{static_cast<int32_t>(0x100)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::Dependencies{static_cast<int32_t>(0x200)};
constexpr ::Modio::Mods::ModChangeType  Modio::Mods::ModChangeType::Everything{static_cast<int32_t>(0xffffffff)};
