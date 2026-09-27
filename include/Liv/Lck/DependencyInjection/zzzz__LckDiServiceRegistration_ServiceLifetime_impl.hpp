#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiServiceRegistration_ServiceLifetime.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiServiceRegistration_ServiceLifetime_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime::LckDiServiceRegistration_ServiceLifetime(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime::LckDiServiceRegistration_ServiceLifetime()   {
}
constexpr ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  GlobalNamespace::LckDiServiceRegistration_ServiceLifetime::Transient{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  GlobalNamespace::LckDiServiceRegistration_ServiceLifetime::Singleton{static_cast<int32_t>(0x1)};
