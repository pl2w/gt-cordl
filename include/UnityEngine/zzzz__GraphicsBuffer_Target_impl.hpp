#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer_Target.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_Target_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GraphicsBuffer_Target::GraphicsBuffer_Target(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicsBuffer_Target::GraphicsBuffer_Target()   {
}
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Vertex{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Index{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::CopySource{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::CopyDestination{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Structured{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Raw{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Append{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Counter{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::IndirectArguments{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::GraphicsBuffer_Target  GlobalNamespace::GraphicsBuffer_Target::Constant{static_cast<int32_t>(0x200)};
