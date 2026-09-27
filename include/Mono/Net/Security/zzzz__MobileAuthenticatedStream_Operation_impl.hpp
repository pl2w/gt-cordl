#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream_Operation.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_Operation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation::MobileAuthenticatedStream_Operation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation::MobileAuthenticatedStream_Operation()   {
}
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::Handshake{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::Authenticated{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::Renegotiate{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::Read{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::Write{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation  GlobalNamespace::MobileAuthenticatedStream_Operation::Close{static_cast<int32_t>(0x6)};
