#pragma once
// IWYU pragma private; include "Modio/ModioServicePriority.hpp"
#include "Modio/zzzz__ModioServicePriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::ModioServicePriority::ModioServicePriority(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::ModioServicePriority::ModioServicePriority()   {
}
constexpr ::Modio::ModioServicePriority  Modio::ModioServicePriority::Fallback{static_cast<int32_t>(0x0)};
constexpr ::Modio::ModioServicePriority  Modio::ModioServicePriority::Default{static_cast<int32_t>(0xa)};
constexpr ::Modio::ModioServicePriority  Modio::ModioServicePriority::EngineImplementation{static_cast<int32_t>(0x14)};
constexpr ::Modio::ModioServicePriority  Modio::ModioServicePriority::PlatformProvided{static_cast<int32_t>(0x1e)};
constexpr ::Modio::ModioServicePriority  Modio::ModioServicePriority::DeveloperOverride{static_cast<int32_t>(0x28)};
constexpr ::Modio::ModioServicePriority  Modio::ModioServicePriority::UnitTestOverride{static_cast<int32_t>(0x64)};
