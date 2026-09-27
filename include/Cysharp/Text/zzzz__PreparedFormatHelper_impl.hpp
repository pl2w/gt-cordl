#pragma once
// IWYU pragma private; include "Cysharp/Text/PreparedFormatHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__PreparedFormatHelper_def.hpp"
#include "Cysharp/Text/zzzz__Utf16FormatSegment_def.hpp"
#include "Cysharp/Text/zzzz__Utf8FormatSegment_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::PreparedFormatHelper.Utf16Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Cysharp::Text::Utf16FormatSegment> (*)(::StringW)>(&::Cysharp::Text::PreparedFormatHelper::Utf16Parse)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xb9aae48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::PreparedFormatHelper*>(),
                        {"Utf16Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::PreparedFormatHelper.Utf8Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Cysharp::Text::Utf8FormatSegment> (*)(::StringW, ::by_ref<::ArrayW<uint8_t>>)>(&::Cysharp::Text::PreparedFormatHelper::Utf8Parse)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xb9ab154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::PreparedFormatHelper*>(),
                        {"Utf8Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::Cysharp::Text::Utf16FormatSegment> Cysharp::Text::PreparedFormatHelper::Utf16Parse(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::PreparedFormatHelper*>(),
                        {"Utf16Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Cysharp::Text::Utf16FormatSegment>>(nullptr, ___internal_method, format);
}
inline ::ArrayW<::Cysharp::Text::Utf8FormatSegment> Cysharp::Text::PreparedFormatHelper::Utf8Parse(::StringW  format, ::by_ref<::ArrayW<uint8_t>>  utf8buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::PreparedFormatHelper*>(),
                        {"Utf8Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Cysharp::Text::Utf8FormatSegment>>(nullptr, ___internal_method, format, utf8buffer);
}
// Ctor Parameters []
constexpr ::Cysharp::Text::PreparedFormatHelper::PreparedFormatHelper()   {
}
