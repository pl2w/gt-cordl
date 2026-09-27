#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol16_GpType.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol16_GpType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Protocol16_GpType::Protocol16_GpType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Protocol16_GpType::Protocol16_GpType()   {
}
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Unknown{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Array{static_cast<uint8_t>(0x79u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Boolean{static_cast<uint8_t>(0x6fu)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Byte{static_cast<uint8_t>(0x62u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::ByteArray{static_cast<uint8_t>(0x78u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::ObjectArray{static_cast<uint8_t>(0x7au)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Short{static_cast<uint8_t>(0x6bu)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Float{static_cast<uint8_t>(0x66u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Dictionary{static_cast<uint8_t>(0x44u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Double{static_cast<uint8_t>(0x64u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Hashtable{static_cast<uint8_t>(0x68u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Integer{static_cast<uint8_t>(0x69u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::IntegerArray{static_cast<uint8_t>(0x6eu)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Long{static_cast<uint8_t>(0x6cu)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::String{static_cast<uint8_t>(0x73u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::StringArray{static_cast<uint8_t>(0x61u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Custom{static_cast<uint8_t>(0x63u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::Null{static_cast<uint8_t>(0x2au)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::EventData{static_cast<uint8_t>(0x65u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::OperationRequest{static_cast<uint8_t>(0x71u)};
constexpr ::GlobalNamespace::Protocol16_GpType  GlobalNamespace::Protocol16_GpType::OperationResponse{static_cast<uint8_t>(0x70u)};
