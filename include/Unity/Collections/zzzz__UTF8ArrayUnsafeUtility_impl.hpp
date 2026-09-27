#pragma once
// IWYU pragma private; include "Unity/Collections/UTF8ArrayUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_Comparison_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<int32_t>, int32_t, char16_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf0771c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"Copy", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaf07750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"StrCmp", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.EqualsUTF8Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::EqualsUTF8Bytes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf03f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"EqualsUTF8Bytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaf03d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"StrCmp", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t*  dest, ::by_ref<int32_t>  destLength, int32_t  destUTF8MaxLengthInBytes, char16_t*  src, int32_t  srcLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"Copy", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t*  utf8BufferA, int32_t  utf8LengthInBytesA, uint8_t*  utf8BufferB, int32_t  utf8LengthInBytesB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"StrCmp", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf8BufferA, utf8LengthInBytesA, utf8BufferB, utf8LengthInBytesB);
}
inline bool Unity::Collections::UTF8ArrayUnsafeUtility::EqualsUTF8Bytes(uint8_t*  aBytes, int32_t  aLength, uint8_t*  bBytes, int32_t  bLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"EqualsUTF8Bytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aBytes, aLength, bBytes, bLength);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t*  utf8Buffer, int32_t  utf8LengthInBytes, char16_t*  utf16Buffer, int32_t  utf16LengthInChars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                        {"StrCmp", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf8Buffer, utf8LengthInBytes, utf16Buffer, utf16LengthInChars);
}
// Ctor Parameters []
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility::UTF8ArrayUnsafeUtility()   {
}
