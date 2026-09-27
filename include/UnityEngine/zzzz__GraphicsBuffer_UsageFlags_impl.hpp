#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer_UsageFlags.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_UsageFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GraphicsBuffer_UsageFlags::GraphicsBuffer_UsageFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicsBuffer_UsageFlags::GraphicsBuffer_UsageFlags()   {
}
constexpr ::GlobalNamespace::GraphicsBuffer_UsageFlags  GlobalNamespace::GraphicsBuffer_UsageFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GraphicsBuffer_UsageFlags  GlobalNamespace::GraphicsBuffer_UsageFlags::LockBufferForWrite{static_cast<int32_t>(0x1)};
