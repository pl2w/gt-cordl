#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JavaScriptUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__JavaScriptUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.GetCharEscapeFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)(::Newtonsoft::Json::StringEscapeHandling, char16_t)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa3a02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"GetCharEscapeFlags", {}, {::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ShouldEscapeJavaScriptString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<bool>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa3a034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"ShouldEscapeJavaScriptString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::StringW, char16_t, bool, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*, ::by_ref<::ArrayW<char16_t>>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0xa3a03c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"WriteEscapedJavaScriptString", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ToEscapedJavaScriptString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, bool, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa3a0b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"ToEscapedJavaScriptString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.FirstCharToEscape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<bool>, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa3a09bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"FirstCharToEscape", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateFromConstructorJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ::by_ref<::System::DateTime>, ::by_ref<::StringW>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xa3a0dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"TryGetDateFromConstructorJson", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateConstructorValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ::by_ref<::System::Nullable_1<int64_t>>, ::by_ref<::StringW>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa3a1224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"TryGetDateConstructorValue", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int64_t>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "SingleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_SingleQuoteCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "SingleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "DoubleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_DoubleQuoteCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "DoubleQuoteCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_HtmlCharEscapeFlags(::ArrayW<bool>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool>, "HtmlCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_HtmlCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool>, "HtmlCharEscapeFlags", ::Newtonsoft::Json::Utilities::JavaScriptUtils*>();
}
inline ::ArrayW<bool> Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, char16_t  quoteChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"GetCharEscapeFlags", {}, {::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method, stringEscapeHandling, quoteChar);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString(/* [Nullable(2)] */ ::StringW  s, ::ArrayW<bool>  charEscapeFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"ShouldEscapeJavaScriptString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, charEscapeFlags);
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString(/* [Nullable(1)] */ ::System::IO::TextWriter*  writer, ::StringW  s, char16_t  delimiter, bool  appendDelimiters, /* [Nullable(1)] */ ::ArrayW<bool>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, ::by_ref<::ArrayW<char16_t>>  writeBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"WriteEscapedJavaScriptString", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>(), ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
}
inline ::StringW Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString(/* [Nullable(2)] */ ::StringW  value, char16_t  delimiter, bool  appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"ToEscapedJavaScriptString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, delimiter, appendDelimiters, stringEscapeHandling);
}
inline int32_t Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape(::StringW  s, ::ArrayW<bool>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"FirstCharToEscape", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, charEscapeFlags, stringEscapeHandling);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::DateTime>  dateTime, /* [Nullable(2)] [NotNullWhen(false)] */ ::by_ref<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"TryGetDateFromConstructorJson", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, dateTime, errorMessage);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::Nullable_1<int64_t>>  integer, /* [Nullable(2)] [NotNullWhen(false)] */ ::by_ref<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::JavaScriptUtils*>(),
                        {"TryGetDateConstructorValue", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int64_t>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, integer, errorMessage);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils::JavaScriptUtils()   {
}
