#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanToken.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TTT_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanToken_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TTT_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanToken::*)(::GlobalNamespace::TimeSpanParse_TTT)>(&::GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa23cdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimeSpanParse_TTT>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanToken::*)(int32_t)>(&::GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa23abcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanToken::*)(int32_t, int32_t)>(&::GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa23cbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanToken::*)(::GlobalNamespace::TimeSpanParse_TTT, int32_t, int32_t, ::System::ReadOnlySpan_1<char16_t>)>(&::GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa23cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimeSpanParse_TTT>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanToken.IsInvalidFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSpanParse_TimeSpanToken::*)()>(&::GlobalNamespace::TimeSpanParse_TimeSpanToken::IsInvalidFraction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa237d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {"IsInvalidFraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor(::GlobalNamespace::TimeSpanParse_TTT  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimeSpanParse_TTT>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, number);
}
inline void GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor(int32_t  number, int32_t  leadingZeroes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, number, leadingZeroes);
}
inline void GlobalNamespace::TimeSpanParse_TimeSpanToken::_ctor(::GlobalNamespace::TimeSpanParse_TTT  type, int32_t  number, int32_t  leadingZeroes, ::System::ReadOnlySpan_1<char16_t>  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimeSpanParse_TTT>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, number, leadingZeroes, separator);
}
inline bool GlobalNamespace::TimeSpanParse_TimeSpanToken::IsInvalidFraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(),
                        {"IsInvalidFraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_ttt", ty: "::GlobalNamespace::TimeSpanParse_TTT", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanParse_TimeSpanToken::TimeSpanParse_TimeSpanToken(::GlobalNamespace::TimeSpanParse_TTT  _ttt, int32_t  _num, int32_t  _zeroes, ::System::ReadOnlySpan_1<char16_t>  _sep) noexcept  {
this->_ttt = _ttt;
this->_num = _num;
this->_zeroes = _zeroes;
this->_sep = _sep;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanParse_TimeSpanToken::TimeSpanParse_TimeSpanToken()   {
}
