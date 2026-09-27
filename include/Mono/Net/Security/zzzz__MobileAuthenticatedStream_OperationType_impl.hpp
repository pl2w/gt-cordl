#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream_OperationType.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_OperationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MobileAuthenticatedStream_OperationType::MobileAuthenticatedStream_OperationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileAuthenticatedStream_OperationType::MobileAuthenticatedStream_OperationType()   {
}
constexpr ::GlobalNamespace::MobileAuthenticatedStream_OperationType  GlobalNamespace::MobileAuthenticatedStream_OperationType::Read{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_OperationType  GlobalNamespace::MobileAuthenticatedStream_OperationType::Write{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_OperationType  GlobalNamespace::MobileAuthenticatedStream_OperationType::Renegotiate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_OperationType  GlobalNamespace::MobileAuthenticatedStream_OperationType::Shutdown{static_cast<int32_t>(0x3)};
