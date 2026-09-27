#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderPlayerDataFlags.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPlayerDataFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags::NetworkObjectHeaderPlayerDataFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags::NetworkObjectHeaderPlayerDataFlags()   {
}
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags  Fusion::NetworkObjectHeaderPlayerDataFlags::InAreaOfInterest{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags  Fusion::NetworkObjectHeaderPlayerDataFlags::ForceInterest{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkObjectHeaderPlayerDataFlags  Fusion::NetworkObjectHeaderPlayerDataFlags::AllInterestFlags{static_cast<int32_t>(0x3)};
