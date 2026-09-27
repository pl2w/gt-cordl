#pragma once
// IWYU pragma private; include "System/Numerics/BigNumber_BigNumberBuffer.hpp"
#include "System/Numerics/zzzz__BigNumber_BigNumberBuffer_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BigNumber_BigNumberBuffer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BigNumber_BigNumberBuffer (*)()>(&::GlobalNamespace::BigNumber_BigNumberBuffer::Create)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa9fc8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigNumber_BigNumberBuffer>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BigNumber_BigNumberBuffer GlobalNamespace::BigNumber_BigNumberBuffer::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BigNumber_BigNumberBuffer>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BigNumber_BigNumberBuffer>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "digits", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BigNumber_BigNumberBuffer::BigNumber_BigNumberBuffer(::System::Text::StringBuilder*  digits, int32_t  precision, int32_t  scale, bool  sign) noexcept  {
this->digits = digits;
this->precision = precision;
this->scale = scale;
this->sign = sign;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BigNumber_BigNumberBuffer::BigNumber_BigNumberBuffer()   {
}
