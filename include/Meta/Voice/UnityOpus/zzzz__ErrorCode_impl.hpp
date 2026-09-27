#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/ErrorCode.hpp"
#include "Meta/Voice/UnityOpus/zzzz__ErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::UnityOpus::ErrorCode::ErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::UnityOpus::ErrorCode::ErrorCode()   {
}
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::OK{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::BadArg{static_cast<int32_t>(0xffffffff)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::BufferTooSmall{static_cast<int32_t>(0xfffffffe)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::InternalError{static_cast<int32_t>(0xfffffffd)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::InvalidPacket{static_cast<int32_t>(0xfffffffc)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::Unimplemented{static_cast<int32_t>(0xfffffffb)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::InvalidState{static_cast<int32_t>(0xfffffffa)};
constexpr ::Meta::Voice::UnityOpus::ErrorCode  Meta::Voice::UnityOpus::ErrorCode::AllocFail{static_cast<int32_t>(0xfffffff9)};
