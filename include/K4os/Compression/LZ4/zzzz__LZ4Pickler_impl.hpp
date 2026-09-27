#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/LZ4Pickler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "K4os/Compression/LZ4/zzzz__LZ4Pickler_def.hpp"
#include "K4os/Compression/LZ4/zzzz__LZ4Level_def.hpp"
#include "K4os/Compression/LZ4/zzzz__PickleHeader_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.Pickle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::K4os::Compression::LZ4::LZ4Level)>(&::K4os::Compression::LZ4::LZ4Pickler::Pickle)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9cb95b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Pickle", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.Pickle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::ReadOnlySpan_1<uint8_t>, ::K4os::Compression::LZ4::LZ4Level)>(&::K4os::Compression::LZ4::LZ4Pickler::Pickle)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9cb9644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Pickle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.PickleWithBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::ReadOnlySpan_1<uint8_t>, ::K4os::Compression::LZ4::LZ4Level, ::System::Span_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::PickleWithBuffer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9cb989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"PickleWithBuffer", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.GetUncompressedHeaderSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::GetUncompressedHeaderSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9cb9c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"GetUncompressedHeaderSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.GetCompressedHeaderSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::GetCompressedHeaderSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cb9cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"GetCompressedHeaderSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EncodeUncompressedHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::EncodeUncompressedHeader)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cb9c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeUncompressedHeader", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EncodeUncompressedHeaderV0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::EncodeUncompressedHeaderV0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cb9e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeUncompressedHeaderV0", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EncodeCompressedHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::EncodeCompressedHeader)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9cb9d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeCompressedHeader", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EncodeCompressedHeaderV0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Span_1<uint8_t>, int32_t, int32_t, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::EncodeCompressedHeaderV0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cb9e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeCompressedHeaderV0", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.PokeN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<uint8_t>, int32_t, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::PokeN)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cb9ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"PokeN", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EncodeHeaderByteV0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::EncodeHeaderByteV0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cb9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeHeaderByteV0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EffectiveSizeOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::EffectiveSizeOf)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9cb9df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EffectiveSizeOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.EncodeSizeOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::EncodeSizeOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cb9fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeSizeOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.UnexpectedVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::UnexpectedVersion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cb9d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"UnexpectedVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.Unpickle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::Unpickle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cb9fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Unpickle", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.Unpickle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::ReadOnlySpan_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::Unpickle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cba06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Unpickle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.UnpickledSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::K4os::Compression::LZ4::PickleHeader>)>(&::K4os::Compression::LZ4::LZ4Pickler::UnpickledSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"UnpickledSize", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::PickleHeader>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.UnpickleCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::K4os::Compression::LZ4::PickleHeader>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::UnpickleCore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9cba1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"UnpickleCore", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::PickleHeader>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.DecodeHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::K4os::Compression::LZ4::PickleHeader (*)(::System::ReadOnlySpan_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::DecodeHeader)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cba15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"DecodeHeader", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.DecodeHeaderV0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::K4os::Compression::LZ4::PickleHeader (*)(::System::ReadOnlySpan_1<uint8_t>)>(&::K4os::Compression::LZ4::LZ4Pickler::DecodeHeaderV0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9cba42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"DecodeHeaderV0", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.PeekN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<uint8_t>, int32_t)>(&::K4os::Compression::LZ4::LZ4Pickler::PeekN)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cba554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"PeekN", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::LZ4Pickler.CorruptedPickle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::K4os::Compression::LZ4::LZ4Pickler::CorruptedPickle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cba390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"CorruptedPickle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::LZ4Pickler::Pickle(::ArrayW<uint8_t>  source, ::K4os::Compression::LZ4::LZ4Level  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Pickle", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, source, level);
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::LZ4Pickler::Pickle(::System::ReadOnlySpan_1<uint8_t>  source, ::K4os::Compression::LZ4::LZ4Level  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Pickle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, source, level);
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::LZ4Pickler::PickleWithBuffer(::System::ReadOnlySpan_1<uint8_t>  source, ::K4os::Compression::LZ4::LZ4Level  level, ::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"PickleWithBuffer", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::K4os::Compression::LZ4::LZ4Level>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, source, level, buffer);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::GetUncompressedHeaderSize(int32_t  version, int32_t  sourceLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"GetUncompressedHeaderSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, version, sourceLength);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::GetCompressedHeaderSize(int32_t  version, int32_t  sourceLength, int32_t  encodedLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"GetCompressedHeaderSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, version, sourceLength, encodedLength);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::EncodeUncompressedHeader(::System::Span_1<uint8_t>  target, int32_t  version, int32_t  sourceLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeUncompressedHeader", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, target, version, sourceLength);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::EncodeUncompressedHeaderV0(::System::Span_1<uint8_t>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeUncompressedHeaderV0", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, target);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::EncodeCompressedHeader(::System::Span_1<uint8_t>  target, int32_t  version, int32_t  headerSize, int32_t  sourceLength, int32_t  encodedLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeCompressedHeader", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, target, version, headerSize, sourceLength, encodedLength);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::EncodeCompressedHeaderV0(::System::Span_1<uint8_t>  target, int32_t  headerSize, int32_t  sourceLength, int32_t  encodedLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeCompressedHeaderV0", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, target, headerSize, sourceLength, encodedLength);
}
inline void K4os::Compression::LZ4::LZ4Pickler::PokeN(::System::Span_1<uint8_t>  target, int32_t  value, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"PokeN", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, value, size);
}
inline uint8_t K4os::Compression::LZ4::LZ4Pickler::EncodeHeaderByteV0(int32_t  sizeOfDiff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeHeaderByteV0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, sizeOfDiff);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::EffectiveSizeOf(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EffectiveSizeOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::EncodeSizeOf(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"EncodeSizeOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline ::System::Exception* K4os::Compression::LZ4::LZ4Pickler::UnexpectedVersion(int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"UnexpectedVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, version);
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::LZ4Pickler::Unpickle(::ArrayW<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Unpickle", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, source);
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::LZ4Pickler::Unpickle(::System::ReadOnlySpan_1<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"Unpickle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, source);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::UnpickledSize(/* [IsReadOnly] */ ::by_ref<::K4os::Compression::LZ4::PickleHeader>  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"UnpickledSize", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::PickleHeader>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, header);
}
inline void K4os::Compression::LZ4::LZ4Pickler::UnpickleCore(/* [IsReadOnly] */ ::by_ref<::K4os::Compression::LZ4::PickleHeader>  header, ::System::ReadOnlySpan_1<uint8_t>  source, ::System::Span_1<uint8_t>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"UnpickleCore", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::PickleHeader>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, source, target);
}
inline ::K4os::Compression::LZ4::PickleHeader K4os::Compression::LZ4::LZ4Pickler::DecodeHeader(::System::ReadOnlySpan_1<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"DecodeHeader", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::K4os::Compression::LZ4::PickleHeader>(nullptr, ___internal_method, source);
}
inline ::K4os::Compression::LZ4::PickleHeader K4os::Compression::LZ4::LZ4Pickler::DecodeHeaderV0(::System::ReadOnlySpan_1<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"DecodeHeaderV0", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::K4os::Compression::LZ4::PickleHeader>(nullptr, ___internal_method, source);
}
inline int32_t K4os::Compression::LZ4::LZ4Pickler::PeekN(::System::ReadOnlySpan_1<uint8_t>  bytes, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"PeekN", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes, size);
}
inline ::System::Exception* K4os::Compression::LZ4::LZ4Pickler::CorruptedPickle(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::LZ4Pickler*>(),
                        {"CorruptedPickle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::LZ4Pickler::LZ4Pickler()   {
}
