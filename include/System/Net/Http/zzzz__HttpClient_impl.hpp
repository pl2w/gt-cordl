#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClient.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpClient__SendAsyncWorker_d__47_def.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa9df1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpMessageHandler*, bool)>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa9df234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Http::HttpMessageHandler*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.get_DefaultRequestHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpRequestHeaders* (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::get_DefaultRequestHeaders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa9df37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"get_DefaultRequestHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.get_MaxResponseContentBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::get_MaxResponseContentBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9df448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"get_MaxResponseContentBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpClient::*)(bool)>(&::System::Net::Http::HttpClient::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa9df450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                    {::i2c::class_of<::System::Net::Http::HttpClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa9df4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                    {::i2c::class_of<::System::Net::Http::HttpClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa9df500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"SendAsync", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsyncWorker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsyncWorker)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa9df9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"SendAsyncWorker", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::__n__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa9dfbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"<>n__0", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::Http::HttpClient::__cordl_internal_get_base_address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___base_address;
}
constexpr ::System::Uri* const& System::Net::Http::HttpClient::__cordl_internal_get_base_address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___base_address;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_base_address(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___base_address = value;
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::Http::HttpClient::__cordl_internal_get_cts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Net::Http::HttpClient::__cordl_internal_get_cts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cts = value;
}
constexpr bool& System::Net::Http::HttpClient::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpClient::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& System::Net::Http::HttpClient::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders* const& System::Net::Http::HttpClient::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_headers(::System::Net::Http::Headers::HttpRequestHeaders*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr int64_t& System::Net::Http::HttpClient::__cordl_internal_get_buffer_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer_size;
}
constexpr int64_t const& System::Net::Http::HttpClient::__cordl_internal_get_buffer_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer_size;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_buffer_size(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer_size = value;
}
constexpr ::System::TimeSpan& System::Net::Http::HttpClient::__cordl_internal_get_timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr ::System::TimeSpan const& System::Net::Http::HttpClient::__cordl_internal_get_timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr void System::Net::Http::HttpClient::__cordl_internal_set_timeout(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeout = value;
}
inline void System::Net::Http::HttpClient::setStaticF_TimeoutDefault(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "TimeoutDefault", ::System::Net::Http::HttpClient*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Net::Http::HttpClient::getStaticF_TimeoutDefault()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "TimeoutDefault", ::System::Net::Http::HttpClient*>();
}
inline void System::Net::Http::HttpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpClient::_ctor(::System::Net::Http::HttpMessageHandler*  handler, bool  disposeHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Http::HttpMessageHandler*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, disposeHandler);
}
inline ::System::Net::Http::Headers::HttpRequestHeaders* System::Net::Http::HttpClient::get_DefaultRequestHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"get_DefaultRequestHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpRequestHeaders*>(this, ___internal_method);
}
inline int64_t System::Net::Http::HttpClient::get_MaxResponseContentBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"get_MaxResponseContentBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::Http::HttpClient::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::HttpClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::HttpClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"SendAsync", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, completionOption, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::SendAsyncWorker(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"SendAsyncWorker", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Net::Http::HttpCompletionOption>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, completionOption, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClient::__n__0(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::HttpClient*>(),
                        {"<>n__0", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClient*>());
}
inline ::System::Net::Http::HttpClient* System::Net::Http::HttpClient::New_ctor(::System::Net::Http::HttpMessageHandler*  handler, bool  disposeHandler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpClient*>(handler, disposeHandler));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClient::HttpClient()   {
}
