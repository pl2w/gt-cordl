#pragma once
// IWYU pragma private; include "Cysharp/Text/FastNumberWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__FastNumberWriter_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::FastNumberWriter.TryWriteInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, int64_t)>(&::Cysharp::Text::FastNumberWriter::TryWriteInt64)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0xb9a99a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FastNumberWriter*>(),
                        {"TryWriteInt64", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::FastNumberWriter.TryWriteUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, uint64_t)>(&::Cysharp::Text::FastNumberWriter::TryWriteUInt64)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0xb9a9fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FastNumberWriter*>(),
                        {"TryWriteUInt64", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Cysharp::Text::FastNumberWriter::TryWriteInt64(::System::Span_1<char16_t>  buffer, ::by_ref<int32_t>  charsWritten, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FastNumberWriter*>(),
                        {"TryWriteInt64", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, charsWritten, value);
}
inline bool Cysharp::Text::FastNumberWriter::TryWriteUInt64(::System::Span_1<char16_t>  buffer, ::by_ref<int32_t>  charsWritten, uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::FastNumberWriter*>(),
                        {"TryWriteUInt64", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, charsWritten, value);
}
// Ctor Parameters []
constexpr ::Cysharp::Text::FastNumberWriter::FastNumberWriter()   {
}
