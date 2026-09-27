#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneClearReason.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZoneClearReason::ZoneClearReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneClearReason::ZoneClearReason()   {
}
constexpr ::GlobalNamespace::ZoneClearReason  GlobalNamespace::ZoneClearReason::JoinZone{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ZoneClearReason  GlobalNamespace::ZoneClearReason::LeaveZone{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ZoneClearReason  GlobalNamespace::ZoneClearReason::Disconnect{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ZoneClearReason  GlobalNamespace::ZoneClearReason::MigrateGameEntityZone{static_cast<int32_t>(0x3)};
