#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol18_GpType.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol18_GpType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Protocol18_GpType::Protocol18_GpType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Protocol18_GpType::Protocol18_GpType()   {
}
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Unknown{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Boolean{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Byte{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Short{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Float{static_cast<uint8_t>(0x5u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Double{static_cast<uint8_t>(0x6u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::String{static_cast<uint8_t>(0x7u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Null{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::CompressedInt{static_cast<uint8_t>(0x9u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::CompressedLong{static_cast<uint8_t>(0xau)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Int1{static_cast<uint8_t>(0xbu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Int1_{static_cast<uint8_t>(0xcu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Int2{static_cast<uint8_t>(0xdu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Int2_{static_cast<uint8_t>(0xeu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::L1{static_cast<uint8_t>(0xfu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::L1_{static_cast<uint8_t>(0x10u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::L2{static_cast<uint8_t>(0x11u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::L2_{static_cast<uint8_t>(0x12u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Custom{static_cast<uint8_t>(0x13u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::CustomTypeSlim{static_cast<uint8_t>(0x80u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Dictionary{static_cast<uint8_t>(0x14u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Hashtable{static_cast<uint8_t>(0x15u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::ObjectArray{static_cast<uint8_t>(0x17u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::OperationRequest{static_cast<uint8_t>(0x18u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::OperationResponse{static_cast<uint8_t>(0x19u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::EventData{static_cast<uint8_t>(0x1au)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::BooleanFalse{static_cast<uint8_t>(0x1bu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::BooleanTrue{static_cast<uint8_t>(0x1cu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::ShortZero{static_cast<uint8_t>(0x1du)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::IntZero{static_cast<uint8_t>(0x1eu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::LongZero{static_cast<uint8_t>(0x1fu)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::FloatZero{static_cast<uint8_t>(0x20u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::DoubleZero{static_cast<uint8_t>(0x21u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::ByteZero{static_cast<uint8_t>(0x22u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::Array{static_cast<uint8_t>(0x40u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::BooleanArray{static_cast<uint8_t>(0x42u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::ByteArray{static_cast<uint8_t>(0x43u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::ShortArray{static_cast<uint8_t>(0x44u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::DoubleArray{static_cast<uint8_t>(0x46u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::FloatArray{static_cast<uint8_t>(0x45u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::StringArray{static_cast<uint8_t>(0x47u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::HashtableArray{static_cast<uint8_t>(0x55u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::DictionaryArray{static_cast<uint8_t>(0x54u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::CustomTypeArray{static_cast<uint8_t>(0x53u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::CompressedIntArray{static_cast<uint8_t>(0x49u)};
constexpr ::GlobalNamespace::Protocol18_GpType  GlobalNamespace::Protocol18_GpType::CompressedLongArray{static_cast<uint8_t>(0x4au)};
