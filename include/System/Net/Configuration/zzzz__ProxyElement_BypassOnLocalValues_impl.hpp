#pragma once
// IWYU pragma private; include "System/Net/Configuration/ProxyElement_BypassOnLocalValues.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_BypassOnLocalValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProxyElement_BypassOnLocalValues::ProxyElement_BypassOnLocalValues(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProxyElement_BypassOnLocalValues::ProxyElement_BypassOnLocalValues()   {
}
constexpr ::GlobalNamespace::ProxyElement_BypassOnLocalValues  GlobalNamespace::ProxyElement_BypassOnLocalValues::False{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ProxyElement_BypassOnLocalValues  GlobalNamespace::ProxyElement_BypassOnLocalValues::True{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ProxyElement_BypassOnLocalValues  GlobalNamespace::ProxyElement_BypassOnLocalValues::Unspecified{static_cast<int32_t>(0xffffffff)};
