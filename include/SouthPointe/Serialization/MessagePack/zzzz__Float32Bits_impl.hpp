#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Float32Bits.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Float32Bits_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Float32Bits._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::Float32Bits::*)(float_t)>(&::SouthPointe::Serialization::MessagePack::Float32Bits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float32Bits>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Float32Bits.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::Float32Bits::GetBytes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d07f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float32Bits>(),
                        {"GetBytes", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Float32Bits.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::Float32Bits::ToSingle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d069d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float32Bits>(),
                        {"ToSingle", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_value()  {
return this->___value;
}
constexpr float_t const& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_value() const {
return this->___value;
}
constexpr void SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_set_value(float_t  value)  {
this->___value = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte0()  {
return this->___byte0;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte0() const {
return this->___byte0;
}
constexpr void SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_set_byte0(uint8_t  value)  {
this->___byte0 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte1()  {
return this->___byte1;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte1() const {
return this->___byte1;
}
constexpr void SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_set_byte1(uint8_t  value)  {
this->___byte1 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte2()  {
return this->___byte2;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte2() const {
return this->___byte2;
}
constexpr void SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_set_byte2(uint8_t  value)  {
this->___byte2 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte3()  {
return this->___byte3;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_get_byte3() const {
return this->___byte3;
}
constexpr void SouthPointe::Serialization::MessagePack::Float32Bits::__cordl_internal_set_byte3(uint8_t  value)  {
this->___byte3 = value;
}
inline void SouthPointe::Serialization::MessagePack::Float32Bits::_ctor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float32Bits>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::Float32Bits::GetBytes(float_t  value, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float32Bits>(),
                        {"GetBytes", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline float_t SouthPointe::Serialization::MessagePack::Float32Bits::ToSingle(::ArrayW<uint8_t>  bigEndianBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float32Bits>(),
                        {"ToSingle", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, bigEndianBytes);
}
// Ctor Parameters [CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte0", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte1", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte2", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte3", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::SouthPointe::Serialization::MessagePack::Float32Bits::Float32Bits(float_t  value, uint8_t  byte0, uint8_t  byte1, uint8_t  byte2, uint8_t  byte3) noexcept  {
this->value = value;
this->byte0 = byte0;
this->byte1 = byte1;
this->byte2 = byte2;
this->byte3 = byte3;
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::Float32Bits::Float32Bits()   {
}
