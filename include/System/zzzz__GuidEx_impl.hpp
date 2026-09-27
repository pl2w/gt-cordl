#pragma once
// IWYU pragma private; include "System/GuidEx.hpp"
#include "System/zzzz__GuidEx_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::GuidEx.HexsToChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t)>(&::System::GuidEx::HexsToChars)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb993dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::GuidEx>(),
                        {"HexsToChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GuidEx.HexsToCharsHexOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t)>(&::System::GuidEx::HexsToCharsHexOutput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb993e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::GuidEx>(),
                        {"HexsToCharsHexOutput", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::GuidEx.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::GuidEx::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::GuidEx::TryFormat)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xb993ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::GuidEx>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t System::GuidEx::HexsToChars(char16_t*  guidChars, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::GuidEx>(),
                        {"HexsToChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, guidChars, a, b);
}
inline int32_t System::GuidEx::HexsToCharsHexOutput(char16_t*  guidChars, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::GuidEx>(),
                        {"HexsToCharsHexOutput", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, guidChars, a, b);
}
inline bool System::GuidEx::TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::GuidEx>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format);
}
// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_c", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_h", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_k", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::GuidEx::GuidEx(int32_t  _a, int16_t  _b, int16_t  _c, uint8_t  _d, uint8_t  _e, uint8_t  _f, uint8_t  _g, uint8_t  _h, uint8_t  _i, uint8_t  _j, uint8_t  _k) noexcept  {
this->_a = _a;
this->_b = _b;
this->_c = _c;
this->_d = _d;
this->_e = _e;
this->_f = _f;
this->_g = _g;
this->_h = _h;
this->_i = _i;
this->_j = _j;
this->_k = _k;
}
// Ctor Parameters []
constexpr ::System::GuidEx::GuidEx()   {
}
