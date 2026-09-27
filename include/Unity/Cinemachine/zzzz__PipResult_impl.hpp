#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PipResult.hpp"
#include "Unity/Cinemachine/zzzz__PipResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::PipResult::PipResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PipResult::PipResult()   {
}
constexpr ::Unity::Cinemachine::PipResult  Unity::Cinemachine::PipResult::Inside{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::PipResult  Unity::Cinemachine::PipResult::Outside{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::PipResult  Unity::Cinemachine::PipResult::OnEdge{static_cast<int32_t>(0x2)};
