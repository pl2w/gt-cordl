#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_Platform.hpp"
#include "Modio/API/zzzz__ModioAPI_Platform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioAPI_Platform::ModioAPI_Platform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioAPI_Platform::ModioAPI_Platform()   {
}
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Source{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Windows{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Mac{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Linux{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Android{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::IOS{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::XboxOne{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::XboxSeriesX{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::PlayStation4{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::PlayStation5{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Switch{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::ModioAPI_Platform  GlobalNamespace::ModioAPI_Platform::Oculus{static_cast<int32_t>(0xb)};
