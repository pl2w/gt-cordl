#pragma once
// IWYU pragma private; include "GlobalNamespace/WS_PROXY_ACTIONS.hpp"
#include "GlobalNamespace/zzzz__WS_PROXY_ACTIONS_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS::WS_PROXY_ACTIONS(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS::WS_PROXY_ACTIONS()   {
}
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS  GlobalNamespace::WS_PROXY_ACTIONS::NOTHING{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS  GlobalNamespace::WS_PROXY_ACTIONS::BROADCAST{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS  GlobalNamespace::WS_PROXY_ACTIONS::UNICAST{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS  GlobalNamespace::WS_PROXY_ACTIONS::AWAIT_SYNCHRONIZATION{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS  GlobalNamespace::WS_PROXY_ACTIONS::SYNCHRONIZED{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::WS_PROXY_ACTIONS  GlobalNamespace::WS_PROXY_ACTIONS::CANCEL_AWAIT_SYNCHRONIZATION{static_cast<int32_t>(0x5)};
