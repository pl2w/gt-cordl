#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocketOptions.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocketOptions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xacecfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.SetRequestHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)(::StringW, ::StringW)>(&::System::Net::WebSockets::ClientWebSocketOptions::SetRequestHeader)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xacee28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"SetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_RequestHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_RequestHeaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacee328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_RequestHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_RequestedSubProtocols
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_RequestedSubProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacee330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_RequestedSubProtocols", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.set_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)(bool)>(&::System::Net::WebSockets::ClientWebSocketOptions::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xacee338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.set_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)(::System::Net::IWebProxy*)>(&::System::Net::WebSockets::ClientWebSocketOptions::set_Proxy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaced07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"set_Proxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_ClientCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xacee35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_ClientCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_Cookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieContainer* (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_Cookies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacee3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_Cookies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.AddSubProtocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)(::StringW)>(&::System::Net::WebSockets::ClientWebSocketOptions::AddSubProtocol)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xacee3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"AddSubProtocol", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_KeepAliveInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_KeepAliveInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacee61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_KeepAliveInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.set_KeepAliveInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)(::System::TimeSpan)>(&::System::Net::WebSockets::ClientWebSocketOptions::set_KeepAliveInterval)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xacee624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"set_KeepAliveInterval", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_ReceiveBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_ReceiveBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacee7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_ReceiveBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_SendBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_SendBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacee7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_SendBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.get_Buffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::ArraySegment_1<uint8_t>> (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::get_Buffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xacee7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_Buffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.SetToReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::SetToReadOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaced53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"SetToReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocketOptions.ThrowIfReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocketOptions::*)()>(&::System::Net::WebSockets::ClientWebSocketOptions::ThrowIfReadOnly)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacee2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"ThrowIfReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__isReadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReadOnly;
}
constexpr bool const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__isReadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReadOnly;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__isReadOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isReadOnly = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__requestedSubProtocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedSubProtocols;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__requestedSubProtocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedSubProtocols;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__requestedSubProtocols(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestedSubProtocols = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__requestHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestHeaders;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__requestHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestHeaders;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__requestHeaders(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestHeaders = value;
}
constexpr ::System::TimeSpan& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__keepAliveInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepAliveInterval;
}
constexpr ::System::TimeSpan const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__keepAliveInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepAliveInterval;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__keepAliveInterval(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keepAliveInterval = value;
}
constexpr bool& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__useDefaultCredentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useDefaultCredentials;
}
constexpr bool const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__useDefaultCredentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useDefaultCredentials;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__useDefaultCredentials(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useDefaultCredentials = value;
}
constexpr ::System::Net::IWebProxy*& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__proxy(::System::Net::IWebProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____proxy = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__clientCertificates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCertificates;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__clientCertificates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCertificates;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientCertificates = value;
}
constexpr ::System::Net::CookieContainer*& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__cookies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cookies;
}
constexpr ::System::Net::CookieContainer* const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__cookies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cookies;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__cookies(::System::Net::CookieContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cookies = value;
}
constexpr int32_t& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__receiveBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBufferSize;
}
constexpr int32_t const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__receiveBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiveBufferSize;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__receiveBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receiveBufferSize = value;
}
constexpr int32_t& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__sendBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendBufferSize;
}
constexpr int32_t const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__sendBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendBufferSize;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__sendBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendBufferSize = value;
}
constexpr ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> const& System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::Net::WebSockets::ClientWebSocketOptions::__cordl_internal_set__buffer(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
inline void System::Net::WebSockets::ClientWebSocketOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::SetRequestHeader(::StringW  headerName, ::StringW  headerValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"SetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerName, headerValue);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebSockets::ClientWebSocketOptions::get_RequestHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_RequestHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Net::WebSockets::ClientWebSocketOptions::get_RequestedSubProtocols()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_RequestedSubProtocols", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::set_UseDefaultCredentials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::set_Proxy(::System::Net::IWebProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"set_Proxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::WebSockets::ClientWebSocketOptions::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_ClientCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline ::System::Net::CookieContainer* System::Net::WebSockets::ClientWebSocketOptions::get_Cookies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_Cookies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieContainer*>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::AddSubProtocol(::StringW  subProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"AddSubProtocol", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subProtocol);
}
inline ::System::TimeSpan System::Net::WebSockets::ClientWebSocketOptions::get_KeepAliveInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_KeepAliveInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::set_KeepAliveInterval(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"set_KeepAliveInterval", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::WebSockets::ClientWebSocketOptions::get_ReceiveBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_ReceiveBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Net::WebSockets::ClientWebSocketOptions::get_SendBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_SendBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> System::Net::WebSockets::ClientWebSocketOptions::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::ArraySegment_1<uint8_t>>>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::SetToReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"SetToReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocketOptions::ThrowIfReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocketOptions*>(),
                        {"ThrowIfReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ClientWebSocketOptions* System::Net::WebSockets::ClientWebSocketOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ClientWebSocketOptions*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ClientWebSocketOptions::ClientWebSocketOptions()   {
}
