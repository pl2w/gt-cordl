#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_tlsctx_callbacks_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
// Ctor Parameters [CppParam { name: "read", ty: "::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "write", ty: "::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks::UnityTls_unitytls_tlsctx_callbacks(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*  read, ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*  write, void*  data) noexcept  {
this->read = read;
this->write = write;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityTls_unitytls_tlsctx_callbacks::UnityTls_unitytls_tlsctx_callbacks()   {
}
