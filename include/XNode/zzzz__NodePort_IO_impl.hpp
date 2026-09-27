#pragma once
// IWYU pragma private; include "XNode/NodePort_IO.hpp"
#include "XNode/zzzz__NodePort_IO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NodePort_IO::NodePort_IO(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodePort_IO::NodePort_IO()   {
}
constexpr ::GlobalNamespace::NodePort_IO  GlobalNamespace::NodePort_IO::Input{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NodePort_IO  GlobalNamespace::NodePort_IO::Output{static_cast<int32_t>(0x1)};
