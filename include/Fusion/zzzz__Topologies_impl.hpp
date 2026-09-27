#pragma once
// IWYU pragma private; include "Fusion/Topologies.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Topologies::Topologies(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Topologies::Topologies()   {
}
constexpr ::Fusion::Topologies  Fusion::Topologies::ClientServer{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Topologies  Fusion::Topologies::Shared{static_cast<int32_t>(0x2)};
