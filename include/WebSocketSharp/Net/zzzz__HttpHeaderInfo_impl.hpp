#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpHeaderInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_impl.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderInfo_def.hpp"
#include "WebSocketSharp/Net/zzzz__HttpHeaderType_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::HttpHeaderInfo::*)(::StringW, ::WebSocketSharp::Net::HttpHeaderType)>(&::WebSocketSharp::Net::HttpHeaderInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb989370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.get_IsMultiValueInRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::HttpHeaderInfo::*)()>(&::WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInRequest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9893ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsMultiValueInRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.get_IsMultiValueInResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::HttpHeaderInfo::*)()>(&::WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9893b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsMultiValueInResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.get_HeaderName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::HttpHeaderInfo::*)()>(&::WebSocketSharp::Net::HttpHeaderInfo::get_HeaderName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9893c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_HeaderName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.get_IsRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::HttpHeaderInfo::*)()>(&::WebSocketSharp::Net::HttpHeaderInfo::get_IsRequest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9893cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.get_IsResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::HttpHeaderInfo::*)()>(&::WebSocketSharp::Net::HttpHeaderInfo::get_IsResponse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9893d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.IsMultiValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::HttpHeaderInfo::*)(bool)>(&::WebSocketSharp::Net::HttpHeaderInfo::IsMultiValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb9893e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"IsMultiValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpHeaderInfo.IsRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::HttpHeaderInfo::*)(bool)>(&::WebSocketSharp::Net::HttpHeaderInfo::IsRestricted)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb989414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"IsRestricted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::Net::HttpHeaderInfo::__cordl_internal_get__headerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerName;
}
constexpr ::StringW const& WebSocketSharp::Net::HttpHeaderInfo::__cordl_internal_get__headerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerName;
}
constexpr void WebSocketSharp::Net::HttpHeaderInfo::__cordl_internal_set__headerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerName = value;
}
constexpr ::WebSocketSharp::Net::HttpHeaderType& WebSocketSharp::Net::HttpHeaderInfo::__cordl_internal_get__headerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerType;
}
constexpr ::WebSocketSharp::Net::HttpHeaderType const& WebSocketSharp::Net::HttpHeaderInfo::__cordl_internal_get__headerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerType;
}
constexpr void WebSocketSharp::Net::HttpHeaderInfo::__cordl_internal_set__headerType(::WebSocketSharp::Net::HttpHeaderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerType = value;
}
inline void WebSocketSharp::Net::HttpHeaderInfo::_ctor(::StringW  headerName, ::WebSocketSharp::Net::HttpHeaderType  headerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::Net::HttpHeaderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerName, headerType);
}
inline bool WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsMultiValueInRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::HttpHeaderInfo::get_IsMultiValueInResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsMultiValueInResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::HttpHeaderInfo::get_HeaderName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_HeaderName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::HttpHeaderInfo::get_IsRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::HttpHeaderInfo::get_IsResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"get_IsResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::HttpHeaderInfo::IsMultiValue(bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"IsMultiValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline bool WebSocketSharp::Net::HttpHeaderInfo::IsRestricted(bool  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpHeaderInfo*>(),
                        {"IsRestricted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::WebSocketSharp::Net::HttpHeaderInfo* WebSocketSharp::Net::HttpHeaderInfo::New_ctor(::StringW  headerName, ::WebSocketSharp::Net::HttpHeaderType  headerType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::HttpHeaderInfo*>(headerName, headerType));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::HttpHeaderInfo::HttpHeaderInfo()   {
}
