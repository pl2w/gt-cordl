#pragma once
// IWYU pragma private; include "GlobalNamespace/EMainScreenStatus.hpp"
#include "GlobalNamespace/zzzz__EMainScreenStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EMainScreenStatus::EMainScreenStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EMainScreenStatus::EMainScreenStatus()   {
}
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Updated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Declined{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Pending{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Timedout{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Setup{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Previous{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::Missing{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::EMainScreenStatus  GlobalNamespace::EMainScreenStatus::FullControl{static_cast<int32_t>(0x8)};
