#pragma once
// IWYU pragma private; include "Cysharp/Text/TextMeshProExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__TextMeshProExtensions_def.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::TextMeshProExtensions.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*, ::Cysharp::Text::Utf16ValueStringBuilder)>(&::Cysharp::Text::TextMeshProExtensions::SetText)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb9bdac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                        {"SetText", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void Cysharp::Text::TextMeshProExtensions::SetText(::TMPro::TMP_Text*  text, T  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetText", {::i2c::class_of<T>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, arg0);
}
template<typename T0>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0);
}
template<typename T0,typename T1>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1);
}
template<typename T0,typename T1,typename T2>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2);
}
template<typename T0,typename T1,typename T2,typename T3>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}
template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
inline void Cysharp::Text::TextMeshProExtensions::SetTextFormat(::TMPro::TMP_Text*  text, ::StringW  format, T0  arg0, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                    {"SetTextFormat", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>()}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>(), ::i2c::type_of<T15>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}
inline void Cysharp::Text::TextMeshProExtensions::SetText(::TMPro::TMP_Text*  text, ::Cysharp::Text::Utf16ValueStringBuilder  stringBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::TextMeshProExtensions*>(),
                        {"SetText", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::Cysharp::Text::Utf16ValueStringBuilder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, stringBuilder);
}
// Ctor Parameters []
constexpr ::Cysharp::Text::TextMeshProExtensions::TextMeshProExtensions()   {
}
