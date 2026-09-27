#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketWrapper.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketDelegateWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ActiveWebSocket_def.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipCloseWebSocketEventArgs_def.hpp"
#include "GlobalNamespace/zzzz__MothershipOpenWebSocketEventArgs_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketRetryQueue_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketWrapper__CloseConnectionsAsync_d__9_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketWrapper_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper::*)(::GlobalNamespace::MothershipClientApiClient*)>(&::GlobalNamespace::MothershipWebSocketWrapper::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x53c277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper.RefreshClientTokenHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketWrapper::RefreshClientTokenHeaders)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x53c2874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"RefreshClientTokenHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper.TickWebSockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper::*)(float_t)>(&::GlobalNamespace::MothershipWebSocketWrapper::TickWebSockets)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x53c2c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"TickWebSockets", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper.CreateConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketWrapper::*)(::GlobalNamespace::MothershipOpenWebSocketEventArgs*)>(&::GlobalNamespace::MothershipWebSocketWrapper::CreateConnection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x53c2d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketWrapper::*)(::GlobalNamespace::MothershipCloseWebSocketEventArgs*)>(&::GlobalNamespace::MothershipWebSocketWrapper::CloseConnection)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x53c3374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper.CloseConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketWrapper::CloseConnections)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53c3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"CloseConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper.CloseConnectionsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MothershipWebSocketWrapper::*)()>(&::GlobalNamespace::MothershipWebSocketWrapper::CloseConnectionsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x53c364c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"CloseConnectionsAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper._CreateConnection_g__OnError_6_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::MothershipWebSocketWrapper::_CreateConnection_g__OnError_6_5)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x53c3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"<CreateConnection>g__OnError|6_5", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MothershipClientApiClient*& GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr ::GlobalNamespace::MothershipClientApiClient* const& GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr void GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_set__client(::GlobalNamespace::MothershipClientApiClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
constexpr ::GlobalNamespace::MothershipWebSocketRetryQueue*& GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_get__retryQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryQueue;
}
constexpr ::GlobalNamespace::MothershipWebSocketRetryQueue* const& GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_get__retryQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryQueue;
}
constexpr void GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_set__retryQueue(::GlobalNamespace::MothershipWebSocketRetryQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>*& GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_get__websockets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____websockets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>* const& GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_get__websockets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____websockets;
}
constexpr void GlobalNamespace::MothershipWebSocketWrapper::__cordl_internal_set__websockets(::System::Collections::Generic::List_1<::GlobalNamespace::ActiveWebSocket*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____websockets = value;
}
inline void GlobalNamespace::MothershipWebSocketWrapper::_ctor(::GlobalNamespace::MothershipClientApiClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void GlobalNamespace::MothershipWebSocketWrapper::RefreshClientTokenHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"RefreshClientTokenHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketWrapper::TickWebSockets(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"TickWebSockets", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline bool GlobalNamespace::MothershipWebSocketWrapper::CreateConnection(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline bool GlobalNamespace::MothershipWebSocketWrapper::CloseConnection(::GlobalNamespace::MothershipCloseWebSocketEventArgs*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline void GlobalNamespace::MothershipWebSocketWrapper::CloseConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"CloseConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MothershipWebSocketWrapper::CloseConnectionsAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"CloseConnectionsAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketWrapper::_CreateConnection_g__OnError_6_5(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper*>(),
                        {"<CreateConnection>g__OnError|6_5", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline ::GlobalNamespace::MothershipWebSocketWrapper* GlobalNamespace::MothershipWebSocketWrapper::New_ctor(::GlobalNamespace::MothershipClientApiClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketWrapper*>(client));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketWrapper::MothershipWebSocketWrapper()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::*)()>(&::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c2f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0._CreateConnection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::*)(::GlobalNamespace::ActiveWebSocket*)>(&::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x53c37b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>b__0", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0._CreateConnection_g__CreateSocket_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::*)(::GlobalNamespace::MothershipOpenWebSocketEventArgs*)>(&::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__CreateSocket_1)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x53c2f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__CreateSocket|1", {}, {::i2c::type_of<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0._CreateConnection_g__OnOpen_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::*)()>(&::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__OnOpen_2)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x53c3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__OnOpen|2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0._CreateConnection_g__OnMessage_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__OnMessage_3)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x53c3ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__OnMessage|3", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0._CreateConnection_g__OnClose_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::*)(::NativeWebSocket::WebSocketCloseCode)>(&::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__OnClose_4)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x53c3ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__OnClose|4", {}, {::i2c::type_of<::NativeWebSocket::WebSocketCloseCode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs*& GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::GlobalNamespace::MothershipOpenWebSocketEventArgs* const& GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_set_request(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::GlobalNamespace::ActiveWebSocket*& GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_get_aws()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aws;
}
constexpr ::GlobalNamespace::ActiveWebSocket* const& GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_get_aws() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aws;
}
constexpr void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_set_aws(::GlobalNamespace::ActiveWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aws = value;
}
constexpr ::GlobalNamespace::MothershipWebSocketWrapper*& GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::MothershipWebSocketWrapper* const& GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::__cordl_internal_set___4__this(::GlobalNamespace::MothershipWebSocketWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_b__0(::GlobalNamespace::ActiveWebSocket*  ws)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>b__0", {}, {::i2c::type_of<::GlobalNamespace::ActiveWebSocket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ws);
}
inline void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__CreateSocket_1(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__CreateSocket|1", {}, {::i2c::type_of<::GlobalNamespace::MothershipOpenWebSocketEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__OnOpen_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__OnOpen|2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__OnMessage_3(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__OnMessage|3", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::_CreateConnection_g__OnClose_4(::NativeWebSocket::WebSocketCloseCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>(),
                        {"<CreateConnection>g__OnClose|4", {}, {::i2c::type_of<::NativeWebSocket::WebSocketCloseCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0* GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketWrapper___c__DisplayClass6_0::MothershipWebSocketWrapper___c__DisplayClass6_0()   {
}
