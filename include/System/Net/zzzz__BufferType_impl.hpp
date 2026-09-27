#pragma once
// IWYU pragma private; include "System/Net/BufferType.hpp"
#include "System/Net/zzzz__BufferType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::BufferType::BufferType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::BufferType::BufferType()   {
}
constexpr ::System::Net::BufferType  System::Net::BufferType::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Data{static_cast<int32_t>(0x1)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Token{static_cast<int32_t>(0x2)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Parameters{static_cast<int32_t>(0x3)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Missing{static_cast<int32_t>(0x4)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Extra{static_cast<int32_t>(0x5)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Trailer{static_cast<int32_t>(0x6)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Header{static_cast<int32_t>(0x7)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Padding{static_cast<int32_t>(0x9)};
constexpr ::System::Net::BufferType  System::Net::BufferType::Stream{static_cast<int32_t>(0xa)};
constexpr ::System::Net::BufferType  System::Net::BufferType::ChannelBindings{static_cast<int32_t>(0xe)};
constexpr ::System::Net::BufferType  System::Net::BufferType::TargetHost{static_cast<int32_t>(0x10)};
constexpr ::System::Net::BufferType  System::Net::BufferType::ReadOnlyFlag{static_cast<int32_t>(0x80000000)};
constexpr ::System::Net::BufferType  System::Net::BufferType::ReadOnlyWithChecksum{static_cast<int32_t>(0x10000000)};
