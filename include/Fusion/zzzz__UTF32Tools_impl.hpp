#pragma once
// IWYU pragma private; include "Fusion/UTF32Tools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__UTF32Tools_def.hpp"
#include "Fusion/zzzz__UTF32Tools_CharEnumerator_def.hpp"
#include "Fusion/zzzz__UTF32Tools_ConversionResult_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::UTF32Tools.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UTF32Tools_ConversionResult (*)(::StringW, uint32_t*, int32_t)>(&::Fusion::UTF32Tools::Convert)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f405ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"Convert", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UTF32Tools_ConversionResult (*)(char16_t*, int32_t, uint32_t*, int32_t)>(&::Fusion::UTF32Tools::Convert)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5f40608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"Convert", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.CompareOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t*, int32_t, uint32_t*, int32_t, bool)>(&::Fusion::UTF32Tools::CompareOrdinal)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f40790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"CompareOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.CompareOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, uint32_t*, int32_t, bool)>(&::Fusion::UTF32Tools::CompareOrdinal)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5f40aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"CompareOrdinal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.EndsWithOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t*, int32_t, uint32_t*, int32_t, bool)>(&::Fusion::UTF32Tools::EndsWithOrdinal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f40e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"EndsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.EndsWithOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t*, int32_t, ::StringW, bool)>(&::Fusion::UTF32Tools::EndsWithOrdinal)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f40e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"EndsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.GetHashDeterministic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t*, int32_t)>(&::Fusion::UTF32Tools::GetHashDeterministic)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f40f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetHashDeterministic", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.StartsWithOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t*, int32_t, uint32_t*, int32_t, bool)>(&::Fusion::UTF32Tools::StartsWithOrdinal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f40ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"StartsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.StartsWithOrdinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t*, int32_t, ::StringW, bool)>(&::Fusion::UTF32Tools::StartsWithOrdinal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f41024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"StartsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t*, int32_t, ::StringW)>(&::Fusion::UTF32Tools::IndexOf)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f41108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"IndexOf", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t*, int32_t, uint32_t*, int32_t)>(&::Fusion::UTF32Tools::IndexOf)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5f413d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"IndexOf", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ToLowerInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, int32_t)>(&::Fusion::UTF32Tools::ToLowerInvariant)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f41518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToLowerInvariant", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ToUpperInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, uint32_t*, int32_t)>(&::Fusion::UTF32Tools::ToUpperInvariant)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f415e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUpperInvariant", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.GetHighSurrogate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint32_t)>(&::Fusion::UTF32Tools::GetHighSurrogate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f41794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetHighSurrogate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Fusion::UTF32Tools::GetLength)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f417a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetLength", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.GetLowSurrogate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint32_t)>(&::Fusion::UTF32Tools::GetLowSurrogate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f417fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetLowSurrogate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.IsValidCodePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Fusion::UTF32Tools::IsValidCodePoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4180c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"IsValidCodePoint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ReadNextCodePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<char16_t*>, char16_t*)>(&::Fusion::UTF32Tools::ReadNextCodePoint)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f412c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ReadNextCodePoint", {}, {::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.Swap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Fusion::UTF32Tools::Swap)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f41828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"Swap", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ToLowerInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Fusion::UTF32Tools::ToLowerInvariant)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f409bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToLowerInvariant", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ToUpperInvariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Fusion::UTF32Tools::ToUpperInvariant)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f416b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUpperInvariant", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ToUTF16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<char16_t,char16_t> (*)(uint32_t)>(&::Fusion::UTF32Tools::ToUTF16)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f40d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUTF16", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UTF32Tools.ToUTF32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t, char16_t)>(&::Fusion::UTF32Tools::ToUTF32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f40db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUTF32", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::UTF32Tools_ConversionResult Fusion::UTF32Tools::Convert(::StringW  str, uint32_t*  dst, int32_t  dstCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"Convert", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UTF32Tools_ConversionResult>(nullptr, ___internal_method, str, dst, dstCapacity);
}
inline ::GlobalNamespace::UTF32Tools_ConversionResult Fusion::UTF32Tools::Convert(char16_t*  str, int32_t  strLength, uint32_t*  dst, int32_t  dstCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"Convert", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UTF32Tools_ConversionResult>(nullptr, ___internal_method, str, strLength, dst, dstCapacity);
}
inline int32_t Fusion::UTF32Tools::CompareOrdinal(uint32_t*  strA, int32_t  aLength, uint32_t*  strB, int32_t  bLength, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"CompareOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, aLength, strB, bLength, ignoreCase);
}
inline int32_t Fusion::UTF32Tools::CompareOrdinal(::StringW  strA, uint32_t*  strB, int32_t  bLength, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"CompareOrdinal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, strA, strB, bLength, ignoreCase);
}
inline bool Fusion::UTF32Tools::EndsWithOrdinal(uint32_t*  strA, int32_t  aLength, uint32_t*  bStr, int32_t  bLength, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"EndsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, strA, aLength, bStr, bLength, ignoreCase);
}
inline bool Fusion::UTF32Tools::EndsWithOrdinal(uint32_t*  strA, int32_t  aLength, ::StringW  strB, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"EndsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, strA, aLength, strB, ignoreCase);
}
inline int32_t Fusion::UTF32Tools::GetHashDeterministic(uint32_t*  str, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetHashDeterministic", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, length);
}
inline bool Fusion::UTF32Tools::StartsWithOrdinal(uint32_t*  strA, int32_t  aLength, uint32_t*  strB, int32_t  bLength, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"StartsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, strA, aLength, strB, bLength, ignoreCase);
}
inline bool Fusion::UTF32Tools::StartsWithOrdinal(uint32_t*  strA, int32_t  aLength, ::StringW  strB, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"StartsWithOrdinal", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, strA, aLength, strB, ignoreCase);
}
inline int32_t Fusion::UTF32Tools::IndexOf(uint32_t*  str, int32_t  length, ::StringW  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"IndexOf", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, length, pattern);
}
inline int32_t Fusion::UTF32Tools::IndexOf(uint32_t*  str, int32_t  length, uint32_t*  pattern, int32_t  patternLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"IndexOf", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, length, pattern, patternLength);
}
inline void Fusion::UTF32Tools::ToLowerInvariant(uint32_t*  src, uint32_t*  dst, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToLowerInvariant", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, length);
}
inline void Fusion::UTF32Tools::ToUpperInvariant(uint32_t*  src, uint32_t*  dst, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUpperInvariant", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, length);
}
inline char16_t Fusion::UTF32Tools::GetHighSurrogate(uint32_t  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetHighSurrogate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, scalar);
}
inline int32_t Fusion::UTF32Tools::GetLength(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetLength", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
inline char16_t Fusion::UTF32Tools::GetLowSurrogate(uint32_t  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"GetLowSurrogate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, scalar);
}
inline bool Fusion::UTF32Tools::IsValidCodePoint(uint32_t  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"IsValidCodePoint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scalar);
}
inline uint32_t Fusion::UTF32Tools::ReadNextCodePoint(::by_ref<char16_t*>  pstr, char16_t*  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ReadNextCodePoint", {}, {::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pstr, end);
}
inline void Fusion::UTF32Tools::Swap(::by_ref<int32_t>  a, ::by_ref<int32_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"Swap", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline uint32_t Fusion::UTF32Tools::ToLowerInvariant(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToLowerInvariant", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t Fusion::UTF32Tools::ToUpperInvariant(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUpperInvariant", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline ::System::ValueTuple_2<char16_t,char16_t> Fusion::UTF32Tools::ToUTF16(uint32_t  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUTF16", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<char16_t,char16_t>>(nullptr, ___internal_method, scalar);
}
inline uint32_t Fusion::UTF32Tools::ToUTF32(char16_t  charOrHighSurrogate, char16_t  lowSurrogate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UTF32Tools*>(),
                        {"ToUTF32", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, charOrHighSurrogate, lowSurrogate);
}
// Ctor Parameters []
constexpr ::Fusion::UTF32Tools::UTF32Tools()   {
}
