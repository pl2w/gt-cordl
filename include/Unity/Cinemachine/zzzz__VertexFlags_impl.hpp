#pragma once
// IWYU pragma private; include "Unity/Cinemachine/VertexFlags.hpp"
#include "Unity/Cinemachine/zzzz__VertexFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::VertexFlags::VertexFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::VertexFlags::VertexFlags()   {
}
constexpr ::Unity::Cinemachine::VertexFlags  Unity::Cinemachine::VertexFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::VertexFlags  Unity::Cinemachine::VertexFlags::OpenStart{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::VertexFlags  Unity::Cinemachine::VertexFlags::OpenEnd{static_cast<int32_t>(0x2)};
constexpr ::Unity::Cinemachine::VertexFlags  Unity::Cinemachine::VertexFlags::LocalMax{static_cast<int32_t>(0x4)};
constexpr ::Unity::Cinemachine::VertexFlags  Unity::Cinemachine::VertexFlags::LocalMin{static_cast<int32_t>(0x8)};
