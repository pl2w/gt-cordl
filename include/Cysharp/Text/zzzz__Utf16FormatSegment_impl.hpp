#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf16FormatSegment.hpp"
#include "Cysharp/Text/zzzz__Utf16FormatSegment_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::Utf16FormatSegment.get_IsFormatArgument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf16FormatSegment::*)()>(&::Cysharp::Text::Utf16FormatSegment::get_IsFormatArgument)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9ab544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16FormatSegment>(),
                        {"get_IsFormatArgument", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf16FormatSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf16FormatSegment::*)(int32_t, int32_t, int32_t, int32_t)>(&::Cysharp::Text::Utf16FormatSegment::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9ab148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16FormatSegment>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Text::Utf16FormatSegment::get_IsFormatArgument()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16FormatSegment>(),
                        {"get_IsFormatArgument", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf16FormatSegment::_ctor(int32_t  offset, int32_t  count, int32_t  formatIndex, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf16FormatSegment>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offset, count, formatIndex, alignment);
}
// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FormatIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Text::Utf16FormatSegment::Utf16FormatSegment(int32_t  Offset, int32_t  Count, int32_t  FormatIndex, int32_t  Alignment) noexcept  {
this->Offset = Offset;
this->Count = Count;
this->FormatIndex = FormatIndex;
this->Alignment = Alignment;
}
// Ctor Parameters []
constexpr ::Cysharp::Text::Utf16FormatSegment::Utf16FormatSegment()   {
}
