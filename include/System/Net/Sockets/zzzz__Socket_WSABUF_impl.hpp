#pragma once
// IWYU pragma private; include "System/Net/Sockets/Socket_WSABUF.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_WSABUF_def.hpp"
// Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buf", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Socket_WSABUF::Socket_WSABUF(int32_t  len, ::System::IntPtr  buf) noexcept  {
this->len = len;
this->buf = buf;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Socket_WSABUF::Socket_WSABUF()   {
}
