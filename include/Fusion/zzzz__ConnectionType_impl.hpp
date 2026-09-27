#pragma once
// IWYU pragma private; include "Fusion/ConnectionType.hpp"
#include "Fusion/zzzz__ConnectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::ConnectionType::ConnectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::ConnectionType::ConnectionType()   {
}
constexpr ::Fusion::ConnectionType  Fusion::ConnectionType::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::ConnectionType  Fusion::ConnectionType::Relayed{static_cast<int32_t>(0x1)};
constexpr ::Fusion::ConnectionType  Fusion::ConnectionType::Direct{static_cast<int32_t>(0x2)};
