#pragma once
// IWYU pragma private; include "System/Buffers/Text/NumberBuffer.hpp"
#include "System/Buffers/Text/zzzz__NumberBuffer_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Buffers::Text::NumberBuffer.get_Digits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (::System::Buffers::Text::NumberBuffer::*)()>(&::System::Buffers::Text::NumberBuffer::get_Digits)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa2746b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                        {"get_Digits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::NumberBuffer.get_UnsafeDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::System::Buffers::Text::NumberBuffer::*)()>(&::System::Buffers::Text::NumberBuffer::get_UnsafeDigits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa27eeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                        {"get_UnsafeDigits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::NumberBuffer.get_NumDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Buffers::Text::NumberBuffer::*)()>(&::System::Buffers::Text::NumberBuffer::get_NumDigits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa274c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                        {"get_NumDigits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::NumberBuffer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Buffers::Text::NumberBuffer::*)()>(&::System::Buffers::Text::NumberBuffer::ToString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa27f1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                    {::i2c::class_of<::System::Buffers::Text::NumberBuffer>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::System::Span_1<uint8_t> System::Buffers::Text::NumberBuffer::get_Digits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                        {"get_Digits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(*this, ___internal_method);
}
inline uint8_t* System::Buffers::Text::NumberBuffer::get_UnsafeDigits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                        {"get_UnsafeDigits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline int32_t System::Buffers::Text::NumberBuffer::get_NumDigits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::NumberBuffer>(),
                        {"get_NumDigits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Buffers::Text::NumberBuffer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::Text::NumberBuffer>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b0", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b1", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b2", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b3", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b4", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b5", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b6", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b7", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b8", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b9", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b10", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b11", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b12", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b13", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b14", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b15", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b16", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b17", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b18", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b19", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b20", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b21", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b22", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b23", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b24", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b25", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b26", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b27", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b28", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b29", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b30", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b31", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b32", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b33", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b34", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b35", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b36", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b37", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b38", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b39", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b40", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b41", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b42", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b43", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b44", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b45", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b46", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b47", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b48", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b49", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b50", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Buffers::Text::NumberBuffer::NumberBuffer(int32_t  Scale, bool  IsNegative, uint8_t  _b0, uint8_t  _b1, uint8_t  _b2, uint8_t  _b3, uint8_t  _b4, uint8_t  _b5, uint8_t  _b6, uint8_t  _b7, uint8_t  _b8, uint8_t  _b9, uint8_t  _b10, uint8_t  _b11, uint8_t  _b12, uint8_t  _b13, uint8_t  _b14, uint8_t  _b15, uint8_t  _b16, uint8_t  _b17, uint8_t  _b18, uint8_t  _b19, uint8_t  _b20, uint8_t  _b21, uint8_t  _b22, uint8_t  _b23, uint8_t  _b24, uint8_t  _b25, uint8_t  _b26, uint8_t  _b27, uint8_t  _b28, uint8_t  _b29, uint8_t  _b30, uint8_t  _b31, uint8_t  _b32, uint8_t  _b33, uint8_t  _b34, uint8_t  _b35, uint8_t  _b36, uint8_t  _b37, uint8_t  _b38, uint8_t  _b39, uint8_t  _b40, uint8_t  _b41, uint8_t  _b42, uint8_t  _b43, uint8_t  _b44, uint8_t  _b45, uint8_t  _b46, uint8_t  _b47, uint8_t  _b48, uint8_t  _b49, uint8_t  _b50) noexcept  {
this->Scale = Scale;
this->IsNegative = IsNegative;
this->_b0 = _b0;
this->_b1 = _b1;
this->_b2 = _b2;
this->_b3 = _b3;
this->_b4 = _b4;
this->_b5 = _b5;
this->_b6 = _b6;
this->_b7 = _b7;
this->_b8 = _b8;
this->_b9 = _b9;
this->_b10 = _b10;
this->_b11 = _b11;
this->_b12 = _b12;
this->_b13 = _b13;
this->_b14 = _b14;
this->_b15 = _b15;
this->_b16 = _b16;
this->_b17 = _b17;
this->_b18 = _b18;
this->_b19 = _b19;
this->_b20 = _b20;
this->_b21 = _b21;
this->_b22 = _b22;
this->_b23 = _b23;
this->_b24 = _b24;
this->_b25 = _b25;
this->_b26 = _b26;
this->_b27 = _b27;
this->_b28 = _b28;
this->_b29 = _b29;
this->_b30 = _b30;
this->_b31 = _b31;
this->_b32 = _b32;
this->_b33 = _b33;
this->_b34 = _b34;
this->_b35 = _b35;
this->_b36 = _b36;
this->_b37 = _b37;
this->_b38 = _b38;
this->_b39 = _b39;
this->_b40 = _b40;
this->_b41 = _b41;
this->_b42 = _b42;
this->_b43 = _b43;
this->_b44 = _b44;
this->_b45 = _b45;
this->_b46 = _b46;
this->_b47 = _b47;
this->_b48 = _b48;
this->_b49 = _b49;
this->_b50 = _b50;
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::NumberBuffer::NumberBuffer()   {
}
