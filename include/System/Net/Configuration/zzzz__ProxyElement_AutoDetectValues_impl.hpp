#pragma once
// IWYU pragma private; include "System/Net/Configuration/ProxyElement_AutoDetectValues.hpp"
#include "System/Net/Configuration/zzzz__ProxyElement_AutoDetectValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProxyElement_AutoDetectValues::ProxyElement_AutoDetectValues(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProxyElement_AutoDetectValues::ProxyElement_AutoDetectValues()   {
}
constexpr ::GlobalNamespace::ProxyElement_AutoDetectValues  GlobalNamespace::ProxyElement_AutoDetectValues::False{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ProxyElement_AutoDetectValues  GlobalNamespace::ProxyElement_AutoDetectValues::True{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ProxyElement_AutoDetectValues  GlobalNamespace::ProxyElement_AutoDetectValues::Unspecified{static_cast<int32_t>(0xffffffff)};
