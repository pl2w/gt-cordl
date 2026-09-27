#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_error_code_impl.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_errorstate_def.hpp"
// Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "code", ty: "::GlobalNamespace::UnityTls_unitytls_error_code", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityTls_unitytls_errorstate::UnityTls_unitytls_errorstate(uint32_t  magic, ::GlobalNamespace::UnityTls_unitytls_error_code  code, uint64_t  reserved) noexcept  {
this->magic = magic;
this->code = code;
this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityTls_unitytls_errorstate::UnityTls_unitytls_errorstate()   {
}
