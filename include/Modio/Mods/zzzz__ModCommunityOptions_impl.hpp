#pragma once
// IWYU pragma private; include "Modio/Mods/ModCommunityOptions.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Mods::ModCommunityOptions::ModCommunityOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModCommunityOptions::ModCommunityOptions()   {
}
constexpr ::Modio::Mods::ModCommunityOptions  Modio::Mods::ModCommunityOptions::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Mods::ModCommunityOptions  Modio::Mods::ModCommunityOptions::EnableComments{static_cast<int32_t>(0x1)};
constexpr ::Modio::Mods::ModCommunityOptions  Modio::Mods::ModCommunityOptions::EnablePreviews{static_cast<int32_t>(0x40)};
constexpr ::Modio::Mods::ModCommunityOptions  Modio::Mods::ModCommunityOptions::EnablePreviewUrls{static_cast<int32_t>(0x80)};
constexpr ::Modio::Mods::ModCommunityOptions  Modio::Mods::ModCommunityOptions::AllowDependencies{static_cast<int32_t>(0x400)};
