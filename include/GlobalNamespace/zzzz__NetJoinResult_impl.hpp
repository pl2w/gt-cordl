#pragma once
// IWYU pragma private; include "GlobalNamespace/NetJoinResult.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetJoinResult::NetJoinResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetJoinResult::NetJoinResult()   {
}
constexpr ::GlobalNamespace::NetJoinResult  GlobalNamespace::NetJoinResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetJoinResult  GlobalNamespace::NetJoinResult::FallbackCreated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetJoinResult  GlobalNamespace::NetJoinResult::Failed_Full{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetJoinResult  GlobalNamespace::NetJoinResult::AlreadyInRoom{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NetJoinResult  GlobalNamespace::NetJoinResult::Failed_Other{static_cast<int32_t>(0x4)};
