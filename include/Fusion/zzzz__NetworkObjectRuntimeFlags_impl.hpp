#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectRuntimeFlags.hpp"
#include "Fusion/zzzz__NetworkObjectRuntimeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectRuntimeFlags::NetworkObjectRuntimeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectRuntimeFlags::NetworkObjectRuntimeFlags()   {
}
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::HadAwake{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::IsDestroyed{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::IsNested{static_cast<int32_t>(0x4)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::NotAwakeWhenAttaching{static_cast<int32_t>(0x2000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::ClearMask{static_cast<int32_t>(0xfff0000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::InSimulation{static_cast<int32_t>(0x10000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::PreexistingObject{static_cast<int32_t>(0x20000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::AttachOptionLocalSpawn{static_cast<int32_t>(0x100000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::Spawned{static_cast<int32_t>(0x800000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::OwnsNestedObjects{static_cast<int32_t>(0x1000000)};
constexpr ::Fusion::NetworkObjectRuntimeFlags  Fusion::NetworkObjectRuntimeFlags::HasMainNetworkTRSP{static_cast<int32_t>(0x4000000)};
