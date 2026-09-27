#pragma once
// IWYU pragma private; include "System/Net/HttpListenerRequest.hpp"
#include "System/Net/zzzz__TransportContext_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBindingKind_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBinding_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListenerRequest::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac9a8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.SetRequestLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::SetRequestLine)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xac9b78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"SetRequestLine", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.CreateQueryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::CreateQueryString)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xac9bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"CreateQueryString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.MaybeUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerRequest::MaybeUri)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xac9bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"MaybeUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.IsPredefinedScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerRequest::IsPredefinedScheme)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xac9bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"IsPredefinedScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.FinishInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::FinishInitialization)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0xac9bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"FinishInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.Unquote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequest::Unquote)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac9c6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"Unquote", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.AddHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::AddHeader)> {
  constexpr static std::size_t size = 0x924;
  constexpr static std::size_t addrs = 0xac9c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"AddHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.FlushInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::FlushInput)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xac9d064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"FlushInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_AcceptTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_AcceptTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_AcceptTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ClientCertificateError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ClientCertificateError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xac9d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ClientCertificateError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ContentEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ContentEncoding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac9d4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ContentEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ContentLength64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ContentLength64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac9d4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ContentLength64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ContentType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac9d4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ContentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Cookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_Cookies)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac9d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_Cookies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_HasEntityBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_HasEntityBody)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac9d338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_HasEntityBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_Headers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_HttpMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_HttpMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_HttpMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_InputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_InputStream)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xac9d35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_InputStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_IsLocal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xac9d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_IsSecureConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_IsSecureConnection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac9c68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsSecureConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_KeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_KeepAlive)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xac9d644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_KeepAlive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_LocalEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac9c6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_LocalEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ProtocolVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_QueryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_QueryString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_QueryString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_RawUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_RawUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_RawUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_RemoteEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac9d620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_RemoteEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_RequestTraceIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_RequestTraceIdentifier)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xac9d7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_RequestTraceIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UrlReferrer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UrlReferrer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UrlReferrer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserAgent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac9d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserAgent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserHostAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserHostAddress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac9c66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserHostAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserHostName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserHostName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac9c618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserHostName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserLanguages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserLanguages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9d864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserLanguages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.BeginGetClientCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpListenerRequest::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpListenerRequest::BeginGetClientCertificate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xac9d86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"BeginGetClientCertificate", {}, {::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.EndGetClientCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::System::Net::HttpListenerRequest::*)(::System::IAsyncResult*)>(&::System::Net::HttpListenerRequest::EndGetClientCertificate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xac9d9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"EndGetClientCertificate", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.GetClientCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::GetClientCertificate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac9da78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"GetClientCertificate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ServiceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ServiceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9da9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ServiceName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_TransportContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TransportContext* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_TransportContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac9daa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_TransportContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_IsWebSocketRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_IsWebSocketRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9db00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsWebSocketRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.GetClientCertificateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::GetClientCertificateAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xac9db08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"GetClientCertificateAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac9dcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Net::HttpListenerRequest::__cordl_internal_get_accept_types()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accept_types;
}
constexpr ::ArrayW<::StringW> const& System::Net::HttpListenerRequest::__cordl_internal_get_accept_types() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accept_types;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_accept_types(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accept_types = value;
}
constexpr ::System::Text::Encoding*& System::Net::HttpListenerRequest::__cordl_internal_get_content_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content_encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::HttpListenerRequest::__cordl_internal_get_content_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content_encoding;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_content_encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___content_encoding = value;
}
constexpr int64_t& System::Net::HttpListenerRequest::__cordl_internal_get_content_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content_length;
}
constexpr int64_t const& System::Net::HttpListenerRequest::__cordl_internal_get_content_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___content_length;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_content_length(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___content_length = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_cl_set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cl_set;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_cl_set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cl_set;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_cl_set(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cl_set = value;
}
constexpr ::System::Net::CookieCollection*& System::Net::HttpListenerRequest::__cordl_internal_get_cookies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookies;
}
constexpr ::System::Net::CookieCollection* const& System::Net::HttpListenerRequest::__cordl_internal_get_cookies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookies;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_cookies(::System::Net::CookieCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookies = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpListenerRequest::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::HttpListenerRequest::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_headers(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr ::StringW& System::Net::HttpListenerRequest::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::StringW const& System::Net::HttpListenerRequest::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::System::IO::Stream*& System::Net::HttpListenerRequest::__cordl_internal_get_input_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input_stream;
}
constexpr ::System::IO::Stream* const& System::Net::HttpListenerRequest::__cordl_internal_get_input_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input_stream;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_input_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input_stream = value;
}
constexpr ::System::Version*& System::Net::HttpListenerRequest::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::System::Version* const& System::Net::HttpListenerRequest::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_version(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::System::Collections::Specialized::NameValueCollection*& System::Net::HttpListenerRequest::__cordl_internal_get_query_string()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___query_string;
}
constexpr ::System::Collections::Specialized::NameValueCollection* const& System::Net::HttpListenerRequest::__cordl_internal_get_query_string() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___query_string;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_query_string(::System::Collections::Specialized::NameValueCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___query_string = value;
}
constexpr ::StringW& System::Net::HttpListenerRequest::__cordl_internal_get_raw_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raw_url;
}
constexpr ::StringW const& System::Net::HttpListenerRequest::__cordl_internal_get_raw_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raw_url;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_raw_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raw_url = value;
}
constexpr ::System::Uri*& System::Net::HttpListenerRequest::__cordl_internal_get_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr ::System::Uri* const& System::Net::HttpListenerRequest::__cordl_internal_get_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_url(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___url = value;
}
constexpr ::System::Uri*& System::Net::HttpListenerRequest::__cordl_internal_get_referrer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referrer;
}
constexpr ::System::Uri* const& System::Net::HttpListenerRequest::__cordl_internal_get_referrer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referrer;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_referrer(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referrer = value;
}
constexpr ::ArrayW<::StringW>& System::Net::HttpListenerRequest::__cordl_internal_get_user_languages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___user_languages;
}
constexpr ::ArrayW<::StringW> const& System::Net::HttpListenerRequest::__cordl_internal_get_user_languages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___user_languages;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_user_languages(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___user_languages = value;
}
constexpr ::System::Net::HttpListenerContext*& System::Net::HttpListenerRequest::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::System::Net::HttpListenerContext* const& System::Net::HttpListenerRequest::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_context(::System::Net::HttpListenerContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_is_chunked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_chunked;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_is_chunked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_chunked;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_is_chunked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is_chunked = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_ka_set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ka_set;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_ka_set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ka_set;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_ka_set(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ka_set = value;
}
constexpr bool& System::Net::HttpListenerRequest::__cordl_internal_get_keep_alive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keep_alive;
}
constexpr bool const& System::Net::HttpListenerRequest::__cordl_internal_get_keep_alive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keep_alive;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_keep_alive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keep_alive = value;
}
constexpr ::System::Net::HttpListenerRequest_GCCDelegate*& System::Net::HttpListenerRequest::__cordl_internal_get_gcc_delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gcc_delegate;
}
constexpr ::System::Net::HttpListenerRequest_GCCDelegate* const& System::Net::HttpListenerRequest::__cordl_internal_get_gcc_delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gcc_delegate;
}
constexpr void System::Net::HttpListenerRequest::__cordl_internal_set_gcc_delegate(::System::Net::HttpListenerRequest_GCCDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gcc_delegate = value;
}
inline void System::Net::HttpListenerRequest::setStaticF__100continue(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_100continue", ::System::Net::HttpListenerRequest*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Net::HttpListenerRequest::getStaticF__100continue()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_100continue", ::System::Net::HttpListenerRequest*>();
}
inline void System::Net::HttpListenerRequest::setStaticF_separators(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "separators", ::System::Net::HttpListenerRequest*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::HttpListenerRequest::getStaticF_separators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "separators", ::System::Net::HttpListenerRequest*>();
}
inline void System::Net::HttpListenerRequest::_ctor(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Net::HttpListenerRequest::SetRequestLine(::StringW  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"SetRequestLine", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void System::Net::HttpListenerRequest::CreateQueryString(::StringW  query)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"CreateQueryString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query);
}
inline bool System::Net::HttpListenerRequest::MaybeUri(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"MaybeUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline bool System::Net::HttpListenerRequest::IsPredefinedScheme(::StringW  scheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"IsPredefinedScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scheme);
}
inline bool System::Net::HttpListenerRequest::FinishInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"FinishInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::Unquote(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"Unquote", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline void System::Net::HttpListenerRequest::AddHeader(::StringW  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"AddHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline bool System::Net::HttpListenerRequest::FlushInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"FlushInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Net::HttpListenerRequest::get_AcceptTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_AcceptTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t System::Net::HttpListenerRequest::get_ClientCertificateError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ClientCertificateError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequest::get_ContentEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ContentEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline int64_t System::Net::HttpListenerRequest::get_ContentLength64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ContentLength64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ContentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::CookieCollection* System::Net::HttpListenerRequest::get_Cookies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_Cookies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_HasEntityBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_HasEntityBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::HttpListenerRequest::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_Headers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_HttpMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_HttpMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpListenerRequest::get_InputStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_InputStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_IsSecureConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsSecureConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_KeepAlive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::HttpListenerRequest::get_LocalEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_LocalEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline ::System::Version* System::Net::HttpListenerRequest::get_ProtocolVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::HttpListenerRequest::get_QueryString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_QueryString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_RawUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_RawUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::HttpListenerRequest::get_RemoteEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_RemoteEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline ::System::Guid System::Net::HttpListenerRequest::get_RequestTraceIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_RequestTraceIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpListenerRequest::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpListenerRequest::get_UrlReferrer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UrlReferrer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserAgent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserAgent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserHostAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserHostAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserHostName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserHostName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Net::HttpListenerRequest::get_UserLanguages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_UserLanguages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::HttpListenerRequest::BeginGetClientCertificate(::System::AsyncCallback*  requestCallback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"BeginGetClientCertificate", {}, {::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, requestCallback, state);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::HttpListenerRequest::EndGetClientCertificate(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"EndGetClientCertificate", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method, asyncResult);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::HttpListenerRequest::GetClientCertificate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"GetClientCertificate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_ServiceName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_ServiceName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::TransportContext* System::Net::HttpListenerRequest::get_TransportContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_TransportContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::TransportContext*>(this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_IsWebSocketRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"get_IsWebSocketRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* System::Net::HttpListenerRequest::GetClientCertificateAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {"GetClientCertificateAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(this, ___internal_method);
}
inline void System::Net::HttpListenerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpListenerRequest* System::Net::HttpListenerRequest::New_ctor(::System::Net::HttpListenerContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerRequest*>(context));
}
inline ::System::Net::HttpListenerRequest* System::Net::HttpListenerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerRequest*>());
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequest::HttpListenerRequest()   {
}
//  Writing Method size for method: ::System::Net::HttpListenerRequest_GCCDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest_GCCDelegate::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::HttpListenerRequest_GCCDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac9d92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest_GCCDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::System::Net::HttpListenerRequest_GCCDelegate::*)()>(&::System::Net::HttpListenerRequest_GCCDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac9dd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(),
                    {::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest_GCCDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpListenerRequest_GCCDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpListenerRequest_GCCDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac9d9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(),
                    {::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest_GCCDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::System::Net::HttpListenerRequest_GCCDelegate::*)(::System::IAsyncResult*)>(&::System::Net::HttpListenerRequest_GCCDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac9da6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(),
                    {::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::HttpListenerRequest_GCCDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::HttpListenerRequest_GCCDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::HttpListenerRequest_GCCDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::HttpListenerRequest_GCCDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListenerRequest_GCCDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(this, ___internal_method, result);
}
inline ::System::Net::HttpListenerRequest_GCCDelegate* System::Net::HttpListenerRequest_GCCDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerRequest_GCCDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequest_GCCDelegate::HttpListenerRequest_GCCDelegate()   {
}
//  Writing Method size for method: ::System::Net::HttpListenerRequest_Context.GetChannelBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ChannelBinding* (::System::Net::HttpListenerRequest_Context::*)(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind)>(&::System::Net::HttpListenerRequest_Context::GetChannelBinding)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac9dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListenerRequest_Context*>(),
                    {::i2c::class_of<::System::Net::HttpListenerRequest_Context*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest_Context._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequest_Context::*)()>(&::System::Net::HttpListenerRequest_Context::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest_Context*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Security::Authentication::ExtendedProtection::ChannelBinding* System::Net::HttpListenerRequest_Context::GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  kind)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListenerRequest_Context*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>(this, ___internal_method, kind);
}
inline void System::Net::HttpListenerRequest_Context::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerRequest_Context*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpListenerRequest_Context* System::Net::HttpListenerRequest_Context::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerRequest_Context*>());
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequest_Context::HttpListenerRequest_Context()   {
}
