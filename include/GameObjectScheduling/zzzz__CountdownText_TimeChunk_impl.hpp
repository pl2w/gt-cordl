#pragma once
// IWYU pragma private; include "GameObjectScheduling/CountdownText_TimeChunk.hpp"
#include "GameObjectScheduling/zzzz__CountdownText_TimeChunk_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CountdownText_TimeChunk::CountdownText_TimeChunk(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CountdownText_TimeChunk::CountdownText_TimeChunk()   {
}
constexpr ::GlobalNamespace::CountdownText_TimeChunk  GlobalNamespace::CountdownText_TimeChunk::DAY{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CountdownText_TimeChunk  GlobalNamespace::CountdownText_TimeChunk::HOUR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CountdownText_TimeChunk  GlobalNamespace::CountdownText_TimeChunk::MINUTE{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CountdownText_TimeChunk  GlobalNamespace::CountdownText_TimeChunk::SECOND{static_cast<int32_t>(0x3)};
