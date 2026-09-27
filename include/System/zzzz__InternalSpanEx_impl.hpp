#pragma once
// IWYU pragma private; include "System/InternalSpanEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__InternalSpanEx_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::InternalSpanEx.EqualsOrdinalIgnoreCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::InternalSpanEx::EqualsOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb9945d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"EqualsOrdinalIgnoreCase", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InternalSpanEx.EqualsOrdinalIgnoreCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<char16_t>, ::by_ref<char16_t>, int32_t)>(&::System::InternalSpanEx::EqualsOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb99468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"EqualsOrdinalIgnoreCase", {}, {::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InternalSpanEx.AllCharsInUInt32AreAscii
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::System::InternalSpanEx::AllCharsInUInt32AreAscii)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9948b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"AllCharsInUInt32AreAscii", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InternalSpanEx.AllCharsInUInt64AreAscii
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t)>(&::System::InternalSpanEx::AllCharsInUInt64AreAscii)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9948bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"AllCharsInUInt64AreAscii", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InternalSpanEx.UInt32OrdinalIgnoreCaseAscii
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint32_t)>(&::System::InternalSpanEx::UInt32OrdinalIgnoreCaseAscii)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb9948c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"UInt32OrdinalIgnoreCaseAscii", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InternalSpanEx.UInt64OrdinalIgnoreCaseAscii
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint64_t)>(&::System::InternalSpanEx::UInt64OrdinalIgnoreCaseAscii)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9948f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"UInt64OrdinalIgnoreCaseAscii", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InternalSpanEx.EqualsOrdinalIgnoreCaseNonAscii
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<char16_t>, ::by_ref<char16_t>, int32_t)>(&::System::InternalSpanEx::EqualsOrdinalIgnoreCaseNonAscii)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb994834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"EqualsOrdinalIgnoreCaseNonAscii", {}, {::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::InternalSpanEx::EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"EqualsOrdinalIgnoreCase", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
inline bool System::InternalSpanEx::EqualsOrdinalIgnoreCase(::by_ref<char16_t>  charA, ::by_ref<char16_t>  charB, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"EqualsOrdinalIgnoreCase", {}, {::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, charA, charB, length);
}
inline bool System::InternalSpanEx::AllCharsInUInt32AreAscii(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"AllCharsInUInt32AreAscii", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::InternalSpanEx::AllCharsInUInt64AreAscii(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"AllCharsInUInt64AreAscii", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::InternalSpanEx::UInt32OrdinalIgnoreCaseAscii(uint32_t  valueA, uint32_t  valueB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"UInt32OrdinalIgnoreCaseAscii", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, valueA, valueB);
}
inline bool System::InternalSpanEx::UInt64OrdinalIgnoreCaseAscii(uint64_t  valueA, uint64_t  valueB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"UInt64OrdinalIgnoreCaseAscii", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, valueA, valueB);
}
inline bool System::InternalSpanEx::EqualsOrdinalIgnoreCaseNonAscii(::by_ref<char16_t>  charA, ::by_ref<char16_t>  charB, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::InternalSpanEx*>(),
                        {"EqualsOrdinalIgnoreCaseNonAscii", {}, {::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, charA, charB, length);
}
// Ctor Parameters []
constexpr ::System::InternalSpanEx::InternalSpanEx()   {
}
