#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8FormatSegment.hpp"
#include "System/Buffers/zzzz__StandardFormat_impl.hpp"
#include "Cysharp/Text/zzzz__Utf8FormatSegment_def.hpp"
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::Utf8FormatSegment.get_IsFormatArgument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8FormatSegment::*)()>(&::Cysharp::Text::Utf8FormatSegment::get_IsFormatArgument)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9ab534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8FormatSegment>(),
                        {"get_IsFormatArgument", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8FormatSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8FormatSegment::*)(int32_t, int32_t, int32_t, ::System::Buffers::StandardFormat, int32_t)>(&::Cysharp::Text::Utf8FormatSegment::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9ab520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8FormatSegment>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Text::Utf8FormatSegment::get_IsFormatArgument()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8FormatSegment>(),
                        {"get_IsFormatArgument", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8FormatSegment::_ctor(int32_t  offset, int32_t  count, int32_t  formatIndex, ::System::Buffers::StandardFormat  format, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8FormatSegment>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offset, count, formatIndex, format, alignment);
}
// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FormatIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StandardFormat", ty: "::System::Buffers::StandardFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Alignment", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Text::Utf8FormatSegment::Utf8FormatSegment(int32_t  Offset, int32_t  Count, int32_t  FormatIndex, ::System::Buffers::StandardFormat  StandardFormat, int32_t  Alignment) noexcept  {
this->Offset = Offset;
this->Count = Count;
this->FormatIndex = FormatIndex;
this->StandardFormat = StandardFormat;
this->Alignment = Alignment;
}
// Ctor Parameters []
constexpr ::Cysharp::Text::Utf8FormatSegment::Utf8FormatSegment()   {
}
