#pragma once
// IWYU pragma private; include "System/Net/HttpWebResponse.hpp"
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca8de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(::System::Uri*, ::StringW, ::System::Net::HttpStatusCode, ::System::Net::WebHeaderCollection*)>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaca8dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpStatusCode>(), ::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(::System::Uri*, ::StringW, ::System::Net::WebResponseStream*, ::System::Net::CookieContainer*)>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xaca8548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebResponseStream*>(), ::i2c::type_of<::System::Net::CookieContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xaca9100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_CharacterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_CharacterSet)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaca9500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_CharacterSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_ContentEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_ContentEncoding)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaca95f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_ContentEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca96e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_ContentType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaca96f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_Cookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_Cookies)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaca9798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.set_Cookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(::System::Net::CookieCollection*)>(&::System::Net::HttpWebResponse::set_Cookies)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaca9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.GetMustImplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Net::HttpWebResponse::GetMustImplement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca9844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"GetMustImplement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_IsMutuallyAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_IsMutuallyAuthenticated)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaca9898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_LastModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_LastModified)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xaca98bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_LastModified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_Method)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaca99e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_ProtocolVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaca9a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_ResponseUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaca9a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_Server
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_Server)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaca9a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_Server", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpStatusCode (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca9ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_StatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_StatusDescription)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaca9ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_SupportsHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_SupportsHeaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca9ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.GetResponseHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebResponse::*)(::StringW)>(&::System::Net::HttpWebResponse::GetResponseHeader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaca9ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"GetResponseHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.GetResponseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaca9b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaca9bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xaca9bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaca9db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaca9de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)(bool)>(&::System::Net::HttpWebResponse::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaca9df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                    {::i2c::class_of<::System::Net::HttpWebResponse*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.CheckDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::CheckDisposed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaca9674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"CheckDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.FillCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::FillCookies)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xaca8ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"FillCookies", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::HttpWebResponse::__cordl_internal_get_uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr ::System::Uri* const& System::Net::HttpWebResponse::__cordl_internal_get_uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uri = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpWebResponse::__cordl_internal_get_webHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webHeaders;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::HttpWebResponse::__cordl_internal_get_webHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webHeaders;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_webHeaders(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webHeaders = value;
}
constexpr ::System::Net::CookieCollection*& System::Net::HttpWebResponse::__cordl_internal_get_cookieCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookieCollection;
}
constexpr ::System::Net::CookieCollection* const& System::Net::HttpWebResponse::__cordl_internal_get_cookieCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookieCollection;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_cookieCollection(::System::Net::CookieCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookieCollection = value;
}
constexpr ::StringW& System::Net::HttpWebResponse::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::StringW const& System::Net::HttpWebResponse::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::System::Version*& System::Net::HttpWebResponse::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::System::Version* const& System::Net::HttpWebResponse::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_version(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::System::Net::HttpStatusCode& System::Net::HttpWebResponse::__cordl_internal_get_statusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCode;
}
constexpr ::System::Net::HttpStatusCode const& System::Net::HttpWebResponse::__cordl_internal_get_statusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCode;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_statusCode(::System::Net::HttpStatusCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusCode = value;
}
constexpr ::StringW& System::Net::HttpWebResponse::__cordl_internal_get_statusDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusDescription;
}
constexpr ::StringW const& System::Net::HttpWebResponse::__cordl_internal_get_statusDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusDescription;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_statusDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusDescription = value;
}
constexpr int64_t& System::Net::HttpWebResponse::__cordl_internal_get_contentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentLength;
}
constexpr int64_t const& System::Net::HttpWebResponse::__cordl_internal_get_contentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentLength;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_contentLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentLength = value;
}
constexpr ::StringW& System::Net::HttpWebResponse::__cordl_internal_get_contentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr ::StringW const& System::Net::HttpWebResponse::__cordl_internal_get_contentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_contentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentType = value;
}
constexpr ::System::Net::CookieContainer*& System::Net::HttpWebResponse::__cordl_internal_get_cookie_container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie_container;
}
constexpr ::System::Net::CookieContainer* const& System::Net::HttpWebResponse::__cordl_internal_get_cookie_container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie_container;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_cookie_container(::System::Net::CookieContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookie_container = value;
}
constexpr bool& System::Net::HttpWebResponse::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& System::Net::HttpWebResponse::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::IO::Stream*& System::Net::HttpWebResponse::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Net::HttpWebResponse::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void System::Net::HttpWebResponse::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
inline void System::Net::HttpWebResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::_ctor(::System::Uri*  uri, ::StringW  method, ::System::Net::HttpStatusCode  status, ::System::Net::WebHeaderCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpStatusCode>(), ::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, method, status, headers);
}
inline void System::Net::HttpWebResponse::_ctor(::System::Uri*  uri, ::StringW  method, ::System::Net::WebResponseStream*  stream, ::System::Net::CookieContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebResponseStream*>(), ::i2c::type_of<::System::Net::CookieContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, method, stream, container);
}
inline void System::Net::HttpWebResponse::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::StringW System::Net::HttpWebResponse::get_CharacterSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_CharacterSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::get_ContentEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_ContentEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t System::Net::HttpWebResponse::get_ContentLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::get_ContentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::CookieCollection* System::Net::HttpWebResponse::get_Cookies()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::set_Cookies(::System::Net::CookieCollection*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpWebResponse::get_Headers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline ::System::Exception* System::Net::HttpWebResponse::GetMustImplement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"GetMustImplement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline bool System::Net::HttpWebResponse::get_IsMutuallyAuthenticated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Net::HttpWebResponse::get_LastModified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_LastModified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::get_Method()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Version* System::Net::HttpWebResponse::get_ProtocolVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpWebResponse::get_ResponseUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::get_Server()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"get_Server", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::HttpStatusCode System::Net::HttpWebResponse::get_StatusCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::get_StatusDescription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::HttpWebResponse::get_SupportsHeaders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::GetResponseHeader(::StringW  headerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"GetResponseHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, headerName);
}
inline ::System::IO::Stream* System::Net::HttpWebResponse::GetResponseStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebResponse::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebResponse::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebResponse*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::HttpWebResponse::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"CheckDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::FillCookies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebResponse*>(),
                        {"FillCookies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebResponse*>());
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(::System::Uri*  uri, ::StringW  method, ::System::Net::HttpStatusCode  status, ::System::Net::WebHeaderCollection*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebResponse*>(uri, method, status, headers));
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(::System::Uri*  uri, ::StringW  method, ::System::Net::WebResponseStream*  stream, ::System::Net::CookieContainer*  container)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebResponse*>(uri, method, stream, container));
}
/// @brief [Obsolete("Serialization is obsoleted for this type", false)]
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebResponse*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::HttpWebResponse::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::HttpWebResponse::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::HttpWebResponse::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::HttpWebResponse::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebResponse::HttpWebResponse()   {
}
