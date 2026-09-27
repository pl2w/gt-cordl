#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipType.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::ClipType::ClipType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ClipType::ClipType()   {
}
constexpr ::Unity::Cinemachine::ClipType  Unity::Cinemachine::ClipType::None{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::ClipType  Unity::Cinemachine::ClipType::Intersection{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::ClipType  Unity::Cinemachine::ClipType::Union{static_cast<int32_t>(0x2)};
constexpr ::Unity::Cinemachine::ClipType  Unity::Cinemachine::ClipType::Difference{static_cast<int32_t>(0x3)};
constexpr ::Unity::Cinemachine::ClipType  Unity::Cinemachine::ClipType::Xor{static_cast<int32_t>(0x4)};
