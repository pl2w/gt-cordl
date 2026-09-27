#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/AuthModeOption.hpp"
#include "Fusion/Photon/Realtime/zzzz__AuthModeOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::AuthModeOption::AuthModeOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::AuthModeOption::AuthModeOption()   {
}
constexpr ::Fusion::Photon::Realtime::AuthModeOption  Fusion::Photon::Realtime::AuthModeOption::Auth{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Photon::Realtime::AuthModeOption  Fusion::Photon::Realtime::AuthModeOption::AuthOnce{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Photon::Realtime::AuthModeOption  Fusion::Photon::Realtime::AuthModeOption::AuthOnceWss{static_cast<int32_t>(0x2)};
