#pragma once
// IWYU pragma private; include "Modio/Customizations/SocketConnection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__SocketConnection_def.hpp"
#include "Modio/Customizations/zzzz__ISocketConnection_def.hpp"
#include "Modio/Customizations/zzzz__SocketConnection__CloseConnection_d__13_def.hpp"
#include "Modio/Customizations/zzzz__SocketConnection__ReceiveMessages_d__14_def.hpp"
#include "Modio/Customizations/zzzz__SocketConnection__SendData_d__15_def.hpp"
#include "Modio/Customizations/zzzz__SocketConnection__SetupConnection_d__12_def.hpp"
#include "Modio/Customizations/zzzz__WssMessages_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.get_Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Modio::Customizations::WssMessages>* (::Modio::Customizations::SocketConnection::*)()>(&::Modio::Customizations::SocketConnection::get_Receive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05e668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"get_Receive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.set_Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::SocketConnection::*)(::System::Action_1<::Modio::Customizations::WssMessages>*)>(&::Modio::Customizations::SocketConnection::set_Receive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"set_Receive", {}, {::i2c::type_of<::System::Action_1<::Modio::Customizations::WssMessages>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.get_Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Modio::Customizations::SocketConnection::*)()>(&::Modio::Customizations::SocketConnection::get_Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05e678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"get_Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.set_Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::SocketConnection::*)(::System::Action*)>(&::Modio::Customizations::SocketConnection::set_Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa05e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"set_Disconnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::SocketConnection::*)()>(&::Modio::Customizations::SocketConnection::Connected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa05e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.SetupConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::SocketConnection::*)(::StringW, ::System::Action_1<::Modio::Customizations::WssMessages>*, ::System::Action*)>(&::Modio::Customizations::SocketConnection::SetupConnection)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa05e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"SetupConnection", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::Modio::Customizations::WssMessages>*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Customizations::SocketConnection::*)()>(&::Modio::Customizations::SocketConnection::CloseConnection)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa05e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"CloseConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.ReceiveMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::SocketConnection::*)()>(&::Modio::Customizations::SocketConnection::ReceiveMessages)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa05e8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"ReceiveMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::SocketConnection::*)(::Modio::Customizations::WssMessages)>(&::Modio::Customizations::SocketConnection::SendData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa05e984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"SendData", {}, {::i2c::type_of<::Modio::Customizations::WssMessages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::SocketConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::SocketConnection::*)()>(&::Modio::Customizations::SocketConnection::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa05c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebSockets::ClientWebSocket*& Modio::Customizations::SocketConnection::__cordl_internal_get_webSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webSocket;
}
constexpr ::System::Net::WebSockets::ClientWebSocket* const& Modio::Customizations::SocketConnection::__cordl_internal_get_webSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webSocket;
}
constexpr void Modio::Customizations::SocketConnection::__cordl_internal_set_webSocket(::System::Net::WebSockets::ClientWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webSocket = value;
}
constexpr ::System::Threading::Mutex*& Modio::Customizations::SocketConnection::__cordl_internal_get__sending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sending;
}
constexpr ::System::Threading::Mutex* const& Modio::Customizations::SocketConnection::__cordl_internal_get__sending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sending;
}
constexpr void Modio::Customizations::SocketConnection::__cordl_internal_set__sending(::System::Threading::Mutex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sending = value;
}
constexpr ::System::Action_1<::Modio::Customizations::WssMessages>*& Modio::Customizations::SocketConnection::__cordl_internal_get__Receive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Receive_k__BackingField;
}
constexpr ::System::Action_1<::Modio::Customizations::WssMessages>* const& Modio::Customizations::SocketConnection::__cordl_internal_get__Receive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Receive_k__BackingField;
}
constexpr void Modio::Customizations::SocketConnection::__cordl_internal_set__Receive_k__BackingField(::System::Action_1<::Modio::Customizations::WssMessages>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Receive_k__BackingField = value;
}
constexpr ::System::Action*& Modio::Customizations::SocketConnection::__cordl_internal_get__Disconnect_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Disconnect_k__BackingField;
}
constexpr ::System::Action* const& Modio::Customizations::SocketConnection::__cordl_internal_get__Disconnect_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Disconnect_k__BackingField;
}
constexpr void Modio::Customizations::SocketConnection::__cordl_internal_set__Disconnect_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Disconnect_k__BackingField = value;
}
constexpr bool& Modio::Customizations::SocketConnection::__cordl_internal_get_closingConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingConnection;
}
constexpr bool const& Modio::Customizations::SocketConnection::__cordl_internal_get_closingConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingConnection;
}
constexpr void Modio::Customizations::SocketConnection::__cordl_internal_set_closingConnection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closingConnection = value;
}
inline ::System::Action_1<::Modio::Customizations::WssMessages>* Modio::Customizations::SocketConnection::get_Receive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"get_Receive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Modio::Customizations::WssMessages>*>(this, ___internal_method);
}
inline void Modio::Customizations::SocketConnection::set_Receive(::System::Action_1<::Modio::Customizations::WssMessages>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"set_Receive", {}, {::i2c::type_of<::System::Action_1<::Modio::Customizations::WssMessages>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Modio::Customizations::SocketConnection::get_Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"get_Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Modio::Customizations::SocketConnection::set_Disconnect(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"set_Disconnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Customizations::SocketConnection::Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::SocketConnection::SetupConnection(::StringW  url, ::System::Action_1<::Modio::Customizations::WssMessages>*  onReceive, ::System::Action*  onDisconnect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"SetupConnection", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::Modio::Customizations::WssMessages>*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, url, onReceive, onDisconnect);
}
inline ::System::Threading::Tasks::Task* Modio::Customizations::SocketConnection::CloseConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"CloseConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Modio::Customizations::SocketConnection::ReceiveMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"ReceiveMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::SocketConnection::SendData(::Modio::Customizations::WssMessages  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {"SendData", {}, {::i2c::type_of<::Modio::Customizations::WssMessages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, message);
}
inline void Modio::Customizations::SocketConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::SocketConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Customizations::SocketConnection* Modio::Customizations::SocketConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::SocketConnection*>());
}
/// @brief Convert operator to "::Modio::Customizations::ISocketConnection"
constexpr  Modio::Customizations::SocketConnection::operator ::Modio::Customizations::ISocketConnection*() noexcept {
return static_cast<::Modio::Customizations::ISocketConnection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Customizations::ISocketConnection"
constexpr ::Modio::Customizations::ISocketConnection* Modio::Customizations::SocketConnection::i___Modio__Customizations__ISocketConnection() noexcept {
return static_cast<::Modio::Customizations::ISocketConnection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Customizations::SocketConnection::SocketConnection()   {
}
