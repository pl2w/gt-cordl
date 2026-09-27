#pragma once
// IWYU pragma private; include "System/Globalization/FormatProvider_Number_NumberBuffer.hpp"
#include "System/Globalization/zzzz__FormatProvider_Number_NumberBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Number_FormatProvider_NumberBuffer.get_digits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (::GlobalNamespace::Number_FormatProvider_NumberBuffer::*)()>(&::GlobalNamespace::Number_FormatProvider_NumberBuffer::get_digits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaa02e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_FormatProvider_NumberBuffer>(),
                        {"get_digits", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline char16_t* GlobalNamespace::Number_FormatProvider_NumberBuffer::get_digits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Number_FormatProvider_NumberBuffer>(),
                        {"get_digits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideDigits", ty: "char16_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Number_FormatProvider_NumberBuffer::Number_FormatProvider_NumberBuffer(int32_t  precision, int32_t  scale, bool  sign, char16_t*  overrideDigits) noexcept  {
this->precision = precision;
this->scale = scale;
this->sign = sign;
this->overrideDigits = overrideDigits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Number_FormatProvider_NumberBuffer::Number_FormatProvider_NumberBuffer()   {
}
