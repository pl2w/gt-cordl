#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PathType.hpp"
#include "Unity/Cinemachine/zzzz__PathType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::PathType::PathType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PathType::PathType()   {
}
constexpr ::Unity::Cinemachine::PathType  Unity::Cinemachine::PathType::Subject{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::PathType  Unity::Cinemachine::PathType::Clip{static_cast<int32_t>(0x1)};
