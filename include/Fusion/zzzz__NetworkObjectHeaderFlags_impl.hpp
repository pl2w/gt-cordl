#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderFlags.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectHeaderFlags::NetworkObjectHeaderFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeaderFlags::NetworkObjectHeaderFlags()   {
}
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::GlobalObjectInterest{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::DestroyWhenStateAuthorityLeaves{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::SpawnedByClient{static_cast<int32_t>(0x4)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::AllowStateAuthorityOverride{static_cast<int32_t>(0x10)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::Struct{static_cast<int32_t>(0x20)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::StructArray{static_cast<int32_t>(0x80)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::DontDestroyOnLoad{static_cast<int32_t>(0x40)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::HasMainNetworkTRSP{static_cast<int32_t>(0x8)};
constexpr ::Fusion::NetworkObjectHeaderFlags  Fusion::NetworkObjectHeaderFlags::AreaOfInterest{static_cast<int32_t>(0x100)};
