#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork_FrameHeader.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_FrameHeader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_FrameHeader.ToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::OVRNetwork_FrameHeader::*)()>(&::GlobalNamespace::OVRNetwork_FrameHeader::ToBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa66b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(),
                        {"ToBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork_FrameHeader.FromBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRNetwork_FrameHeader (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRNetwork_FrameHeader::FromBytes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa66b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(),
                        {"FromBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> GlobalNamespace::OVRNetwork_FrameHeader::ToBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(),
                        {"ToBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRNetwork_FrameHeader GlobalNamespace::OVRNetwork_FrameHeader::FromBytes(::ArrayW<uint8_t>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRNetwork_FrameHeader>(),
                        {"FromBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNetwork_FrameHeader>(nullptr, ___internal_method, arr);
}
// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRNetwork_FrameHeader::OVRNetwork_FrameHeader(uint32_t  protocolIdentifier, int32_t  payloadType, int32_t  payloadLength) noexcept  {
this->protocolIdentifier = protocolIdentifier;
this->payloadType = payloadType;
this->payloadLength = payloadLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork_FrameHeader::OVRNetwork_FrameHeader()   {
}
