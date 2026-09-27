#pragma once
// IWYU pragma private; include "System/Net/DelegatedStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__DelegatedStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::DelegatedStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)(::System::IO::Stream*)>(&::System::Net::DelegatedStream::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xadad638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelegatedStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.get_BaseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::get_BaseStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadafa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelegatedStream*>(),
                        {"get_BaseStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xadafa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xadafab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xadafad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::get_Length)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xadafaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::get_Position)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadafb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)(int64_t)>(&::System::Net::DelegatedStream::set_Position)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xadafbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.BeginRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::DelegatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::DelegatedStream::BeginRead)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xadafc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.BeginWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::DelegatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::DelegatedStream::BeginWrite)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xadafd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xadae138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.EndRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::DelegatedStream::*)(::System::IAsyncResult*)>(&::System::Net::DelegatedStream::EndRead)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xadafe14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.EndWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)(::System::IAsyncResult*)>(&::System::Net::DelegatedStream::EndWrite)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xadafea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)()>(&::System::Net::DelegatedStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xadaef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.FlushAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::DelegatedStream::*)(::System::Threading::CancellationToken)>(&::System::Net::DelegatedStream::FlushAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xadaff3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::DelegatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::DelegatedStream::Read)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xadaf0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::DelegatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::DelegatedStream::ReadAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xadaff5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::DelegatedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::DelegatedStream::Seek)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadb0010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)(int64_t)>(&::System::Net::DelegatedStream::SetLength)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xadb00ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DelegatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::DelegatedStream::Write)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xadaef28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DelegatedStream.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::DelegatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::DelegatedStream::WriteAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xadb0140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DelegatedStream*>(),
                    {::i2c::class_of<::System::Net::DelegatedStream*>(), 31}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::DelegatedStream::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::Net::DelegatedStream::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::Net::DelegatedStream::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::System::Net::Sockets::NetworkStream*& System::Net::DelegatedStream::__cordl_internal_get__netStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netStream;
}
constexpr ::System::Net::Sockets::NetworkStream* const& System::Net::DelegatedStream::__cordl_internal_get__netStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netStream;
}
constexpr void System::Net::DelegatedStream::__cordl_internal_set__netStream(::System::Net::Sockets::NetworkStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netStream = value;
}
inline void System::Net::DelegatedStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelegatedStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* System::Net::DelegatedStream::get_BaseStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DelegatedStream*>(),
                        {"get_BaseStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::Net::DelegatedStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::DelegatedStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::DelegatedStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Net::DelegatedStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::DelegatedStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::DelegatedStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* System::Net::DelegatedStream::BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline ::System::IAsyncResult* System::Net::DelegatedStream::BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::Net::DelegatedStream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::DelegatedStream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline void System::Net::DelegatedStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::Net::DelegatedStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::DelegatedStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline int32_t System::Net::DelegatedStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::DelegatedStream::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int64_t System::Net::DelegatedStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::Net::DelegatedStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::DelegatedStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task* System::Net::DelegatedStream::WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DelegatedStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Net::DelegatedStream* System::Net::DelegatedStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DelegatedStream*>(stream));
}
// Ctor Parameters []
constexpr ::System::Net::DelegatedStream::DelegatedStream()   {
}
