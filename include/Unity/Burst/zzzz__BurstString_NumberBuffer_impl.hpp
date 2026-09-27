#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_NumberBuffer.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberBufferKind_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberBuffer_def.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberBufferKind_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstString_NumberBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstString_NumberBuffer::*)(::GlobalNamespace::BurstString_NumberBufferKind, uint8_t*, int32_t, int32_t, bool)>(&::GlobalNamespace::BurstString_NumberBuffer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae8297c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_NumberBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BurstString_NumberBufferKind>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_NumberBuffer.GetDigitsPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::GlobalNamespace::BurstString_NumberBuffer::*)()>(&::GlobalNamespace::BurstString_NumberBuffer::GetDigitsPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae84fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_NumberBuffer>(),
                        {"GetDigitsPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstString_NumberBuffer::_ctor(::GlobalNamespace::BurstString_NumberBufferKind  kind, uint8_t*  buffer, int32_t  digitsCount, int32_t  scale, bool  isNegative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_NumberBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BurstString_NumberBufferKind>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, kind, buffer, digitsCount, scale, isNegative);
}
inline uint8_t* GlobalNamespace::BurstString_NumberBuffer::GetDigitsPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_NumberBuffer>(),
                        {"GetDigitsPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Kind", ty: "::GlobalNamespace::BurstString_NumberBufferKind", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstString_NumberBuffer::BurstString_NumberBuffer(uint8_t*  _buffer, ::GlobalNamespace::BurstString_NumberBufferKind  Kind, int32_t  DigitsCount, int32_t  Scale, bool  IsNegative) noexcept  {
this->_buffer = _buffer;
this->Kind = Kind;
this->DigitsCount = DigitsCount;
this->Scale = Scale;
this->IsNegative = IsNegative;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstString_NumberBuffer::BurstString_NumberBuffer()   {
}
