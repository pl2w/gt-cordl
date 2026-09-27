#pragma once
// IWYU pragma private; include "Unity/Collections/Unicode.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
#include "Unity/Collections/zzzz__ConversionError_def.hpp"
#include "Unity/Collections/zzzz__Unicode_Rune_def.hpp"
//  Writing Method size for method: ::Unity::Collections::Unicode.IsValidCodePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Unity::Collections::Unicode::IsValidCodePoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf070ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"IsValidCodePoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.NotTrailer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::Unity::Collections::Unicode::NotTrailer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf070f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"NotTrailer", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.get_ReplacementCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Unicode_Rune (*)()>(&::Unity::Collections::Unicode::get_ReplacementCharacter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf07108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"get_ReplacementCharacter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.Utf8ToUcs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ConversionError (*)(::by_ref<::GlobalNamespace::Unicode_Rune>, uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Unity::Collections::Unicode::Utf8ToUcs)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaf07110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf8ToUcs", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Unicode_Rune>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.IsLeadingSurrogate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Unity::Collections::Unicode::IsLeadingSurrogate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf07294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"IsLeadingSurrogate", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.IsTrailingSurrogate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Unity::Collections::Unicode::IsTrailingSurrogate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf072a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"IsTrailingSurrogate", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.Utf16ToUcs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ConversionError (*)(::by_ref<::GlobalNamespace::Unicode_Rune>, char16_t*, ::by_ref<int32_t>, int32_t)>(&::Unity::Collections::Unicode::Utf16ToUcs)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaf072b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf16ToUcs", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Unicode_Rune>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.UcsToUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ConversionError (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::GlobalNamespace::Unicode_Rune)>(&::Unity::Collections::Unicode::UcsToUtf8)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaf0733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"UcsToUtf8", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Unicode_Rune>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.UcsToUtf16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ConversionError (*)(char16_t*, ::by_ref<int32_t>, int32_t, ::GlobalNamespace::Unicode_Rune)>(&::Unity::Collections::Unicode::UcsToUtf16)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaf0743c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"UcsToUtf16", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Unicode_Rune>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.Utf16ToUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ConversionError (*)(char16_t*, int32_t, uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Unity::Collections::Unicode::Utf16ToUtf8)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf074b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf16ToUtf8", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unicode.Utf8ToUtf16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ConversionError (*)(uint8_t*, int32_t, char16_t*, ::by_ref<int32_t>, int32_t)>(&::Unity::Collections::Unicode::Utf8ToUtf16)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf0753c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf8ToUtf16", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Collections::Unicode::IsValidCodePoint(int32_t  codepoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"IsValidCodePoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, codepoint);
}
inline bool Unity::Collections::Unicode::NotTrailer(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"NotTrailer", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b);
}
inline ::GlobalNamespace::Unicode_Rune Unity::Collections::Unicode::get_ReplacementCharacter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"get_ReplacementCharacter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Unicode_Rune>(nullptr, ___internal_method);
}
inline ::Unity::Collections::ConversionError Unity::Collections::Unicode::Utf8ToUcs(::by_ref<::GlobalNamespace::Unicode_Rune>  rune, uint8_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf8ToUcs", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Unicode_Rune>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ConversionError>(nullptr, ___internal_method, rune, buffer, index, capacity);
}
inline bool Unity::Collections::Unicode::IsLeadingSurrogate(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"IsLeadingSurrogate", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Unity::Collections::Unicode::IsTrailingSurrogate(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"IsTrailingSurrogate", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::Unity::Collections::ConversionError Unity::Collections::Unicode::Utf16ToUcs(::by_ref<::GlobalNamespace::Unicode_Rune>  rune, char16_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf16ToUcs", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Unicode_Rune>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ConversionError>(nullptr, ___internal_method, rune, buffer, index, capacity);
}
inline ::Unity::Collections::ConversionError Unity::Collections::Unicode::UcsToUtf8(uint8_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity, ::GlobalNamespace::Unicode_Rune  rune)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"UcsToUtf8", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Unicode_Rune>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ConversionError>(nullptr, ___internal_method, buffer, index, capacity, rune);
}
inline ::Unity::Collections::ConversionError Unity::Collections::Unicode::UcsToUtf16(char16_t*  buffer, ::by_ref<int32_t>  index, int32_t  capacity, ::GlobalNamespace::Unicode_Rune  rune)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"UcsToUtf16", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Unicode_Rune>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ConversionError>(nullptr, ___internal_method, buffer, index, capacity, rune);
}
inline ::Unity::Collections::ConversionError Unity::Collections::Unicode::Utf16ToUtf8(char16_t*  utf16Buffer, int32_t  utf16Length, uint8_t*  utf8Buffer, ::by_ref<int32_t>  utf8Length, int32_t  utf8Capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf16ToUtf8", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ConversionError>(nullptr, ___internal_method, utf16Buffer, utf16Length, utf8Buffer, utf8Length, utf8Capacity);
}
inline ::Unity::Collections::ConversionError Unity::Collections::Unicode::Utf8ToUtf16(uint8_t*  utf8Buffer, int32_t  utf8Length, char16_t*  utf16Buffer, ::by_ref<int32_t>  utf16Length, int32_t  utf16Capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::Unicode>(),
                        {"Utf8ToUtf16", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ConversionError>(nullptr, ___internal_method, utf8Buffer, utf8Length, utf16Buffer, utf16Length, utf16Capacity);
}
// Ctor Parameters []
constexpr ::Unity::Collections::Unicode::Unicode()   {
}
