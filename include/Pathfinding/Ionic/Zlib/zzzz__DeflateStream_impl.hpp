#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/DeflateStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__DeflateStream_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionMode_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibBaseStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(::System::IO::Stream*, ::Pathfinding::Ionic::Zlib::CompressionMode, bool)>(&::Pathfinding::Ionic::Zlib::DeflateStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6a5434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(::System::IO::Stream*, ::Pathfinding::Ionic::Zlib::CompressionMode, ::Pathfinding::Ionic::Zlib::CompressionLevel, bool)>(&::Pathfinding::Ionic::Zlib::DeflateStream::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6a5440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(int32_t)>(&::Pathfinding::Ionic::Zlib::DeflateStream::set_BufferSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa6a5514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.set_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(::Pathfinding::Ionic::Zlib::CompressionStrategy)>(&::Pathfinding::Ionic::Zlib::DeflateStream::set_Strategy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6a5658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(bool)>(&::Pathfinding::Ionic::Zlib::DeflateStream::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa6a56c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&::Pathfinding::Ionic::Zlib::DeflateStream::get_CanRead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6a5784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&::Pathfinding::Ionic::Zlib::DeflateStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a57fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&::Pathfinding::Ionic::Zlib::DeflateStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6a5804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&::Pathfinding::Ionic::Zlib::DeflateStream::Flush)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6a587c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&::Pathfinding::Ionic::Zlib::DeflateStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a58f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::DeflateStream::*)()>(&::Pathfinding::Ionic::Zlib::DeflateStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa6a5928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(int64_t)>(&::Pathfinding::Ionic::Zlib::DeflateStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a5978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::DeflateStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::DeflateStream::Read)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6a59b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::DeflateStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zlib::DeflateStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a5a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(int64_t)>(&::Pathfinding::Ionic::Zlib::DeflateStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a5a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::DeflateStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::DeflateStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::DeflateStream::Write)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6a5a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 38}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream*& Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_get__baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream* const& Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_get__baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr void Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_set__baseStream(::Pathfinding::Ionic::Zlib::ZlibBaseStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseStream = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_get__innerStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_get__innerStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr void Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_set__innerStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerStream = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Pathfinding::Ionic::Zlib::DeflateStream::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, leaveOpen);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionMode>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, level, leaveOpen);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::set_Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Pathfinding::Ionic::Zlib::DeflateStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zlib::DeflateStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zlib::DeflateStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zlib::DeflateStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zlib::DeflateStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Ionic::Zlib::DeflateStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Pathfinding::Ionic::Zlib::DeflateStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::DeflateStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::DeflateStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::Pathfinding::Ionic::Zlib::DeflateStream* Pathfinding::Ionic::Zlib::DeflateStream::New_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::DeflateStream*>(stream, mode, leaveOpen));
}
inline ::Pathfinding::Ionic::Zlib::DeflateStream* Pathfinding::Ionic::Zlib::DeflateStream::New_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionMode  mode, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::DeflateStream*>(stream, mode, level, leaveOpen));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::DeflateStream::DeflateStream()   {
}
