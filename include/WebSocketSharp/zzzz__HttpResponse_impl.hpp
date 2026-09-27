#pragma once
// IWYU pragma private; include "WebSocketSharp/HttpResponse.hpp"
#include "WebSocketSharp/zzzz__HttpBase_impl.hpp"
#include "WebSocketSharp/zzzz__HttpResponse_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "WebSocketSharp/Net/zzzz__CookieCollection_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::HttpResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpResponse::*)(::StringW, ::StringW, ::System::Version*, ::System::Collections::Specialized::NameValueCollection*)>(&::WebSocketSharp::HttpResponse::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb983918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_Cookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::CookieCollection* (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_Cookies)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb97c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_Cookies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_HasConnectionClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_HasConnectionClose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb97e534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_HasConnectionClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_IsProxyAuthenticationRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_IsProxyAuthenticationRequired)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb97eaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsProxyAuthenticationRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_IsRedirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_IsRedirect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb978ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsRedirect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_IsUnauthorized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_IsUnauthorized)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb978f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsUnauthorized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_IsWebSocketResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_IsWebSocketResponse)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb978f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsWebSocketResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97eb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpResponse* (*)(::ArrayW<::StringW>)>(&::WebSocketSharp::HttpResponse::Parse)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb983960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"Parse", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::HttpResponse::*)()>(&::WebSocketSharp::HttpResponse::ToString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb983d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                    {::i2c::class_of<::WebSocketSharp::HttpResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::HttpResponse::__cordl_internal_get__code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____code;
}
constexpr ::StringW const& WebSocketSharp::HttpResponse::__cordl_internal_get__code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____code;
}
constexpr void WebSocketSharp::HttpResponse::__cordl_internal_set__code(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____code = value;
}
constexpr ::StringW& WebSocketSharp::HttpResponse::__cordl_internal_get__reason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reason;
}
constexpr ::StringW const& WebSocketSharp::HttpResponse::__cordl_internal_get__reason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reason;
}
constexpr void WebSocketSharp::HttpResponse::__cordl_internal_set__reason(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reason = value;
}
inline void WebSocketSharp::HttpResponse::_ctor(::StringW  code, ::StringW  reason, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, reason, version, headers);
}
inline ::WebSocketSharp::Net::CookieCollection* WebSocketSharp::HttpResponse::get_Cookies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_Cookies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::CookieCollection*>(this, ___internal_method);
}
inline bool WebSocketSharp::HttpResponse::get_HasConnectionClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_HasConnectionClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::HttpResponse::get_IsProxyAuthenticationRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsProxyAuthenticationRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::HttpResponse::get_IsRedirect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsRedirect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::HttpResponse::get_IsUnauthorized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsUnauthorized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::HttpResponse::get_IsWebSocketResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_IsWebSocketResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::HttpResponse::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::HttpResponse* WebSocketSharp::HttpResponse::Parse(::ArrayW<::StringW>  headerParts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpResponse*>(),
                        {"Parse", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpResponse*>(nullptr, ___internal_method, headerParts);
}
inline ::StringW WebSocketSharp::HttpResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::HttpResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::HttpResponse* WebSocketSharp::HttpResponse::New_ctor(::StringW  code, ::StringW  reason, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::HttpResponse*>(code, reason, version, headers));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::HttpResponse::HttpResponse()   {
}
