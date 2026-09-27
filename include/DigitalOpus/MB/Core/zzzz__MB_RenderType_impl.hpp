#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_RenderType.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB_RenderType::MB_RenderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_RenderType::MB_RenderType()   {
}
constexpr ::DigitalOpus::MB::Core::MB_RenderType  DigitalOpus::MB::Core::MB_RenderType::meshRenderer{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB_RenderType  DigitalOpus::MB::Core::MB_RenderType::skinnedMeshRenderer{static_cast<int32_t>(0x1)};
