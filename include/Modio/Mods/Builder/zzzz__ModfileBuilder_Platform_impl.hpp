#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder_Platform.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_Platform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModfileBuilder_Platform::ModfileBuilder_Platform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModfileBuilder_Platform::ModfileBuilder_Platform()   {
}
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::Windows{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::Mac{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::Linux{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::Android{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::IOS{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::XboxOne{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::XboxSeriesX{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::PlayStation4{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::PlayStation5{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::Switch{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::ModfileBuilder_Platform  GlobalNamespace::ModfileBuilder_Platform::Oculus{static_cast<int32_t>(0xa)};
