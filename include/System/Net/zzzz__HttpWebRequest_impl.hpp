#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest.hpp"
#include "System/Net/zzzz__DecompressionMethods_impl.hpp"
#include "System/Net/zzzz__HttpWebRequest_AuthorizationState_impl.hpp"
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Net/zzzz__HttpContinueDelegate_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_AuthorizationState_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_NtlmAuthState_def.hpp"
#include "System/Net/zzzz__HttpWebRequest__GetResponseFromData_d__244_def.hpp"
#include "System/Net/zzzz__HttpWebRequest__MyGetResponseAsync_d__243_def.hpp"
#include "System/Net/zzzz__HttpWebRequest__RunWithTimeoutWorker_d__241_1_def.hpp"
#include "System/Net/zzzz__HttpWebRequest___GetRewriteHandler_b__271_0_d_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Uri*)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xaca03ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Uri*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaca0a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaca0a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.ResetAuthorization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::ResetAuthorization)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaca09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"ResetAuthorization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.SetSpecialHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW, ::StringW)>(&::System::Net::HttpWebRequest::SetSpecialHeaders)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaca0c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"SetSpecialHeaders", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Accept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Accept)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca0cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Accept", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Accept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Accept)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaca0d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Accept", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Uri*)>(&::System::Net::HttpWebRequest::set_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Address", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AllowAutoRedirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowAutoRedirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AllowWriteStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowWriteStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AllowReadStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AllowReadStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowReadStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowReadStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetMustImplement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Net::HttpWebRequest::GetMustImplement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca0e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetMustImplement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AutomaticDecompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::DecompressionMethods (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AutomaticDecompression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_AutomaticDecompression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AutomaticDecompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::DecompressionMethods)>(&::System::Net::HttpWebRequest::set_AutomaticDecompression)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaca0e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_AutomaticDecompression", {}, {::i2c::type_of<::System::Net::DecompressionMethods>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_InternalAllowBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_InternalAllowBuffering)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaca0ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_InternalAllowBuffering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_MethodWithBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_MethodWithBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaca0eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MethodWithBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TlsProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsProvider* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TlsProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_TlsProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TlsSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TlsSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca0fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_TlsSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ClientCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaca0fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ClientCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ClientCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&::System::Net::HttpWebRequest::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca1034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ClientCertificates", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Connection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Connection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Connection)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaca10e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Connection", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ConnectionGroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca126c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ConnectionGroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca127c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaca1284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_InternalContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::set_InternalContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_InternalContentLength", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ThrowOnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ThrowOnError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ThrowOnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ThrowOnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ThrowOnError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ThrowOnError", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ContentType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca1328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_ContentType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca137c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ContinueDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpContinueDelegate* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ContinueDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca13d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ContinueDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ContinueDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::HttpContinueDelegate*)>(&::System::Net::HttpWebRequest::set_ContinueDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca13dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ContinueDelegate", {}, {::i2c::type_of<::System::Net::HttpContinueDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_CookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieContainer* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_CookieContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca13e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_CookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::CookieContainer*)>(&::System::Net::HttpWebRequest::set_CookieContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca13ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca13f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::ICredentials*)>(&::System::Net::HttpWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca13fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Date
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Date)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xaca1404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Date", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Date
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::DateTime)>(&::System::Net::HttpWebRequest::set_Date)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Date", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.SetDateHeaderHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW, ::System::DateTime)>(&::System::Net::HttpWebRequest::SetDateHeaderHelper)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaca1578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"SetDateHeaderHelper", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_DefaultMaximumErrorResponseLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::HttpWebRequest::get_DefaultMaximumErrorResponseLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca1610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_DefaultMaximumErrorResponseLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_DefaultMaximumErrorResponseLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::HttpWebRequest::set_DefaultMaximumErrorResponseLength)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaca1668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_DefaultMaximumErrorResponseLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Expect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Expect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca16c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Expect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Expect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Expect)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xaca1718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Expect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_HaveResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_HaveResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::HttpWebRequest::set_Headers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaca1850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Host
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Host)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaca195c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Host", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Host
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Host)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xaca1a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Host", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.TryGetHostUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)(::StringW, ::by_ref<::System::Uri*>)>(&::System::Net::HttpWebRequest::TryGetHostUri)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaca1be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"TryGetHostUri", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_IfModifiedSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_IfModifiedSince)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaca1cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_IfModifiedSince", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_IfModifiedSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::DateTime)>(&::System::Net::HttpWebRequest::set_IfModifiedSince)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaca1ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_IfModifiedSince", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_KeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_KeepAlive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_KeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_KeepAlive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_MaximumAutomaticRedirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_MaximumAutomaticRedirections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca1fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MaximumAutomaticRedirections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_MaximumAutomaticRedirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_MaximumAutomaticRedirections)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaca1fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_MaximumAutomaticRedirections", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_MaximumResponseHeadersLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_MaximumResponseHeadersLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MaximumResponseHeadersLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_MaximumResponseHeadersLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_MaximumResponseHeadersLength)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaca2048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_MaximumResponseHeadersLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_DefaultMaximumResponseHeadersLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::HttpWebRequest::get_DefaultMaximumResponseHeadersLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca20d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_DefaultMaximumResponseHeadersLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_DefaultMaximumResponseHeadersLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Net::HttpWebRequest::set_DefaultMaximumResponseHeadersLength)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaca2128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_DefaultMaximumResponseHeadersLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ReadWriteTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ReadWriteTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ReadWriteTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaca218c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ReadWriteTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ContinueTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ContinueTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca221c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ContinueTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ContinueTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_ContinueTimeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaca2224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ContinueTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_MediaType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_MediaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca22ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MediaType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_MediaType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_MediaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca22b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_MediaType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca22bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Method)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xaca22c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Pipelined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Pipelined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Pipelined", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Pipelined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_Pipelined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Pipelined", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_PreAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_PreAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ProtocolVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ProtocolVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Version*)>(&::System::Net::HttpWebRequest::set_ProtocolVersion)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaca2538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ProtocolVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::HttpWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaca2654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Referer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Referer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca27d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Referer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Referer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Referer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaca282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Referer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_RequestUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca28c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_SendChunked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca28d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_SendChunked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_SendChunked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_SendChunked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaca28d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_SendChunked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServicePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaca28fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServicePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServicePointNoLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServicePointNoLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServicePointNoLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_SupportsCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_SupportsCookieContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaca2918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TransferEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TransferEncoding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca2974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_TransferEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_TransferEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_TransferEncoding)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaca29c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_TransferEncoding", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaca2b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaca2bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UserAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_UserAgent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaca2c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_UserAgent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_UserAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_UserAgent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaca2cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_UserAgent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UnsafeAuthenticatedConnectionSharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_UnsafeAuthenticatedConnectionSharing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_UnsafeAuthenticatedConnectionSharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_UnsafeAuthenticatedConnectionSharing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_GotRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_GotRequestStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_GotRequestStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ExpectContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ExpectContinue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ExpectContinue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ExpectContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ExpectContinue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ExpectContinue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AuthUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AuthUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_AuthUri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ProxyQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ProxyQuery)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaca2d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ProxyQuery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServerCertValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServerCertValidationCallback* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca2d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServerCertValidationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServerCertificateValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaca2d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServerCertificateValidationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ServerCertificateValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(&::System::Net::HttpWebRequest::set_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaca2d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ServerCertificateValidationCallback", {}, {::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetServicePoint)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaca2698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetServicePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca2e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t, int32_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaca30f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW, int32_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW, int32_t, int32_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaca33a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca33b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t, int64_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaca3408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW, int64_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xaca2e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW, int64_t, int64_t)>(&::System::Net::HttpWebRequest::AddRange)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xaca3154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebOperation* (::System::Net::HttpWebRequest::*)(bool, ::System::Net::BufferOffsetSize*, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::SendRequest)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xaca3468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"SendRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.MyGetRequestStreamAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::HttpWebRequest::*)(::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::MyGetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xaca36a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"MyGetRequestStreamAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.BeginGetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaca3af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpWebRequest::*)(::System::IAsyncResult*)>(&::System::Net::HttpWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaca3bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetRequestStream)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaca3d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpWebRequest::*)(::by_ref<::System::Net::TransportContext*>)>(&::System::Net::HttpWebRequest::GetRequestStream)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaca3e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetRequestStream", {}, {::i2c::type_of<::by_ref<::System::Net::TransportContext*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestStreamAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaca3e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.MyGetResponseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* (::System::Net::HttpWebRequest::*)(::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::MyGetResponseAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xaca3f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"MyGetResponseAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetResponseFromData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>* (::System::Net::HttpWebRequest::*)(::System::Net::WebResponseStream*, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::GetResponseFromData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaca4054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetResponseFromData", {}, {::i2c::type_of<::System::Net::WebResponseStream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.FlattenException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Net::HttpWebRequest::FlattenException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaca41a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"FlattenException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetWebException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (::System::Net::HttpWebRequest::*)(::System::Exception*)>(&::System::Net::HttpWebRequest::GetWebException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaca3cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetWebException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetWebException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (*)(::System::Exception*, bool)>(&::System::Net::HttpWebRequest::GetWebException)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xaca4260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetWebException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CreateRequestAbortedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (*)()>(&::System::Net::HttpWebRequest::CreateRequestAbortedException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaca3a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CreateRequestAbortedException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.BeginGetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xaca4400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::HttpWebRequest::*)(::System::IAsyncResult*)>(&::System::Net::HttpWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaca4570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::HttpWebRequest::*)(::System::IAsyncResult*, ::by_ref<::System::Net::TransportContext*>)>(&::System::Net::HttpWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaca4690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"EndGetRequestStream", {}, {::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::TransportContext*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaca471c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_FinishedReading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_FinishedReading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca481c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_FinishedReading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_FinishedReading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_FinishedReading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca4824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_FinishedReading", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Aborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaca3a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Aborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::Abort)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xaca482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaca4948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaca4980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {::i2c::class_of<::System::Net::HttpWebRequest*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckRequestStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::CheckRequestStarted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaca0d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CheckRequestStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.DoContinueDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t, ::System::Net::WebHeaderCollection*)>(&::System::Net::HttpWebRequest::DoContinueDelegate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaca49b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"DoContinueDelegate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.RewriteRedirectToGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::RewriteRedirectToGet)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaca49d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"RewriteRedirectToGet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.Redirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)(::System::Net::HttpStatusCode, ::System::Net::WebResponse*)>(&::System::Net::HttpWebRequest::Redirect)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xaca4a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"Redirect", {}, {::i2c::type_of<::System::Net::HttpStatusCode>(), ::i2c::type_of<::System::Net::WebResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0xaca4f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.DoPreAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::DoPreAuthenticate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xaca55ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"DoPreAuthenticate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetRequestHeaders)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xaca57ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetRequestHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.HandleNtlmAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::System::Net::WebOperation*,bool> (::System::Net::HttpWebRequest::*)(::System::Net::WebResponseStream*, ::System::Net::HttpWebResponse*, ::System::Net::BufferOffsetSize*, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::HandleNtlmAuth)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xaca5b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"HandleNtlmAuth", {}, {::i2c::type_of<::System::Net::WebResponseStream*>(), ::i2c::type_of<::System::Net::HttpWebResponse*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckAuthorization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)(::System::Net::WebResponse*, ::System::Net::HttpStatusCode)>(&::System::Net::HttpWebRequest::CheckAuthorization)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaca5dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CheckAuthorization", {}, {::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::HttpStatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRewriteHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*> (::System::Net::HttpWebRequest::*)(::System::Net::HttpWebResponse*, bool)>(&::System::Net::HttpWebRequest::GetRewriteHandler)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xaca60fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetRewriteHandler", {}, {::i2c::type_of<::System::Net::HttpWebResponse*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckFinalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*> (::System::Net::HttpWebRequest::*)(::System::Net::HttpWebResponse*)>(&::System::Net::HttpWebRequest::CheckFinalStatus)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xaca62f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CheckFinalStatus", {}, {::i2c::type_of<::System::Net::HttpWebResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ReuseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ReuseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca6810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ReuseConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ReuseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ReuseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaca6818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ReuseConnection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GenerateConnectionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::StringW, bool, bool)>(&::System::Net::HttpWebRequest::GenerateConnectionGroup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaca6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GenerateConnectionGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._GetRewriteHandler_b__271_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::_GetRewriteHandler_b__271_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaca68fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"<GetRewriteHandler>b__271_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaca6a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::HttpWebRequest::__cordl_internal_get_requestUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestUri;
}
constexpr ::System::Uri* const& System::Net::HttpWebRequest::__cordl_internal_get_requestUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestUri;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_requestUri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestUri = value;
}
constexpr ::System::Uri*& System::Net::HttpWebRequest::__cordl_internal_get_actualUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualUri;
}
constexpr ::System::Uri* const& System::Net::HttpWebRequest::__cordl_internal_get_actualUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualUri;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_actualUri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualUri = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_hostChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostChanged;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_hostChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostChanged;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_hostChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostChanged = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_allowAutoRedirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowAutoRedirect;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_allowAutoRedirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowAutoRedirect;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_allowAutoRedirect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowAutoRedirect = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_allowBuffering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowBuffering;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_allowBuffering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowBuffering;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_allowBuffering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowBuffering = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_allowReadStreamBuffering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowReadStreamBuffering;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_allowReadStreamBuffering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowReadStreamBuffering;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_allowReadStreamBuffering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowReadStreamBuffering = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Net::HttpWebRequest::__cordl_internal_get_certificates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificates;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& System::Net::HttpWebRequest::__cordl_internal_get_certificates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificates;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certificates = value;
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_connectionGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionGroup;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_connectionGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionGroup;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_connectionGroup(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionGroup = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_haveContentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haveContentLength;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_haveContentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haveContentLength;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_haveContentLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___haveContentLength = value;
}
constexpr int64_t& System::Net::HttpWebRequest::__cordl_internal_get_contentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentLength;
}
constexpr int64_t const& System::Net::HttpWebRequest::__cordl_internal_get_contentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentLength;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_contentLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentLength = value;
}
constexpr ::System::Net::HttpContinueDelegate*& System::Net::HttpWebRequest::__cordl_internal_get_continueDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueDelegate;
}
constexpr ::System::Net::HttpContinueDelegate* const& System::Net::HttpWebRequest::__cordl_internal_get_continueDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueDelegate;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_continueDelegate(::System::Net::HttpContinueDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueDelegate = value;
}
constexpr ::System::Net::CookieContainer*& System::Net::HttpWebRequest::__cordl_internal_get_cookieContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookieContainer;
}
constexpr ::System::Net::CookieContainer* const& System::Net::HttpWebRequest::__cordl_internal_get_cookieContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookieContainer;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_cookieContainer(::System::Net::CookieContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookieContainer = value;
}
constexpr ::System::Net::ICredentials*& System::Net::HttpWebRequest::__cordl_internal_get_credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::HttpWebRequest::__cordl_internal_get_credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___credentials;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_credentials(::System::Net::ICredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___credentials = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_haveResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haveResponse;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_haveResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___haveResponse;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_haveResponse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___haveResponse = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_requestSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestSent;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_requestSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestSent;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_requestSent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestSent = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpWebRequest::__cordl_internal_get_webHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webHeaders;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::HttpWebRequest::__cordl_internal_get_webHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webHeaders;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_webHeaders(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webHeaders = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_keepAlive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepAlive;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_keepAlive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepAlive;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_keepAlive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepAlive = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_maxAutoRedirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAutoRedirect;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_maxAutoRedirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAutoRedirect;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_maxAutoRedirect(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAutoRedirect = value;
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_mediaType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mediaType;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_mediaType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mediaType;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_mediaType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mediaType = value;
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::StringW& System::Net::HttpWebRequest::__cordl_internal_get_initialMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialMethod;
}
constexpr ::StringW const& System::Net::HttpWebRequest::__cordl_internal_get_initialMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialMethod;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_initialMethod(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialMethod = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_pipelined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipelined;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_pipelined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipelined;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_pipelined(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pipelined = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_preAuthenticate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preAuthenticate;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_preAuthenticate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preAuthenticate;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_preAuthenticate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preAuthenticate = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_usedPreAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedPreAuth;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_usedPreAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedPreAuth;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_usedPreAuth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedPreAuth = value;
}
constexpr ::System::Version*& System::Net::HttpWebRequest::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::System::Version* const& System::Net::HttpWebRequest::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_version(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_force_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force_version;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_force_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force_version;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_force_version(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___force_version = value;
}
constexpr ::System::Version*& System::Net::HttpWebRequest::__cordl_internal_get_actualVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualVersion;
}
constexpr ::System::Version* const& System::Net::HttpWebRequest::__cordl_internal_get_actualVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualVersion;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_actualVersion(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualVersion = value;
}
constexpr ::System::Net::IWebProxy*& System::Net::HttpWebRequest::__cordl_internal_get_proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::HttpWebRequest::__cordl_internal_get_proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_proxy(::System::Net::IWebProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proxy = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_sendChunked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendChunked;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_sendChunked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendChunked;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_sendChunked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendChunked = value;
}
constexpr ::System::Net::ServicePoint*& System::Net::HttpWebRequest::__cordl_internal_get_servicePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___servicePoint;
}
constexpr ::System::Net::ServicePoint* const& System::Net::HttpWebRequest::__cordl_internal_get_servicePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___servicePoint;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_servicePoint(::System::Net::ServicePoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___servicePoint = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_timeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeout = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_continueTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueTimeout;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_continueTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueTimeout;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_continueTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueTimeout = value;
}
constexpr ::System::Net::WebRequestStream*& System::Net::HttpWebRequest::__cordl_internal_get_writeStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeStream;
}
constexpr ::System::Net::WebRequestStream* const& System::Net::HttpWebRequest::__cordl_internal_get_writeStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeStream;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_writeStream(::System::Net::WebRequestStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeStream = value;
}
constexpr ::System::Net::HttpWebResponse*& System::Net::HttpWebRequest::__cordl_internal_get_webResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webResponse;
}
constexpr ::System::Net::HttpWebResponse* const& System::Net::HttpWebRequest::__cordl_internal_get_webResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webResponse;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_webResponse(::System::Net::HttpWebResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webResponse = value;
}
constexpr ::System::Net::WebCompletionSource*& System::Net::HttpWebRequest::__cordl_internal_get_responseTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseTask;
}
constexpr ::System::Net::WebCompletionSource* const& System::Net::HttpWebRequest::__cordl_internal_get_responseTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseTask;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_responseTask(::System::Net::WebCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseTask = value;
}
constexpr ::System::Net::WebOperation*& System::Net::HttpWebRequest::__cordl_internal_get_currentOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOperation;
}
constexpr ::System::Net::WebOperation* const& System::Net::HttpWebRequest::__cordl_internal_get_currentOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOperation;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_currentOperation(::System::Net::WebOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentOperation = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_aborted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aborted;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_aborted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aborted;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_aborted(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aborted = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_gotRequestStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gotRequestStream;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_gotRequestStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gotRequestStream;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_gotRequestStream(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gotRequestStream = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_redirects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redirects;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_redirects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redirects;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_redirects(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redirects = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_expectContinue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectContinue;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_expectContinue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectContinue;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_expectContinue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expectContinue = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_getResponseCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getResponseCalled;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_getResponseCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getResponseCalled;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_getResponseCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getResponseCalled = value;
}
constexpr ::System::Object*& System::Net::HttpWebRequest::__cordl_internal_get_locker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locker;
}
constexpr ::System::Object* const& System::Net::HttpWebRequest::__cordl_internal_get_locker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locker;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_locker(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locker = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_finished_reading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished_reading;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_finished_reading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished_reading;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_finished_reading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finished_reading = value;
}
constexpr ::System::Net::DecompressionMethods& System::Net::HttpWebRequest::__cordl_internal_get_auto_decomp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auto_decomp;
}
constexpr ::System::Net::DecompressionMethods const& System::Net::HttpWebRequest::__cordl_internal_get_auto_decomp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auto_decomp;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_auto_decomp(::System::Net::DecompressionMethods  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auto_decomp = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_maxResponseHeadersLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxResponseHeadersLength;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_maxResponseHeadersLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxResponseHeadersLength;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_maxResponseHeadersLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxResponseHeadersLength = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get_readWriteTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readWriteTimeout;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get_readWriteTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readWriteTimeout;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_readWriteTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readWriteTimeout = value;
}
constexpr ::Mono::Net::Security::MobileTlsProvider*& System::Net::HttpWebRequest::__cordl_internal_get_tlsProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsProvider;
}
constexpr ::Mono::Net::Security::MobileTlsProvider* const& System::Net::HttpWebRequest::__cordl_internal_get_tlsProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsProvider;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_tlsProvider(::Mono::Net::Security::MobileTlsProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tlsProvider = value;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& System::Net::HttpWebRequest::__cordl_internal_get_tlsSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsSettings;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& System::Net::HttpWebRequest::__cordl_internal_get_tlsSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsSettings;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tlsSettings = value;
}
constexpr ::System::Net::ServerCertValidationCallback*& System::Net::HttpWebRequest::__cordl_internal_get_certValidationCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certValidationCallback;
}
constexpr ::System::Net::ServerCertValidationCallback* const& System::Net::HttpWebRequest::__cordl_internal_get_certValidationCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certValidationCallback;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_certValidationCallback(::System::Net::ServerCertValidationCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certValidationCallback = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_hostHasPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostHasPort;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_hostHasPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostHasPort;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_hostHasPort(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostHasPort = value;
}
constexpr ::System::Uri*& System::Net::HttpWebRequest::__cordl_internal_get_hostUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostUri;
}
constexpr ::System::Uri* const& System::Net::HttpWebRequest::__cordl_internal_get_hostUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostUri;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_hostUri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostUri = value;
}
constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState& System::Net::HttpWebRequest::__cordl_internal_get_auth_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth_state;
}
constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState const& System::Net::HttpWebRequest::__cordl_internal_get_auth_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth_state;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_auth_state(::GlobalNamespace::HttpWebRequest_AuthorizationState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auth_state = value;
}
constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState& System::Net::HttpWebRequest::__cordl_internal_get_proxy_auth_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy_auth_state;
}
constexpr ::GlobalNamespace::HttpWebRequest_AuthorizationState const& System::Net::HttpWebRequest::__cordl_internal_get_proxy_auth_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy_auth_state;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_proxy_auth_state(::GlobalNamespace::HttpWebRequest_AuthorizationState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proxy_auth_state = value;
}
constexpr ::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>*& System::Net::HttpWebRequest::__cordl_internal_get_ResendContentFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResendContentFactory;
}
constexpr ::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>* const& System::Net::HttpWebRequest::__cordl_internal_get_ResendContentFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResendContentFactory;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_ResendContentFactory(::System::Func_2<::System::IO::Stream*,::System::Threading::Tasks::Task*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResendContentFactory = value;
}
constexpr int32_t& System::Net::HttpWebRequest::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr int32_t const& System::Net::HttpWebRequest::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set__cordl_ID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_ID = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get__ThrowOnError_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowOnError_k__BackingField;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get__ThrowOnError_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowOnError_k__BackingField;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set__ThrowOnError_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThrowOnError_k__BackingField = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get_unsafe_auth_blah()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsafe_auth_blah;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get_unsafe_auth_blah() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsafe_auth_blah;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set_unsafe_auth_blah(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsafe_auth_blah = value;
}
constexpr bool& System::Net::HttpWebRequest::__cordl_internal_get__ReuseConnection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReuseConnection_k__BackingField;
}
constexpr bool const& System::Net::HttpWebRequest::__cordl_internal_get__ReuseConnection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReuseConnection_k__BackingField;
}
constexpr void System::Net::HttpWebRequest::__cordl_internal_set__ReuseConnection_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReuseConnection_k__BackingField = value;
}
inline void System::Net::HttpWebRequest::setStaticF_defaultMaxResponseHeadersLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "defaultMaxResponseHeadersLength", ::System::Net::HttpWebRequest*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::HttpWebRequest::getStaticF_defaultMaxResponseHeadersLength()  {
return ::cordl_internals::getStaticField<int32_t, "defaultMaxResponseHeadersLength", ::System::Net::HttpWebRequest*>();
}
inline void System::Net::HttpWebRequest::setStaticF_defaultMaximumErrorResponseLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "defaultMaximumErrorResponseLength", ::System::Net::HttpWebRequest*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::HttpWebRequest::getStaticF_defaultMaximumErrorResponseLength()  {
return ::cordl_internals::getStaticField<int32_t, "defaultMaximumErrorResponseLength", ::System::Net::HttpWebRequest*>();
}
inline void System::Net::HttpWebRequest::setStaticF_defaultCachePolicy(::System::Net::Cache::RequestCachePolicy*  value)  {
::cordl_internals::setStaticField<::System::Net::Cache::RequestCachePolicy*, "defaultCachePolicy", ::System::Net::HttpWebRequest*>(std::forward<::System::Net::Cache::RequestCachePolicy*>(value));
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::HttpWebRequest::getStaticF_defaultCachePolicy()  {
return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCachePolicy*, "defaultCachePolicy", ::System::Net::HttpWebRequest*>();
}
inline void System::Net::HttpWebRequest::_ctor(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void System::Net::HttpWebRequest::_ctor(::System::Uri*  uri, ::Mono::Net::Security::MobileTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, tlsProvider, settings);
}
inline void System::Net::HttpWebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebRequest::ResetAuthorization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"ResetAuthorization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::SetSpecialHeaders(::StringW  HeaderName, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"SetSpecialHeaders", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, HeaderName, value);
}
inline ::StringW System::Net::HttpWebRequest::get_Accept()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Accept", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Accept(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Accept", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::HttpWebRequest::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Address(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Address", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_AllowAutoRedirect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AllowAutoRedirect(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_AllowWriteStreamBuffering()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AllowWriteStreamBuffering(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_AllowReadStreamBuffering()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AllowReadStreamBuffering(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Exception* System::Net::HttpWebRequest::GetMustImplement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetMustImplement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Net::DecompressionMethods System::Net::HttpWebRequest::get_AutomaticDecompression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_AutomaticDecompression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::DecompressionMethods>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_AutomaticDecompression(::System::Net::DecompressionMethods  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_AutomaticDecompression", {}, {::i2c::type_of<::System::Net::DecompressionMethods>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_InternalAllowBuffering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_InternalAllowBuffering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_MethodWithBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MethodWithBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Net::Security::MobileTlsProvider* System::Net::HttpWebRequest::get_TlsProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_TlsProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider*>(this, ___internal_method);
}
inline ::Mono::Security::Interface::MonoTlsSettings* System::Net::HttpWebRequest::get_TlsSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_TlsSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::HttpWebRequest::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ClientCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ClientCertificates", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Connection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Connection(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Connection", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_ConnectionGroupName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ConnectionGroupName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::HttpWebRequest::get_ContentLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ContentLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::HttpWebRequest::set_InternalContentLength(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_InternalContentLength", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ThrowOnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ThrowOnError(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ThrowOnError", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_ContentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ContentType(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::HttpContinueDelegate* System::Net::HttpWebRequest::get_ContinueDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ContinueDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpContinueDelegate*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ContinueDelegate(::System::Net::HttpContinueDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ContinueDelegate", {}, {::i2c::type_of<::System::Net::HttpContinueDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::CookieContainer* System::Net::HttpWebRequest::get_CookieContainer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieContainer*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_CookieContainer(::System::Net::CookieContainer*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::HttpWebRequest::get_Credentials()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Credentials(::System::Net::ICredentials*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime System::Net::HttpWebRequest::get_Date()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Date", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Date(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Date", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::HttpWebRequest::SetDateHeaderHelper(::StringW  headerName, ::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"SetDateHeaderHelper", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerName, dateTime);
}
inline int32_t System::Net::HttpWebRequest::get_DefaultMaximumErrorResponseLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_DefaultMaximumErrorResponseLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_DefaultMaximumErrorResponseLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_DefaultMaximumErrorResponseLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_Expect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Expect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Expect(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Expect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_HaveResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpWebRequest::get_Headers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Headers(::System::Net::WebHeaderCollection*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_Host()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Host", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Host(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Host", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::TryGetHostUri(::StringW  hostName, ::by_ref<::System::Uri*>  hostUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"TryGetHostUri", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hostName, hostUri);
}
inline ::System::DateTime System::Net::HttpWebRequest::get_IfModifiedSince()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_IfModifiedSince", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_IfModifiedSince(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_IfModifiedSince", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_KeepAlive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_KeepAlive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_KeepAlive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_MaximumAutomaticRedirections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MaximumAutomaticRedirections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_MaximumAutomaticRedirections(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_MaximumAutomaticRedirections", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_MaximumResponseHeadersLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MaximumResponseHeadersLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_MaximumResponseHeadersLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_MaximumResponseHeadersLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_DefaultMaximumResponseHeadersLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_DefaultMaximumResponseHeadersLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_DefaultMaximumResponseHeadersLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_DefaultMaximumResponseHeadersLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_ReadWriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ReadWriteTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ReadWriteTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ReadWriteTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::HttpWebRequest::get_ContinueTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ContinueTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ContinueTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ContinueTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_MediaType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_MediaType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_MediaType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_MediaType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_Method()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Method(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_Pipelined()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Pipelined", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Pipelined(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Pipelined", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_PreAuthenticate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_PreAuthenticate(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::HttpWebRequest::get_ProtocolVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ProtocolVersion(::System::Version*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ProtocolVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::HttpWebRequest::get_Proxy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Proxy(::System::Net::IWebProxy*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_Referer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Referer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Referer(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_Referer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::HttpWebRequest::get_RequestUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_SendChunked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_SendChunked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_SendChunked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_SendChunked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::HttpWebRequest::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServicePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(this, ___internal_method);
}
inline ::System::Net::ServicePoint* System::Net::HttpWebRequest::get_ServicePointNoLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServicePointNoLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_SupportsCookieContainer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::HttpWebRequest::get_Timeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_Timeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_TransferEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_TransferEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_TransferEncoding(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_TransferEncoding", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_UseDefaultCredentials()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_UseDefaultCredentials(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpWebRequest::get_UserAgent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_UserAgent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_UserAgent(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_UserAgent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_UnsafeAuthenticatedConnectionSharing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_UnsafeAuthenticatedConnectionSharing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_UnsafeAuthenticatedConnectionSharing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_GotRequestStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_GotRequestStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_ExpectContinue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ExpectContinue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ExpectContinue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ExpectContinue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::HttpWebRequest::get_AuthUri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_AuthUri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_ProxyQuery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ProxyQuery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::ServerCertValidationCallback* System::Net::HttpWebRequest::get_ServerCertValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServerCertValidationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*>(this, ___internal_method);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::HttpWebRequest::get_ServerCertificateValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ServerCertificateValidationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ServerCertificateValidationCallback", {}, {::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::HttpWebRequest::GetServicePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetServicePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::AddRange(int32_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range);
}
inline void System::Net::HttpWebRequest::AddRange(int32_t  from, int32_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline void System::Net::HttpWebRequest::AddRange(::StringW  rangeSpecifier, int32_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rangeSpecifier, range);
}
inline void System::Net::HttpWebRequest::AddRange(::StringW  rangeSpecifier, int32_t  from, int32_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rangeSpecifier, from, to);
}
inline void System::Net::HttpWebRequest::AddRange(int64_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range);
}
inline void System::Net::HttpWebRequest::AddRange(int64_t  from, int64_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline void System::Net::HttpWebRequest::AddRange(::StringW  rangeSpecifier, int64_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rangeSpecifier, range);
}
inline void System::Net::HttpWebRequest::AddRange(::StringW  rangeSpecifier, int64_t  from, int64_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"AddRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rangeSpecifier, from, to);
}
inline ::System::Net::WebOperation* System::Net::HttpWebRequest::SendRequest(bool  redirecting, ::System::Net::BufferOffsetSize*  writeBuffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"SendRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebOperation*>(this, ___internal_method, redirecting, writeBuffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::HttpWebRequest::MyGetRequestStreamAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"MyGetRequestStreamAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, cancellationToken);
}
inline ::System::IAsyncResult* System::Net::HttpWebRequest::BeginGetRequestStream(::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::IO::Stream* System::Net::HttpWebRequest::EndGetRequestStream(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, asyncResult);
}
inline ::System::IO::Stream* System::Net::HttpWebRequest::GetRequestStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpWebRequest::GetRequestStream(::by_ref<::System::Net::TransportContext*>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetRequestStream", {}, {::i2c::type_of<::by_ref<::System::Net::TransportContext*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, context);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::HttpWebRequest::GetRequestStreamAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::HttpWebRequest::RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*  func, int32_t  timeout, ::System::Action*  abort, ::System::Func_1<bool>*  aborted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {"RunWithTimeout", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, func, timeout, abort, aborted, cancellationToken);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::HttpWebRequest::RunWithTimeoutWorker(::System::Threading::Tasks::Task_1<T>*  workerTask, int32_t  timeout, ::System::Action*  abort, ::System::Func_1<bool>*  aborted, ::System::Threading::CancellationTokenSource*  cts)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {"RunWithTimeoutWorker", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, workerTask, timeout, abort, aborted, cts);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::HttpWebRequest::RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*  func)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {"RunWithTimeout", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, func);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>* System::Net::HttpWebRequest::MyGetResponseAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"MyGetResponseAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse*>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>* System::Net::HttpWebRequest::GetResponseFromData(::System::Net::WebResponseStream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetResponseFromData", {}, {::i2c::type_of<::System::Net::WebResponseStream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*,bool,bool,::System::Net::BufferOffsetSize*,::System::Net::WebOperation*>>*>(this, ___internal_method, stream, cancellationToken);
}
inline ::System::Exception* System::Net::HttpWebRequest::FlattenException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"FlattenException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Net::WebException* System::Net::HttpWebRequest::GetWebException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetWebException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(this, ___internal_method, e);
}
inline ::System::Net::WebException* System::Net::HttpWebRequest::GetWebException(::System::Exception*  e, bool  aborted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetWebException", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(nullptr, ___internal_method, e, aborted);
}
inline ::System::Net::WebException* System::Net::HttpWebRequest::CreateRequestAbortedException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CreateRequestAbortedException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(nullptr, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::HttpWebRequest::BeginGetResponse(::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::Net::WebResponse* System::Net::HttpWebRequest::EndGetResponse(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method, asyncResult);
}
inline ::System::IO::Stream* System::Net::HttpWebRequest::EndGetRequestStream(::System::IAsyncResult*  asyncResult, ::by_ref<::System::Net::TransportContext*>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"EndGetRequestStream", {}, {::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::TransportContext*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, asyncResult, context);
}
inline ::System::Net::WebResponse* System::Net::HttpWebRequest::GetResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::get_FinishedReading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_FinishedReading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_FinishedReading(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_FinishedReading", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpWebRequest::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_Aborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpWebRequest*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebRequest::CheckRequestStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CheckRequestStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::DoContinueDelegate(int32_t  statusCode, ::System::Net::WebHeaderCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"DoContinueDelegate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode, headers);
}
inline void System::Net::HttpWebRequest::RewriteRedirectToGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"RewriteRedirectToGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::HttpWebRequest::Redirect(::System::Net::HttpStatusCode  code, ::System::Net::WebResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"Redirect", {}, {::i2c::type_of<::System::Net::HttpStatusCode>(), ::i2c::type_of<::System::Net::WebResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code, response);
}
inline ::StringW System::Net::HttpWebRequest::GetHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::DoPreAuthenticate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"DoPreAuthenticate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Net::HttpWebRequest::GetRequestHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetRequestHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::System::Net::WebOperation*,bool> System::Net::HttpWebRequest::HandleNtlmAuth(::System::Net::WebResponseStream*  stream, ::System::Net::HttpWebResponse*  response, ::System::Net::BufferOffsetSize*  writeBuffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"HandleNtlmAuth", {}, {::i2c::type_of<::System::Net::WebResponseStream*>(), ::i2c::type_of<::System::Net::HttpWebResponse*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Net::WebOperation*,bool>>(this, ___internal_method, stream, response, writeBuffer, cancellationToken);
}
inline bool System::Net::HttpWebRequest::CheckAuthorization(::System::Net::WebResponse*  response, ::System::Net::HttpStatusCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CheckAuthorization", {}, {::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::HttpStatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, code);
}
inline ::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*> System::Net::HttpWebRequest::GetRewriteHandler(::System::Net::HttpWebResponse*  response, bool  redirect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GetRewriteHandler", {}, {::i2c::type_of<::System::Net::HttpWebResponse*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*>>(this, ___internal_method, response, redirect);
}
inline ::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*> System::Net::HttpWebRequest::CheckFinalStatus(::System::Net::HttpWebResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"CheckFinalStatus", {}, {::i2c::type_of<::System::Net::HttpWebResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*,::System::Net::WebException*>>(this, ___internal_method, response);
}
inline bool System::Net::HttpWebRequest::get_ReuseConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"get_ReuseConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::set_ReuseConnection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"set_ReuseConnection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Text::StringBuilder* System::Net::HttpWebRequest::GenerateConnectionGroup(::StringW  connectionGroupName, bool  unsafeConnectionGroup, bool  isInternalGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"GenerateConnectionGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, connectionGroupName, unsafeConnectionGroup, isInternalGroup);
}
template<typename T>
inline bool System::Net::HttpWebRequest::_RunWithTimeout_b__242_0()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                    {"<RunWithTimeout>b__242_0", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>* System::Net::HttpWebRequest::_GetRewriteHandler_b__271_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {"<GetRewriteHandler>b__271_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize*>*>(this, ___internal_method);
}
inline void System::Net::HttpWebRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor(::System::Uri*  uri)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebRequest*>(uri));
}
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor(::System::Uri*  uri, ::Mono::Net::Security::MobileTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebRequest*>(uri, tlsProvider, settings));
}
/// @brief [Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebRequest*>(serializationInfo, streamingContext));
}
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
inline ::System::Net::HttpWebRequest* System::Net::HttpWebRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebRequest*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::HttpWebRequest::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::HttpWebRequest::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebRequest::HttpWebRequest()   {
}
template<typename T>
inline void System::Net::HttpWebRequest___c__241_1<T>::setStaticF___9(::System::Net::HttpWebRequest___c__241_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Net::HttpWebRequest___c__241_1<T>*, "<>9", ::System::Net::HttpWebRequest___c__241_1<T>*>(std::forward<::System::Net::HttpWebRequest___c__241_1<T>*>(value));
}
template<typename T>
inline ::System::Net::HttpWebRequest___c__241_1<T>* System::Net::HttpWebRequest___c__241_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::HttpWebRequest___c__241_1<T>*, "<>9", ::System::Net::HttpWebRequest___c__241_1<T>*>();
}
template<typename T>
inline void System::Net::HttpWebRequest___c__241_1<T>::setStaticF___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>*, "<>9__241_0", ::System::Net::HttpWebRequest___c__241_1<T>*>(std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>* System::Net::HttpWebRequest___c__241_1<T>::getStaticF___9__241_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>*,::System::Nullable_1<int32_t>>*, "<>9__241_0", ::System::Net::HttpWebRequest___c__241_1<T>*>();
}
template<typename T>
inline void System::Net::HttpWebRequest___c__241_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest___c__241_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Nullable_1<int32_t> System::Net::HttpWebRequest___c__241_1<T>::_RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<T>*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpWebRequest___c__241_1<T>*>(),
                        {"<RunWithTimeoutWorker>b__241_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, t);
}
template<typename T>
inline ::System::Net::HttpWebRequest___c__241_1<T>* System::Net::HttpWebRequest___c__241_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpWebRequest___c__241_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::HttpWebRequest___c__241_1<T>::HttpWebRequest___c__241_1()   {
}
