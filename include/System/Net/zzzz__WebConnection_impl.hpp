#pragma once
// IWYU pragma private; include "System/Net/WebConnection.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebConnection__Connect_d__16_def.hpp"
#include "System/Net/zzzz__WebConnection__CreateStream_d__18_def.hpp"
#include "System/Net/zzzz__WebConnection__InitConnection_d__19_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::WebConnection.get_ServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb7d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_ServicePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)(::System::Net::ServicePoint*)>(&::System::Net::WebConnection::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xacb4038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::ServicePoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::Net::WebConnection::Debug)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacb7d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::WebConnection::Debug)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacb7d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.CanReuse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::CanReuse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xacb7d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CanReuse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.CheckReusable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::CheckReusable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xacb7dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CheckReusable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebConnection::*)(::System::Net::WebOperation*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnection::Connect)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xacb7e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Connect", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.CreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Net::WebConnection::*)(::System::Net::WebOperation*, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebConnection::CreateStream)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xacb7f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CreateStream", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.InitConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* (::System::Net::WebConnection::*)(::System::Net::WebOperation*, ::System::Threading::CancellationToken)>(&::System::Net::WebConnection::InitConnection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xacb80cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"InitConnection", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.GetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (*)(::System::Net::WebExceptionStatus, ::System::Exception*)>(&::System::Net::WebConnection::GetException)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xacb8218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"GetException", {}, {::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.ReadLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t, ::by_ref<::StringW>)>(&::System::Net::WebConnection::ReadLine)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xacb8394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"ReadLine", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.CanReuseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)(::System::Net::WebOperation*)>(&::System::Net::WebConnection::CanReuseConnection)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xacb39ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CanReuseConnection", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.PrepareSharingNtlm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)(::System::Net::WebOperation*)>(&::System::Net::WebConnection::PrepareSharingNtlm)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xacb8574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"PrepareSharingNtlm", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::Reset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xacb888c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)(bool)>(&::System::Net::WebConnection::Close)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xacb898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Close", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.CloseSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::CloseSocket)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xacb8a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CloseSocket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_Closed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacb3648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_Closed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.get_Busy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_Busy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacb8d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_Busy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.get_IdleSince
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_IdleSince)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb8d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_IdleSince", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.StartOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)(::System::Net::WebOperation*, bool)>(&::System::Net::WebConnection::StartOperation)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xacb3e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"StartOperation", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Continue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)(::System::Net::WebOperation*)>(&::System::Net::WebConnection::Continue)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xacb27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Continue", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)(bool)>(&::System::Net::WebConnection::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacb9094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb3640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.ResetNtlm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::ResetNtlm)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xacb8964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"ResetNtlm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.get_NtlmAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_NtlmAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb90cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_NtlmAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.set_NtlmAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)(bool)>(&::System::Net::WebConnection::set_NtlmAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb90d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"set_NtlmAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.get_NtlmCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_NtlmCredential)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb90dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_NtlmCredential", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.set_NtlmCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)(::System::Net::NetworkCredential*)>(&::System::Net::WebConnection::set_NtlmCredential)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb90e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"set_NtlmCredential", {}, {::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.get_UnsafeAuthenticatedConnectionSharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebConnection::*)()>(&::System::Net::WebConnection::get_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb90ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_UnsafeAuthenticatedConnectionSharing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection.set_UnsafeAuthenticatedConnectionSharing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection::*)(bool)>(&::System::Net::WebConnection::set_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb90f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"set_UnsafeAuthenticatedConnectionSharing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::NetworkCredential*& System::Net::WebConnection::__cordl_internal_get_ntlm_credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ntlm_credentials;
}
constexpr ::System::Net::NetworkCredential* const& System::Net::WebConnection::__cordl_internal_get_ntlm_credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ntlm_credentials;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_ntlm_credentials(::System::Net::NetworkCredential*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ntlm_credentials = value;
}
constexpr bool& System::Net::WebConnection::__cordl_internal_get_ntlm_authenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ntlm_authenticated;
}
constexpr bool const& System::Net::WebConnection::__cordl_internal_get_ntlm_authenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ntlm_authenticated;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_ntlm_authenticated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ntlm_authenticated = value;
}
constexpr bool& System::Net::WebConnection::__cordl_internal_get_unsafe_sharing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsafe_sharing;
}
constexpr bool const& System::Net::WebConnection::__cordl_internal_get_unsafe_sharing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsafe_sharing;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_unsafe_sharing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsafe_sharing = value;
}
constexpr ::System::IO::Stream*& System::Net::WebConnection::__cordl_internal_get_networkStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkStream;
}
constexpr ::System::IO::Stream* const& System::Net::WebConnection::__cordl_internal_get_networkStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkStream;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_networkStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkStream = value;
}
constexpr ::System::Net::Sockets::Socket*& System::Net::WebConnection::__cordl_internal_get_socket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::WebConnection::__cordl_internal_get_socket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socket;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_socket(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___socket = value;
}
constexpr ::Mono::Net::Security::MonoTlsStream*& System::Net::WebConnection::__cordl_internal_get_monoTlsStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monoTlsStream;
}
constexpr ::Mono::Net::Security::MonoTlsStream* const& System::Net::WebConnection::__cordl_internal_get_monoTlsStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monoTlsStream;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_monoTlsStream(::Mono::Net::Security::MonoTlsStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monoTlsStream = value;
}
constexpr ::System::Net::WebConnectionTunnel*& System::Net::WebConnection::__cordl_internal_get_tunnel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunnel;
}
constexpr ::System::Net::WebConnectionTunnel* const& System::Net::WebConnection::__cordl_internal_get_tunnel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunnel;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_tunnel(::System::Net::WebConnectionTunnel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tunnel = value;
}
constexpr int32_t& System::Net::WebConnection::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr int32_t const& System::Net::WebConnection::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_disposed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::Net::ServicePoint*& System::Net::WebConnection::__cordl_internal_get__ServicePoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServicePoint_k__BackingField;
}
constexpr ::System::Net::ServicePoint* const& System::Net::WebConnection::__cordl_internal_get__ServicePoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServicePoint_k__BackingField;
}
constexpr void System::Net::WebConnection::__cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServicePoint_k__BackingField = value;
}
constexpr int32_t& System::Net::WebConnection::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr int32_t const& System::Net::WebConnection::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void System::Net::WebConnection::__cordl_internal_set__cordl_ID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_ID = value;
}
constexpr ::System::DateTime& System::Net::WebConnection::__cordl_internal_get_idleSince()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSince;
}
constexpr ::System::DateTime const& System::Net::WebConnection::__cordl_internal_get_idleSince() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSince;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_idleSince(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleSince = value;
}
constexpr ::System::Net::WebOperation*& System::Net::WebConnection::__cordl_internal_get_currentOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOperation;
}
constexpr ::System::Net::WebOperation* const& System::Net::WebConnection::__cordl_internal_get_currentOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOperation;
}
constexpr void System::Net::WebConnection::__cordl_internal_set_currentOperation(::System::Net::WebOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentOperation = value;
}
inline ::System::Net::ServicePoint* System::Net::WebConnection::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_ServicePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(this, ___internal_method);
}
inline void System::Net::WebConnection::_ctor(::System::Net::ServicePoint*  sPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::ServicePoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sPoint);
}
inline void System::Net::WebConnection::Debug(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, args);
}
inline void System::Net::WebConnection::Debug(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline bool System::Net::WebConnection::CanReuse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CanReuse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebConnection::CheckReusable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CheckReusable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebConnection::Connect(::System::Net::WebOperation*  operation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Connect", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, operation, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Net::WebConnection::CreateStream(::System::Net::WebOperation*  operation, bool  reused, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CreateStream", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, operation, reused, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* System::Net::WebConnection::InitConnection(::System::Net::WebOperation*  operation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"InitConnection", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>*>(this, ___internal_method, operation, cancellationToken);
}
inline ::System::Net::WebException* System::Net::WebConnection::GetException(::System::Net::WebExceptionStatus  status, ::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"GetException", {}, {::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(nullptr, ___internal_method, status, error);
}
inline bool System::Net::WebConnection::ReadLine(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  start, int32_t  max, ::by_ref<::StringW>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"ReadLine", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, start, max, output);
}
inline bool System::Net::WebConnection::CanReuseConnection(::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CanReuseConnection", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, operation);
}
inline bool System::Net::WebConnection::PrepareSharingNtlm(::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"PrepareSharingNtlm", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, operation);
}
inline void System::Net::WebConnection::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebConnection::Close(bool  reset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Close", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reset);
}
inline void System::Net::WebConnection::CloseSocket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"CloseSocket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::WebConnection::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebConnection::get_Busy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_Busy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::Net::WebConnection::get_IdleSince()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_IdleSince", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline bool System::Net::WebConnection::StartOperation(::System::Net::WebOperation*  operation, bool  reused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"StartOperation", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, operation, reused);
}
inline bool System::Net::WebConnection::Continue(::System::Net::WebOperation*  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Continue", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, next);
}
inline void System::Net::WebConnection::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::WebConnection::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebConnection::ResetNtlm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"ResetNtlm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::WebConnection::get_NtlmAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_NtlmAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebConnection::set_NtlmAuthenticated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"set_NtlmAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::NetworkCredential* System::Net::WebConnection::get_NtlmCredential()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_NtlmCredential", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method);
}
inline void System::Net::WebConnection::set_NtlmCredential(::System::Net::NetworkCredential*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"set_NtlmCredential", {}, {::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebConnection::get_UnsafeAuthenticatedConnectionSharing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"get_UnsafeAuthenticatedConnectionSharing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebConnection::set_UnsafeAuthenticatedConnectionSharing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection*>(),
                        {"set_UnsafeAuthenticatedConnectionSharing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebConnection* System::Net::WebConnection::New_ctor(::System::Net::ServicePoint*  sPoint)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebConnection*>(sPoint));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::WebConnection::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::WebConnection::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebConnection::WebConnection()   {
}
//  Writing Method size for method: ::System::Net::WebConnection___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection___c::*)()>(&::System::Net::WebConnection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb9164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection___c._Connect_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::WebConnection___c::*)(::System::Net::IPEndPoint*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::WebConnection___c::_Connect_b__16_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xacb916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection___c*>(),
                        {"<Connect>b__16_0", {}, {::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebConnection___c._Connect_b__16_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebConnection___c::*)(::System::IAsyncResult*)>(&::System::Net::WebConnection___c::_Connect_b__16_1)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xacb920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection___c*>(),
                        {"<Connect>b__16_1", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebConnection___c::setStaticF___9(::System::Net::WebConnection___c*  value)  {
::cordl_internals::setStaticField<::System::Net::WebConnection___c*, "<>9", ::System::Net::WebConnection___c*>(std::forward<::System::Net::WebConnection___c*>(value));
}
inline ::System::Net::WebConnection___c* System::Net::WebConnection___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::WebConnection___c*, "<>9", ::System::Net::WebConnection___c*>();
}
inline void System::Net::WebConnection___c::setStaticF___9__16_0(::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*, "<>9__16_0", ::System::Net::WebConnection___c*>(std::forward<::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(value));
}
inline ::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>* System::Net::WebConnection___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*, "<>9__16_0", ::System::Net::WebConnection___c*>();
}
inline void System::Net::WebConnection___c::setStaticF___9__16_1(::System::Action_1<::System::IAsyncResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::IAsyncResult*>*, "<>9__16_1", ::System::Net::WebConnection___c*>(std::forward<::System::Action_1<::System::IAsyncResult*>*>(value));
}
inline ::System::Action_1<::System::IAsyncResult*>* System::Net::WebConnection___c::getStaticF___9__16_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::IAsyncResult*>*, "<>9__16_1", ::System::Net::WebConnection___c*>();
}
inline void System::Net::WebConnection___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::WebConnection___c::_Connect_b__16_0(::System::Net::IPEndPoint*  targetEndPoint, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection___c*>(),
                        {"<Connect>b__16_0", {}, {::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, targetEndPoint, callback, state);
}
inline void System::Net::WebConnection___c::_Connect_b__16_1(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebConnection___c*>(),
                        {"<Connect>b__16_1", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Net::WebConnection___c* System::Net::WebConnection___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebConnection___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebConnection___c::WebConnection___c()   {
}
