#pragma once
// IWYU pragma private; include "WebSocketSharp/HttpRequest.hpp"
#include "WebSocketSharp/zzzz__HttpBase_impl.hpp"
#include "WebSocketSharp/zzzz__HttpRequest_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "WebSocketSharp/Net/zzzz__CookieCollection_def.hpp"
#include "WebSocketSharp/zzzz__HttpResponse_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::HttpRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpRequest::*)(::StringW, ::StringW, ::System::Version*, ::System::Collections::Specialized::NameValueCollection*)>(&::WebSocketSharp::HttpRequest::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb983398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpRequest::*)(::StringW, ::StringW)>(&::WebSocketSharp::HttpRequest::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb9833e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpRequest.CreateConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpRequest* (*)(::System::Uri*)>(&::WebSocketSharp::HttpRequest::CreateConnectRequest)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb97e9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"CreateConnectRequest", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpRequest.CreateWebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpRequest* (*)(::System::Uri*)>(&::WebSocketSharp::HttpRequest::CreateWebSocketRequest)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb97b3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"CreateWebSocketRequest", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpRequest.GetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpResponse* (::WebSocketSharp::HttpRequest::*)(::System::IO::Stream*, int32_t)>(&::WebSocketSharp::HttpRequest::GetResponse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb97e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"GetResponse", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpRequest.SetCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpRequest::*)(::WebSocketSharp::Net::CookieCollection*)>(&::WebSocketSharp::HttpRequest::SetCookies)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xb97b5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"SetCookies", {}, {::i2c::type_of<::WebSocketSharp::Net::CookieCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::HttpRequest::*)()>(&::WebSocketSharp::HttpRequest::ToString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb983678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                    {::i2c::class_of<::WebSocketSharp::HttpRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::HttpRequest::__cordl_internal_get__method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr ::StringW const& WebSocketSharp::HttpRequest::__cordl_internal_get__method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr void WebSocketSharp::HttpRequest::__cordl_internal_set__method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____method = value;
}
constexpr ::StringW& WebSocketSharp::HttpRequest::__cordl_internal_get__uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uri;
}
constexpr ::StringW const& WebSocketSharp::HttpRequest::__cordl_internal_get__uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uri;
}
constexpr void WebSocketSharp::HttpRequest::__cordl_internal_set__uri(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uri = value;
}
inline void WebSocketSharp::HttpRequest::_ctor(::StringW  method, ::StringW  uri, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, uri, version, headers);
}
inline void WebSocketSharp::HttpRequest::_ctor(::StringW  method, ::StringW  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, uri);
}
inline ::WebSocketSharp::HttpRequest* WebSocketSharp::HttpRequest::CreateConnectRequest(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"CreateConnectRequest", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpRequest*>(nullptr, ___internal_method, uri);
}
inline ::WebSocketSharp::HttpRequest* WebSocketSharp::HttpRequest::CreateWebSocketRequest(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"CreateWebSocketRequest", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpRequest*>(nullptr, ___internal_method, uri);
}
inline ::WebSocketSharp::HttpResponse* WebSocketSharp::HttpRequest::GetResponse(::System::IO::Stream*  stream, int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"GetResponse", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpResponse*>(this, ___internal_method, stream, millisecondsTimeout);
}
inline void WebSocketSharp::HttpRequest::SetCookies(::WebSocketSharp::Net::CookieCollection*  cookies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpRequest*>(),
                        {"SetCookies", {}, {::i2c::type_of<::WebSocketSharp::Net::CookieCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookies);
}
inline ::StringW WebSocketSharp::HttpRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::HttpRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::HttpRequest* WebSocketSharp::HttpRequest::New_ctor(::StringW  method, ::StringW  uri, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::HttpRequest*>(method, uri, version, headers));
}
inline ::WebSocketSharp::HttpRequest* WebSocketSharp::HttpRequest::New_ctor(::StringW  method, ::StringW  uri)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::HttpRequest*>(method, uri));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::HttpRequest::HttpRequest()   {
}
