#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanTokenizer.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanTokenizer_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanToken_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>)>(&::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2382a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa23c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer.GetNextToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeSpanParse_TimeSpanToken (::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::*)()>(&::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::GetNextToken)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa238308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"GetNextToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer.get_EOL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::*)()>(&::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::get_EOL)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa23cb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"get_EOL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer.BackOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::*)()>(&::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::BackOne)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa23cbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"BackOne", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer.get_NextChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::*)()>(&::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::get_NextChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa23cb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"get_NextChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input);
}
inline void GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t>  input, int32_t  startPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, input, startPosition);
}
inline ::GlobalNamespace::TimeSpanParse_TimeSpanToken GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::GetNextToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"GetNextToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::get_EOL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"get_EOL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::BackOne()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"BackOne", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline char16_t GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::get_NextChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>(),
                        {"get_NextChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::TimeSpanParse_TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t>  _value, int32_t  _pos) noexcept  {
this->_value = _value;
this->_pos = _pos;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer::TimeSpanParse_TimeSpanTokenizer()   {
}
