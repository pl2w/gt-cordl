#pragma once
// IWYU pragma private; include "Modio/Unity/StreamingDownloadHandler.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_impl.hpp"
#include "Modio/Unity/zzzz__StreamingDownloadHandler_def.hpp"
#include "Modio/Unity/zzzz__StreamingDownloadHandler_ChunkedStreamBuffer_AsyncAutoResetEvent_Empty_def.hpp"
#include "Modio/Unity/zzzz__StreamingDownloadHandler_ChunkedStreamBuffer__ReadAsync_d__6_def.hpp"
#include "Modio/Unity/zzzz__StreamingDownloadHandler__ResponseReceived_d__11_def.hpp"
#include "Modio/Unity/zzzz__StreamingDownloadHandler_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler::*)(int32_t, ::System::Nullable_1<::System::Threading::CancellationToken>)>(&::Modio::Unity::StreamingDownloadHandler::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f942e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::System::Threading::CancellationToken>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler::*)(::ArrayW<uint8_t>, ::System::Nullable_1<::System::Threading::CancellationToken>)>(&::Modio::Unity::StreamingDownloadHandler::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f95844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Nullable_1<::System::Threading::CancellationToken>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler.SetCallingRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Modio::Unity::StreamingDownloadHandler::SetCallingRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f95ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {"SetCallingRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler.GetStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Modio::Unity::StreamingDownloadHandler::*)()>(&::Modio::Unity::StreamingDownloadHandler::GetStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f95ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {"GetStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler::*)()>(&::Modio::Unity::StreamingDownloadHandler::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f95ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::StreamingDownloadHandler::*)(::ArrayW<uint8_t>, int32_t)>(&::Modio::Unity::StreamingDownloadHandler::ReceiveData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9f95b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler.ResponseReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::StreamingDownloadHandler::*)()>(&::Modio::Unity::StreamingDownloadHandler::ResponseReceived)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f94360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {"ResponseReceived", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler.CompleteContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler::*)()>(&::Modio::Unity::StreamingDownloadHandler::CompleteContent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f95c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
constexpr ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__streamBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamBuffer;
}
constexpr ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer* const& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__streamBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamBuffer;
}
constexpr void Modio::Unity::StreamingDownloadHandler::__cordl_internal_set__streamBuffer(::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamBuffer = value;
}
constexpr ::System::Threading::CancellationToken& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationToken;
}
constexpr void Modio::Unity::StreamingDownloadHandler::__cordl_internal_set__cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr void Modio::Unity::StreamingDownloadHandler::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationTokenSource = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__hasReceivedHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasReceivedHeaders;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__hasReceivedHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasReceivedHeaders;
}
constexpr void Modio::Unity::StreamingDownloadHandler::__cordl_internal_set__hasReceivedHeaders(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasReceivedHeaders = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__callingRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callingRequest;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Modio::Unity::StreamingDownloadHandler::__cordl_internal_get__callingRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callingRequest;
}
constexpr void Modio::Unity::StreamingDownloadHandler::__cordl_internal_set__callingRequest(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callingRequest = value;
}
inline void Modio::Unity::StreamingDownloadHandler::_ctor(int32_t  bufferSize, ::System::Nullable_1<::System::Threading::CancellationToken>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::System::Threading::CancellationToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize, token);
}
inline void Modio::Unity::StreamingDownloadHandler::_ctor(::ArrayW<uint8_t>  buffer, ::System::Nullable_1<::System::Threading::CancellationToken>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Nullable_1<::System::Threading::CancellationToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, token);
}
inline void Modio::Unity::StreamingDownloadHandler::SetCallingRequest(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {"SetCallingRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::System::IO::Stream* Modio::Unity::StreamingDownloadHandler::GetStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {"GetStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Modio::Unity::StreamingDownloadHandler::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::StreamingDownloadHandler::ReceiveData(::ArrayW<uint8_t>  dataReceived, int32_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dataReceived, dataLength);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::StreamingDownloadHandler::ResponseReceived()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(),
                        {"ResponseReceived", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Modio::Unity::StreamingDownloadHandler::CompleteContent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::StreamingDownloadHandler* Modio::Unity::StreamingDownloadHandler::New_ctor(int32_t  bufferSize, ::System::Nullable_1<::System::Threading::CancellationToken>  token)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::StreamingDownloadHandler*>(bufferSize, token));
}
inline ::Modio::Unity::StreamingDownloadHandler* Modio::Unity::StreamingDownloadHandler::New_ctor(::ArrayW<uint8_t>  buffer, ::System::Nullable_1<::System::Threading::CancellationToken>  token)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::StreamingDownloadHandler*>(buffer, token));
}
// Ctor Parameters []
constexpr ::Modio::Unity::StreamingDownloadHandler::StreamingDownloadHandler()   {
}
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(::System::Threading::CancellationToken)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f959c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Flush)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f95cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Read)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9f95dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::ReadAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9f96014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(int64_t, ::System::IO::SeekOrigin)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f96168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(int64_t)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f961a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Write)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9f961d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(int64_t)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                    {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.get_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {"get_IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.set_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)(bool)>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::set_IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {"set_IsDone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::*)()>(&::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Complete)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f95c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>*& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__dataQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>* const& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__dataQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataQueue;
}
constexpr void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_set__dataQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataQueue = value;
}
constexpr ::System::Threading::CancellationToken& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__shutdownToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shutdownToken;
}
constexpr ::System::Threading::CancellationToken const& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__shutdownToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shutdownToken;
}
constexpr void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_set__shutdownToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shutdownToken = value;
}
constexpr ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__signal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signal;
}
constexpr ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent* const& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__signal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signal;
}
constexpr void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_set__signal(::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signal = value;
}
constexpr int64_t& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__Position_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr int64_t const& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__Position_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_set__Position_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position_k__BackingField = value;
}
constexpr bool& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__IsDone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDone_k__BackingField;
}
constexpr bool const& Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_get__IsDone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDone_k__BackingField;
}
constexpr void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::__cordl_internal_set__IsDone_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDone_k__BackingField = value;
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::_ctor(::System::Threading::CancellationToken  shutdownToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shutdownToken);
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int64_t Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {"get_IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::set_IsDone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {"set_IsDone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer* Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::New_ctor(::System::Threading::CancellationToken  shutdownToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer*>(shutdownToken));
}
// Ctor Parameters []
constexpr ::Modio::Unity::StreamingDownloadHandler_ChunkedStreamBuffer::StreamingDownloadHandler_ChunkedStreamBuffer()   {
}
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent.WaitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::*)(::System::Threading::CancellationToken)>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::WaitAsync)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9f96598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::Set)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9f963a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>(),
                        {"Set", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f95c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>*& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::__cordl_internal_get__signalWaiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalWaiters;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>* const& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::__cordl_internal_get__signalWaiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signalWaiters;
}
constexpr void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::__cordl_internal_set__signalWaiters(::System::Collections::Generic::Queue_1<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signalWaiters = value;
}
constexpr bool& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::__cordl_internal_get__signaled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signaled;
}
constexpr bool const& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::__cordl_internal_get__signaled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signaled;
}
constexpr void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::__cordl_internal_set__signaled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signaled = value;
}
inline ::System::Threading::Tasks::Task* Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::WaitAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::Set()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>(),
                        {"Set", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent* Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent::ChunkedStreamBuffer_StreamingDownloadHandler_AsyncAutoResetEvent()   {
}
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_Data)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f96550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9655c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)(int32_t)>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::set_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f96564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"set_Offset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9656c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.get_HasData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_HasData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f96574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_HasData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.get_RemainingLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_RemainingLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f96588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_RemainingLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)(::Unity::Collections::NativeArray_1<uint8_t>, int32_t)>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9f96368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::*)()>(&::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f95d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::__cordl_internal_set__Data_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
constexpr int32_t& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::__cordl_internal_get__Offset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr int32_t const& Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::__cordl_internal_get__Offset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::__cordl_internal_set__Offset_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Offset_k__BackingField = value;
}
inline ::Unity::Collections::NativeArray_1<uint8_t> Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(this, ___internal_method);
}
inline int32_t Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::set_Offset(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"set_Offset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_HasData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_HasData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::get_RemainingLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"get_RemainingLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::_ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset);
}
inline void Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk* Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::New_ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, int32_t  offset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk*>(data, offset));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk::ChunkedStreamBuffer_StreamingDownloadHandler_BufferChunk()   {
}
