#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_StringParser.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_StringParser_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanResult_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_StringParser.NextChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_StringParser::*)()>(&::GlobalNamespace::TimeSpanParse_StringParser::NextChar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa23d0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"NextChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_StringParser.NextNonDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::TimeSpanParse_StringParser::*)()>(&::GlobalNamespace::TimeSpanParse_StringParser::NextNonDigit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa23d0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"NextNonDigit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_StringParser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSpanParse_StringParser::*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::GlobalNamespace::TimeSpanParse_StringParser::TryParse)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa23cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_StringParser.ParseInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSpanParse_StringParser::*)(int32_t, ::by_ref<int32_t>, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::GlobalNamespace::TimeSpanParse_StringParser::ParseInt)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa23d344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"ParseInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_StringParser.ParseTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSpanParse_StringParser::*)(::by_ref<int64_t>, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::GlobalNamespace::TimeSpanParse_StringParser::ParseTime)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa23d18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"ParseTime", {}, {::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_StringParser.SkipBlanks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_StringParser::*)()>(&::GlobalNamespace::TimeSpanParse_StringParser::SkipBlanks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa23d15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"SkipBlanks", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimeSpanParse_StringParser::NextChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"NextChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline char16_t GlobalNamespace::TimeSpanParse_StringParser::NextNonDigit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"NextNonDigit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeSpanParse_StringParser::TryParse(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, input, result);
}
inline bool GlobalNamespace::TimeSpanParse_StringParser::ParseInt(int32_t  max, ::by_ref<int32_t>  i, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"ParseInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, max, i, result);
}
inline bool GlobalNamespace::TimeSpanParse_StringParser::ParseTime(::by_ref<int64_t>  time, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"ParseTime", {}, {::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, time, result);
}
inline void GlobalNamespace::TimeSpanParse_StringParser::SkipBlanks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_StringParser>(),
                        {"SkipBlanks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanParse_StringParser::TimeSpanParse_StringParser(::System::ReadOnlySpan_1<char16_t>  _str, char16_t  _ch, int32_t  _pos, int32_t  _len) noexcept  {
this->_str = _str;
this->_ch = _ch;
this->_pos = _pos;
this->_len = _len;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanParse_StringParser::TimeSpanParse_StringParser()   {
}
