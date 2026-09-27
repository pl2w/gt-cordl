#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectFlags.hpp"
#include "Fusion/zzzz__NetworkObjectFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectFlags::NetworkObjectFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectFlags::NetworkObjectFlags()   {
}
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::MaskVersion{static_cast<int32_t>(0xff)};
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::V1{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::Ignore{static_cast<int32_t>(0x10000)};
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::MasterClientObject{static_cast<int32_t>(0x20000)};
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::DestroyWhenStateAuthorityLeaves{static_cast<int32_t>(0x40000)};
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlags::AllowStateAuthorityOverride{static_cast<int32_t>(0x80000)};
