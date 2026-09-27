#pragma once
// IWYU pragma private; include "System/HexConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__HexConverter_def.hpp"
#include "System/zzzz__HexConverter_Casing_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::HexConverter.ToBytesBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::System::Span_1<uint8_t>, int32_t, ::GlobalNamespace::HexConverter_Casing)>(&::System::HexConverter::ToBytesBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb9942e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToBytesBuffer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::HexConverter_Casing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HexConverter.ToCharsBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, ::System::Span_1<char16_t>, int32_t, ::GlobalNamespace::HexConverter_Casing)>(&::System::HexConverter::ToCharsBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb994340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToCharsBuffer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::HexConverter_Casing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HexConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<uint8_t>, ::GlobalNamespace::HexConverter_Casing)>(&::System::HexConverter::ToString)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9943a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::GlobalNamespace::HexConverter_Casing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HexConverter.ToCharUpper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::HexConverter::ToCharUpper)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb99459c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToCharUpper", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::HexConverter.ToCharLower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::HexConverter::ToCharLower)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb9945b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToCharLower", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::HexConverter::ToBytesBuffer(uint8_t  value, ::System::Span_1<uint8_t>  buffer, int32_t  startingIndex, ::GlobalNamespace::HexConverter_Casing  casing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToBytesBuffer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::HexConverter_Casing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer, startingIndex, casing);
}
inline void System::HexConverter::ToCharsBuffer(uint8_t  value, ::System::Span_1<char16_t>  buffer, int32_t  startingIndex, ::GlobalNamespace::HexConverter_Casing  casing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToCharsBuffer", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::HexConverter_Casing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer, startingIndex, casing);
}
inline ::StringW System::HexConverter::ToString(::System::ReadOnlySpan_1<uint8_t>  bytes, ::GlobalNamespace::HexConverter_Casing  casing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::GlobalNamespace::HexConverter_Casing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, casing);
}
inline char16_t System::HexConverter::ToCharUpper(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToCharUpper", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::HexConverter::ToCharLower(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::HexConverter*>(),
                        {"ToCharLower", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::HexConverter::HexConverter()   {
}
