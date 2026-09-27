#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Float64Bits.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Float64Bits_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Float64Bits._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::Float64Bits::*)(double_t)>(&::SouthPointe::Serialization::MessagePack::Float64Bits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float64Bits>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Float64Bits.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, ::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::Float64Bits::GetBytes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d08024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float64Bits>(),
                        {"GetBytes", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Float64Bits.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::Float64Bits::ToDouble)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d06a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float64Bits>(),
                        {"ToDouble", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_value()  {
return this->___value;
}
constexpr double_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_value() const {
return this->___value;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_value(double_t  value)  {
this->___value = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte0()  {
return this->___byte0;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte0() const {
return this->___byte0;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte0(uint8_t  value)  {
this->___byte0 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte1()  {
return this->___byte1;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte1() const {
return this->___byte1;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte1(uint8_t  value)  {
this->___byte1 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte2()  {
return this->___byte2;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte2() const {
return this->___byte2;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte2(uint8_t  value)  {
this->___byte2 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte3()  {
return this->___byte3;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte3() const {
return this->___byte3;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte3(uint8_t  value)  {
this->___byte3 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte4()  {
return this->___byte4;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte4() const {
return this->___byte4;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte4(uint8_t  value)  {
this->___byte4 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte5()  {
return this->___byte5;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte5() const {
return this->___byte5;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte5(uint8_t  value)  {
this->___byte5 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte6()  {
return this->___byte6;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte6() const {
return this->___byte6;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte6(uint8_t  value)  {
this->___byte6 = value;
}
constexpr uint8_t& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte7()  {
return this->___byte7;
}
constexpr uint8_t const& SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_get_byte7() const {
return this->___byte7;
}
constexpr void SouthPointe::Serialization::MessagePack::Float64Bits::__cordl_internal_set_byte7(uint8_t  value)  {
this->___byte7 = value;
}
inline void SouthPointe::Serialization::MessagePack::Float64Bits::_ctor(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float64Bits>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::Float64Bits::GetBytes(double_t  value, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float64Bits>(),
                        {"GetBytes", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline double_t SouthPointe::Serialization::MessagePack::Float64Bits::ToDouble(::ArrayW<uint8_t>  bigEndianBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Float64Bits>(),
                        {"ToDouble", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, bigEndianBytes);
}
// Ctor Parameters [CppParam { name: "value", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte0", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte1", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte2", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte3", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte4", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte5", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte6", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "byte7", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::SouthPointe::Serialization::MessagePack::Float64Bits::Float64Bits(double_t  value, uint8_t  byte0, uint8_t  byte1, uint8_t  byte2, uint8_t  byte3, uint8_t  byte4, uint8_t  byte5, uint8_t  byte6, uint8_t  byte7) noexcept  {
this->value = value;
this->byte0 = byte0;
this->byte1 = byte1;
this->byte2 = byte2;
this->byte3 = byte3;
this->byte4 = byte4;
this->byte5 = byte5;
this->byte6 = byte6;
this->byte7 = byte7;
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::Float64Bits::Float64Bits()   {
}
