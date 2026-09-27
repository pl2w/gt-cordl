#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMetaFlags.hpp"
#include "Fusion/zzzz__NetworkObjectMetaFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectMetaFlags::NetworkObjectMetaFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectMetaFlags::NetworkObjectMetaFlags()   {
}
constexpr ::Fusion::NetworkObjectMetaFlags  Fusion::NetworkObjectMetaFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkObjectMetaFlags  Fusion::NetworkObjectMetaFlags::InstanceWillNotBeCreated{static_cast<int32_t>(0x1)};
