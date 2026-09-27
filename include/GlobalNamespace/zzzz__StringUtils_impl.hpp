#pragma once
// IWYU pragma private; include "GlobalNamespace/StringUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StringUtils_def.hpp"
#include "GlobalNamespace/zzzz__StringUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringUtils.IsNullOrEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::StringUtils::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"IsNullOrEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.IsNullOrWhiteSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::StringUtils::IsNullOrWhiteSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"IsNullOrWhiteSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToAlphaNumeric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringUtils::ToAlphaNumeric)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5b18c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToAlphaNumeric", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.Capitalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringUtils::Capitalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b18ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Capitalize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.Concat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::StringUtils::Concat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Concat", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::GlobalNamespace::StringUtils::Join)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b18f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Join", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, char16_t)>(&::GlobalNamespace::StringUtils::Join)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b18fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Join", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringUtils::RemoveAll)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b19008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveAll", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, ::System::StringComparison)>(&::GlobalNamespace::StringUtils::RemoveAll)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b19070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveAll", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToBytesASCII
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::GlobalNamespace::StringUtils::ToBytesASCII)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b190c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToBytesASCII", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToBytesUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::GlobalNamespace::StringUtils::ToBytesUTF8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b190f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToBytesUTF8", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToBytesUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::GlobalNamespace::StringUtils::ToBytesUnicode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b19124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToBytesUnicode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ComputeSHV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringUtils::ComputeSHV2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b19154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ComputeSHV2", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToQueryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::GlobalNamespace::StringUtils::ToQueryString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b19184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToQueryString", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::StringW>)>(&::GlobalNamespace::StringUtils::Combine)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b192f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToUpperCamelCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringUtils::ToUpperCamelCase)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b193e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToUpperCamelCase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.ToUpperCaseFromCamelCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringUtils::ToUpperCaseFromCamelCase)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5b195dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToUpperCaseFromCamelCase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.RemoveStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringUtils::RemoveStart)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b19960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.RemoveEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringUtils::RemoveEnd)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b199cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.RemoveBothEnds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringUtils::RemoveBothEnds)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b19a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveBothEnds", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils.TrailingSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringUtils::TrailingSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b19a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"TrailingSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::StringUtils::IsNullOrEmpty(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"IsNullOrEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline bool GlobalNamespace::StringUtils::IsNullOrWhiteSpace(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"IsNullOrWhiteSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::StringUtils::ToAlphaNumeric(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToAlphaNumeric", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::StringUtils::Capitalize(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Capitalize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::StringUtils::Concat(::System::Collections::Generic::IEnumerable_1<::StringW>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Concat", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source);
}
inline ::StringW GlobalNamespace::StringUtils::Join(::System::Collections::Generic::IEnumerable_1<::StringW>*  source, ::StringW  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Join", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source, separator);
}
inline ::StringW GlobalNamespace::StringUtils::Join(::System::Collections::Generic::IEnumerable_1<::StringW>*  source, char16_t  separator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Join", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source, separator);
}
inline ::StringW GlobalNamespace::StringUtils::RemoveAll(::StringW  s, ::StringW  value, ::System::StringComparison  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveAll", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, value, mode);
}
inline ::StringW GlobalNamespace::StringUtils::RemoveAll(::StringW  s, char16_t  value, ::System::StringComparison  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveAll", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, value, mode);
}
inline ::ArrayW<uint8_t> GlobalNamespace::StringUtils::ToBytesASCII(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToBytesASCII", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::ArrayW<uint8_t> GlobalNamespace::StringUtils::ToBytesUTF8(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToBytesUTF8", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::ArrayW<uint8_t> GlobalNamespace::StringUtils::ToBytesUnicode(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToBytesUnicode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::StringUtils::ComputeSHV2(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ComputeSHV2", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW GlobalNamespace::StringUtils::ToQueryString(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToQueryString", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, d);
}
inline ::StringW GlobalNamespace::StringUtils::Combine(::StringW  separator, /* [ParamArray] */ ::ArrayW<::StringW>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, separator, values);
}
inline ::StringW GlobalNamespace::StringUtils::ToUpperCamelCase(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToUpperCamelCase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline ::StringW GlobalNamespace::StringUtils::ToUpperCaseFromCamelCase(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"ToUpperCaseFromCamelCase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline ::StringW GlobalNamespace::StringUtils::RemoveStart(::StringW  s, ::StringW  value, ::System::StringComparison  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, value, comparison);
}
inline ::StringW GlobalNamespace::StringUtils::RemoveEnd(::StringW  s, ::StringW  value, ::System::StringComparison  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, value, comparison);
}
inline ::StringW GlobalNamespace::StringUtils::RemoveBothEnds(::StringW  s, ::StringW  value, ::System::StringComparison  comparison)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"RemoveBothEnds", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, value, comparison);
}
inline ::StringW GlobalNamespace::StringUtils::TrailingSpace(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils*>(),
                        {"TrailingSpace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringUtils::StringUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::StringUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StringUtils___c::*)()>(&::GlobalNamespace::StringUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b19bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringUtils___c._ToQueryString_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StringUtils___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>)>(&::GlobalNamespace::StringUtils___c::_ToQueryString_b__20_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b19bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils___c*>(),
                        {"<ToQueryString>b__20_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StringUtils___c::setStaticF___9(::GlobalNamespace::StringUtils___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::StringUtils___c*, "<>9", ::GlobalNamespace::StringUtils___c*>(std::forward<::GlobalNamespace::StringUtils___c*>(value));
}
inline ::GlobalNamespace::StringUtils___c* GlobalNamespace::StringUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::StringUtils___c*, "<>9", ::GlobalNamespace::StringUtils___c*>();
}
inline void GlobalNamespace::StringUtils___c::setStaticF___9__20_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__20_0", ::GlobalNamespace::StringUtils___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* GlobalNamespace::StringUtils___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__20_0", ::GlobalNamespace::StringUtils___c*>();
}
inline void GlobalNamespace::StringUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::StringUtils___c::_ToQueryString_b__20_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringUtils___c*>(),
                        {"<ToQueryString>b__20_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::StringUtils___c* GlobalNamespace::StringUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StringUtils___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringUtils___c::StringUtils___c()   {
}
