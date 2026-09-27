#pragma once
// IWYU pragma private; include "Ionic/Zlib/GZipStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Ionic/Zlib/zzzz__GZipStream_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7936cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_Comment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.set_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::StringW)>(&::Ionic::Zlib::GZipStream::set_Comment)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7936d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa793730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.set_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::StringW)>(&::Ionic::Zlib::GZipStream::set_FileName)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa793738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_Crc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_Crc32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7938ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_Crc32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode)>(&::Ionic::Zlib::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa7938f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7939c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, bool)>(&::Ionic::Zlib::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa7939cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel, bool)>(&::Ionic::Zlib::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa793900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_FlushMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::FlushType (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_FlushMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7939d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.set_FlushMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::GZipStream::set_FlushMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7939f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_BufferSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa793a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(int32_t)>(&::Ionic::Zlib::GZipStream::set_BufferSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa793a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_TotalIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_TotalIn)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa793bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_TotalOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_TotalOut)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa793bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(bool)>(&::Ionic::Zlib::GZipStream::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa793c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_CanRead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa793ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa793d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa793d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::Flush)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa793de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa793e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::get_Position)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa793e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(int64_t)>(&::Ionic::Zlib::GZipStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa793eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::GZipStream::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa793f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::GZipStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Ionic::Zlib::GZipStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa793fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(int64_t)>(&::Ionic::Zlib::GZipStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa794020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::GZipStream::Write)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa794058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.EmitHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::GZipStream::*)()>(&::Ionic::Zlib::GZipStream::EmitHeader)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xa79414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"EmitHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.CompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Ionic::Zlib::GZipStream::CompressString)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa794528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.CompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::GZipStream::CompressBuffer)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa7946dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.UncompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::GZipStream::UncompressString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa794890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::GZipStream.UncompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::GZipStream::UncompressBuffer)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa794a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::DateTime>& Ionic::Zlib::GZipStream::__cordl_internal_get_LastModified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Ionic::Zlib::GZipStream::__cordl_internal_get_LastModified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set_LastModified(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastModified = value;
}
constexpr int32_t& Ionic::Zlib::GZipStream::__cordl_internal_get__headerByteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerByteCount;
}
constexpr int32_t const& Ionic::Zlib::GZipStream::__cordl_internal_get__headerByteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerByteCount;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__headerByteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerByteCount = value;
}
constexpr ::Ionic::Zlib::ZlibBaseStream*& Ionic::Zlib::GZipStream::__cordl_internal_get__baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr ::Ionic::Zlib::ZlibBaseStream* const& Ionic::Zlib::GZipStream::__cordl_internal_get__baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__baseStream(::Ionic::Zlib::ZlibBaseStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseStream = value;
}
constexpr bool& Ionic::Zlib::GZipStream::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Ionic::Zlib::GZipStream::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr bool& Ionic::Zlib::GZipStream::__cordl_internal_get__firstReadDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstReadDone;
}
constexpr bool const& Ionic::Zlib::GZipStream::__cordl_internal_get__firstReadDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstReadDone;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__firstReadDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstReadDone = value;
}
constexpr ::StringW& Ionic::Zlib::GZipStream::__cordl_internal_get__FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileName;
}
constexpr ::StringW const& Ionic::Zlib::GZipStream::__cordl_internal_get__FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileName;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileName = value;
}
constexpr ::StringW& Ionic::Zlib::GZipStream::__cordl_internal_get__Comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr ::StringW const& Ionic::Zlib::GZipStream::__cordl_internal_get__Comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__Comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Comment = value;
}
constexpr int32_t& Ionic::Zlib::GZipStream::__cordl_internal_get__Crc32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr int32_t const& Ionic::Zlib::GZipStream::__cordl_internal_get__Crc32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr void Ionic::Zlib::GZipStream::__cordl_internal_set__Crc32(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Crc32 = value;
}
inline void Ionic::Zlib::GZipStream::setStaticF__unixEpoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "_unixEpoch", ::Ionic::Zlib::GZipStream*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Ionic::Zlib::GZipStream::getStaticF__unixEpoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "_unixEpoch", ::Ionic::Zlib::GZipStream*>();
}
inline void Ionic::Zlib::GZipStream::setStaticF_iso8859dash1(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "iso8859dash1", ::Ionic::Zlib::GZipStream*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Ionic::Zlib::GZipStream::getStaticF_iso8859dash1()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "iso8859dash1", ::Ionic::Zlib::GZipStream*>();
}
inline ::StringW Ionic::Zlib::GZipStream::get_Comment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_Comment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::set_Comment(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Ionic::Zlib::GZipStream::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::set_FileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::GZipStream::get_Crc32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_Crc32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode);
}
inline void Ionic::Zlib::GZipStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level);
}
inline void Ionic::Zlib::GZipStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, leaveOpen);
}
inline void Ionic::Zlib::GZipStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level, leaveOpen);
}
inline ::Ionic::Zlib::FlushType Ionic::Zlib::GZipStream::get_FlushMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::FlushType>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::set_FlushMode(::Ionic::Zlib::FlushType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::GZipStream::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Ionic::Zlib::GZipStream::get_TotalIn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::GZipStream::get_TotalOut()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Ionic::Zlib::GZipStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::GZipStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::GZipStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::GZipStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::GZipStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::GZipStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::GZipStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Ionic::Zlib::GZipStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Ionic::Zlib::GZipStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Ionic::Zlib::GZipStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::GZipStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Ionic::Zlib::GZipStream::EmitHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"EmitHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::GZipStream::CompressString(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::GZipStream::CompressBuffer(::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, b);
}
inline ::StringW Ionic::Zlib::GZipStream::UncompressString(::ArrayW<uint8_t>  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, compressed);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::GZipStream::UncompressBuffer(::ArrayW<uint8_t>  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::GZipStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, compressed);
}
inline ::Ionic::Zlib::GZipStream* Ionic::Zlib::GZipStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::GZipStream*>(stream, mode));
}
inline ::Ionic::Zlib::GZipStream* Ionic::Zlib::GZipStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::GZipStream*>(stream, mode, level));
}
inline ::Ionic::Zlib::GZipStream* Ionic::Zlib::GZipStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::GZipStream*>(stream, mode, leaveOpen));
}
inline ::Ionic::Zlib::GZipStream* Ionic::Zlib::GZipStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::GZipStream*>(stream, mode, level, leaveOpen));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::GZipStream::GZipStream()   {
}
