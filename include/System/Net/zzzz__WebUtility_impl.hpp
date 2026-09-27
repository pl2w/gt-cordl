#pragma once
// IWYU pragma private; include "System/Net/WebUtility.hpp"
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_impl.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xac6d5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlEncode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::IO::TextWriter*)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xac6d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlEncode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HtmlDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::HtmlDecode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xac6dd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlDecode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HtmlDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::IO::TextWriter*)>(&::System::Net::WebUtility::HtmlDecode)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xac6df64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.IndexOfHtmlEncodingChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::WebUtility::IndexOfHtmlEncodingChars)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xac6d6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"IndexOfHtmlEncodingChars", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.get_HtmlDecodeConformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::UnicodeDecodingConformance (*)()>(&::System::Net::WebUtility::get_HtmlDecodeConformance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xac6e34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"get_HtmlDecodeConformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.get_HtmlEncodeConformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::UnicodeEncodingConformance (*)()>(&::System::Net::WebUtility::get_HtmlEncodeConformance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xac6dbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"get_HtmlEncodeConformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::Net::WebUtility::UrlEncode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xac6e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebUtility::UrlEncode)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xac6e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::UrlEncode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac6eaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlEncodeToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebUtility::UrlEncodeToBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac6ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncodeToBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecodeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::System::Net::WebUtility::UrlDecodeInternal)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xac6ec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecodeInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecodeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebUtility::UrlDecodeInternal)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xac6f068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecodeInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::UrlDecode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xac6f2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecodeToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebUtility::UrlDecodeToBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac6f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecodeToBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.ConvertSmpToUtf16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<char16_t>, ::by_ref<char16_t>)>(&::System::Net::WebUtility::ConvertSmpToUtf16)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac6e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"ConvertSmpToUtf16", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.GetNextUnicodeScalarValueFromUtf16Surrogate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t*>, ::by_ref<int32_t>)>(&::System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xac6dcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"GetNextUnicodeScalarValueFromUtf16Surrogate", {}, {::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HexToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Net::WebUtility::HexToInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac6eecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HexToInt", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.IntToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::Net::WebUtility::IntToHex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac6ead4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.IsUrlSafeChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Net::WebUtility::IsUrlSafeChar)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac6ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"IsUrlSafeChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.ValidateUrlEncodingParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::WebUtility::ValidateUrlEncodingParameters)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xac6e988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"ValidateUrlEncodingParameters", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.StringRequiresHtmlDecoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::WebUtility::StringRequiresHtmlDecoding)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xac6de64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"StringRequiresHtmlDecoding", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebUtility::setStaticF__htmlEntityEndingChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_htmlEntityEndingChars", ::System::Net::WebUtility*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::WebUtility::getStaticF__htmlEntityEndingChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_htmlEntityEndingChars", ::System::Net::WebUtility*>();
}
inline void System::Net::WebUtility::setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance  value)  {
::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance", ::System::Net::WebUtility*>(std::forward<::System::Net::Configuration::UnicodeDecodingConformance>(value));
}
inline ::System::Net::Configuration::UnicodeDecodingConformance System::Net::WebUtility::getStaticF__htmlDecodeConformance()  {
return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance", ::System::Net::WebUtility*>();
}
inline void System::Net::WebUtility::setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance  value)  {
::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance", ::System::Net::WebUtility*>(std::forward<::System::Net::Configuration::UnicodeEncodingConformance>(value));
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::WebUtility::getStaticF__htmlEncodeConformance()  {
return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance", ::System::Net::WebUtility*>();
}
inline ::StringW System::Net::WebUtility::HtmlEncode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlEncode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void System::Net::WebUtility::HtmlEncode(::StringW  value, ::System::IO::TextWriter*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlEncode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, output);
}
inline ::StringW System::Net::WebUtility::HtmlDecode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlDecode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void System::Net::WebUtility::HtmlDecode(::StringW  value, ::System::IO::TextWriter*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HtmlDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, output);
}
inline int32_t System::Net::WebUtility::IndexOfHtmlEncodingChars(::StringW  s, int32_t  startPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"IndexOfHtmlEncodingChars", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, startPos);
}
inline ::System::Net::Configuration::UnicodeDecodingConformance System::Net::WebUtility::get_HtmlDecodeConformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"get_HtmlDecodeConformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeDecodingConformance>(nullptr, ___internal_method);
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::WebUtility::get_HtmlEncodeConformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"get_HtmlEncodeConformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeEncodingConformance>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Net::WebUtility::UrlEncode(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count, bool  alwaysCreateNewReturnValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes, offset, count, alwaysCreateNewReturnValue);
}
inline ::ArrayW<uint8_t> System::Net::WebUtility::UrlEncode(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes, offset, count);
}
inline ::StringW System::Net::WebUtility::UrlEncode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Net::WebUtility::UrlEncodeToBytes(::ArrayW<uint8_t>  value, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlEncodeToBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value, offset, count);
}
inline ::StringW System::Net::WebUtility::UrlDecodeInternal(::StringW  value, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecodeInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, encoding);
}
inline ::ArrayW<uint8_t> System::Net::WebUtility::UrlDecodeInternal(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecodeInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes, offset, count);
}
inline ::StringW System::Net::WebUtility::UrlDecode(::StringW  encodedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, encodedValue);
}
inline ::ArrayW<uint8_t> System::Net::WebUtility::UrlDecodeToBytes(::ArrayW<uint8_t>  encodedValue, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"UrlDecodeToBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, encodedValue, offset, count);
}
inline void System::Net::WebUtility::ConvertSmpToUtf16(uint32_t  smpChar, ::by_ref<char16_t>  leadingSurrogate, ::by_ref<char16_t>  trailingSurrogate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"ConvertSmpToUtf16", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, smpChar, leadingSurrogate, trailingSurrogate);
}
inline int32_t System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate(::by_ref<char16_t*>  pch, ::by_ref<int32_t>  charsRemaining)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"GetNextUnicodeScalarValueFromUtf16Surrogate", {}, {::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pch, charsRemaining);
}
inline int32_t System::Net::WebUtility::HexToInt(char16_t  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"HexToInt", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, h);
}
inline char16_t System::Net::WebUtility::IntToHex(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, n);
}
inline bool System::Net::WebUtility::IsUrlSafeChar(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"IsUrlSafeChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Net::WebUtility::ValidateUrlEncodingParameters(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"ValidateUrlEncodingParameters", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bytes, offset, count);
}
inline bool System::Net::WebUtility::StringRequiresHtmlDecoding(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility*>(),
                        {"StringRequiresHtmlDecoding", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Net::WebUtility::WebUtility()   {
}
//  Writing Method size for method: ::System::Net::WebUtility_HtmlEntities.Lookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW)>(&::System::Net::WebUtility_HtmlEntities::Lookup)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xac6e468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_HtmlEntities*>(),
                        {"Lookup", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_HtmlEntities.CalculateKeyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::System::Net::WebUtility_HtmlEntities::CalculateKeyValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xac6f4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_HtmlEntities*>(),
                        {"CalculateKeyValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebUtility_HtmlEntities::setStaticF_entities(::ArrayW<int64_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int64_t>, "entities", ::System::Net::WebUtility_HtmlEntities*>(std::forward<::ArrayW<int64_t>>(value));
}
inline ::ArrayW<int64_t> System::Net::WebUtility_HtmlEntities::getStaticF_entities()  {
return ::cordl_internals::getStaticField<::ArrayW<int64_t>, "entities", ::System::Net::WebUtility_HtmlEntities*>();
}
inline void System::Net::WebUtility_HtmlEntities::setStaticF_entities_values(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "entities_values", ::System::Net::WebUtility_HtmlEntities*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::WebUtility_HtmlEntities::getStaticF_entities_values()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "entities_values", ::System::Net::WebUtility_HtmlEntities*>();
}
inline char16_t System::Net::WebUtility_HtmlEntities::Lookup(::StringW  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_HtmlEntities*>(),
                        {"Lookup", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, entity);
}
inline int64_t System::Net::WebUtility_HtmlEntities::CalculateKeyValue(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_HtmlEntities*>(),
                        {"CalculateKeyValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Net::WebUtility_HtmlEntities::WebUtility_HtmlEntities()   {
}
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.FlushBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)()>(&::System::Net::WebUtility_UrlDecoder::FlushBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac6f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"FlushBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)(int32_t, ::System::Text::Encoding*)>(&::System::Net::WebUtility_UrlDecoder::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xac6ee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.AddChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)(char16_t)>(&::System::Net::WebUtility_UrlDecoder::AddChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac6efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"AddChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.AddByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebUtility_UrlDecoder::*)(uint8_t)>(&::System::Net::WebUtility_UrlDecoder::AddByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xac6ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"AddByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility_UrlDecoder.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebUtility_UrlDecoder::*)()>(&::System::Net::WebUtility_UrlDecoder::GetString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xac6f00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"GetString", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr int32_t& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numChars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numChars;
}
constexpr int32_t const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numChars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numChars;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__numChars(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numChars = value;
}
constexpr ::ArrayW<char16_t>& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__charBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charBuffer;
}
constexpr ::ArrayW<char16_t> const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__charBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charBuffer;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__charBuffer(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charBuffer = value;
}
constexpr int32_t& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numBytes;
}
constexpr int32_t const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__numBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numBytes;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__numBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numBytes = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__byteBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__byteBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byteBuffer = value;
}
constexpr ::System::Text::Encoding*& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::WebUtility_UrlDecoder::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void System::Net::WebUtility_UrlDecoder::__cordl_internal_set__encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoding = value;
}
inline void System::Net::WebUtility_UrlDecoder::FlushBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"FlushBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebUtility_UrlDecoder::_ctor(int32_t  bufferSize, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize, encoding);
}
inline void System::Net::WebUtility_UrlDecoder::AddChar(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"AddChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Net::WebUtility_UrlDecoder::AddByte(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"AddByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::StringW System::Net::WebUtility_UrlDecoder::GetString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebUtility_UrlDecoder*>(),
                        {"GetString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebUtility_UrlDecoder* System::Net::WebUtility_UrlDecoder::New_ctor(int32_t  bufferSize, ::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebUtility_UrlDecoder*>(bufferSize, encoding));
}
// Ctor Parameters []
constexpr ::System::Net::WebUtility_UrlDecoder::WebUtility_UrlDecoder()   {
}
