#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Ionic/Zlib/zzzz__ZlibStream_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibBaseStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode)>(&::Ionic::Zlib::ZlibStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa79e03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::ZlibStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79e108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, bool)>(&::Ionic::Zlib::ZlibStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa79e110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionMode, ::Ionic::Zlib::CompressionLevel, bool)>(&::Ionic::Zlib::ZlibStream::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa79e048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_FlushMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::FlushType (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_FlushMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa79e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.set_FlushMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::ZlibStream::set_FlushMode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa79e134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_BufferSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa79e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(int32_t)>(&::Ionic::Zlib::ZlibStream::set_BufferSize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa79e1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_TotalIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_TotalIn)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa79e2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_TotalOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_TotalOut)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa79e318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(bool)>(&::Ionic::Zlib::ZlibStream::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa79e33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_CanRead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa79e3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79e474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa79e47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::Flush)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa79e4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79e568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibStream::*)()>(&::Ionic::Zlib::ZlibStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa79e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(int64_t)>(&::Ionic::Zlib::ZlibStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ZlibStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ZlibStream::Read)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa79e628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ZlibStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Ionic::Zlib::ZlibStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79e69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(int64_t)>(&::Ionic::Zlib::ZlibStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ZlibStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ZlibStream::Write)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa79e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.CompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Ionic::Zlib::ZlibStream::CompressString)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa79e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.CompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::ZlibStream::CompressBuffer)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa79e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.UncompressString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::ZlibStream::UncompressString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa79eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ZlibStream.UncompressBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::ZlibStream::UncompressBuffer)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa79ec6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Ionic::Zlib::ZlibBaseStream*& Ionic::Zlib::ZlibStream::__cordl_internal_get__baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr ::Ionic::Zlib::ZlibBaseStream* const& Ionic::Zlib::ZlibStream::__cordl_internal_get__baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr void Ionic::Zlib::ZlibStream::__cordl_internal_set__baseStream(::Ionic::Zlib::ZlibBaseStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseStream = value;
}
constexpr bool& Ionic::Zlib::ZlibStream::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Ionic::Zlib::ZlibStream::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Ionic::Zlib::ZlibStream::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Ionic::Zlib::ZlibStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode);
}
inline void Ionic::Zlib::ZlibStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level);
}
inline void Ionic::Zlib::ZlibStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, leaveOpen);
}
inline void Ionic::Zlib::ZlibStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level, leaveOpen);
}
inline ::Ionic::Zlib::FlushType Ionic::Zlib::ZlibStream::get_FlushMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::FlushType>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibStream::set_FlushMode(::Ionic::Zlib::FlushType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::ZlibStream::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibStream::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Ionic::Zlib::ZlibStream::get_TotalIn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ZlibStream::get_TotalOut()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Ionic::Zlib::ZlibStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::ZlibStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::ZlibStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ZlibStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ZlibStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ZlibStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::ZlibStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Ionic::Zlib::ZlibStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Ionic::Zlib::ZlibStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Ionic::Zlib::ZlibStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ZlibStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::ZlibStream::CompressString(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"CompressString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::ZlibStream::CompressBuffer(::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"CompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, b);
}
inline ::StringW Ionic::Zlib::ZlibStream::UncompressString(::ArrayW<uint8_t>  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"UncompressString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, compressed);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::ZlibStream::UncompressBuffer(::ArrayW<uint8_t>  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ZlibStream*>(),
                        {"UncompressBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, compressed);
}
inline ::Ionic::Zlib::ZlibStream* Ionic::Zlib::ZlibStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibStream*>(stream, mode));
}
inline ::Ionic::Zlib::ZlibStream* Ionic::Zlib::ZlibStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibStream*>(stream, mode, level));
}
inline ::Ionic::Zlib::ZlibStream* Ionic::Zlib::ZlibStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibStream*>(stream, mode, leaveOpen));
}
inline ::Ionic::Zlib::ZlibStream* Ionic::Zlib::ZlibStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionMode  mode, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ZlibStream*>(stream, mode, level, leaveOpen));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::ZlibStream::ZlibStream()   {
}
