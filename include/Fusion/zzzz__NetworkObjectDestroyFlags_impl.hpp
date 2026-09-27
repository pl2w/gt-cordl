#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectDestroyFlags.hpp"
#include "Fusion/zzzz__NetworkObjectDestroyFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectDestroyFlags::NetworkObjectDestroyFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectDestroyFlags::NetworkObjectDestroyFlags()   {
}
constexpr ::Fusion::NetworkObjectDestroyFlags  Fusion::NetworkObjectDestroyFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkObjectDestroyFlags  Fusion::NetworkObjectDestroyFlags::DestroyedByEngine{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectDestroyFlags  Fusion::NetworkObjectDestroyFlags::DestroyState{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkObjectDestroyFlags  Fusion::NetworkObjectDestroyFlags::DestroyedByReplicator{static_cast<int32_t>(0x4)};
constexpr ::Fusion::NetworkObjectDestroyFlags  Fusion::NetworkObjectDestroyFlags::DestroyedByDespawn{static_cast<int32_t>(0x8)};
