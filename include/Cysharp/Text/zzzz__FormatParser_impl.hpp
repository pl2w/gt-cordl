#pragma once
// IWYU pragma private; include "Cysharp/Text/FormatParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__FormatParser_def.hpp"
#include "Cysharp/Text/zzzz__FormatParser_ParseResult_def.hpp"
#include "Cysharp/Text/zzzz__ParserScanResult_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::FormatParser.ScanFormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Text::ParserScanResult (*)(::StringW, ::by_ref<int32_t>)>(&::Cysharp::Text::FormatParser::ScanFormatString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb9aa5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"ScanFormatString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::FormatParser.ScanFormatString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Text::ParserScanResult (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>)>(&::Cysharp::Text::FormatParser::ScanFormatString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb9aa6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"ScanFormatString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::FormatParser.IsDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Cysharp::Text::FormatParser::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9aa780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"IsDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::FormatParser.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FormatParser_ParseResult (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::Cysharp::Text::FormatParser::Parse)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xb9aa794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::FormatParser.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FormatParser_ParseResult (*)(::StringW, int32_t)>(&::Cysharp::Text::FormatParser::Parse)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xb9aaa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Text::ParserScanResult Cysharp::Text::FormatParser::ScanFormatString(::StringW  format, ::by_ref<int32_t>  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"ScanFormatString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Text::ParserScanResult>(nullptr, ___internal_method, format, i);
}
inline ::Cysharp::Text::ParserScanResult Cysharp::Text::FormatParser::ScanFormatString(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<int32_t>  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"ScanFormatString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Text::ParserScanResult>(nullptr, ___internal_method, format, i);
}
inline bool Cysharp::Text::FormatParser::IsDigit(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"IsDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::GlobalNamespace::FormatParser_ParseResult Cysharp::Text::FormatParser::Parse(::System::ReadOnlySpan_1<char16_t>  format, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FormatParser_ParseResult>(nullptr, ___internal_method, format, i);
}
inline ::GlobalNamespace::FormatParser_ParseResult Cysharp::Text::FormatParser::Parse(::StringW  format, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FormatParser*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FormatParser_ParseResult>(nullptr, ___internal_method, format, i);
}
// Ctor Parameters []
constexpr ::Cysharp::Text::FormatParser::FormatParser()   {
}
