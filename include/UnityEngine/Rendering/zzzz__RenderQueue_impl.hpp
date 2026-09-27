#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderQueue.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RenderQueue::RenderQueue(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderQueue::RenderQueue()   {
}
constexpr ::UnityEngine::Rendering::RenderQueue  UnityEngine::Rendering::RenderQueue::Background{static_cast<int32_t>(0x3e8)};
constexpr ::UnityEngine::Rendering::RenderQueue  UnityEngine::Rendering::RenderQueue::Geometry{static_cast<int32_t>(0x7d0)};
constexpr ::UnityEngine::Rendering::RenderQueue  UnityEngine::Rendering::RenderQueue::AlphaTest{static_cast<int32_t>(0x992)};
constexpr ::UnityEngine::Rendering::RenderQueue  UnityEngine::Rendering::RenderQueue::GeometryLast{static_cast<int32_t>(0x9c4)};
constexpr ::UnityEngine::Rendering::RenderQueue  UnityEngine::Rendering::RenderQueue::Transparent{static_cast<int32_t>(0xbb8)};
constexpr ::UnityEngine::Rendering::RenderQueue  UnityEngine::Rendering::RenderQueue::Overlay{static_cast<int32_t>(0xfa0)};
