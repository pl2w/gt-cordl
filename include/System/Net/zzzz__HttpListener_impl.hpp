#pragma once
// IWYU pragma private; include "System/Net/HttpListener.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemeSelector_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__HttpListenerPrefixCollection_def.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Net/zzzz__HttpListenerTimeoutManager_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicy_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ServiceNameCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*)>(&::System::Net::HttpListener::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xac9743c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsProvider*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.LoadCertificateAndKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::System::Net::HttpListener::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::HttpListener::LoadCertificateAndKey)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0xac97694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"LoadCertificateAndKey", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.CreateSslStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SslStream* (::System::Net::HttpListener::*)(::System::IO::Stream*, bool, ::System::Net::Security::RemoteCertificateValidationCallback*)>(&::System::Net::HttpListener::CreateSslStream)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xac97aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"CreateSslStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xac97498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_AuthenticationSchemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AuthenticationSchemes (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_AuthenticationSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_AuthenticationSchemes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_AuthenticationSchemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::AuthenticationSchemes)>(&::System::Net::HttpListener::set_AuthenticationSchemes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac97cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_AuthenticationSchemes", {}, {::i2c::type_of<::System::Net::AuthenticationSchemes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_AuthenticationSchemeSelectorDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AuthenticationSchemeSelector* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_AuthenticationSchemeSelectorDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_AuthenticationSchemeSelectorDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::AuthenticationSchemeSelector*)>(&::System::Net::HttpListener::set_AuthenticationSchemeSelectorDelegate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac97d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_AuthenticationSchemeSelectorDelegate", {}, {::i2c::type_of<::System::Net::AuthenticationSchemeSelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_ExtendedProtectionSelectorDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListener_ExtendedProtectionSelector* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_ExtendedProtectionSelectorDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_ExtendedProtectionSelectorDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_ExtendedProtectionSelectorDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpListener_ExtendedProtectionSelector*)>(&::System::Net::HttpListener::set_ExtendedProtectionSelectorDelegate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xac97dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_ExtendedProtectionSelectorDelegate", {}, {::i2c::type_of<::System::Net::HttpListener_ExtendedProtectionSelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_IgnoreWriteExceptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_IgnoreWriteExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_IgnoreWriteExceptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_IgnoreWriteExceptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(bool)>(&::System::Net::HttpListener::set_IgnoreWriteExceptions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac97ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_IgnoreWriteExceptions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_IsListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_IsListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_IsListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::HttpListener::get_IsSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_Prefixes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerPrefixCollection* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_Prefixes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac97ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_Prefixes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_TimeoutManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerTimeoutManager* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_TimeoutManager)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac97f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_TimeoutManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_ExtendedProtectionPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_ExtendedProtectionPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac97f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_ExtendedProtectionPolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_ExtendedProtectionPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*)>(&::System::Net::HttpListener::set_ExtendedProtectionPolicy)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xac97f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_ExtendedProtectionPolicy", {}, {::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_DefaultServiceNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_DefaultServiceNames)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac980d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_DefaultServiceNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_Realm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_Realm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac980e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_Realm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_Realm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::StringW)>(&::System::Net::HttpListener::set_Realm)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac980f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_Realm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.get_UnsafeConnectionNtlmAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::get_UnsafeConnectionNtlmAuthentication)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9811c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_UnsafeConnectionNtlmAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.set_UnsafeConnectionNtlmAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(bool)>(&::System::Net::HttpListener::set_UnsafeConnectionNtlmAuthentication)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac98124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_UnsafeConnectionNtlmAuthentication", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Abort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac98148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Abort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac981dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(bool)>(&::System::Net::HttpListener::Close)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac98164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Close", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(bool)>(&::System::Net::HttpListener::Cleanup)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0xac98214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Cleanup", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.BeginGetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpListener::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpListener::BeginGetContext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xac98e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"BeginGetContext", {}, {::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.EndGetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerContext* (::System::Net::HttpListener::*)(::System::IAsyncResult*)>(&::System::Net::HttpListener::EndGetContext)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xac99790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"EndGetContext", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.SelectAuthenticationScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::AuthenticationSchemes (::System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListener::SelectAuthenticationScheme)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac99cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"SelectAuthenticationScheme", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.GetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerContext* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::GetContext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xac99e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"GetContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xac99f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::Stop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac99fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac99fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.GetContextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::HttpListenerContext*>* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::GetContextAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xac9a01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"GetContextAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.CheckDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::CheckDisposed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac97d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"CheckDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.GetContextFromQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerContext* (::System::Net::HttpListener::*)()>(&::System::Net::HttpListener::GetContextFromQueue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac99188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"GetContextFromQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.RegisterContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListener::RegisterContext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xac9a134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"RegisterContext", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.UnregisterContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListener::UnregisterContext)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xac9a49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"UnregisterContext", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpConnection*)>(&::System::Net::HttpListener::AddConnection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac9a654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"AddConnection", {}, {::i2c::type_of<::System::Net::HttpConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener::*)(::System::Net::HttpConnection*)>(&::System::Net::HttpListener::RemoveConnection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac9a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"RemoveConnection", {}, {::i2c::type_of<::System::Net::HttpConnection*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::MonoTlsProvider*& System::Net::HttpListener::__cordl_internal_get_tlsProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsProvider;
}
constexpr ::Mono::Security::Interface::MonoTlsProvider* const& System::Net::HttpListener::__cordl_internal_get_tlsProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsProvider;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_tlsProvider(::Mono::Security::Interface::MonoTlsProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tlsProvider = value;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& System::Net::HttpListener::__cordl_internal_get_tlsSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsSettings;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& System::Net::HttpListener::__cordl_internal_get_tlsSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tlsSettings;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tlsSettings = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::HttpListener::__cordl_internal_get_certificate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificate;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& System::Net::HttpListener::__cordl_internal_get_certificate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certificate;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certificate = value;
}
constexpr ::System::Net::AuthenticationSchemes& System::Net::HttpListener::__cordl_internal_get_auth_schemes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth_schemes;
}
constexpr ::System::Net::AuthenticationSchemes const& System::Net::HttpListener::__cordl_internal_get_auth_schemes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth_schemes;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_auth_schemes(::System::Net::AuthenticationSchemes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auth_schemes = value;
}
constexpr ::System::Net::HttpListenerPrefixCollection*& System::Net::HttpListener::__cordl_internal_get_prefixes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefixes;
}
constexpr ::System::Net::HttpListenerPrefixCollection* const& System::Net::HttpListener::__cordl_internal_get_prefixes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefixes;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_prefixes(::System::Net::HttpListenerPrefixCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefixes = value;
}
constexpr ::System::Net::AuthenticationSchemeSelector*& System::Net::HttpListener::__cordl_internal_get_auth_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth_selector;
}
constexpr ::System::Net::AuthenticationSchemeSelector* const& System::Net::HttpListener::__cordl_internal_get_auth_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth_selector;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_auth_selector(::System::Net::AuthenticationSchemeSelector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auth_selector = value;
}
constexpr ::StringW& System::Net::HttpListener::__cordl_internal_get_realm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___realm;
}
constexpr ::StringW const& System::Net::HttpListener::__cordl_internal_get_realm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___realm;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_realm(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___realm = value;
}
constexpr bool& System::Net::HttpListener::__cordl_internal_get_ignore_write_exceptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignore_write_exceptions;
}
constexpr bool const& System::Net::HttpListener::__cordl_internal_get_ignore_write_exceptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignore_write_exceptions;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_ignore_write_exceptions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignore_write_exceptions = value;
}
constexpr bool& System::Net::HttpListener::__cordl_internal_get_unsafe_ntlm_auth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsafe_ntlm_auth;
}
constexpr bool const& System::Net::HttpListener::__cordl_internal_get_unsafe_ntlm_auth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsafe_ntlm_auth;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_unsafe_ntlm_auth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsafe_ntlm_auth = value;
}
constexpr bool& System::Net::HttpListener::__cordl_internal_get_listening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listening;
}
constexpr bool const& System::Net::HttpListener::__cordl_internal_get_listening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listening;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_listening(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listening = value;
}
constexpr bool& System::Net::HttpListener::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& System::Net::HttpListener::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::Object*& System::Net::HttpListener::__cordl_internal_get__internalLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalLock;
}
constexpr ::System::Object* const& System::Net::HttpListener::__cordl_internal_get__internalLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalLock;
}
constexpr void System::Net::HttpListener::__cordl_internal_set__internalLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalLock = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::HttpListener::__cordl_internal_get_registry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr ::System::Collections::Hashtable* const& System::Net::HttpListener::__cordl_internal_get_registry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_registry(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registry = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::HttpListener::__cordl_internal_get_ctx_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx_queue;
}
constexpr ::System::Collections::ArrayList* const& System::Net::HttpListener::__cordl_internal_get_ctx_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx_queue;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_ctx_queue(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctx_queue = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::HttpListener::__cordl_internal_get_wait_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wait_queue;
}
constexpr ::System::Collections::ArrayList* const& System::Net::HttpListener::__cordl_internal_get_wait_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wait_queue;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_wait_queue(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wait_queue = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::HttpListener::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::System::Collections::Hashtable* const& System::Net::HttpListener::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_connections(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
constexpr ::System::Net::ServiceNameStore*& System::Net::HttpListener::__cordl_internal_get_defaultServiceNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultServiceNames;
}
constexpr ::System::Net::ServiceNameStore* const& System::Net::HttpListener::__cordl_internal_get_defaultServiceNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultServiceNames;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_defaultServiceNames(::System::Net::ServiceNameStore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultServiceNames = value;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*& System::Net::HttpListener::__cordl_internal_get_extendedProtectionPolicy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedProtectionPolicy;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* const& System::Net::HttpListener::__cordl_internal_get_extendedProtectionPolicy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedProtectionPolicy;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_extendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedProtectionPolicy = value;
}
constexpr ::System::Net::HttpListener_ExtendedProtectionSelector*& System::Net::HttpListener::__cordl_internal_get_extendedProtectionSelectorDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedProtectionSelectorDelegate;
}
constexpr ::System::Net::HttpListener_ExtendedProtectionSelector* const& System::Net::HttpListener::__cordl_internal_get_extendedProtectionSelectorDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedProtectionSelectorDelegate;
}
constexpr void System::Net::HttpListener::__cordl_internal_set_extendedProtectionSelectorDelegate(::System::Net::HttpListener_ExtendedProtectionSelector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedProtectionSelectorDelegate = value;
}
inline void System::Net::HttpListener::_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::Mono::Security::Interface::MonoTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  tlsSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsProvider*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate, tlsProvider, tlsSettings);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::HttpListener::LoadCertificateAndKey(::System::Net::IPAddress*  addr, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"LoadCertificateAndKey", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, addr, port);
}
inline ::System::Net::Security::SslStream* System::Net::HttpListener::CreateSslStream(::System::IO::Stream*  innerStream, bool  ownsStream, ::System::Net::Security::RemoteCertificateValidationCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"CreateSslStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::RemoteCertificateValidationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslStream*>(this, ___internal_method, innerStream, ownsStream, callback);
}
inline void System::Net::HttpListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::AuthenticationSchemes System::Net::HttpListener::get_AuthenticationSchemes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_AuthenticationSchemes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemes>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_AuthenticationSchemes(::System::Net::AuthenticationSchemes  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_AuthenticationSchemes", {}, {::i2c::type_of<::System::Net::AuthenticationSchemes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::AuthenticationSchemeSelector* System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_AuthenticationSchemeSelectorDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemeSelector*>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_AuthenticationSchemeSelectorDelegate(::System::Net::AuthenticationSchemeSelector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_AuthenticationSchemeSelectorDelegate", {}, {::i2c::type_of<::System::Net::AuthenticationSchemeSelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::HttpListener_ExtendedProtectionSelector* System::Net::HttpListener::get_ExtendedProtectionSelectorDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_ExtendedProtectionSelectorDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListener_ExtendedProtectionSelector*>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_ExtendedProtectionSelectorDelegate(::System::Net::HttpListener_ExtendedProtectionSelector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_ExtendedProtectionSelectorDelegate", {}, {::i2c::type_of<::System::Net::HttpListener_ExtendedProtectionSelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpListener::get_IgnoreWriteExceptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_IgnoreWriteExceptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_IgnoreWriteExceptions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_IgnoreWriteExceptions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpListener::get_IsListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_IsListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::HttpListener::get_IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Net::HttpListenerPrefixCollection* System::Net::HttpListener::get_Prefixes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_Prefixes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerPrefixCollection*>(this, ___internal_method);
}
inline ::System::Net::HttpListenerTimeoutManager* System::Net::HttpListener::get_TimeoutManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_TimeoutManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerTimeoutManager*>(this, ___internal_method);
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* System::Net::HttpListener::get_ExtendedProtectionPolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_ExtendedProtectionPolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_ExtendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_ExtendedProtectionPolicy", {}, {::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* System::Net::HttpListener::get_DefaultServiceNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_DefaultServiceNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(this, ___internal_method);
}
inline ::StringW System::Net::HttpListener::get_Realm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_Realm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_Realm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_Realm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpListener::get_UnsafeConnectionNtlmAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"get_UnsafeConnectionNtlmAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::HttpListener::set_UnsafeConnectionNtlmAuthentication(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"set_UnsafeConnectionNtlmAuthentication", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::HttpListener::Abort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Abort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListener::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListener::Close(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Close", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void System::Net::HttpListener::Cleanup(bool  close_existing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Cleanup", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, close_existing);
}
inline ::System::IAsyncResult* System::Net::HttpListener::BeginGetContext(::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"BeginGetContext", {}, {::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListener::EndGetContext(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"EndGetContext", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*>(this, ___internal_method, asyncResult);
}
inline ::System::Net::AuthenticationSchemes System::Net::HttpListener::SelectAuthenticationScheme(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"SelectAuthenticationScheme", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::AuthenticationSchemes>(this, ___internal_method, context);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListener::GetContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"GetContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*>(this, ___internal_method);
}
inline void System::Net::HttpListener::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListener::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListener::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::HttpListenerContext*>* System::Net::HttpListener::GetContextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"GetContextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::HttpListenerContext*>*>(this, ___internal_method);
}
inline void System::Net::HttpListener::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"CheckDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListener::GetContextFromQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"GetContextFromQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerContext*>(this, ___internal_method);
}
inline void System::Net::HttpListener::RegisterContext(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"RegisterContext", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Net::HttpListener::UnregisterContext(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"UnregisterContext", {}, {::i2c::type_of<::System::Net::HttpListenerContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Net::HttpListener::AddConnection(::System::Net::HttpConnection*  cnc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"AddConnection", {}, {::i2c::type_of<::System::Net::HttpConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cnc);
}
inline void System::Net::HttpListener::RemoveConnection(::System::Net::HttpConnection*  cnc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener*>(),
                        {"RemoveConnection", {}, {::i2c::type_of<::System::Net::HttpConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cnc);
}
inline ::System::Net::HttpListener* System::Net::HttpListener::New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::Mono::Security::Interface::MonoTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  tlsSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListener*>(certificate, tlsProvider, tlsSettings));
}
inline ::System::Net::HttpListener* System::Net::HttpListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListener*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::HttpListener::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::HttpListener::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListener::HttpListener()   {
}
//  Writing Method size for method: ::System::Net::HttpListener_ExtendedProtectionSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListener_ExtendedProtectionSelector::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::HttpListener_ExtendedProtectionSelector::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac9a698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener_ExtendedProtectionSelector.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* (::System::Net::HttpListener_ExtendedProtectionSelector::*)(::System::Net::HttpListenerRequest*)>(&::System::Net::HttpListener_ExtendedProtectionSelector::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac9a748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(),
                    {::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener_ExtendedProtectionSelector.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::HttpListener_ExtendedProtectionSelector::*)(::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::HttpListener_ExtendedProtectionSelector::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac9a75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(),
                    {::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListener_ExtendedProtectionSelector.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* (::System::Net::HttpListener_ExtendedProtectionSelector::*)(::System::IAsyncResult*)>(&::System::Net::HttpListener_ExtendedProtectionSelector::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac9a77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(),
                    {::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::HttpListener_ExtendedProtectionSelector::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* System::Net::HttpListener_ExtendedProtectionSelector::Invoke(::System::Net::HttpListenerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* System::Net::HttpListener_ExtendedProtectionSelector::BeginInvoke(::System::Net::HttpListenerRequest*  request, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, request, callback, object);
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* System::Net::HttpListener_ExtendedProtectionSelector::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListener_ExtendedProtectionSelector*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(this, ___internal_method, result);
}
inline ::System::Net::HttpListener_ExtendedProtectionSelector* System::Net::HttpListener_ExtendedProtectionSelector::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListener_ExtendedProtectionSelector*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListener_ExtendedProtectionSelector::HttpListener_ExtendedProtectionSelector()   {
}
