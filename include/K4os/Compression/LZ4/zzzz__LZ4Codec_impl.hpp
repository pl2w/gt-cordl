#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/LZ4Codec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "K4os/Compression/LZ4/zzzz__LZ4Codec_def.hpp"
#include "K4os/Compression/LZ4/zzzz__LZ4Level_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Codec.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, uint8_t*, int32_t, ::K4os::Compression::LZ4::LZ4Level)>(&::K4os::Compression::LZ4::LZ4Codec::Encode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cb8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Encode", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Codec.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::K4os::Compression::LZ4::LZ4Level)>(&::K4os::Compression::LZ4::LZ4Codec::Encode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9cb9268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Encode", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Codec.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::K4os::Compression::LZ4::LZ4Codec::Decode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9cb9338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Decode", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Codec.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Codec::Decode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9cb94e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Decode", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t K4os::Compression::LZ4::LZ4Codec::Encode(uint8_t*  source, int32_t  sourceLength, uint8_t*  target, int32_t  targetLength, ::K4os::Compression::LZ4::LZ4Level  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Encode", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sourceLength, target, targetLength, level);
}
inline int32_t K4os::Compression::LZ4::LZ4Codec::Encode(::System::ReadOnlySpan_1<uint8_t>  source, ::System::Span_1<uint8_t>  target, ::K4os::Compression::LZ4::LZ4Level  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Encode", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, target, level);
}
inline int32_t K4os::Compression::LZ4::LZ4Codec::Decode(uint8_t*  source, int32_t  sourceLength, uint8_t*  target, int32_t  targetLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Decode", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, sourceLength, target, targetLength);
}
inline int32_t K4os::Compression::LZ4::LZ4Codec::Decode(::System::ReadOnlySpan_1<uint8_t>  source, ::System::Span_1<uint8_t>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Codec*>(),
                        {"Decode", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, target);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::LZ4Codec::LZ4Codec()   {
}
