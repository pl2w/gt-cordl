#pragma once
// IWYU pragma private; include "Fusion/Sockets/OnConnectionRequestReply.hpp"
#include "Fusion/Sockets/zzzz__OnConnectionRequestReply_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::OnConnectionRequestReply::OnConnectionRequestReply(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::OnConnectionRequestReply::OnConnectionRequestReply()   {
}
constexpr ::Fusion::Sockets::OnConnectionRequestReply  Fusion::Sockets::OnConnectionRequestReply::Ok{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Sockets::OnConnectionRequestReply  Fusion::Sockets::OnConnectionRequestReply::Refuse{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Sockets::OnConnectionRequestReply  Fusion::Sockets::OnConnectionRequestReply::Waiting{static_cast<int32_t>(0x2)};
