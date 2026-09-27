#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWebSocket.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWebSocket_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WebSocketCloseCode_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketConnectionState_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState (::Meta::Voice::Net::WebSockets::IWebSocket::*)()>(&::Meta::Voice::Net::WebSockets::IWebSocket::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.add_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::add_OnOpen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.remove_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::remove_OnOpen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.add_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::add_OnMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.remove_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::remove_OnMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action_1<::StringW>*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::add_OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action_1<::StringW>*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::remove_OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.add_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::add_OnClose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.remove_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*)>(&::Meta::Voice::Net::WebSockets::IWebSocket::remove_OnClose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::IWebSocket::*)()>(&::Meta::Voice::Net::WebSockets::IWebSocket::Connect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::IWebSocket::*)(::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::IWebSocket::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWebSocket.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::IWebSocket::*)()>(&::Meta::Voice::Net::WebSockets::IWebSocket::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 11}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState Meta::Voice::Net::WebSockets::IWebSocket::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::add_OnOpen(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::remove_OnOpen(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::add_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::remove_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::add_OnError(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::remove_OnError(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::add_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWebSocket::remove_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::IWebSocket::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::IWebSocket::Send(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, data);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::IWebSocket::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWebSocket*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
