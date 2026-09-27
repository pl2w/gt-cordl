#pragma once
// IWYU pragma private; include "System/IO/ChunkedMemoryStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__ChunkedMemoryStream_def.hpp"
#include "System/IO/zzzz__ChunkedMemoryStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xada3998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::ToArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xada39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::ChunkedMemoryStream::Write)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xada3a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::ChunkedMemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::ChunkedMemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xada3c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.AppendChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream::*)(int64_t)>(&::System::IO::ChunkedMemoryStream::AppendChunk)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xada3b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                        {"AppendChunk", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada3e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada3e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada3e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada3e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xada3e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.FlushAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::ChunkedMemoryStream::*)(::System::Threading::CancellationToken)>(&::System::IO::ChunkedMemoryStream::FlushAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xada3e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::ChunkedMemoryStream::*)()>(&::System::IO::ChunkedMemoryStream::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xada3ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream::*)(int64_t)>(&::System::IO::ChunkedMemoryStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xada3f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::ChunkedMemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::ChunkedMemoryStream::Read)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xada3f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::ChunkedMemoryStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::ChunkedMemoryStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xada3f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream::*)(int64_t)>(&::System::IO::ChunkedMemoryStream::SetLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xada3fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                    {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk*& System::IO::ChunkedMemoryStream::__cordl_internal_get__headChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headChunk;
}
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk* const& System::IO::ChunkedMemoryStream::__cordl_internal_get__headChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headChunk;
}
constexpr void System::IO::ChunkedMemoryStream::__cordl_internal_set__headChunk(::System::IO::ChunkedMemoryStream_MemoryChunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headChunk = value;
}
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk*& System::IO::ChunkedMemoryStream::__cordl_internal_get__currentChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChunk;
}
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk* const& System::IO::ChunkedMemoryStream::__cordl_internal_get__currentChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChunk;
}
constexpr void System::IO::ChunkedMemoryStream::__cordl_internal_set__currentChunk(::System::IO::ChunkedMemoryStream_MemoryChunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentChunk = value;
}
constexpr int32_t& System::IO::ChunkedMemoryStream::__cordl_internal_get__totalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalLength;
}
constexpr int32_t const& System::IO::ChunkedMemoryStream::__cordl_internal_get__totalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalLength;
}
constexpr void System::IO::ChunkedMemoryStream::__cordl_internal_set__totalLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalLength = value;
}
inline void System::IO::ChunkedMemoryStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::IO::ChunkedMemoryStream::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::IO::ChunkedMemoryStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task* System::IO::ChunkedMemoryStream::WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline void System::IO::ChunkedMemoryStream::AppendChunk(int64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream*>(),
                        {"AppendChunk", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline bool System::IO::ChunkedMemoryStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::ChunkedMemoryStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::ChunkedMemoryStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::IO::ChunkedMemoryStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::ChunkedMemoryStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::ChunkedMemoryStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline int64_t System::IO::ChunkedMemoryStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::ChunkedMemoryStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::ChunkedMemoryStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t System::IO::ChunkedMemoryStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::IO::ChunkedMemoryStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::ChunkedMemoryStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::ChunkedMemoryStream* System::IO::ChunkedMemoryStream::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::ChunkedMemoryStream*>());
}
// Ctor Parameters []
constexpr ::System::IO::ChunkedMemoryStream::ChunkedMemoryStream()   {
}
//  Writing Method size for method: ::System::IO::ChunkedMemoryStream_MemoryChunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ChunkedMemoryStream_MemoryChunk::*)(int32_t)>(&::System::IO::ChunkedMemoryStream_MemoryChunk::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xada3dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream_MemoryChunk*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_set__buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr int32_t& System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_get__freeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeOffset;
}
constexpr int32_t const& System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_get__freeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeOffset;
}
constexpr void System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_set__freeOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeOffset = value;
}
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk*& System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_get__next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk* const& System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_get__next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr void System::IO::ChunkedMemoryStream_MemoryChunk::__cordl_internal_set__next(::System::IO::ChunkedMemoryStream_MemoryChunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____next = value;
}
inline void System::IO::ChunkedMemoryStream_MemoryChunk::_ctor(int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::ChunkedMemoryStream_MemoryChunk*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline ::System::IO::ChunkedMemoryStream_MemoryChunk* System::IO::ChunkedMemoryStream_MemoryChunk::New_ctor(int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::ChunkedMemoryStream_MemoryChunk*>(bufferSize));
}
// Ctor Parameters []
constexpr ::System::IO::ChunkedMemoryStream_MemoryChunk::ChunkedMemoryStream_MemoryChunk()   {
}
