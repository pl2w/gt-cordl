#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ChangeFlags.hpp"
#include "Modio/Mods/Builder/zzzz__ChangeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::Builder::ChangeFlags::ChangeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::Builder::ChangeFlags::ChangeFlags()   {
}
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Name{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Summary{static_cast<int32_t>(0x2)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Description{static_cast<int32_t>(0x4)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Logo{static_cast<int32_t>(0x8)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Gallery{static_cast<int32_t>(0x10)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Tags{static_cast<int32_t>(0x20)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::MetadataBlob{static_cast<int32_t>(0x40)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::MetadataKvps{static_cast<int32_t>(0x80)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Visibility{static_cast<int32_t>(0x100)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::MaturityOptions{static_cast<int32_t>(0x200)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::CommunityOptions{static_cast<int32_t>(0x400)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Modfile{static_cast<int32_t>(0x800)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::MonetizationConfig{static_cast<int32_t>(0x1000)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::Dependencies{static_cast<int32_t>(0x2000)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::AddFlags{static_cast<int32_t>(0x76f)};
constexpr ::Modio::Mods::Builder::ChangeFlags  Modio::Mods::Builder::ChangeFlags::EditFlags{static_cast<int32_t>(0x176f)};
