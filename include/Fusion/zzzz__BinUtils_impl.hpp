#pragma once
// IWYU pragma private; include "Fusion/BinUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__BinUtils_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::BinUtils.BytesToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*, int32_t, int32_t, ::StringW, ::StringW)>(&::Fusion::BinUtils::BytesToHex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f39008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"BytesToHex", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BinUtils.WordsToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<int32_t>, int32_t, ::StringW, ::StringW)>(&::Fusion::BinUtils::WordsToHex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f39138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"WordsToHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BinUtils.WordsToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<uint32_t>, int32_t, ::StringW, ::StringW)>(&::Fusion::BinUtils::WordsToHex)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5f39200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"WordsToHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BinUtils.BytesToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::Fusion::BinUtils::BytesToHex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f393dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"BytesToHex", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BinUtils.BytesToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<uint8_t>, int32_t)>(&::Fusion::BinUtils::BytesToHex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f394b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"BytesToHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BinUtils.RepeatingCopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>)>(&::Fusion::BinUtils::RepeatingCopyTo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5f395b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"RepeatingCopyTo", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BinUtils.RepeatingSequenceEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::Fusion::BinUtils::RepeatingSequenceEqualTo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5f39744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"RepeatingSequenceEqualTo", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::BinUtils::setStaticF__byteHexValue(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_byteHexValue", ::Fusion::BinUtils*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Fusion::BinUtils::getStaticF__byteHexValue()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_byteHexValue", ::Fusion::BinUtils*>();
}
inline ::StringW Fusion::BinUtils::BytesToHex(uint8_t*  buffer, int32_t  length, int32_t  columns, ::StringW  rowSeparator, ::StringW  columnSeparator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"BytesToHex", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, length, columns, rowSeparator, columnSeparator);
}
inline ::StringW Fusion::BinUtils::WordsToHex(::System::ReadOnlySpan_1<int32_t>  buffer, int32_t  columns, ::StringW  rowSeparator, ::StringW  columnSeparator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"WordsToHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, columns, rowSeparator, columnSeparator);
}
inline ::StringW Fusion::BinUtils::WordsToHex(::System::ReadOnlySpan_1<uint32_t>  buffer, int32_t  columns, ::StringW  rowSeparator, ::StringW  columnSeparator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"WordsToHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, columns, rowSeparator, columnSeparator);
}
inline ::StringW Fusion::BinUtils::BytesToHex(::ArrayW<uint8_t>  buffer, int32_t  columns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"BytesToHex", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, columns);
}
inline ::StringW Fusion::BinUtils::BytesToHex(::System::ReadOnlySpan_1<uint8_t>  buffer, int32_t  columns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"BytesToHex", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, columns);
}
inline void Fusion::BinUtils::RepeatingCopyTo(::System::ReadOnlySpan_1<uint8_t>  src, ::System::Span_1<uint8_t>  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"RepeatingCopyTo", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
inline bool Fusion::BinUtils::RepeatingSequenceEqualTo(::System::ReadOnlySpan_1<uint8_t>  span, ::System::ReadOnlySpan_1<uint8_t>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BinUtils*>(),
                        {"RepeatingSequenceEqualTo", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, other);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Fusion::BinUtils::Read(::System::Span_1<uint8_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::BinUtils*>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Fusion::BinUtils::Read(::System::Span_1<int32_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::BinUtils*>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::BinUtils::AsRef(::System::Span_1<uint8_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::BinUtils*>(),
                    {"AsRef", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::BinUtils::AsRef(::System::Span_1<int32_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::BinUtils*>(),
                    {"AsRef", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::BinUtils::AsPointer(::System::Span_1<uint8_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::BinUtils*>(),
                    {"AsPointer", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, source);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::BinUtils::AsPointer(::System::Span_1<int32_t>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::BinUtils*>(),
                    {"AsPointer", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Span_1<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Fusion::BinUtils::BinUtils()   {
}
