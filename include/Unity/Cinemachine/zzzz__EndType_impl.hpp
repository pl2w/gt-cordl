#pragma once
// IWYU pragma private; include "Unity/Cinemachine/EndType.hpp"
#include "Unity/Cinemachine/zzzz__EndType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::EndType::EndType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::EndType::EndType()   {
}
constexpr ::Unity::Cinemachine::EndType  Unity::Cinemachine::EndType::Polygon{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::EndType  Unity::Cinemachine::EndType::Joined{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::EndType  Unity::Cinemachine::EndType::Butt{static_cast<int32_t>(0x2)};
constexpr ::Unity::Cinemachine::EndType  Unity::Cinemachine::EndType::Square{static_cast<int32_t>(0x3)};
constexpr ::Unity::Cinemachine::EndType  Unity::Cinemachine::EndType::Round{static_cast<int32_t>(0x4)};
