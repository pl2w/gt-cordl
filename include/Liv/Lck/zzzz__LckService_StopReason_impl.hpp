#pragma once
// IWYU pragma private; include "Liv/Lck/LckService_StopReason.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckService_StopReason::LckService_StopReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckService_StopReason::LckService_StopReason()   {
}
constexpr ::GlobalNamespace::LckService_StopReason  GlobalNamespace::LckService_StopReason::UserStopped{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckService_StopReason  GlobalNamespace::LckService_StopReason::LowStorageSpace{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckService_StopReason  GlobalNamespace::LckService_StopReason::Error{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckService_StopReason  GlobalNamespace::LckService_StopReason::ApplicationLifecycle{static_cast<int32_t>(0x3)};
