#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipApiClient.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipApiClient_WebSocketStatus_def.hpp"
#include "GlobalNamespace/zzzz__MothershipApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipLogDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipLogLevel_def.hpp"
#include "GlobalNamespace/zzzz__MothershipSendHTTPRequestDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketResponse_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipApiClient::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x558a7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipApiClient*)>(&::GlobalNamespace::MothershipApiClient::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x558a82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipApiClient*)>(&::GlobalNamespace::MothershipApiClient::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x558a86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)()>(&::GlobalNamespace::MothershipApiClient::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x558a970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)()>(&::GlobalNamespace::MothershipApiClient::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x558a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(bool)>(&::GlobalNamespace::MothershipApiClient::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x558aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.SetHttpRequestDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*)>(&::GlobalNamespace::MothershipApiClient::SetHttpRequestDelegate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x558ab4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.SetWebSocketDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipWebSocketDelegateWrapper*)>(&::GlobalNamespace::MothershipApiClient::SetWebSocketDelegate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x558ac58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.ReceiveHttpResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipHTTPResponse*)>(&::GlobalNamespace::MothershipApiClient::ReceiveHttpResponse)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558ad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.ReceiveWebsocketMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipWebSocketResponse*)>(&::GlobalNamespace::MothershipApiClient::ReceiveWebsocketMessage)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558ae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(float_t)>(&::GlobalNamespace::MothershipApiClient::Tick)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x558af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.SetLogDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipLogDelegateWrapper*)>(&::GlobalNamespace::MothershipApiClient::SetLogDelegate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x558b004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient::*)(::GlobalNamespace::MothershipLogLevel, ::StringW)>(&::GlobalNamespace::MothershipApiClient::Log)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x558b110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 12}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipApiClient::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipApiClient::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipApiClient::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MothershipApiClient::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MothershipApiClient::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MothershipApiClient::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::MothershipApiClient::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipApiClient::getCPtr(::GlobalNamespace::MothershipApiClient*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipApiClient::swigRelease(::GlobalNamespace::MothershipApiClient*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipApiClient::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipApiClient::SetHttpRequestDelegate(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*  inSendRequestDelegate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inSendRequestDelegate);
}
inline void GlobalNamespace::MothershipApiClient::SetWebSocketDelegate(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  inWebsocketDelegate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inWebsocketDelegate);
}
inline void GlobalNamespace::MothershipApiClient::ReceiveHttpResponse(::GlobalNamespace::MothershipHTTPResponse*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::MothershipApiClient::ReceiveWebsocketMessage(::GlobalNamespace::MothershipWebSocketResponse*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::MothershipApiClient::Tick(float_t  deltaTimeInSeconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeInSeconds);
}
inline void GlobalNamespace::MothershipApiClient::SetLogDelegate(::GlobalNamespace::MothershipLogDelegateWrapper*  logDelegate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logDelegate);
}
inline void GlobalNamespace::MothershipApiClient::Log(::GlobalNamespace::MothershipLogLevel  level, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message);
}
inline ::GlobalNamespace::MothershipApiClient* GlobalNamespace::MothershipApiClient::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipApiClient*>(cPtr, cMemoryOwn));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MothershipApiClient::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MothershipApiClient::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipApiClient::MothershipApiClient()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x558c2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x558c314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x558c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x558c458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x558c3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)(bool)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x558c4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)(::GlobalNamespace::MothershipApiClient_WebSocketStatus)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::set_Status)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x558c634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_WebSocketStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MothershipApiClient_WebSocketStatus (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::get_Status)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x558c704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.set_InitialRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::set_InitialRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"set_InitialRequest", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.get_InitialRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::get_InitialRequest)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x558c8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"get_InitialRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.set_CallbackWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*)>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::set_CallbackWrapper)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"set_CallbackWrapper", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo.get_CallbackWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::get_CallbackWrapper)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x558caa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"get_CallbackWrapper", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x558cba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::getCPtr(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::swigRelease(::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::set_Status(::GlobalNamespace::MothershipApiClient_WebSocketStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_WebSocketStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MothershipApiClient_WebSocketStatus GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MothershipApiClient_WebSocketStatus>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::set_InitialRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"set_InitialRequest", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t* GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::get_InitialRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"get_InitialRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipOpenWebSocketEventArgs_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::set_CallbackWrapper(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"set_CallbackWrapper", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t* GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::get_CallbackWrapper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {"get_CallbackWrapper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipWebSocketMessageDelegateWrapper_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo* GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo* GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipApiClient_MothershipActiveWebSocketInfo::MothershipApiClient_MothershipActiveWebSocketInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x558b1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x558b248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x558b288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x558b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x558b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(bool)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x558b41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_InternalRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_InternalRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558b568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_InternalRequest", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_InternalRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t* (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_InternalRequest)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x558b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_InternalRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_HttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_HttpRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558b754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_HttpRequest", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_HttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_HttpRequest)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x558b83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_HttpRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_CallbackWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_CallbackWrapper)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_CallbackWrapper", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_CallbackWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t* (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_CallbackWrapper)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x558ba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_CallbackWrapper", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_ResponseInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_ResponseInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x558bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_ResponseInstance", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_ResponseInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t* (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_ResponseInstance)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x558bc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_ResponseInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_retryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(int32_t)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_retryCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x558bd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_retryCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_retryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_retryCount)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x558bde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_retryCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_retryTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(float_t)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_retryTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x558beb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_retryTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_retryTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_retryTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x558bf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_retryTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.set_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)(::StringW)>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_playerId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x558c054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_playerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_playerId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x558c124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::*)()>(&::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x558c1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipApiClient_MothershipInflightRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipApiClient_MothershipInflightRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& GlobalNamespace::MothershipApiClient_MothershipInflightRequest::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& GlobalNamespace::MothershipApiClient_MothershipInflightRequest::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipApiClient_MothershipInflightRequest::getCPtr(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipApiClient_MothershipInflightRequest::swigRelease(::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_InternalRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_InternalRequest", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_InternalRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_InternalRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_HttpRequest(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_HttpRequest", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_HttpRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_HttpRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_CallbackWrapper(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_CallbackWrapper", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_CallbackWrapper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_CallbackWrapper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipRequestCompleteDelegateWrapper_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_ResponseInstance(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_ResponseInstance", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_ResponseInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_ResponseInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipResponse_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_retryCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_retryCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_retryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_retryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_retryTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_retryTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_retryTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_retryTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::set_playerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"set_playerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MothershipApiClient_MothershipInflightRequest::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {"get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipApiClient_MothershipInflightRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipApiClient_MothershipInflightRequest*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MothershipApiClient_MothershipInflightRequest::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MothershipApiClient_MothershipInflightRequest::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipApiClient_MothershipInflightRequest::MothershipApiClient_MothershipInflightRequest()   {
}
