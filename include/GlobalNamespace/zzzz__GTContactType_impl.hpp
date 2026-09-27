#pragma once
// IWYU pragma private; include "GlobalNamespace/GTContactType.hpp"
#include "GlobalNamespace/zzzz__GTContactType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTContactType::GTContactType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTContactType::GTContactType()   {
}
constexpr ::GlobalNamespace::GTContactType  GlobalNamespace::GTContactType::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GTContactType  GlobalNamespace::GTContactType::HandPrint{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::GTContactType  GlobalNamespace::GTContactType::Crater{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::GTContactType  GlobalNamespace::GTContactType::WaterSplash{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::GTContactType  GlobalNamespace::GTContactType::PaintSplat{static_cast<uint32_t>(0x8u)};
