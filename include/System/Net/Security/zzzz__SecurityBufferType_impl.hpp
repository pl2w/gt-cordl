#pragma once
// IWYU pragma private; include "System/Net/Security/SecurityBufferType.hpp"
#include "System/Net/Security/zzzz__SecurityBufferType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::Security::SecurityBufferType::SecurityBufferType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Security::SecurityBufferType::SecurityBufferType()   {
}
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_EMPTY{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_DATA{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_TOKEN{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_PKG_PARAMS{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_MISSING{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_EXTRA{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_STREAM_TRAILER{static_cast<int32_t>(0x6)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_STREAM_HEADER{static_cast<int32_t>(0x7)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_PADDING{static_cast<int32_t>(0x9)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_STREAM{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_CHANNEL_BINDINGS{static_cast<int32_t>(0xe)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_TARGET_HOST{static_cast<int32_t>(0x10)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_ALERT{static_cast<int32_t>(0x11)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_APPLICATION_PROTOCOLS{static_cast<int32_t>(0x12)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_READONLY{static_cast<int32_t>(0x80000000)};
constexpr ::System::Net::Security::SecurityBufferType  System::Net::Security::SecurityBufferType::SECBUFFER_READONLY_WITH_CHECKSUM{static_cast<int32_t>(0x10000000)};
