#pragma once
// IWYU pragma private; include "System/Net/WindowsInstallationType.hpp"
#include "System/Net/zzzz__WindowsInstallationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::WindowsInstallationType::WindowsInstallationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WindowsInstallationType::WindowsInstallationType()   {
}
constexpr ::System::Net::WindowsInstallationType  System::Net::WindowsInstallationType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WindowsInstallationType  System::Net::WindowsInstallationType::Client{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WindowsInstallationType  System::Net::WindowsInstallationType::Server{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WindowsInstallationType  System::Net::WindowsInstallationType::ServerCore{static_cast<int32_t>(0x3)};
constexpr ::System::Net::WindowsInstallationType  System::Net::WindowsInstallationType::Embedded{static_cast<int32_t>(0x4)};
